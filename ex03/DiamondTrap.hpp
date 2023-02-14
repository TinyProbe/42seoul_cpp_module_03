/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:19:55 by tkong             #+#    #+#             */
/*   Updated: 2023/02/15 00:40:09 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	std::string name;
	using FragTrap::hitPoint;
	using ScavTrap::energyPoint;
	using FragTrap::attDamage;

public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap& rhs);
	DiamondTrap(const std::string& name);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& rhs);

	using ScavTrap::attack;
	void whoAmI() const;

};

#endif
