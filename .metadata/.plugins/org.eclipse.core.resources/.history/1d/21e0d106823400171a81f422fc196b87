#include<ctime>
#include<cstdlib>

#include "math.h"

using namespace std;

static int kotae = 0;

void initialize()
{
	srand(time(NULL));
}

int get_no()
{
	kotae = rand() % (max_no+1);
	return kotae;
}

int judge(int cand)
{
	if(cand < 0 || cand > 999)//変更点 0より小さい または 999より大きい値であるなら
		return 3;				//main文で例外となる 3を返却する
	else if(cand == kotae)
		return 0;
	else if(cand > kotae)
		return 1;
	else if(cand < kotae)
		return 2;
	else
		return 4;
}
