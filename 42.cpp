#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(){
	string line;
	map<char, int> recnik_mala;
	map<char, int> recnik_velika;
	
	int maxmala=0;
	int maxvelika=0;
	while(getline(cin, line)){
		for(char c : line){
			
			if(c>='a' && c<='z'){
				recnik_mala[c]++;
				if(recnik_mala[c]>maxmala){
					maxmala=recnik_mala[c];
				}
			}else if(c>='A' && c<='Z'){
				recnik_velika[c]++;
				if(recnik_velika[c]>maxvelika){
					maxvelika=recnik_velika[c];
				}
			}
			
		}
	}
	map<char, int>::iterator itr;
	
	if(maxmala>0){
		for(itr=recnik_mala.begin();itr!=recnik_mala.end(); ++itr){
			if(maxmala==itr->second){
			cout << itr->first;
			}
		}	
		cout << endl;
	}
	
	if(maxvelika>0){
		for(itr=recnik_velika.begin();itr!=recnik_velika.end(); ++itr){
			if(maxvelika==itr->second){
			cout << itr->first;
			}
		}	
		cout << endl;	
	}
	
	return 0;
}
