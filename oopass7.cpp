//map

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
 {
  typedef map<string, int> mapType;
  mapType populationMap;
  
  populationMap.insert(pair<string, int>("Maharashtra",1100000));
  populationMap.insert(pair<string, int>("Rajasthan", 750000));
  populationMap.insert(pair<string, int>("Karanataka", 650000));
  populationMap.insert(pair<string, int>("Punjab", 550000));
  populationMap.insert(pair<string, int>("West Bengal", 660000));
  
  mapType::iterator iter;
  cout<<" Population of state's in India \n";
  cout<<"\n total number of state's is "<<populationMap.size()<<"\n";
  string state_name;
  cout<<"\n enter name of the state: ";
  cin>>state_name;
  iter =populationMap.find(state_name);
  if(iter!=populationMap.end())
   cout<<state_name<<"'s population is "
   <<iter->second;
  else
   cout<<"Key is not populationMap"<<"\n";
   populationMap.clear();
 }