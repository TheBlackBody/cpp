/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:13:50 by sfernand          #+#    #+#             */
/*   Updated: 2024/02/22 13:46:52 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN::~RPN()
{

}

RPN &RPN::operator=(const RPN &rpn)
{
    (void)rpn;
    return(*this);
}

int RPN::calculate(std::string str)
{
    std::istringstream iss(str);
    std::stack<int> stack;
    std::string token;
    while (iss >> token)
    {
        if (std::isdigit(token[0]) || (token.size() > 1 && std::isdigit(token[1])))
            stack.push(atoi(token.c_str()));
        else 
        {
            int operand2 = stack.top();
            stack.pop();

            int operand1 = stack.top();
            stack.pop();
            try 
            {
                if (token == "+")
                    stack.push(operand1 + operand2);
                else if (token == "-")
                    stack.push(operand1 - operand2);
                else if (token == "*")
                    stack.push(operand1 * operand2);
                else if (token == "/")
                    stack.push(operand1 / operand2);
                else
                    throw RPN::error();
            }
            catch(const RPN::error &e)
            {
                std::cout << e.what() << std::endl;
            }
        }
    }
    return (stack.top());
}
