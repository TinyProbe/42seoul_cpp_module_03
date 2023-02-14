/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:24:36 by tkong             #+#    #+#             */
/*   Updated: 2023/02/14 21:30:10 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(const ScavTrap& rhs);
	ScavTrap(const std::string& name);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& rhs);

	void attack(const std::string& target);
	void guardGate() const;

};

#endif
