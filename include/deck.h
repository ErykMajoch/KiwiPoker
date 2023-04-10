#pragma once

#include <deque>
#include <algorithm>

#include "card.h"
#include "arrays.h"

/// @brief The `Deck` which holds a `std::deque` of `Card` objects
class Deck {
public:
    Deck();

    Card drawCard();
    std::deque<Card> drawCards(int _num);

    void restore();

    ~Deck() = default;

private:
    std::deque<Card> m_Deck;
};