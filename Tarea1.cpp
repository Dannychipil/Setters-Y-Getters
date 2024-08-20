// Tarea1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale.h>


class Carro { //1ra Clase 
private:

    std::string Marca;
    std::string tiposDeFreno;
    std::string Traccion;
    std::string Transmision;
    std::string tipoDeAsientos;
    std::string tipoDeCombustible;
    std::string Suspension;
    std::string Modelo;
    std::string Color;
    std::string numDePuertas;
    int Precio;
    int capacidadDePasajeros;
    int Potencia;
    int Anio;
    int Cilindraje;

public:
    

    //Constructor
    Carro(std::string Modelo, std::string Color, std::string numDePuertas, std::string Marca, std::string tiposDeFreno, std::string Traccion, std::string Transmision,
        std::string tipoDeAsientos, std::string tipoDeCombustible, std::string Suspension, int Precio, int capacidadDePasajeros, int Potencia, int Anio, int Cilindraje) :
        Modelo(Modelo), Color(Color), numDePuertas(numDePuertas), Marca(Marca), tiposDeFreno(tiposDeFreno), Traccion(Traccion), Transmision(Transmision), tipoDeAsientos(tipoDeAsientos),
        tipoDeCombustible(tipoDeCombustible), Suspension(Suspension), Precio(Precio), capacidadDePasajeros(capacidadDePasajeros), Potencia(Potencia), Anio(Anio), Cilindraje(Cilindraje){}
    
    //Funcion 1
    void setModelo(std::string Modelo) {
        this-> Modelo = Modelo;
    }
    //Funcion 2
    void setColor(std::string Color) {
        this-> Color = Color;
    }
    //Funcion 3
    void setnumDePuertas(std::string numDePuertas) {
        this-> numDePuertas = numDePuertas;
    }
    //Funcion 4
    void setMarca(std::string Marca) {
        this->Marca = Marca;
    }
    //Funcion 5
    void settiposDeFreno(std::string tiposDeFreno) {
        this->tiposDeFreno = tiposDeFreno;
    }
    //Funcion 6
    void setTraccion(std:: string Traccion) {
        this->Traccion = Traccion;
    }
    //Funcion 7
    void setTransmision(std:: string Transmision) {
        this->Transmision = Transmision;
    }
    //Funcion 8
    void settipoDeAsientos(std:: string tipoDeAsientos) {
        this->tipoDeAsientos = tipoDeAsientos;
    }
    //Funcion 9
    void settipoDeCombustible(std:: string tipoDeCombustible) {
        this->tipoDeCombustible = tipoDeCombustible;
    }
    //Funcion 10
    void setSuspension(std:: string Suspension) {
        this->Suspension = Suspension;
    }
    //Funcion 11
    void setPrecio(int Precio) {
        this->Precio = Precio;
    }
    //Funcion 12
    void setcapacidadDePasajeros(int capacidadDePasajeros) {
        this->capacidadDePasajeros = capacidadDePasajeros;
    }
    //Funcion 13
    void setPotencia(int Potencia) {
        this->Potencia = Potencia;
    }
    //Funcion 14
    void setAnio(int Anio) {
        this->Anio = Anio;
    }
    //Funcion 15
    void setCilindraje(int Cilindraje) {
        this->Cilindraje = Cilindraje;
    }

    std::string getModelo() const {
        return Modelo;
    }
    std::string getColor() const {
        return Color;
    }
    std::string getNumDePuertas() const {
        return numDePuertas;
    }
    std::string getMarca() const {
        return Marca;
    }
    std::string getTiposDeFreno() const {
        return tiposDeFreno;
    }
    std::string getTraccion() const {
        return Traccion;
    }
    std::string getTransmision() const {
        return Transmision;
    }
    std::string getTipoDeAsientos() const {
        return tipoDeAsientos;
    }
    std::string getTipoDeCombustible() const {
        return tipoDeCombustible;
    }
    std::string getSuspension() const {
        return Suspension;
    }
    int getPrecio() const {
        return Precio;
    }
    int getCapacidadDePasajeros() const {
        return capacidadDePasajeros;
    }
    int getPotencia() const {
        return Potencia;
    }
    int getAnio() const {
        return Anio;
    }
    int getCilindraje() const {
        return Cilindraje;
    }

