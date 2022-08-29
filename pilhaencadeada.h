typedef int Tipo;
struct No
{
    Tipo valor;
    No* proximo;
};

class pilha {
    private:
    No* topo;    
    
    public:
    pilha();
    ~pilha();
    void push(Tipo elemento);
    Tipo pop();
   // bool cheia();
    bool vazia();
    void print();








};