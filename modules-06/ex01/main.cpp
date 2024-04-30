/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:44:30 by fbesson           #+#    #+#             */
/*   Updated: 2024/04/30 10:45:42 by fbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data *data = new Data;
	Data *after_serialize;
	uintptr_t data_ptr;

	data->str = "shuriken";
	std::cout << "data ptr : " << data << std::endl;
	std::cout << "data value : " << data->str << std::endl;
	data_ptr = Serializer::serialize(data);
	after_serialize = Serializer::deserialize(data_ptr);
	std::cout << "after data ptr : " << after_serialize << std::endl;
	std::cout << "after data value : " << after_serialize->str << std::endl;
	delete after_serialize;
	return 0;
}
