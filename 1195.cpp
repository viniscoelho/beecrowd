#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

class No{
	public:
		int valor;
		No *direito, *esquerdo;
		No ();
		No (int);
};

No::No (){
	this->direito = this->esquerdo = NULL;
}

No::No(int valor){
	this->valor = valor;
	this->direito = this->esquerdo = NULL;
}

class ArvoreBinaria {
	protected:
		No *raiz;
		void PreOrdem (No*);
		void EmOrdem (No*);
		void PosOrdem (No*);               
	public:
		ArvoreBinaria ();
		bool Vazio ();
		int Busca (int);
		void insere (int);
		void PreOrdem ();
		void EmOrdem ();
		void PosOrdem ();
};

void ArvoreBinaria::EmOrdem (No *inicio){
	if ( inicio != NULL ){
		this->EmOrdem (inicio->esquerdo);
		cout << " " << inicio->valor;
		this->EmOrdem (inicio->direito);
	}
}

void ArvoreBinaria::PreOrdem (No *inicio){
	if ( inicio != NULL ){
		cout << " " << inicio->valor;
		this->PreOrdem (inicio->esquerdo);
		this->PreOrdem (inicio->direito);
	}
}

void ArvoreBinaria::PosOrdem (No *inicio){
	if ( inicio != NULL ){
		this->PosOrdem (inicio->esquerdo);
		this->PosOrdem (inicio->direito);
		cout << " " << inicio->valor;
	}
}

ArvoreBinaria::ArvoreBinaria (){
	this->raiz = NULL;
}

bool ArvoreBinaria::Vazio (){
	return this->raiz == NULL;
}

void ArvoreBinaria::insere (int valor){
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

int main(){
	ios::sync_with_stdio(false);
	int c, t = 1, n, q;
	cin >> c;
	while ( c-- ){
		cout << "Case " << t++ << ":\n";
		cin >> q;
		ArvoreBinaria AB;
		for ( int i = 0; i < q; ++i ){
			cin >> n;
			AB.insere(n);
		}
		cout << "Pre.:"; AB.PreOrdem(); cout << "\n";
		cout << "In..:"; AB.EmOrdem(); cout << "\n";
		cout << "Post:"; AB.PosOrdem(); cout << "\n\n";
	}
	return 0;
}