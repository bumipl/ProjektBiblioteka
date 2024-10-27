# ProjektBiblioteka

Projekt, który wirtualnie odtwarza działanie biblioteki. Po uruchomieniu programu, użytkownik ma możliwość dodawania książek wraz z ich autorami. Dodatkowo, istnieje opcja tworzenia kont klientów biblioteki. Klienci mogą wypożyczać dostępne książki oraz mają dostęp do historii swoich wypożyczeń. Dzięki temu projektowi można symulować interakcje charakterystyczne dla rzeczywistej biblioteki w wirtualnym środowisku.

## Aby uruchomić program, należy:   
1.Otwórz terminal lub wiersz polecenia.

2.Wykonaj polecenie, aby sklonować repozytorium:
```bash
git clone https://github.com/Michalek111/ProjektBiblioteka.git
```
3.Uruchom Visual Studio

4.W Visual Studio wybierz `File > Open > Project/Solution` następenie przejdź do folderu ProjektBiblioteka, który sklonowałeś z Git, i znajdź plik z rozszerzeniem .sln (plik projektu Visual Studio), aby go otworzyć.

5.Upewnij się, że projekt jest gotowy do kompilacji, sprawdzając, czy w Visual Studio wszystkie pliki są poprawnie załadowane.

6.W Visual Studio kliknij `Build > Build Solution` lub naciśnij Ctrl+Shift+B, aby skompilować projek

7.Po poprawnej kompilacji kliknij Start (lub naciśnij F5) w Visual Studio, aby uruchomić projekt.

Po uruchomieniu aplikacji możesz korzystać z jej funkcji, takich jak dodawanie książek, rejestrowanie czytelników, wypożyczanie książek itp.

# Jak uruchomić aplikację w kontenerze Docker

## Wymagania wstępne

Przed rozpoczęciem upewnij się, że masz zainstalowany Docker na swoim systemie. Możesz pobrać i zainstalować Docker z oficjalnej strony: [Docker Installation](https://docs.docker.com/get-docker/).

## Krok 1: Pobierz obraz

Kod użyty do zbudowania obrazu

```Dockerfile
# Użyj obrazu bazowego z kompilatorem C++
FROM gcc:latest

# Ustaw katalog roboczy w kontenerze
WORKDIR /app

# Skopiuj wszystkie pliki źródłowe do kontenera
COPY ProjektBiblioteka/ ./

# Skonfiguruj kompilację
RUN g++ -o ProjektBiblioteka ProjektBiblioteka.cpp BookRepository.cpp FileSource.cpp LibraryMenu.cpp LibraryService.cpp MappingService.cpp User.cpp UserRepository.cpp

# Ustaw polecenie do uruchomienia aplikacji
CMD ["./ProjektBiblioteka"]
```

Aby pobrać obraz aplikacji z rejestru Docker, użyj poniższego polecenia:

```bash
docker pull bumipl/projekt-biblioteka:1.0
```
To polecenie pobierze obraz o nazwie `bumipl/projekt-biblioteka` z tagiem 1.0 z Docker Hub.

## Krok 2: Uruchom kontener

Po pobraniu obrazu możesz uruchomić kontener z aplikacją. Użyj poniższego polecenia:

```bash
docker run -it --name ProjektBiblioteka bumipl/projekt-biblioteka:1.0
```

### Wyjaśnienie polecenia:


- `docker run`: Komenda do uruchamiania nowego kontenera.
- `-it`: Flagi, które umożliwiają interaktywną sesję w terminalu. `-i` oznacza, że standardowe wejście (STDIN) będzie otwarte, a `-t` przydziela pseudo-tty.
- `--name ProjektBiblioteka`: Ustala nazwę kontenera na `ProjektBiblioteka`.
- `bumipl/projekt-biblioteka:1.0`: Określa obraz, z którego kontener ma być uruchomiony.

## Krok 3: Interakcja z aplikacją

Po uruchomieniu kontenera, aplikacja powinna być dostępna w terminalu. Możesz wprowadzać polecenia zgodnie z interfejsem aplikacji.

## Krok 4: Zatrzymanie i usunięcie kontenera

Aby zatrzymać kontener, użyj polecenia:

```bash
docker stop ProjektBiblioteka
```

Aby usunąć kontener, użyj polecenia:

```bash
docker rm ProjektBiblioteka
```
## Dodatkowe informacje

- Aby sprawdzić status uruchomionych kontenerów, użyj polecenia:

```bash
docker ps
```

- Aby zobaczyć wszystkie kontenery (w tym zatrzymane), użyj:

```bash
docker ps -a
```

