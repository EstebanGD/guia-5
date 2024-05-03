
class Animal {
public:
    void hacerSonido() {
        cout << "¡Soy un animal!" << endl;
    }
};


class Perro : public Animal {
public:
    void hacerSonido() {
        cout << "¡Guau! Soy un perro." << endl;
    }
};
