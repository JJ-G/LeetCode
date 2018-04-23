#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	string strval("1100");
	bitset<8> bitvec4(strval);
	cout<<bitvec4<<endl;
	return 0;
 
}

  



#include <iostream>
using namespace std;
void* memmove(void* str1,const void* str2,size_t n)
{
	char* pStr1= (char*) str1;
	const char* pStr2=(const char*)str2;
	if  (pStr1 < pStr2) {
		for(size_t i=0;i!=n;++i){
			*(pStr1++)=*(pStr2++);
		}
	}
	else{
		pStr1+=n-1;
		pStr2+=n-1;
		for(size_t i=0;i!=n;++i){
			*(pStr1--)=*(pStr2--);
		}
	}
	return str1;
}