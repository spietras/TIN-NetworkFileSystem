# network-file-system

Aplikacje klienta i serwera obsługujące prosty protokół NFS

## Budowanie

Z poziomu katalogu głównego:

```
./build.sh {client, server, mynfslib}
```

Utworzy się katalog ```cmake-build```, którym przechowywane będą pliki pośrednie budowania.

Pliki wykonywalne są umieszczone bezpośrednio w katalogach projektu, np. ```server/bin```.

## Zadania

| Status | Opis | Trudność | Kto |
|:------:|------|----------|:---:|
| :heavy_check_mark: | interfejs klienta (interakcja z użytkownikiem, wywoływanie funkcji bibliotecznych i reagowanie na nie) | :skull: | [Weronika](https://github.com/wpaszko) |
| :heavy_check_mark: | dokończenie biblioteki, zrobienie wszystkich funkcji, reagowanie na błędy w Reply | :skull: | [Weronika](https://github.com/wpaszko) |
| :heavy_check_mark: | obsługa błędów w ClientEndpoint, timeouty, ponowne wysyłanie | :skull: :skull: | [Weronika](https://github.com/wpaszko) |
| :heavy_check_mark: | adresy, czyli po prostu wrappery na obsługę danych o adresie, przy okazji IpAddress w konstruktorze jak podamy stringa to wykona zapytanie do resolvera | :skull: | [Gosia](https://github.com/gorecka) |
| :heavy_check_mark: | dorobienie wszystkich Reply i Request, ich serializacja i deserializacja | :skull: :skull: | [Sebastian](https://github.com/spietras) |
| :heavy_check_mark: | serializacja i deserializacja komunikatów (Messages) | :skull: :skull: | [Sebastian](https://github.com/spietras) |
| :heavy_check_mark: | obsługa gniazda (czyli kod Socket) | :skull: :skull: | [Sebastian](https://github.com/spietras) |
| :heavy_check_mark: | implementacja handlerów czyli wykonanie żądań po stronie serwera | :skull: :skull: | [Gosia](https://github.com/gorecka) |
| :heavy_check_mark: | obsługa błędów po stronie serwera, timeouty, ponowne wysyłanie | :skull: :skull: | [Gosia](https://github.com/gorecka) |
| :heavy_check_mark: | sprawdzanie praw dostępu klientów, nadawanie naszych deskryptorów | :skull: | [Sebastian](https://github.com/spietras) |
| :heavy_check_mark: | kolejka handlerów i wątek wykonujący | :skull: :skull: :skull: | [Maciek](https://github.com/Daraniel1000) |
| :heavy_check_mark: | wrzucanie SubEndpointów na nowe wątki | :skull: | [Maciek](https://github.com/Daraniel1000) |
| :heavy_check_mark: | możliwość wyłączenia serwera i wyczyszczenia wszystkich zasobów (co może być upierdliwe, bo wątki mogą być zablokowane na czymś) | :skull: :skull: :skull: | [Maciek](https://github.com/Daraniel1000) |
