# TC1030_project
Este proyecto consiste en un sistema de información integral que permite a los usuarios administrar su consumo de alimentos de manera eficiente y personalizada. Está implementado en C++ utilizando programación orientada a objetos.

## Instrucciones
1. Clonar el repositorio desde la terminal: 
```
git clone https://github.com/DulceBucio/Serpientes-Escaleras.git](https://github.com/DesireeEspinosa/TC1030_project.git
```
2. Abrir la carpeta introduciendo la dirección correcta de tu sistema:
```
cd ...\TC1030_project\Proyecto
```
3. Ejecutar el programa con alguno de los siguientes métodos:

a) Usar un IDE:

Abrir la carpeta "Proyecto" desde tu IDE.
Compilar y correr los archivos *cpp.

b) Usando la terminal (compilador g++)

Ejecutar el siguiente comando en la terminal:

```
g++ *.cpp -o program
```
Después, leer el programa generado con el siguiente comando:
```
./program
```
4. Después de correr exitosamente el programa, registrate para hacer uso de los servicios de la aplicación con la opción desplegada en el menú.

5. Inicia sesión con tu identificador de usuario.

6. Introduce los datos solicitados: nombre, estatura, peso y edad.
  
7. Solicita los menús que desees.

8. Genera reportes de distinto tipo si los necesitas.

¡Cuída de tu salud de la manera más práctica con VidaSana!

## Clases
El sistema se compone de las siguientes clases:
- Alimento
- Grupo
- Menu
- Persona
- Usuario
- MyApp  

- Alimento  
La clase "Alimento" representa un alimento en el sistema de administración del consumo de alimentos. Tiene los siguientes métodos miembros:
The class has the following member methods:
  - Alimento(): Este es el constructor por defecto de la clase Alimento. Inicializa un alimento con el tipo y las calorías por 100 gramos por defecto.
  - Alimento(const string& nombre, float caloriasPor100): Este constructor permite crear un objeto Alimento especificando el nombre y las calorías por 100 gramos.
  - Alimento(const Alimento& alimentoCopy): Este es el constructor de copia de la clase Alimento. Crea un nuevo objeto Alimento con el mismo nombre y calorías por 100 gramos que el objeto Alimento dado.
  - Alimento(ifstream& file): Este constructor lee los datos de un archivo .csv para inicializar un objeto Alimento.
  - string getNombre() const: Este método devuelve el nombre del alimento.
  - float getCaloriasPor100() const: Este método devuelve las calorías por 100 gramos del alimento.
  - void setNombre(const string& nombre): Este método establece el nombre del alimento.
  - void setCaloriasPor100(float caloriasPor100): Este método establece las calorías por 100 gramos del alimento.
  - friend ostream& operator<<(ostream& os, const Alimento& alimento): Sobrecarga del operador << para imprimir el alimento en la consola.

- Grupo  
La clase "Grupo" representa un grupo de alimentos en el sistema de administración del consumo de alimentos. Tiene los siguientes métodos miembros:
  - Grupo(int, int): Este constructor crea un grupo de alimentos a partir de un rango de índices. Recibe el índice de inicio y el índice de fin para seleccionar los alimentos del catálogo.
  - ~Grupo(): Este es el destructor de la clase Grupo.
  - Alimento getAlimento(int i): Este método devuelve el alimento en la posición i del grupo.
  - string getNombre(): Este método devuelve el nombre del primer alimento en el grupo.
  - float getCaloriasPor100(): Este método devuelve las calorías por 100 gramos del primer alimento en el grupo.
  - void generarGrupo(vector<Alimento>& nombreGrupo, int inicio): Este método genera un subgrupo de alimentos a partir del grupo actual. Recibe un vector de alimentos para almacenar el subgrupo y el índice de inicio.
  - void printAlimentos(): Este método imprime los nombres y las calorías por 100 gramos de todos los alimentos en el grupo.

 - Menu  
