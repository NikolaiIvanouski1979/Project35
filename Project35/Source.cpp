# include<iostream>
using namespace std;
enum Suit{clubs, diamonds, hearts, spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
	int number;
	Suit suit;
public:
	card()
	{}
	card(int n, Suit s):number(n), suit(s)
	{}
	void didplay();
	bool isEqual(card);
};
void card::didplay()
{
	if (number >= 2 && number <= 10)
		cout << number;
	else
		switch (number)
		{
		case jack: cout << "Jack " << endl; break;
		case queen: cout << "Queen " << endl; break;
		case king: cout << "King " << endl; break;
		case ace: cout << "Ace " << endl; break;
		}
	switch (suit)
	{
	case clubs: cout << "Clubs " << endl; break;
	case diamonds: cout << "Diamonds" << endl; break;
	case hearts: cout << "Hearts " << endl; break;
	case spades: cout << "Spades" << endl; break;
	}
}
bool card::isEqual(card c2)
{
	return (number == c2.number && suit == c2.suit) ? true : false;
}

int main()
{
	card temp, chosen, prize;
	int position;
	card card1(7, clubs);
	cout << "Card 1: ";
	card1.didplay();
	card card2(jack, hearts);
	cout << "Card 2: ";
	card2.didplay();
	card card3(ace, spades);
	cout << "Card3: ";
	card3.didplay();
	prize = card3;
	cout << "Swap card 1 and 3..." << endl;
	temp = card3; card3 = card1; card1 = temp;
	cout << "Swap card 2 and 3..." << endl;
	temp = card3; card3 = card2; card2 = temp;
	cout << "Swap card 1 and 2..." << endl;
	temp = card2; card2 = card1; card1 = temp;
	cout << "What position card(1,2 and 3)" << endl;
	prize.didplay();
	cout << "?" << endl;
	cin >> position;
	switch (position)
	{
	case 1: chosen = card1; break;
	case 2: chosen = card2; break;
	case 3: chosen = card3; break;
	}
	if (chosen.isEqual(prize))
		cout << "OK! You won!!!" << endl;
	else
		cout << "Incorrectly!! You have lost(((" << endl;
	cout << "You chose card: " << endl;
	chosen.didplay();
	cout << endl;
	system("pause");
	return 0;

}