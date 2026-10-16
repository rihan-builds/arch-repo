#include <iostream>
using namespace std;
int main(){
    int rollnum,n,marks[100],total = 0,avg = 0;
    string name;
    float persentage = 0;
    cout<<"STUDENT DETAILS"<<endl;

    cout<<"Enter student roll number: ";
    cin>>rollnum;

    cout<<("Enter student name: ");
    cin>>name;

    cout<<"enter number of subjects: ";
    cin>>n;

    for(int i = 0; i < n; i++){
         cout<<"Enter marks of subjects here: ";
        cin>>marks[i];

        if(marks[i] < 0 || marks[i] > 100){
            cout<<"Number invalid! Enter marks between 0 to 100"<<endl;
            return 0;
        }
        total = total + marks[i];
    }

    avg = (float)total / n;
    persentage = ((float)total /(n * 100)) * 100;
    cout<<endl;

    cout<<"============REPORT OF STUDENT============ "<<endl<<endl;

    cout<<"Roll Number: "<<rollnum<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"THe total: "<<total<<endl;
    cout<<"Persentage: "<<persentage<<"%"<<endl;
    cout<<"Average Marks: "<<avg<<endl;
    if(persentage >= 90){
        cout<<"Grade A";
    }
    else if(persentage >= 65){
        cout<<"Grade B";
    }
    else if(persentage >= 40){
        cout<<"Grade C";
    }
    else{
        cout<<"FAIL";
    }
}