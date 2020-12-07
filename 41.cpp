#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> mala_slova(26,0);
    vector<int> velika_slova(26,0);
    vector<char> niz1;
    vector<char> niz2;

    string s1,s2;
    string rec;
    int maxmala=0;
    int maxvelika=0;
    while(cin >> rec){
        for(char c : rec){
            if(c>='a' && c<='z'){
                mala_slova[c-'a']++;
                if(mala_slova[c-'a']>maxmala){
                    maxmala=mala_slova[c-'a'];
                }
            }else{
                velika_slova[c-'A']++;
                if(velika_slova[c-'A']>maxvelika){
                    maxvelika=velika_slova[c-'A'];
                }
            }
        }
    }

    for(int i=0; i<mala_slova.size(); i++){
        if(maxmala>0 && mala_slova[i]==maxmala){
            //s1.push_back('a'+i);
            //cout << char('a'+i);
			niz1.push_back(('a'+i));
        }
    }
	//cout << endl;
    for(int i=0; i<velika_slova.size();i++){
        if(maxvelika>0 && velika_slova[i]==maxvelika){
            //s2.push_back('A'+i);
            
            niz2.push_back('A'+i);
        }
    }
    //cout << endl;
    if(niz1.size()!=0){
        for(int j=0; j<niz1.size(); j++){
			cout << niz1[j];
		}
		cout << endl;
    }
    if(niz2.size()!=0){
        for(int j=0; j<niz2.size(); j++){
			cout << niz2[j];
		}
		cout << endl;
   
    }
    return 0;
}
