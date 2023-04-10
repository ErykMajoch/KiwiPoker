#pragma once

#include <map>
#include <string>

// As I'm planning to use the Cactus Kev 5 card evaluator, I need
// to use his card represenantion in an 32 bit integer:
// 
// +--------+--------+--------+--------+
// |xxxbbbbb|bbbbbbbb|cdhsrrrr|xxpppppp|
// +--------+--------+--------+--------+
// 
// p = prime number, r = rank of card
// cdhs = suit of card, b = bit turned on depending on rank of card

/// @brief A map from an integer to the rank
const std::map<int, std::string> rankMap = {
    {1, "Two"},
    {2, "Three"},
    {4, "Four"},
    {8, "Five"},
    {16, "Six"},
    {32, "Seven"},
    {64, "Eight"},
    {128, "Nine"},
    {256, "Ten"},
    {512, "Jack"},
    {1024, "Queen"},
    {2048, "King"},
    {4096, "Ace"}
};

/// @brief A map from an integer to the suit
const std::map<int, std::string> suitMap = {
    {1, "Spades"},
    {2, "Hearts"},
    {4, "Diamonds"},
    {8, "Clubs"}
};

/// @brief A wrapper class for the card representation
class Card
{
public:
    explicit Card(int _card);
    std::string getRank();
    std::string getSuit();

    std::string toString();

    ~Card() = default;

private:
    int m_Card = 0;
    std::string m_Rank;
    std::string m_Suit;
};
