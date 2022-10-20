/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:18:04 by hchang            #+#    #+#             */
/*   Updated: 2022/10/20 16:52:56 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char** argv)
{
    std::string str;

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
            str += std::toupper(argv[i]);
        std::cout << str << std::endl;
    }
    else    
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}