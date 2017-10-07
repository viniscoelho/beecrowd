#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int qtd = 0;

class No{
	public:
		char valor;
		No *direito, *esquerdo;
		No ();
		No (char);
};

No::No (){
	this->direito = this->esquerdo = NULL;
}

No::No(char valor){
	this->valor = valor;
	this->direito = this->esquerdo = NULL;
}

class ArvoreBinaria {
	protected:
		No *raiz;
		bool Busca (No*, char);
		void PreOrdem (No*);
		void EmOrdem (No*);
		void PosOrdem (No*);               
	public:
		ArvoreBinaria ();
		bool Vazio ();
		bool Busca (char);
		void insere (char);
		void PreOrdem ();
		void EmOrdem ();
		void PosOrdem ();
};

void ArvoreBinaria::EmOrdem (No *inicio){
	if ( inicio != NULL ){
		this->EmOrdem (inicio->esquerdo);
		if ( !qtd ) cout << inicio->valor;
		else cout << " " << inicio->valor;
		qtd++;
		this->EmOrdem (inicio->direito);
	}
}

void ArvoreBinaria::PreOrdem (No *inicio){
	if ( inicio != NULL ){
		if ( !qtd ) cout << inicio->valor;
		else cout << " " << inicio->valor;
		qtd++;
		this->PreOrdem (inicio->esquerdo);
		this->PreOrdem (inicio->direito);
	}
}

void ArvoreBinaria::PosOrdem (No *inicio){
	if ( inicio != NULL ){
		this->PosOrdem (inicio->esquerdo);
		this->PosOrdem (inicio->direito);
		if ( !qtd ) cout << inicio->valor;
		else cout << " " << inicio->valor;
		qtd++;
	}
}

ArvoreBinaria::ArvoreBinaria (){
	this->raiz = NULL;
}

bool ArvoreBinaria::Vazio (){
	return this->raiz == NULL;
}

void ArvoreBinaria::insere (char valor){
	No *tmp = this->raiz;
	No *ant = NULL;

	while ( tmp != NULL ){
		ant = tmp;
		if ( tmp->valor <= valor ) tmp = tmp->direito;
		else tmp = tmp->esquerdo;
	}

	if ( this->Vazio() ) this->raiz = new No (valor);
	else if (ant->valor <= valor) ant->direito = new No (valor);
	else ant->esquerdo = new No (valor);
}

void ArvoreBinaria::PreOrdem (){
	PreOrdem (this->raiz);
}

void ArvoreBinaria::EmOrdem (){
	EmOrdem (this->raiz);
}

void ArvoreBinaria::PosOrdem (){
	PosOrdem (this->raiz);
}

bool ArvoreBinaria::Busca (No *inicio, char valor) {
	while ( inicio != NULL ){
		if ( valor == inicio->valor ) return true;
		else if ( valor < inicio->valor ) inicio = inicio->esquerdo;
		else inicio = inicio->direito;
	}
	return false;
}

bool ArvoreBinaria::Busca (char valor){
    return Busca (this->raiz, valor);
}

int main(){
	ios::sync_with_stdio(false);
	string a;
	int c, n, q;
	char l;
	ArvoreBinaria AB;
	while ( cin >> a ){
		if ( a == "INFIXA" ) AB.EmOrdem();
		else if ( a == "PREFIXA" ) AB.PreOrdem();
		else if ( a == "POSFIXA" ) AB.PosOrdem();
		else if ( a == "I" ){
				cin >> l;
				AB.insere(l);
		}
		else if ( a == "P" ){
				cin >> l;
				if ( AB.Busca(l) ) cout << l << " existe";
				else cout << l << " nao existe";
		}
		if ( a != "I" ) cout << "\n";
		qtd = 0;
	}
	return 0;
}