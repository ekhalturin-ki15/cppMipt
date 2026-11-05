#include <iostream>
#include <cstdio>
#include <fstream>


#include <vector>
#include <list>


#include <vector>
#include <deque>
#include <set>
#include <map>
#include <regex>
#include <stack>
#include <queue>
#include <bitset>
#include <unordered_set> // hash
//#include "SFML.h"

//#include "My.h"

#include <map>
#include <unordered_map>
#include <memory>

//#include "Ship.h"

using namespace std;


#include "Word.h"

int main()
{
	//shared_ptr<Ship> ptr_s(new Ship); // Количество тех кто обращается

	unique_ptr<Word> s(new Word);

	//s = s2;

	shared_ptr<Word> ss(new Word);

	weak_ptr<Word> ss3 = ss;


	weak_ptr<Word> ss2 = ss;

	//auto_ptr<Word>


	bit_cast < float> (5);




}