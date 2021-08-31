#include <iostream>
# include <map>
# include <list>
#include<string>

using namespace std;

int main(){

map <string,list<string>> book;

book["suraj"].push_back("+9198765");
book["suraj"].push_back("+9198766");
book["suraj"].push_back("+9198767");


book["raj"].push_back("+911");
book["raj"].push_back("+912");
book["raj"].push_back("+913");

string item;
cout<<"enter items name:"<<endl;
cin>>item;
if ( book.count(item)== 0){
    cout<<item <<"is not available"<<endl;
}

for (pair<string,list<string>> item: book){

    cout<<"name:"<<item.first<<endl;
   list <string> :: iterator i ;
   for (i= item.second.begin(); i != item.second.end(); ++i){
    cout<<*i<<endl;
   }
}

    return 0;
}
