#include "card.h"

/// @brief Default constructor
/// @param _card 
Card::Card(int _card) {
    m_Card = _card;
    m_Rank = rankMap.at(m_Card >> 16);
    m_Suit = suitMap.at((m_Card & 61440) >> 12);
}

/// @brief Getter of card's rank
/// @return `std::string`
std::string Card::getRank() {
    return m_Rank;
}

/// @brief Getter of card's suit
/// @return `std::string`
std::string Card::getSuit() {
    return m_Suit;
}

/// @brief Converts the card representation to a string
/// @return `std::string`
std::string Card::toString() {
    return m_Rank + " of " + m_Suit;
}