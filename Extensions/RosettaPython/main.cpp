// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Python/PlayMode/Accounts/AccountInfo.hpp>
#include <Python/PlayMode/Accounts/DeckInfo.hpp>

#include <Python/PlayMode/Cards/Card.hpp>
#include <Python/PlayMode/Cards/Cards.hpp>

#include <Python/PlayMode/Enums/ActionEnums.hpp>
#include <Python/PlayMode/Enums/AuraEnums.hpp>
#include <Python/PlayMode/Enums/CardEnums.hpp>
#include <Python/PlayMode/Enums/GameEnums.hpp>
#include <Python/PlayMode/Enums/TargetingEnums.hpp>
#include <Python/PlayMode/Enums/TaskEnums.hpp>
#include <Python/PlayMode/Enums/TriggerEnums.hpp>

#include <Python/PlayMode/Loaders/AccountLoader.hpp>
#include <Python/PlayMode/Loaders/InternalCardLoader.hpp>
#include <Python/PlayMode/Loaders/TargetingPredicates.hpp>

#include <Python/PlayMode/Utils/Constants.hpp>
#include <Python/PlayMode/Utils/DeckCode.hpp>

#include <pybind11/pybind11.h>

PYBIND11_MODULE(pyRosetta, m)
{
    m.doc() =
        R"pbdoc(Hearthstone simulator with some reinforcement learning)pbdoc";

    // Accounts
    AddAccountInfo(m);
    AddDeckInfo(m);

    // Cards
    AddCard(m);
    AddCards(m);

    // Enums
    AddActionEnums(m);
    AddAuraEnums(m);
    AddCardEnums(m);
    AddGameEnums(m);
    AddTargetingEnums(m);
    AddTaskEnums(m);
    AddTriggerEnums(m);

    // Loaders
    AddAccountLoader(m);
    AddInternalCardLoader(m);
    AddTargetingPredicates(m);

    // Utils
    AddConstants(m);
    AddDeckCode(m);
}