/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:38:28 by rvan-hou          #+#    #+#             */
/*   Updated: 2020/08/03 11:33:19 by rvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

bool fexists1(std::string fname)
{
    std::ifstream f;
    f.open(fname);

    bool f_exists = f.is_open();

    f.close();
    return f_exists;
}

int         main(int argc, char **argv)
{
    std::ifstream f;
    std::ofstream new_file("new_text.txt");
    std::string line;
    size_t pos;

    if (argc != 4)
    {
        std::cout << "not right amount of arguments" << std::endl;
        return -1;
    }
    if (!argv[2] || !argv[3])
    {
        std::cout << "one  or both strings were emmpty" << std::endl;
        return -1;
    }
    if (!fexists1(argv[1]))
    {
        std::cout << "File didn't exist!" << std::endl;
        return -1;
    }
    f.open(argv[1]);
    if (f.is_open())
    {
        while (getline(f, line))
        {
            pos = line.find(argv[2]);
            while (pos != std::string::npos)
            {
                pos = line.find(argv[2]);
                if (pos != std::string::npos)
                    line.replace(pos, strlen(argv[2]), argv[3]);
            }
                new_file << line << std::endl;
        }
        new_file.close();
    }
    return 0; 
}