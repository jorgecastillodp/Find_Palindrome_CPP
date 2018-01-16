/* Author: Jorge Castillo
Project : ICE Part1 
*/

//include
#include <iostream>
#include <string>

using namespace std;

//Prototype
bool IsPalindrome(string phrase);

int main ()
{
	//Declare
	char userReply = 'Y';
	string phrase;

	while (toupper(userReply) == 'Y')
	{
		cout << " Please enter a phrase: ";
		getline(cin, phrase);
		cout <<(IsPalindrome(phrase) ? " Palidrome found!\n\n" : " NOT a palindrome\n\n");
		cout << " Go again (y/n):";
		cin.get(userReply);
		cin.ignore();
	}

	return 0;
}

// Check if it is a Palindrome
bool IsPalindrome(string phrase)
{
	bool palindrome = true;
	char *pstart, *pend;
	pstart = &phrase[0];
	pend = pstart + phrase.length() - 1;

	while (pstart < pend)
	{
		for(int i = 0, j = phrase.length() - 1; i < j; i++, j--, pstart++, pend--)
		{
			while(!isalpha(*pstart))
			{
				pstart++;
			}

			while(!isalpha(*pend))
			{
				pend--;
			}

			if (toupper(*pstart) != toupper(*pend))
			{
				palindrome = false;
			}
		}
	}

return palindrome;	

}

/*
Please enter a phrase: a
Palidrome found!

Go again (y/n):y
Please enter a phrase: aa
Palidrome found!

Go again (y/n):y
Please enter a phrase: aaa
Palidrome found!

Go again (y/n):y
Please enter a phrase: a ba
Palidrome found!

Go again (y/n):y
Please enter a phrase: ab a
Palidrome found!

Go again (y/n):y
Please enter a phrase: a bba
Palidrome found!

Go again (y/n):y
Please enter a phrase: abb a
Palidrome found!

Go again (y/n):y
Please enter a phrase: A man, a plan,  a canal, Panama!
Palidrome found!

Go again (y/n):y
Please enter a phrase: A Santa at NASA.
Palidrome found!

Go again (y/n):y
Please enter a phrase: Are we not drawn onward, we few, drawn onward to new era

Palidrome found!

Go again (y/n):y
Please enter a phrase: Dennis, Nell, Edna, Leon, Nedra, Anita, Rolf, Nora, Alic
, Carol, Leo, Jane, Reed, Dena, Dale, Basil, Rae, Penny, Lana, Dave, Denny, Len
, Ida, Bernadette, Ben, Ray, Lila, Nina, Jo, Ira, Mara, Sara, Mario, Jan, Ina,
ily, Arne, Bette, Dan, Reba, Diane, Lynn, Ed, Eva, Dana, Lynne, Pearl, Isabel,
da, Ned, Dee, Rena, Joel, Lora, Cecil, Aaron, Flora, Tina, Arden, Noel, and Ell
n sinned.
Palidrome found!

Go again (y/n):y
Please enter a phrase: A nut for a jar of tuna.
Palidrome found!

Go again (y/n):y
Please enter a phrase: Borrow or rob?
Palidrome found!

Go again (y/n):y
Please enter a phrase: You can cage a swallow, can't you?  But, you can't swall
w a cage, can you?
NOT a palindrome

Go again (y/n):y
Please enter a phrase: ab
NOT a palindrome

Go again (y/n):y
Please enter a phrase: a b
NOT a palindrome

Go again (y/n):y
Please enter a phrase: abc
NOT a palindrome

Go again (y/n):y
Please enter a phrase: a bc
NOT a palindrome

Go again (y/n):y
Please enter a phrase: ab
NOT a palindrome

Go again (y/n):y
Please enter a phrase: abc
NOT a palindrome

Go again (y/n):y
Please enter a phrase: a b c
NOT a palindrome

Go again (y/n):
*/