
#include<iostream>
#include<conio.h>
using namespace std;
class Course{
public:
double earnGpa;
double setCourse(int totalCourse){
        double totalGrade=0,totalCredit=0,sumCredit,grade,credit;


        for(int i=0;i<totalCourse;i++){

        cout<<"                "<<"Course-"<<i+1<<"  obtain GRADE:";
            cin>>grade;

            cout<<"                  "<<"Course-"<<i+1<<" Credit : ";
            cin>>credit;cout<<endl;cout<<endl;

            sumCredit=credit*grade;
            totalGrade+=sumCredit;
            totalCredit+=credit;
        }
         double earnGpa=totalGrade/totalCredit;
        return earnGpa; }
};



class Setinfo{
private:
    float GPA;
    int Id;

public:


    Course obj;
    void setData(int id,int totalCourse){
        Id = id;
        GPA=obj.setCourse(totalCourse);
    }

    double getGpa(){  return GPA;}

    double getId(){ return Id;}
};



void gpaCalculator(){

    cout<<"Enter total Student number : ";
    int totalStudent;
    cin>>totalStudent;

    Setinfo obj[totalStudent];
    int id,totalCourse;
    float course1,course2,course3;


    for(int i=0;i<totalStudent;i++)
        {

        cout<<i+1<<".Student Id is:";
        cin>>id;


        cout<<"     Enter total number of course:";
        cin>>totalCourse;
        obj[i].setData(id,totalCourse);
    }

    Setinfo sortt;
    for(int i=0;i<totalStudent;i++)
    {
        for(int j=i+1;j<totalStudent;j++)
        {
            if(obj[i].getGpa()<obj[j].getGpa())
            {
                sortt=obj[i];
                obj[i]=obj[j];
                obj[j]=sortt;
            }
        }
    }
   int k=1;

    while(k<=1){

            cout<<"Enter the sarching ID : ";
    int sarchId;
    cin>>sarchId;

    for(int i=0; i<totalStudent; i++){

        if(obj[i].getId() == sarchId){
            cout<<"         GPA of Student ID-"<<sarchId<<" is: "<<obj[i].getGpa()<<endl;
            cout<<"         and  Merit position is : "<<i+1<<endl; }
         }
         cout<<"Press \n     1-For again sarch.\n\n      2-For return main menu.\n\n.....";
         cin>>k;
         if(k==2){ cout<<"main."<<endl;
         }
}

}



int main(){
    cout<<"----------------Enter choose your item----------------"<<endl;
    cout<<endl;cout<<endl;
    cout<<"        (1)--For calculate GPA."<<"        (2)--For calculate CGPA."<<endl;
    cout<<"\n"<<"Press....";
    int n;
    cin>>n;





    switch(n)
    {
        case 1:
            cout<<endl;
            gpaCalculator();

            break;
        case 2:

            break;
        case 3:

            break;
        default:
            cout<<" none";
    }


 getch();
}
