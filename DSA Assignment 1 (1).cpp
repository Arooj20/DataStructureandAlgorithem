#include <iostream>
using namespace std;
 //utility class
class calculator{
	private:
		 calculator(){
			
		}
		
	static int  operationcount;	
	

public:
	  //Sum function
	 static int sum(int a , int b){
	 	
	 	int add=a+b;
	 	operationcount++;
	 	return add;
	 }
	  //subtract function
	 static int sub(int a , int b)
	 {
	 	int subtract=a-b;
	 	operationcount++;
	 	return subtract;
	 }
	  //Division function
	 static float Quotient(int a , int b){
	 	
	 	float div=a/b;
	 	operationcount++;
	 	return div;
	 	
	 }
	  //reminder function
	 static float reminder(int a , int b){
	 	
	 	float division=a%b;
	 	operationcount++;
	 	return division;
	
	 }
	  //percentage function
	 static double percentage(float a ,float  b){
	 	
	 	double percent=(a/b)*100;
	 	operationcount++;
	 	return percent;
	 }
	 
    static  int getoperationcount(){
    	
    	return operationcount;
	}
	
};
        //define static function ouside the class in C++
int calculator::operationcount=0;
	
	
	//Main function 
	int main(){
		int choice ;
		int a ,b ;
		
		cout<<"......Operations......"<<endl;
		cout<<" 1. Addition"<<endl;
		cout<<" 2. Subtraction"<<endl;
		cout<<" 3. Division"<<endl;
		cout<<" 4. Reminder"<<endl;
		cout<<" 5. Percentage"<<endl;
		cout<<" 6. Operationcount"<<endl;
		cout<<" 7. Exit"<<endl;
		
		
	cout<<endl;
	do{
	
	 //input numbers
	cout<<"enter your 1st  number = "<<endl;
	cin>>a;
	cout<<"enter your second number = "<<endl;
	cin>>b;
	cout<<"Which operation you want to perform = ";
	cin>>choice;

	switch(choice){
	
	case 1:
			cout<<"Your Answer is = "<< calculator::sum(a,b)<<endl;
	
	break;
		case 2:
			cout<<"Your Answer is = "<< calculator::sub(a,b)<<endl;
	
	break;
		case 3:
			cout<<"Your Answer is = "<< calculator::Quotient(a,b)<<endl;
	
	break;
		case 4:
			cout<<"Your Answer is = "<< calculator::reminder(a,b)<<endl;
	
	break;
	
		case 5:
			cout<<"Your Answer is = "<< calculator::percentage(a,b)<<endl;
	
	break;
	
		case 6:
			cout<<"Total operation performed =  "<< calculator::getoperationcount<<endl;
	
	break;

	case 7:
			cout<<"Exit";
	
	break;	
	default:
		cout<<"Invalid "<<endl;
			
}
}
while(choice!=7);
return 0;
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 