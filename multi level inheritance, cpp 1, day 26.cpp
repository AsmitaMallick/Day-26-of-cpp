#include <iostream>
using namespace std;
class student{
	protected:
		int rollnumber;
		public:
			void setrollnumber(int);
			void getrollnumber(void);
			
};
 void student :: setrollnumber(int r){
 	rollnumber = r;
 }
 void student :: getrollnumber(){
 	cout<<"the roll number is "<<rollnumber<<endl;
 }
class exam : public student{
	protected:
		float maths;
		float physics;
		public:
			void setmarks(float, float);
			void getmarks(void);
};
void exam :: setmarks(float m1, float m2){
	maths = m1; 
	physics = m2;
}
void exam :: getmarks(){
	
	cout<<"the marks obtained in maths are: "<<maths<<endl;
	cout<<"the marks obtained in physics are: "<<physics<<endl;
	
}
class result : public exam{
	float percentage;
	public:
		void displayresults(){
			getrollnumber();
			getmarks();
			cout<<"your percentage is "<<(maths+physics)/2<<endl;
			
		}
};
int main(){
	result asmi;
	asmi.setrollnumber(6);
	asmi.setmarks(94.0 , 90.0);
	asmi.displayresults();
	return 0;
	
}
 

