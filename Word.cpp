#include "Word.h"

str Word::check(str in)
{
	
	//std::iota();

	str ret(ans.size(), '*');
	for (int i = 0; i < std::min(in.size(), ans.size()); ++i)
	{
		if (i >= ans.size())
			if (in[i] == ans[i])
			{
				ret[i] = ans[i];
			}
	}

	return ret;


}
