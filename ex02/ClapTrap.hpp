/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:34:35 by tkong             #+#    #+#             */
/*   Updated: 2023/02/14 21:14:49 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attDamage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap& rhs);
	ClapTrap(const std::string& name);
	virtual ~ClapTrap();
	ClapTrap& operator=(const ClapTrap& rhs);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif
