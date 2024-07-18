/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:05:25 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/18 16:24:30 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


template <typename T>

T  max(T &x, T &y){
	return (x>=y ? x : y);
}

template <typename T>

T	min(T &x, T &y){
	return (x<=y ? x : y);
}

template <typename T>

void	swap(T &x, T &y){
	T temp;
	
	temp = x;
	x = y;
	y = temp;
}