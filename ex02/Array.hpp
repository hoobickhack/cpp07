/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:14:18 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/26 12:56:09 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

#include <cstdlib> 
#include <ctime>  

#include <stdexcept>


template <typename T>
class Array {
	
	private :
	
	T* array;
	unsigned int _size;
	
	public:

	Array();
	Array(unsigned int n);
	Array(const Array &instance);
	Array& operator=(const Array &instance);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index)const;
	~Array();

	unsigned int size() const;

};

template <typename T>

Array<T>::Array() : array(new T[0]()), _size(0) {}

template <typename T>

Array<T>::Array(unsigned int n) :array(new T[n]()), _size(n) {}

template <typename T>

Array<T>::Array(const Array &instance) :array(new T[instance._size]), _size(instance._size) {
	for (size_t i = 0; i < _size; i++)
		array[i] = instance.array[i];
}

template <typename T>

Array<T>&  Array<T>::operator=(const Array &instance)
{
	delete[]array;
	array = new T[instance._size];
	_size = instance._size;
	for (size_t i = 0; i < _size; i++)
		array[i] = instance.array[i];
	return *this;
}

template <typename T>

Array<T>::~Array(){
	delete[] array;
}

template <typename T>

unsigned int Array<T>::size() const {
	return _size;
}

template <typename T>

const T& Array<T>::operator[](unsigned int index)const {
	if (index >= _size){
		throw std::out_of_range("Index out of bounds");
    }
    return array[index];
}


template <typename T>

T& Array<T>::operator[](unsigned int index){
	if (index >= _size){
		throw std::out_of_range("Index out of bounds");
    }
    return array[index];
}
