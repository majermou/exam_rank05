/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:52:54 by majermou          #+#    #+#             */
/*   Updated: 2021/10/13 09:13:27 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <vector>
#include "Dummy.hpp"
#include "BrickWall.hpp"

class TargetGenerator
{
private:
    std::vector<ATarget*>    targets;
    TargetGenerator(const TargetGenerator& c);
    TargetGenerator&    operator=(const TargetGenerator& rOperand);
public:
    TargetGenerator();
    ~TargetGenerator();
    
    void        learnTargetType(ATarget* target);
    void        forgetTargetType(std::string const& targetType);
    ATarget*    createTarget(std::string const& type);
};

#endif // TARGETGENERATOR_HPP