/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:02:53 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 23:24:02 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <vector>
#include "Fireball.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"

class SpellBook
{
private:
    std::vector<ASpell*> spellBook;
    SpellBook(const SpellBook& c);
    SpellBook&  operator=(const SpellBook& rOperand);
public:
    SpellBook();
    ~SpellBook();

    void    learnSpell(ASpell* spell);
    void    forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &) const;
};

#endif // SPELLBOOK_HPP
