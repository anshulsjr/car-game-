#include <iostream>
#include <iomanip>

using namespace std;

const int height = 10;
const int width = 10;

int m=2;
int a;
int b;
int ocx;
int ocy;

bool over;


void Draw();
void setup();
void logic();
void status();

int main(){
	
	setup();
	
	while(!over)
	{
		Draw();
		status();
		logic();
		
	}
	return 0;
	
}

void Draw() {
	
	for(int i=0; i<height; i++){
	for(int j=0; j<width; j++){
	
	if(j == 0)
	cout<<"$";
	
	
	if(i ==b && j ==a)
	cout<<"0";
	else if(i ==ocx && j ==ocy)
	cout<<"^";
	else cout<<"   ";
	
	if(j==width-1)
	cout<<"$";}
	
	cout<<endl;

}
	
for(int i =0; i<8;i++)
cout<<"$";
cout<<endl;
cout<<endl;
}
void status() {
  if(ocx==b && ocy==a) {
cout<<"GAME OVER";
over =true; }}
void logic(){
	b++; q++;
if(q == 10){
	b=0; a =rand()%10; q=0; }}
	
void setup(){
	bool over =false;
	ocx = rand()%width;
	ocy = rand()%height;
	
a =0;
b =0;}


	

