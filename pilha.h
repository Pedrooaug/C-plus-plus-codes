typedef int Tipo;
const int max = 100;

class pilha {
    private:
    int tam;
    Tipo* estrutura;

    public:
    pilha();
    ~pilha();
    bool cheia();
    bool vazia();
    void push(Tipo elemento);
    Tipo pop ();
    void print();
    int length(); 
};