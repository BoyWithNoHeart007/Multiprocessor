#include<iostream>

using namespace std;

class A{
	
	public:
		
		void fun(){
			
			cout<<"Shinchan"<<endl;
		}
};

class B : public A{
	
	public:
		
		void fun(){
			
			cout<<"biju public thai gyu";
		}
};

main(){
	
	B obj;
	
	obj.A::fun();
	obj.B::fun();
}
