/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:23:45 by fbesson           #+#    #+#             */
/*   Updated: 2024/03/08 20:23:56 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
	public:
	Harl();
	~Harl();
	void complain(std::string level);

	private:
	void debug (void);
	void info(void);
	void warning (void);
	void error (void);
};

typedef void (Harl::*t_func)(void);

#endif
