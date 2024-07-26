/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:46:35 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/26 12:33:57 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main(){

// 	int array1[] = {1,2,3,4};
// 	std::string array2[] = {"55","66","77"};
// 	float array3[] = {1.2,2.3,3.4};

// 	const int array4[] = {1,2,3,4};
	
// 	iter(array1, 4, print);

// 	std::cout << std::endl;

// 	iter(array2, 3, print);
	
// 	std::cout << std::endl;
	
// 	iter(array3, 3, print);
	
// 	std::cout << std::endl;
	
// 	iter(array4, 3, print);
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}
template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}
int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];
  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );
  return 0;
}