#include<iostream>
using namespace std;
class test{
public:
	void mytest(){
		cout<<this<<endl;
		cout<<this<<endl;
	}
};
int main(){
	test*test1=new test();
	test1->mytest();
	return 0;
}
