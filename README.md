# Balonik

Wykonaj program zgodnie z poniższymi wytycznymi:

Napisz klasę 'balonik', której zmiennymi prywatnymi będą 'string nazwa', 'float  wysokosc' [m] i 'float srednica' [cm].

Zdefiniuj publiczny konstruktor klasy, który umożliwi nadanie nazwy każdemu obiektowi i wyzeruje pozostałe zmienne.

Klasę należy zaopatrzyć w publiczne funkcje: do zmiany wysokości 'zmien_wysokosc' (której argumentem jest przyrost wysokości), 'zmien_srednice' (której argumentem jest nowa wartość średnicy) oraz funkcję do wyświetlania stanu balonika na ekranie.

Napisz funkcję globalną 'pompuj', służącą do pompowania baloników, której argumentami będą obiekt typu 'balonik' oraz ilość wtłaczanego powietrza [cm^2] (symulacja na płaszczyźnie, dlatego jednostka powierzchni zamiast objętości). Funkcja powinna przeliczać ilość powietrza (powierzchnię) na średnicę balonika na podstawie wzoru na pole koła.

Funkcja 'pompuj' musi modyfikować średnicę obiektu klasy 'balonik' za pomocą funkcji składowej 'zmien_srednice', ponieważ zmienna 'srednica' jest składnikiem prywatnym.

Dodaj ograniczenia, które zabezpieczą średnicę i wysokość baloników przed wystąpieniem ujemnych wartości.

Zdefiniuj trzy obiekty klasy 'balonik' - 'czerwony', 'zielony' i 'niebieski'. Nadaj im odpowiednie nazwy tekstowe oraz zademonstruj działanie powyższych funkcji.

Podziel projekt na pliki 'main.cpp', plik nagłówkowy 'balonik.h' i plik definicji 'balonik.cpp'


Funkcje powinny wyświetlać na ekranie np. takie informacje:

Tu balonik "zielony" - mam 20 cm srednicy i jestem na wysokosci 15 m
Tu balonik "czerwony" - mam 30 cm srednicy i jestem na wysokosci 10 m

Dla ambitnych:

Zmodyfikuj klasę lub funkcję tak, żeby baloniki mogły być przez nią "dopompowywane", a nie tylko napełniane od zera. Zauważ, że w takim przypadku przyrost ilości powietrza (powierzchni) nie jest wprost proporcjonalny do przyrostu średnicy. Należy zatem aktualną średnicę przeliczyć na powierzchnię, dodać przyrost powierzchni ("dopompowanie") i obliczyć nową średnicę.

Zmodyfikuj klasę lub funkcję tak, żeby funkcja globalna "pompuj" wyświetlała na ekranie nazwę balonika, który pompuje (nazwa jest składnikiem prywatnym i funkcja globalna nie ma do niej bezpośredniego dostępu).

Wykonaj interfejs użytkownika w postaci menu wielokrotnego wyboru. Pierwsza opcja powinna umożliwiać wybór balonika określonego koloru, a kolejne opcje pompowanie lub zmianę wysokości.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Execute the program according to the following guidelines:

Write a class 'balloon' whose private variables will be 'string name', 'float height' [m] and 'float diameter' [cm].

Define a public constructor for the class, which will allow you to give a name to each object and zero the other variables.

Provide the class with public functions: to change the height 'variable_height' (whose argument is the height increment), 'variable_diameter' (whose argument is the new diameter value) and a function to display the state of the balloon on the screen.

Write a global function 'pump' for pumping balloons, whose arguments will be an object of type 'balloon' and the amount of injected air [cm^2] (simulation on a plane, therefore unit of area instead of volume). The function should convert the amount of air (surface area) to the diameter of the balloon based on the circle area formula.

The 'pump' function must modify the diameter of the object of class 'balloon' using the component function 'variable_diameter', since the variable 'diameter' is a private component.

Add constraints to protect the diameter and height of balloons from negative values.

Define three objects of class 'balloon' - 'red', 'green' and 'blue'. Give them appropriate text names and demonstrate the operation of the above functions.

Divide the project into files 'main.cpp', header file 'balloon.h' and definition file 'balloon.cpp'.


The functions should display information like this on the screen, for example:

Here the balloon "green" - I have a diameter of 20 cm and I am at a height of 15 m
Here balloon "red" - I have 30 cm in diameter and I am at a height of 10 m

For the ambitious:

Modify the class or function so that balloons can be "inflated" by it, not just filled from zero. Note that in this case, the increase in air volume (area) is not directly proportional to the increase in diameter. It is therefore necessary to convert the current diameter to area, add the increase in area ("pumping up") and calculate the new diameter.

Modify the class or function so that the global function "pump" displays the name of the balloon it is pumping on the screen (the name is a private component and the global function does not have direct access to it).

Make the user interface a multiple choice menu. The first option should allow you to select a balloon of a certain color, and the subsequent options to pump or change the height.
