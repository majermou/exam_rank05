/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:02:53 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 17:50:15 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <vector>
#include <iostream>
#include "ASpell.hpp"

class SpellBook
{
private:
    std::vector<ASpell*> spellBook;
    SpellBook(const SpellBook& c);
    SpellBook&  operator=(const SpellBook& rOperand);
public:
    SpellBook();
    ~SpellBook();

    void    learnSpell(ASpell*); // that COPIES a spell in the book
    void    forgetSpell(std::string const &); // that deletes a spell from the book, except if it isn't there
    ASpell* createSpell(std::string const &); // that receives a string corresponding to the name of a spell, creates it, and returns it.
};

#endif // SPELLBOOK_HPP
