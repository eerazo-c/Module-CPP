/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:05:05 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/10 20:05:20 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int main()
{
    Harl *harl = new Harl();

    harl->complain("debug");
    harl->complain("info");
    harl->complain("warning");
    harl->complain("error");

    delete harl;

    return 0;
}
