/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:31:00 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 23:16:01 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
    std::string attribute;
public:
    ATarget(std::string _attribute);
    ATarget(const ATarget& c);
    virtual ~ATarget();
    ATarget&    operator=(const ATarget& rOperand);

    const std::string&   getType() const;
    virtual ATarget*    clone() const = 0;
    void    getHitBySpell(const ASpell& spell) const;
};

#endif // ATARGET_HPP
