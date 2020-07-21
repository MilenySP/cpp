#include  <iostream> 

using namespace std;

int main(int argc, char** argv){
	
int nota = 0;
	
    cout <<  "Ingrese la nota:" ;
    cin >> nota;
	
	cout<<endl;
	
	if(nota>100 || nota<0){
		
  cout<<"Obtuvistes una S(A++)" ;
		
		return 0;
	}
	 
	cout << endl;
	
	if(nota>=96 && nota<=100){
		
 cout<<"Obtuvistes una S(A++)" ;
	}
	
	if(nota>=91 && nota<=95){
		
 cout<<"obtuvistes una A+" ;
	}
	
	if(nota>=86 && nota<=90){
		
 cout<<"obtuvistes una A" ;
	}
	
	if(nota>=81 && nota<=85){
		
 cout<<"obtuvistes una A-" ;
	}
	
	if(nota>=76 && nota<=80){
		
 cout<<"obtuvistes una B+" ;
	}
	
	if(nota>=71 && nota<=75){
		
 cout<<"obtuvistes una B" ;
	}
	
	if(nota>=66 && nota<=70){
		
 cout<<"obtuvistes una B-" ;
	}
	
	if(nota>=61 && nota<=65){
		
 cout<<"obtuvistes una c+" ;
	}
	
	if(nota>=56 && nota<=60){
		
 cout<<"obtuvistes una c" ;
	}
	
	if(nota>=51 && nota<=55){
		
 cout<<"obtuvistes una C-" ;
	}
	
	if(nota>=46 && nota<=50){
		
 cout<<"obtuvistes una D+" ;
	}
	
	if(nota>=41 && nota<=45){
		
 cout<<"obtuvistes una D" ;
	}
	
	if(nota>=36 && nota<=40){
		
 cout<<"obtuvistes una D-" ;
	}
	
	if(nota>=31 && nota<=35){
		
 cout<<"obtuvistes una E+" ;
	}
	
	if(nota>=26 && nota<=30){
		
 cout<<"obtuvistes una E" ;
	}
	
	if(nota>=21 && nota<=25){
		
 cout<<"obtuvistes una E-" ;
	}
	
	if(nota>=16 && nota<=20){
		
 cout<<"obtuvistes una F+" ;
	}
	
	if(nota>=11 && nota<=15){
		
 cout<<"obtuvistes una F" ;
	}
	
	if(nota>=6 && nota<=10){
		
 cout<<"obtuvistes una F" ;
	}
	
	if(nota>=1 && nota<=5){
		
 cout<<"obtuvistes una F-" ; 	
	}
	
    if(nota = 0){
		
 cout<<"obtuvistes una F--" ; 	
	}	
	
	
	
	return 0;
}