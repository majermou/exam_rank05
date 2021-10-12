/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:58:50 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 17:00:07 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall: public ATarget
{
public:
    BrickWall();
    ~BrickWall();

    ATarget*    clone();
};

#endif // BRICKWALL_HPP
