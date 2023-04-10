#include "deck.h"

#include <random>

/// @brief
Deck::Deck() {
    int n = 0;
    int suit = 0x8000;
    for (int i = 0; i < 4; i++, suit >>= 1) {
        for (int j = 0; j < 13; j++, n++) {
            m_Deck.emplace_back(primes[j] | (j << 8) | suit | (1 << (16+j)) );
        }
    }

    std::shuffle(m_Deck.begin(), m_Deck.end(), std::mt19937(std::random_device()()));
}

/// @brief Returns and removes the top card from the deck
/// @return `Card`
Card Deck::drawCard() {
    Card c = m_Deck.front();
    m_Deck.pop_front();
    return c;
}

/// @brief Returns and removes the first `n` top cards from the deck
/// @return `std::deque<Card>`
std::deque<Card> Deck::drawCards(int _num) {
    std::deque<Card> cards = {m_Deck.begin(), m_Deck.begin() + _num};
    m_Deck.erase(m_Deck.begin(), m_Deck.begin() + _num);
    return cards;
}

/// @brief Restores the `Deck` object by calling its constructor
void Deck::restore() {
    *this = Deck();
}
