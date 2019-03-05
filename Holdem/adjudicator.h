#pragma once
#include "card.h"
#include <vector>
#include <algorithm>

class Adjudicator {
public:
	static std::vector<int> handValue (const std::vector<Card>& communityCards, const std::vector<Card>& playerHand);

private:

	static std::vector<Card> h;
	static std::vector<Card> r_h;
<<<<<<< HEAD
	static std::vector<int> score;
	static void				combinationChecker	(std::vector<Card>& bh, int off = 0, int k = 5);
	static void				checkHand			(std::vector<Card>& hand);
	static void				royalFlush			(std::vector<Card>& hand);
	static void				straightFlush		(std::vector<Card>& hand);
	static void				fourOfAKind			(std::vector<Card>& hand);
	static void				fullHouse			(std::vector<Card>& hand);
	static void				flush				(std::vector<Card>& hand);
	static void				straight			(std::vector<Card>& hand);
	static void				threeOfAKind		(std::vector<Card>& hand);
	static void				twoPair				(std::vector<Card>& hand);
	static void				pair				(std::vector<Card>& hand);
	static void				junkHighCard		(std::vector<Card>& hand);
=======
	static std::vector<int> combinationChecker	(std::vector<Card>& bh,	  std::vector<int>& score, int off = 0, int k = 5);
	static std::vector<int> checkHand			(std::vector<Card>& hand, std::vector<int>& score);
	static std::vector<int> royalFlush			(std::vector<Card>& hand);
	static std::vector<int> straightFlush		(std::vector<Card>& hand);
	static std::vector<int> fourOfAKind			(std::vector<Card>& hand);
	static std::vector<int> fullHouse			(std::vector<Card>& hand);
	static std::vector<int> flush				(std::vector<Card>& hand);
	static std::vector<int> straight			(std::vector<Card>& hand);
	static std::vector<int> threeOfAKind		(std::vector<Card>& hand);
	static std::vector<int> twoPair				(std::vector<Card>& hand);
	static std::vector<int> pair				(std::vector<Card>& hand);
	static std::vector<int> junkHighCard		(std::vector<Card>& hand);
>>>>>>> c22c7bf083552bb84c6b0a9d9b86574d75f47b6a
};