/*************************************************************************
> File Name: Minion.h
> Project Name: Hearthstone++
> Author: Chan-Ho Chris Ohk
> Purpose: Minion class inherits from Card class.
> Created Time: 2017/09/16
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#ifndef HEARTHSTONEPP_MINION_H
#define HEARTHSTONEPP_MINION_H

#include <Models/Entities/Character.h>

namespace Hearthstonepp
{
struct Minion : public Character
{
    void ShowInfo() const override;
};
}

#endif