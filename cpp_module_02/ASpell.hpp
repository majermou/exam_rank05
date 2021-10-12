/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:06:38 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 20:15:09 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
    std::string name;
    std::string effects;
public:
    ASpell(std::string _name, std::string _effects);
    ASpell(const ASpell& c);
    ~ASpell();
    ASpell& operator=(const ASpell& rOperand);

    std::string getName() const;
    std::string getEffects() const;
    virtual ASpell* clone() const = 0;
    void    launch(const ATarget& target);
};

#endif // ASPELL_HPP
