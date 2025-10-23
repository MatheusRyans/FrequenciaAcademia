#include <iostream>

using namespace std;

string nome;
int TreinosSemanais;

void cadastrarAluno(){
	string nome;
	int TreinosSemanais;
	
	cout<<"Digite o nome do aluno:"<<endl;
	cin>>nome;
	cout<<"Digite a quantidade de treinos semanais"<<endl;
	cin>>TreinosSemanais;
}


void listarAlunos(){
	
	
	if(TreinosSemanais < 3 ){
		cout<<"Frequencia Baixa"<<endl;
		
	}
	else if(TreinosSemanais < 5 && TreinosSemanais > 2 ){
		cout<<"Frequencia Regular"<<endl;
		
	}
		if(TreinosSemanais > 4 ){
		cout<<"Frequencia excelente"<<endl;
		
	}
	
	
}


int main(){
	string nome;
	int TreinosSemanais;
	int op;
	
	do{
		cout<<"1. Cadastrar Aluno"<<endl;
		cout<<"2. Listar Frequencia"<<endl;
		cout<<"3. Sair"<<endl;
		cin>>op;
		
		switch(op){
			
			case 1:
				cadastrarAluno();
				break;
			
			case 2:
				listarAlunos();
				break;
			
			case 3:
				cout<<"Saindo do programa..." ;
				break;
		}
	}while(op!=3);                   
	
}