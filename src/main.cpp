#include <iostream>
#include "card.h"

int main() {
    Card a = Card(529159);
    std::cout << a.toString() << std::endl;
    return 0;
}