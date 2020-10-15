/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConv.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:19:24 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/09/21 12:19:50 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConv::ScalarConv(void) : _type(_Invalid), _flag(_None) { return ; }

ScalarConv::ScalarConv(const ScalarConv &obj)
{
    *this = obj;
    return ;
}

ScalarConv::~ScalarConv(void) { return ; }

ScalarConv  &ScalarConv::operator= (const ScalarConv &obj)
{
    if (this != &obj) {
        this->_type = obj._type;
        this->_flag = obj._flag;
        for (int i = 0; i < 4; i++)
            this->_exceptions[i] = obj._exceptions[i];
        this->_char = obj._char;
        this->_int = obj._int;
        this->_float = obj._float;
        this->_double = obj._double;
    }
    return *this;
}

void    ScalarConv::convert(std::string &input)
{
    this->_type = findType(input);
    if (this->_type == _Invalid)
        throw std::invalid_argument("Invalid type");
    if (this->_type == _Char)
        convertToChar();
    else {
        checkForOverflow(input);
        sscanf(input.c_str(), "%lf", &this->_double);
        if (this->_flag == _None)
            convertToDigit();
        else
            this->_float = static_cast<float>(this->_double);
    }
    return;
}

void    ScalarConv::convertToChar(void)
{
    this->_int = static_cast<int>(this->_char);
    this->_float = static_cast<float>(this->_char);
    this->_double = static_cast<double>(this->_char);
    return;
}

void    ScalarConv::convertToDigit(void)
{
    if (this->_exceptions[_Char].empty())
        this->_char = static_cast<char>(this->_double);
    if (this->_exceptions[_Int].empty())
        this->_int = static_cast<int>(this->_double);
    if (this->_exceptions[_Float].empty())
        this->_float = static_cast<float>(this->_double);
    return;
}

void    ScalarConv::printConverted(void) const
{
    std::cout << "char: ";
    if (this->_exceptions[_Char].empty())
        std::cout << "'" << this->_char << "'" << std::endl;
    else
        std::cout << this->_exceptions[_Char] << std::endl;
    std::cout << "int: ";
    if (this->_exceptions[_Int].empty())
        std::cout << this->_int << std::endl;
    else
        std::cout << this->_exceptions[_Int] << std::endl;
    std::cout << "float: ";
    if (this->_exceptions[_Float].empty())
        std::cout << this->_float << "f" << std::endl;
    else
        std::cout << this->_exceptions[_Float] << std::endl;
    std::cout << "double: ";
    if (this->_exceptions[_Double].empty())
        std::cout << this->_double << std::endl;
    else
        std::cout << this->_exceptions[_Double] << std::endl;
    return;
}

void    ScalarConv::checkForOverflow(std::string input) 
{
    long double tmp;

    sscanf(input.c_str(), "%Lf", &tmp);
    if (tmp < 0 || tmp > 127 || this->_flag == _Nan)
        this->_exceptions[_Char] = "impossible";
    else if (!isgraph(tmp))
        this->_exceptions[_Char] = "non-displayable";
    if (tmp > INT_MAX || tmp < INT_MIN || this->_flag == _Nan)
        this->_exceptions[_Int] = "impossible";
    if (this->_flag != _Inf && this->_flag != _Nan) {
        if (tmp > __FLT_MAX__ || tmp < -(__FLT_MAX__))
            this->_exceptions[_Float] = "impossible";
        if (tmp > __DBL_MAX__ || tmp < -(__DBL_MAX__))
            this->_exceptions[_Double] = "impossible";
    }
    return;
}

Type    ScalarConv::findType(std::string &input)
{
    Type    type = _Invalid;

    if (input.length() == 1 && !isdigit(input[0])) {
        this->_char = input[0];
        return _Char;
    }
    else if (!input.compare("-inff") || !input.compare("+inff")) {
        this->_flag = _Inf;
        return _Float;
    }
    else if (!input.compare("-inf") || !input.compare("+inf")) {
        this->_flag = _Inf;
        return _Double;
    }
    else if (!input.compare("nanf")) {
        this->_flag = _Nan;
        return _Float;
    }
    else if (!input.compare("nan")) {
        this->_flag = _Nan;
        return _Double;
    }
    for (size_t i = 0; i < input.length(); i++) {
        if ((input[i] == '-' && i != 0) || (!isdigit(input[i]) &&
            input[i] != '.' && input[i] != 'f' && input[i] != '-'))
            return type = _Invalid;
        else if (isdigit(input[i]) && type == _Invalid)
            type = _Int;
        else if (input[i] == '.') {
            if (type == _Int || type == _Invalid)
                type = _Double;
            else
                return type = _Invalid;
        }
        else if (input[i] == 'f') {
            if (type == _Double)
                type = _Float;
            else
                return type = _Invalid;
        }
    }
    return type;
}
