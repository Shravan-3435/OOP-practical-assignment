 //file handling
//

 #include<iostream>
 #include<fstream>
 using namespace std;

 class employee
 {
  char name[20];
  int emp_id;
  float salary;
  public:
  void accept()
  {
   cin>>name;
   cin>>emp_id;
   cin>>salary;
  }
  void display()
  {
   cout<<"name"<<"emp_id"<<salary;
  }
 };

 int main()
 {
  employee o[5];
  fstream f;
  int i,n;
  f.open("shravan.txt");
  cout<<"how many employee information wanted to store: ";
  cin>>n;
 for (i=0; i<n; i++)
 {
  cout<<"enter the information of "<<i<<" employee"<<endl;
  o[i].accept();
  f.write((char *)&o[i], sizeof(o[i]));
 }
  f.close();
  f.open ("shravan.txt", ios::in);
  cout<<"information of employeeis as follow ";
 for (i=0; i<n; i++)
 {
  f.read((char*)&o[i], sizeof(o[i]));
  o[i].display();
 }
  f.close();
  return 0;
 }