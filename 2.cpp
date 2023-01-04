#include<iostream>

using namespace std;

class Data{
	
	public:
		
		void fun(int a){
			
			cout<<"Value a & b is under "<<endl<<endl;
		}
		
		void fun(int a , int b){
			
			cout<<"Value a : "<<a<<endl;
			cout<<"value b : "<<b;
		}
}; 

main(){
	
	Data obj;
	
	int a,b;
	
	a = 10;
	b = 20;
	
	obj.fun(a);
	obj.fun(a,b);
	
} 
