/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 00:13:19 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/12 20:09:35 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

std::string redFile(std::ifstream &file);
std::string remplaceAll(std::string conte, std::string s1, std::string s2);

#endif
