#include "deck.h"

Deck::Deck() {
	int cardnum = 0;
	for (int r=0; r<13; ++r) {
		for (int s=0; s<4; ++s) {
			cards.push_back(Card(r, s));
		}
	}
};

Card Deck::deal() {
	Card c = cards[cards.size()-1];
	cards.pop_back();
	return c;
}

void Deck::shuffle() {
	srand(time(NULL));
	std::random_shuffle(cards.begin(), cards.end());
}

void Deck::cut() {
	// Not yet. Why does a virtual deck need cut?
}