    void mostrarCarro() const {
        std::cout << "Carro: " << "\n\n"
            << "Modelo: " << Modelo << "\n"
            << "Color: " << Color << "\n"
            << "Numero De Puertas: " << numDePuertas << "\n"
            << "Marca: " << Marca << "\n"
            << "Tipos De Frenos: " << tiposDeFreno << "\n"
            << "Traccion: " << Traccion << "\n"
            << "Transmision: " << Transmision << "\n"
            << "Tipos De Asiento: " << tipoDeAsientos << "\n"
            << "Tipo De Combustibles: " << tipoDeCombustible << "\n"
            << "Suspension: " << Suspension << "\n"
            << "Precio: " << Precio << "\n"
            << "Capacidad De Pasajeros: " << capacidadDePasajeros << "\n"
            << "Potencia: " << Potencia << "\n"
            << "Año: " << Anio << "\n"
            << "Cilindraje: " << Cilindraje << "\n";
    }


};








//2da Clase

class Duki {
private:

    std::string Apellidos;
    std::string Name;
    std::string Pareja;
    std::string Cumpleanios;
    std::string Pais;
    std::string tipoDeMusica;
    std::string fechaDebut;
    std::string lugarDeNacimiento;
    int numDePremios;
    int Albumes;
    int numDeTatuajes;
    int Edad;
    int numDeDiscos;
    std::string Followers;
    int Reproducciones;

public:

    //Constructor
    Duki(std::string Apellidos, std::string Name, std::string Pareja, std::string Cumpleanios, std::string Pais, std::string tipoDeMusica, std::string fechaDebut,
        std::string lugarDeNacimiento, int numDePremios, int Albumes, int numDeTatuajes, int Edad, int numDeDiscos, std::string Followers, int Reproducciones) :
        Apellidos(Apellidos), Name(Name), Pareja(Pareja), Cumpleanios(Cumpleanios), Pais(Pais), tipoDeMusica(tipoDeMusica), fechaDebut(fechaDebut), lugarDeNacimiento(lugarDeNacimiento),
        numDePremios(numDePremios), Albumes(Albumes), numDeTatuajes(numDeTatuajes), Edad(Edad), numDeDiscos(numDeDiscos), Followers(Followers), Reproducciones(Reproducciones) {}

    //Funcion Setters

    void setApellidos(std::string Apellidos) {
        this->Apellidos = Apellidos;
    }

    void setName(std::string Name) {
        this->Name = Name;
    }

    void setPareja(std::string Pareja) {
        this->Pareja = Pareja;
    }

    void setCumpleanios(std::string Cumpleanios) {
        this->Cumpleanios = Cumpleanios;
    }

    void setPais(std::string Pais) {
        this->Pais = Pais;
    }

    void settipoDeMusica(std::string tipoDeMusica) {
        this->tipoDeMusica = tipoDeMusica;
    }

    void setfechaDebut(std::string fechaDebut) {
        this->fechaDebut = fechaDebut;
    }

    void setlugarDeNacimiento(std::string lugarDeNacimiento) {
        this->lugarDeNacimiento = lugarDeNacimiento;
    }

    void setnumDePremios(int numDePremios) {
        this->numDePremios = numDePremios;
    }

    void setAlbumes(int Albumes) {
        this->Albumes = Albumes;
    }

    void setnumDeTatuajes(int numDeTatuajes) {
        this->numDeTatuajes = numDeTatuajes;
    }

    void setEdad(int Edad) {
        this->Edad = Edad;
    }

    void setnumDeDiscos(int numDeDiscos) {
        this->numDeDiscos = numDeDiscos;
    }

