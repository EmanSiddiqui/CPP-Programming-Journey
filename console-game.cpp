#include<iostream>
using namespace std;

class Game{
	private:
		int players, yourhits=0, enemyhits=0;
	public:
	void play(){
		
		cout<<"Enter no of players"<<endl;
		cin>>players;
		
		for(int i=1; i<=players; i++){
			int n1, n2;
			cout<<"Starting Round "<<i<<endl;
			cout<<"Enter first number: "<<endl;
			cin>>n1;
			cout<<"Enter second number: "<<endl;
			cin>>n2;
			
			if(n1==n2){
				cout<<"Enemy got hit"<<endl;
				yourhits++;
			}
			else{
			cout<<"You got hit"<<endl;
			enemyhits++;
		}
		
		
		 
	}
	
	cout<<"GAME OVER....."<<endl;
		 cout<<"Final results are as follows: "<<endl;
		 
		 if(yourhits>enemyhits){
		 	cout<<"Congrats your team won:)"<<endl;
		 }
		 else if(yourhits<enemyhits){
		 	cout<<"Oops your team loss:("<<endl;
		 }
		 else{
		 	cout<<"The match is tie:|"<<endl;
		 }	
	}
};


int main(){

Game g;
g.play();


return 0;

}
