#include <iostream>
# include <unordered_map>
# include <vector>

using namespace std;

int main(){

unordered_map <string,int> menu;

menu["maggi1"]=15;
menu["maggi2"]=30;
menu["maggi3"]=45;
menu["maggi4"]=60;

menu["maggi2"]=(1+ 0.1) * 30;

string item;
cin>> item;

if ( menu.count(item)== 0){
    cout<<item <<"is not available"<<endl;
}
else{
    cout<<item<<"is available with cost:"<<menu[item]<<endl;
}

    menu.erase("maggi1");
for(pair<string,int> item: menu){
    cout<<item.first<<" ---" <<item.second<<endl;
}
    return 0;
}