    void setFollowers(std::string Followers) {
        this->Followers = Followers;
    }

    void setReproducciones(int Reproducciones) {
        this->Reproducciones = Reproducciones;
    }

    //Funcion Getters

    std::string getApellidos() const {
        return Apellidos;
    }

    std::string getName() const {
        return Name;
    }

    std::string getPareja() const {
        return Pareja;
    }

    std::string getCumpleanios() const {
        return Cumpleanios;
    }

    std::string getPais() const {
        return Pais;
    }

    std::string gettipoDeMusica() const {
        return tipoDeMusica;
    }

    std::string getfechaDebut() const {
        return fechaDebut;
    }

    std::string getlugarDeNacimiento() const {
        return lugarDeNacimiento;
    }

    int getnumDePremios() const {
        return numDePremios;
    }

    int getAlbumes() const {
        return Albumes;
    }

    int getnumDeTatuajes() const {
        return numDeTatuajes;
    }

    int getEdad() const {
        return Edad;
    }

    int getnumDeDiscos() const {
        return numDeDiscos;
    }

    std::string getFollowers() const {
        return Followers;
    }

    int getReproducciones() const {
        return Reproducciones;
    }

    void mostrarDuki() const {
        std::cout << "Duki: " << "\n\n"
            << "Apellidos: " << Apellidos << "\n"
            << "Nombre: " << Name << "\n"
            << "Pareja: " << Pareja << "\n"
            << "Cumpleanios: " << Cumpleanios << "\n"
            << "Pais: " << Pais << "\n"
            << "Tipo De Musica: " << tipoDeMusica << "\n"
            << "Fecha Debut: " << fechaDebut << "\n"
            << "Lugar De Nacimiento: " << lugarDeNacimiento << "\n"
            << "Numero De Premios: " << numDePremios << "\n"
            << "Albumes: " << Albumes << "\n"
            << "Numero De Tatuajes: " << numDeTatuajes << "\n"
            << "Edad: " << Edad << "\n"
            << "Numero De Discos: " << numDeDiscos << "\n"
            << "Followers: " << Followers << "\n"
            << "Reproducciones: " << Reproducciones << "\n";
    }

};

//3ra Clase

class Libros {
private:

    std::string Titulo;
    std::string Autor;
    std::string Tema;
    std::string Anio;
    std::string Calificacion;
    std::string Pasta;
    std::string Ubicacion;
    std::string lenguajeOriginal;
    std::string ISBN;
    std::string Editorial;
    std::string fechaDeAdquisicion;
    int Precio;
    int NumDeEdiciones;
    bool edicionLimitada;
    int Paginas;

public:

    Libros(std::string Titulo, std::string Autor, std::string Tema, std::string Anio, std::string Calificacion, std::string Pasta, std::string Ubicacion, std::string lenguajeOriginal,
        std::string ISBN, std::string Editorial, std::string fechaDeAdquisicion, int Precio, int NumDeEdiciones, bool edicionLimitada, int Paginas) :
        Titulo(Titulo), Autor(Autor), Tema(Tema), Anio(Anio), Calificacion(Calificacion), Pasta(Pasta), Ubicacion(Ubicacion), lenguajeOriginal(lenguajeOriginal), ISBN(ISBN), Editorial(Editorial),
        fechaDeAdquisicion(fechaDeAdquisicion), Precio(Precio), NumDeEdiciones(NumDeEdiciones), edicionLimitada(edicionLimitada), Paginas(Paginas) {}


    //Funcion Setters

