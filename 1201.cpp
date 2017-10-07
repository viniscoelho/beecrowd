#include <iostream>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <tr1/unordered_map>
#define mp make_pair

using namespace std;
using namespace tr1;

int qtd = 0;

class No{
	public:
		int valor;
		No *direito, *esquerdo, *pai;
		No ();
		No (int);
};

No::No(){
	this->direito = this->esquerdo = this->pai = NULL;
}

No::No( int valor ){
	this->valor = valor;
	this->direito = this->esquerdo = this->pai = NULL;
}

class ArvoreBinaria{
	protected:
		No *raiz;
		bool Busca (No*, int);
		void PreOrdem (No*);
		void EmOrdem (No*);
		void PosOrdem (No*); 
		void Remove (No*, No*, int);
		void Remover(No*);
	public:
		ArvoreBinaria();
		~ArvoreBinaria();
		bool Vazio ();
		bool Busca (int);
		void Insere (int);
		void PreOrdem ();
		void EmOrdem ();
		void Remove (int);
		void PosOrdem ();
};

ArvoreBinaria::ArvoreBinaria(){
	raiz = new No(-1);
}

ArvoreBinaria::~ArvoreBinaria(){
    Remover(raiz);
}

void ArvoreBinaria::Remover(No *raiz){
    if ( raiz ){
        Remover(raiz->esquerdo);
        Remover(raiz->direito);
        delete raiz;
    }
}

void ArvoreBinaria::EmOrdem( No *inicio ){
	if ( inicio != NULL ){
		this->EmOrdem (inicio->esquerdo);
		if ( !qtd && inicio->valor != -1 ) cout << inicio->valor;
		else if ( qtd && inicio->valor != -1 ) cout << " " << inicio->valor;
		if ( inicio->valor != -1 ) qtd++;
		this->EmOrdem (inicio->direito);
	}
}

void ArvoreBinaria::EmOrdem(){
	EmOrdem (this->raiz);
}

void ArvoreBinaria::PreOrdem( No *inicio ){
	if ( inicio != NULL ){
		if ( !qtd && inicio->valor != -1 ) cout << inicio->valor;
		else if ( qtd && inicio->valor != -1 ) cout << " " << inicio->valor;
		if ( inicio->valor != -1 ) qtd++;
		this->PreOrdem (inicio->esquerdo);
		this->PreOrdem (inicio->direito);
	}
}

void ArvoreBinaria::PreOrdem(){
	PreOrdem (this->raiz);
}

void ArvoreBinaria::PosOrdem( No *inicio ){
	if ( inicio != NULL ){
		this->PosOrdem (inicio->esquerdo);
		this->PosOrdem (inicio->direito);
		if ( !qtd && inicio->valor != -1 ) cout << inicio->valor;
		else if ( qtd && inicio->valor != -1 ) cout << " " << inicio->valor;
		if ( inicio->valor != -1 ) qtd++;
	}
}

void ArvoreBinaria::PosOrdem(){
	PosOrdem (this->raiz);
}

void ArvoreBinaria::Insere( int valor ){
	No *tmp = this->raiz;
	No *ant = NULL;
	while ( tmp != NULL ){
		ant = tmp;
		if ( tmp->valor <= valor ) tmp = tmp->direito;
		else tmp = tmp->esquerdo;
	}

	if ( ant->valor <= valor ){
		ant->direito = new No (valor);
		ant->direito->pai = ant;
	}
	else{
		ant->esquerdo = new No (valor);
		ant->esquerdo->pai = ant;
	}
}

bool ArvoreBinaria::Busca( No *inicio, int valor ){
	while ( inicio != NULL ){
		if ( valor == inicio->valor ) return true;
		else if ( valor < inicio->valor ) inicio = inicio->esquerdo;
		else inicio = inicio->direito;
	}
	return false;
}

bool ArvoreBinaria::Busca( int valor ){
    return Busca (this->raiz, valor);
}

void ArvoreBinaria::Remove( No *current, No *parent, int delnode ){
    if ( delnode < current->valor ) Remove(current->esquerdo, current, delnode);
    else if ( delnode > current->valor ) Remove(current->direito, current, delnode);
    else if ( delnode == current->valor ){
        if ( current->esquerdo == NULL ){
            if ( parent->valor > current->valor ) parent->esquerdo = current->direito;
            else parent->direito = current->direito;
        }
        else if ( current->direito == NULL ){
            if ( parent->valor > current->valor ) parent->esquerdo = current->esquerdo;
            else parent->direito = current->esquerdo;
        }
        else{
            No *temp;
            int flag = 0;
			parent = current;
            current = current->esquerdo;
            temp = current;
            while ( current->direito != NULL ){
                current = current->direito;
                if ( flag == 0 ) flag = 1;
                else temp = temp->direito;
            }
            parent->valor = current->valor;
            if ( flag == 0 ) parent->esquerdo = current->esquerdo;
            else temp->direito = current->esquerdo;
        }
        delete current;
    }
}

void ArvoreBinaria::Remove( int valor ){
    Remove (this->raiz, NULL, valor);
}

int main(){
	ios::sync_with_stdio(false);
	string a;
	int c, n, q;
	ArvoreBinaria AB;
	unordered_map<int, int> numb;
	unordered_map<int, int>::iterator it;
	while ( cin >> a ){
		if ( a == "INFIXA" ) AB.EmOrdem();
		else if ( a == "PREFIXA" ) AB.PreOrdem();
		else if ( a == "POSFIXA" ) AB.PosOrdem();
		else if ( a == "I" ){
				cin >> n;
				AB.Insere(n);
				numb.insert( mp(n, 1) );
		}
		else if ( a == "R" ){
				cin >> n;
				if ( numb.count(n) ){
					AB.Remove(n);
					it = numb.find(n);
					numb.erase(it);
				}
		}
		else if ( a == "P" ){
				cin >> n;
				if ( AB.Busca(n) ) cout << n << " existe";
				else cout << n << " nao existe";
		}
		if ( a != "I" && a != "R" ) cout << "\n";
		qtd = 0;
	}
	return 0;
}
