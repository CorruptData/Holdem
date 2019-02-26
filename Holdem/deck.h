#pragma once
#include "card.h"
#include <vector>
#include <random>
#include <algorithm>

class Deck {
public:
	Deck();
	Card deal();
	void shuffle();
	void cut();
private:
	std::vector<Card> cards;
};