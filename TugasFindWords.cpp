#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	char fndwrds[17];
	int jumlahkata;
	int x;
	char word[17][17] =	{{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n',},
						{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b',},
						{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r',},
						{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i',},
						{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c',},
						{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k',},
						{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a',},
						{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b',},
						{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r',},
						{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c',},
						{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y',},
						{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g',},
						{'m','o','s','g','z','c','z','d','t','d','b','o','o','t','o',},
						{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z',},
						{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a','\0'}};
				
				cout<<endl<<endl;		
	for (int i=0;i<=16;i++){
		for (int j=0;j<=16;j++){
			cout<<" "<<word[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0;i<=19;i++){
		jumlahkata=0;
		cout<<endl<<" Masukkan Kata Yang Akan Dicari Pada Program Find Words : ";
		cin.getline(fndwrds,sizeof(fndwrds));
		
		for(int x=0;fndwrds[x];x++){
			jumlahkata=jumlahkata+1;
		}
		for(int j=0;j<=16;j++){
			for(int k=0;k<=16;k++){
				if (fndwrds[0]==word[j][k]){
					for(int l=0;l<=jumlahkata;l++){
						if(fndwrds[l+1]==word[j][k+1]){
							if(l==jumlahkata){
								cout<<"Ada"<<endl;
								break;
							}
						}else{
							cout<<"Tidak Ada"<<endl;
							break;
						}
					}
				}
			}
		}
	}

	/*for (int h=1;h<=19;h++){
		jumlahkata=0;
		cout<<endl<<" Masukkan Kata Yang Akan Dicari = ";
		cin.getline(fndwrds,sizeof(fndwrds));
	
		for(int x=0;fndwrds[x];x++){
			jumlahkata=jumlahkata+1;
		}
		cout<<jumlahkata;
		for(int i=0;i<=jumlahkata;i++){
			cout<<fndwrds[i];
		}
	}*/
	 return 0;
}
