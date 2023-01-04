#include<iostream>

using namespace std;

class Math{
	
	public:
		
		void total(int a , int b){
			 
			cout<<a/b<<endl;
		}
		
		void total(int a , int b , int c){
		 
		    cout<<a-b-c<<endl;
		}
		
		void total(int a , int b , int c , int d){
			
			cout<<a*b*c*d<<endl;
		}
		
		void total(int a , int b , int c , int d , int e){
			
			cout<<a+b+c+d+e<<endl;
		}
};

main(){
	
	Math obj;
	
	int a,b,c,d,e;
	
	a = 10;
	b = 20;
	c = 30;
	d = 40;
	e = 50;
	

	obj.total(a,b);
	obj.total(a,b,c);
	obj.total(a,b,c,d);
	obj.total(a,b,c,d,e);
} 
