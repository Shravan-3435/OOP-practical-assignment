 //inheritance and exception handling 
 // books
 
 #include <iostream>
 #include <string.h>
 using namespace std;

 class publication
 {
  public:
   string title;
   float price;
  void get_data()
  {
    cout << "Enter title: ";
    cin >> title;
    cout << "Enter price: ";
    cin >> price;
  }
 };

 class book : public publication
 {
  public:
  int page_count;

  void getitems()
  {
  //publication::get_data();
  cout << "Enter page count: ";
  cin >> page_count;
  }
};
 
 class tape : public publication
 {
  public:
  float mincount;

  void getitems()
  {
   //publication::get_data();
   cout << "Enter number of minutes: ";
   cin >> mincount;
  }
 };
 
 int main()
 {
  publication obj1;
  obj1.get_data();

  book obj2;
  obj2.book::getitems();

  tape obj3;
  obj3.tape::getitems();

 try
 {
  if (obj1.price < 0)
  {
    obj1.price = 0;
    throw obj1;
  }
 }
 
 catch (publication obj1)
 {
  cout << "Exception caught for publication price" << endl;
 }

 try
 {
   if (obj2.page_count < 0)
    {
       obj2.page_count = 0;
       throw obj2;
    }
 }
 catch (book obj2)
 {
   cout << "Exception caught for book page count" << endl;
 }

 try
 {
  if (obj3.mincount < 0)
  {
   obj3.mincount = 0;
   throw obj3;
  }
 }
 catch (tape obj3)
 {
   cout << "Exception caught for tape minutes" << endl;
 }

 cout << "Title: " << obj1.title << endl;
 cout << "Price: " << obj1.price << endl;
 cout << "Pages: " << obj2.page_count << endl;
 cout << "Minutes: " << obj3.mincount << endl;
 return 0;
 }