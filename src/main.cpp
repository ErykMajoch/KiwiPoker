#include <iostream>
#include "deck.h"

int main() {
    Deck d = Deck();
    for (Card c : d.drawCards(52)) {
        std::cout << c.toString() << "\n";
    }
    return 0;
}