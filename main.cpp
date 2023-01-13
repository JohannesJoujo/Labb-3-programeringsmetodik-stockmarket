/*
 * johannes joujo labb 3 programeringsmetodik dt079g
 */

#include "p_que.h"
#include "mallklass.h"

int main() {
    srand((unsigned) time(NULL));

    p_que<person, compare> buyer;
    p_que<person, compare> seller;

    person list;
    for (int i = 0; i < 7; i++) {
        list.value = (rand() % 16 + 15);
        list.name = "jarl Wallenburg";
        buyer.puch(list);
        list.value = (rand() % 16 + 15);
        list.name = "Erik Pendel";
        buyer.puch(list);
        list.value = (rand() % 16 + 15);
        list.name = "Joakim von Anka";
        buyer.puch(list);

        list.value = (rand() % 16 + 15);
        list.name = "jarl Wallenburg";
        seller.puch(list);
        list.value = (rand() % 16 + 15);
        list.name = "Erik Pendel";
        seller.puch(list);
        list.value = (rand() % 16 + 15);
        list.name = "Joakim von Anka";
        seller.puch(list);
    }

    while (!buyer.empty() && !seller.empty()) {
        auto x = buyer.pop();
        auto y = seller.pop();

        if (y.value <= x.value) {
            std::cout << x.name << " bought from " << y.name << " for " << y.value << "€" << std::endl;
        } else {
            seller.puch(y);
            std::cout << "No business done here" << std::endl;
            std::cout<<x.name<<" was trying to buy from " <<y.name<<" for "<<x.value<<"€ but "<<y.name<<
            " wanted "<<y.value<<"€\n";
        }
    }

    return 0;
}
