/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:47:58 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 16:51:47 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define  FIREBALL_HPP

#include "ASpell.hpp"

class Fireball: public ASpell
{
private:

public:
    Fireball();
    ~Fireball();

    ASpell* clone();
};

#endif // FIREBALL_HPP
