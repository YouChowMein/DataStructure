#include<iostream>
using namespace std;
class Obj{
	static int i;
public:
	Obj(){i++;}
	~Obj(){i--;}
	static int getVal(){return i;}
};

int Obj::i=0;
void f(){Obj ob2; cout<<ob2.getVal();}

int main(){
	Obj ob1;
	f();
	Obj *ob3=new Obj;
	cout<<ob3->getVal();
	delete ob3;
	cout<<Obj::getVal();
	return 0;
}