/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:05:25 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/26 12:48:59 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


template <typename T>

T  max(T &x, T &y){
	return ( y >= x ? y : x);
}

template <typename T>

T	min(T &x, T &y){
	return (y <= x  ? y : x);
}

template <typename T>

void	swap(T &x, T &y){
	T temp = x;
	x = y;
	y = temp;
}