/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <elerazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:31:10 by elerazo-          #+#    #+#             */
/*   Updated: 2026/02/05 19:31:53 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie{
	private:
		std::string name;
	public:
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );

		void announce( void );
}

#endif
