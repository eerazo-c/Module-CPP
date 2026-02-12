/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 23:26:57 by elerazo           #+#    #+#             */
/*   Updated: 2026/02/12 23:34:03 by elerazo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
	void complain( std::string level );
}

#endif
