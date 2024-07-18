/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:33:02 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/18 18:50:56 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

template <typename T>

void iter(const T *add, int len, void funct(const T&)){
	
	for (int i = 0; i < len; i++)
		funct(add[i]);
}

template <typename T>

void iter(T *add, int len, void funct(T&)){
	
	for (int i = 0; i < len; i++)
		funct(add[i]);
}

template <typename T>

void print(const T &add)
{
	std::cout << add << std::endl;
}