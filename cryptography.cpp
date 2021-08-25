#include <iostream>
#include <math.h>
using namespace std;
class crypto{
	public:
		int letters_index(string letters,char c){
			for(int i=0;i<letters.size();i++){
				if(letters[i]==c){
					return i;
				}
			}
		}
		string crypt(int k,string crypte_letters){
			string crypt_letter="";
			string letters="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			for(char x:crypte_letters){
				crypt_letter+=letters[(letters_index(letters,x) + k) % 26];
			}
			return crypt_letter;
		}
		void run_the_cryptage(){
			cout<<"Enter the Secret key (k) :";
			int k;cin>>k;
			cout<<"Enter word to crypt : (with capital letter please to run the cryptage ) :";
			string word;cin>>word;
			cout<<"The Crypted word : "<<crypt(k,word);
		}
};
int main(){
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t"<<"(Un)-Cryptage using Jules César method by Nasroallah(Lu$er)"<<endl;
	for(int i=0;i<10;i++){
		cout<<"-----";
	}
	cout<<endl;
	cout<<"1.Crypt a word"<<endl;
	cout<<"2.UnCrypt a word"<<endl;
	cout<<"3.exit"<<endl;
	for(int i=0;i<10;i++){
		cout<<"-----";
	}
	cout<<endl;
	int choice;cin>>choice;
	if(choice==3){
		cout<<"Thank you !";
		return 0;
	}
	if(choice==1){
		crypto user;
		user.run_the_cryptage();
		return main ();
	}
}