    void setTitulo(std::string Titulo) {
        this->Titulo = Titulo;
    }
    void setAutor(std::string Autor) {
        this->Autor = Autor;
    }
    void setTema(std::string Tema) {
        this->Tema = Tema;
    }
    void setAnio(std::string Anio) {
        this->Titulo = Anio;
    }
    void setCalificacion(std::string Calificacion) {
        this->Calificacion = Calificacion;
    }
    void setPasta(std::string Pasta) {
        this->Pasta = Pasta;
    }
    void setUbicacion(std::string Ubicacion) {
        this->Ubicacion = Ubicacion;
    }
    void setlenguajeOriginal(std::string lenguajeOriginal) {
        this->lenguajeOriginal = lenguajeOriginal;
    }
    void setISBN(std::string ISBN) {
        this->ISBN = ISBN;
    }
    void setEditorial(std::string Editorial) {
        this->Editorial = Editorial;
    }
    void setfechaDeAdquisicion(std::string fechaDeAdquisicion) {
        this->fechaDeAdquisicion = fechaDeAdquisicion;
    }
    void setPrecio(int Precio) {
        this->Precio = Precio;
    }
    void setnumDeEdiciones(int numDeEdiciones) {
        this->NumDeEdiciones = NumDeEdiciones;
    }
    void setedicionLimitada(int edicionLimitada) {
        this->edicionLimitada = edicionLimitada;
    }
    void setPaginas(int Paginas) {
        this->Paginas = Paginas;
    }

    //Funcion Getters

    std::string getTitulo() const {
        return Titulo;
    }
    std::string getAutor() const {
        return Autor;
    }
    std::string getTema() const {
        return Tema;
    }
    std::string getAnio() const {
        return Anio;
    }
    std::string getCalificacion() const {
        return Calificacion;
    }
    std::string getPasta() const {
        return Pasta;
    }
    std::string getUbicacion() const {
        return Ubicacion;
    }
    std::string getlenguajeOriginal() const {
        return lenguajeOriginal;
    }
    std::string getISBN() const {
        return ISBN;
    }
    std::string getEditorial() const {
        return Editorial;
    }
    std::string getfechaDeAdquisicion() const {
        return fechaDeAdquisicion;
    }
    int getPrecio() const {
        return Precio;
    }
    int getnumDeEdiciones() const {
        return NumDeEdiciones;
    }
    bool getedicionLimitada() const {
        return edicionLimitada;
    }
    int getPaginas() const {
        return Paginas;
    }


    void mostrarLibro() const {
        std::cout << "Omar Villalobos: " << "\n\n"
            << "Titulo: " << Titulo << "\n"
            << "Autor: " << Autor << "\n"
            << "Tema: " << Tema << "\n"
            << "Anio: " << Anio << "\n"
            << "Calificacion: " << Calificacion << "\n"
            << "Pasta: " << Pasta << "\n"
            << "Ubicacion: " << Ubicacion << "\n"
            << "Lenguaje Original: " << lenguajeOriginal << "\n"
            << "ISBN: " << ISBN << "\n"
            << "Editorial: " << Editorial << "\n"
            << "Fecha De Adquisicion: " << fechaDeAdquisicion << "\n"
            << "Precio: " << Precio << "\n"
            << "Numero De Ediciones: " << NumDeEdiciones << "\n"
            << "Edicion Limitada?: " << edicionLimitada << "\n"
            << "Numero De Paginas: " << Paginas << "\n";
    }




    

};

int main()
{
    setlocale(LC_ALL, "");

    Carro Mazda("Mx-5", "Rojo", "Dos", "Mazda", "ABS", "Trasera", "Automatica", "Piel", "Gasolina", "Aire", 519000, 2, 181, 2024, 4);
    Mazda.mostrarCarro();

    Duki Mauro("Ezequiel Lombardo", "Mauro", "Emilia Mernes", "24 De Junio", "Argentina", "Trap", "Noviembre 2016", "Buenos Aires", 12, 5, 32, 28, 7, "13.7 Millones", 258000000);
    Mauro.mostrarDuki();

    Libros serChingon("Ser Chingon Sin Ir a Harvard", "Omar Villalobos", "Social y Psicologico", "1 de Enero 2014", "4.6 Estrellas", "Blanda", "Liverpool", "Español", "9786077547648",
        "V&R Editoras: Primera edicion", "15/08/2024", 275, 1, false, 224);
    serChingon.mostrarLibro();
};

