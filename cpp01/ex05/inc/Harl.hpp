/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:07:51 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/16 12:08:30 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>
#include <ostream>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl();
        ~Harl();

    void complain(std::string level);
};

#endif
