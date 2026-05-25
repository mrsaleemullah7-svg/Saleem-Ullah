#include<iostream>
using namespace std;
class student{

private:
	string name;
	int rollNo;
	string subject[6]={
	"ict","ictp","english","calculus","physics","islamyat"};
	float marks[6];
	float total;
	float percentage;
	float GPA;
	public:
		void inputstudent(){
			total=0;
			cout<<"Enter name:"<<endl;
			cin>>name;
			cout<<":Enter rollNo:"<<endl;
			cin>>rollNo;
			for(int i=0;i<6;i++){
				cout<<"enter marks of "<<subject[i]<<":";
				cin>>marks[i];
				total+=marks[i];
			}
			percentage=(total/600.0)*100;
		}
		void displaystudent(){
			cout<<"\n=====student result======"<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"roolNo:"<<rollNo<<endl;
			cout<<"total marks:"<<total<<"/600"<<endl;
			
			cout<<"percentage:"<<percentage<<"%"<<"marks:"<<endl;
			for(int i=0;i<6;i++){
				cout<<"\n"<<subject[i]<<":"<<marks[i]<<endl;
			}
			
			if (percentage>=85)
			GPA = 4.0;
			else if(percentage>=70)
			GPA=3.0+((percentage-70)/15.0)*1.0;
			else if(percentage>=50)
			GPA=2.0+((percentage-50)/20.0)*1.0;
			else
			cout<<"Grade:F(fail)";
			cout<<"\nGPA:"<<GPA;
			
		}
		
	};
	int main(){
	int n=10;
	student s[10];
	for(int i=0;i<n;i++){
	
	cout<<"\n-----student"<<i+1<<"\n---";
	s[i].inputstudent();
	s[i].displaystudent();

}
		return 0;
	}



