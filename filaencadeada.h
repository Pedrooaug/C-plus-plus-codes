// Fila Dinâmica = Dynamic Queue

typedef int Tipo;

class No
{
  public:
  Tipo valor;
  No* proximo;
};

class filaencadeada{ 

    private:
    No* primeiro; 
    No* ultimo;

    public:
    filaencadeada(); 
    ~filaencadeada();   
    bool estavazio(); 
    void push(Tipo elemento); 
    Tipo pop(); 
    void print(); 
  
};