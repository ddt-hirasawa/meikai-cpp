//演習9-9 演習9－6で内部結合をもつ識別子を、名前なしの名前空間に属するように書き換える

#include"header.h"

#include<ctime>
#include<cstdlib>


using namespace std;

//	変更点 static を外し名前無しの名前空間に
//kotae を置くことで 静的記憶域間に kotae を置く必要がなくなる
namespace {
int kotae = 0;
}

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
	if(cand < 0 || cand > 999)
		return 3;
	else if(cand == kotae)
		return 0;
	else if(cand > kotae)
		return 1;
	else if(cand < kotae)
		return 2;
	else
		return 4;
}
