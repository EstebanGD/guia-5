
class Forma {
public:
    virtual void dibujar() {
        cout << "Dibujando forma genérica." << endl;
    }
};


class Circulo : public Forma {
public:
    void dibujar() override {
        cout << "Dibujando un círculo." << endl;
    }
};

void dibujarForma(Forma* forma) {
    forma->dibujar();
}

int main() {
    Circulo circulo;
    Forma* ptrForma = &circulo;
    dibujarForma(ptrForma);
}
