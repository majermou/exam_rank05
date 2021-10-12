/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:05:59 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 15:40:53 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy") {

}

Dummy::~Dummy() {
    
}

ATarget*    Dummy::clone() {
    return new Dummy;
}