La clase "Menu" representa un menú de comidas en el sistema de administración del consumo de alimentos. Tiene los siguientes métodos miembros:
   - Menu(): Este es el constructor por defecto de la clase Menu. Inicializa un menú sin parámetros.
   - Menu(int): Este constructor crea un menú a partir de un límite de calorías. Recibe el límite de calorías para el menú.
   - ~Menu(): Este es el destructor de la clase Menu.
   - string getFechaCreacion() const: Este método devuelve la fecha de creación del menú.
   - string getHoraCreacion() const: Este método devuelve la hora de creación del menú.
   - int getCaloriasContadas() const: Este método devuelve el conteo calórico total del menú.
   - void crearDesayuno(int limCalorias): Este método crea el desayuno del menú. Recibe el límite de calorías para el desayuno.
   - void crearComida(int limCalorias): Este método crea la comida del menú. Recibe el límite de calorías para la comida.
   - void crearCena(int limCalorias): Este método crea la cena del menú. Recibe el límite de calorías para la cena.
   - void crearMenu(int limCalorias): Este método crea el menú completo. Recibe el límite de calorías total para el menú.
   - vector<Alimento*> getDesayuno() const: Este método devuelve el desayuno del menú como un vector de punteros a objetos Alimento.
   - vector<Alimento*> getComida() const: Este método devuelve la comida del menú como un vector de punteros a objetos Alimento.
   - vector<Alimento*> getCena() const: Este método devuelve la cena del menú como un vector de punteros a objetos Alimento.
   - friend ostream& operator<<(ostream& os, const Menu& menu): Sobrecarga del operador << para imprimir el menú en la consola.

- Persona  
La clase "Persona" representa a una persona en el sistema de administración del consumo de alimentos. Tiene los siguientes métodos miembros:
  - Persona(): Este es el constructor por defecto de la clase Persona. Inicializa una persona sin parámetros.
  - Persona(const string& nombre, int edad, float peso, float altura): Este constructor crea una persona con los datos especificados. Recibe el nombre, la edad, el peso y la altura de la persona.
  - ~Persona(): Este es el destructor de la clase Persona.
  - string getNombre() const: Este método devuelve el nombre de la persona.
  - int getEdad() const: Este método devuelve la edad de la persona.
  - float getPeso() const: Este método devuelve el peso de la persona.
  - float getAltura() const: Este método devuelve la altura de la persona.
  - void setNombre(const string& nombre): Este método establece el nombre de la persona.
  - void setEdad(int edad): Este método establece la edad de la persona.
  - void setPeso(float peso): Este método establece el peso de la persona.
  - void setAltura(float altura): Este método establece la altura de la persona.
  - float calcularIMC() const: Este método calcula el índice de masa corporal (IMC) de la persona.

- Usuario  
La clase "Usuario" representa a un usuario en el sistema de administración del consumo de alimentos. Hereda de la clase Persona y agrega funcionalidades adicionales. Tiene los siguientes métodos miembros:
  - Usuario(string nombreUsuario): Este constructor crea un usuario con el nombre de usuario especificado. Recibe el nombre de usuario.
  - Usuario(): Este es el constructor por defecto de la clase Usuario. Inicializa un usuario sin parámetros.
  - Usuario(const Menu& menu): Este constructor crea un usuario con el menú especificado. Recibe un objeto Menu.
  - ~Usuario(): Este es el destructor de la clase Usuario.
  - string getNombreUsuario() const: Este método devuelve el nombre de usuario del usuario.
  - vector<Menu> getMenus() const: Este método devuelve los menús del usuario como un vector de objetos Menu.
  - float getAltura() const: Este método devuelve la altura de la persona.
  - void setNombreUsuario(string nombreUsuario): Este método establece el nombre de usuario del usuario.
  - void implementarMenu(): Este método permite al usuario crear un menú personalizado.
  - void verHistorial(): Este método muestra el historial de menús del usuario.
  - int recomendarCalorias(): Este método recomienda el número de calorías diarias para el usuario.
 
- MyApp 
La clase "MyApp" representa la aplicación del sistema de administración del consumo de alimentos. Gestiona todas las operaciones de la aplicación. Tiene los siguientes métodos miembros:
  - MyApp(): Este es el constructor por defecto de la clase MyApp. Inicializa la aplicación sin parámetros.
  - ~MyApp(): Este es el destructor de la clase MyApp.
  - void registrarDatos(Usuario usuario): Este método permite al usuario registrar sus datos personales.
  - void recomendarMenu(Usuario& usuario): Este método recomienda un menú personalizado para el usuario.
  - void generarReporteCompleto(Usuario usuario): Este método genera un informe completo del usuario.
  - void generarReporteMensual(Usuario usuario): Este método genera un informe mensual del usuario.
  - void generarReporteDiario(Usuario usuario): Este método genera un informe diario del usuario.
  - void generarReporteAnual(Usuario usuario): Este método genera un informe anual del usuario.
  - void generarReporteCalorico(Usuario usuario): Este método genera un informe calórico del usuario.
  - void menuPrincipal(): Este método muestra el menú principal de la aplicación.
  - void menuUsuario(Usuario& usuario): Este método muestra el menú de opciones para un usuario específico.
 
## Créditos
El programa "Modelado de un sistema de administración del consumo de alimentos" fue desarrollado por Dulce Nahomi Bucio Rivas y Desirée Espinosa Contreras como parte de un proyecto de programación en C++.
