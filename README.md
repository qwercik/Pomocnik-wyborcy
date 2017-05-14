# Pomocnik wyborcy
## Opis
Nie wiesz na kogo głosować? Ten inteligentny program wybierze kandydata twoich marzeń!
## Użycie
Najpierw musisz posiadać plik wykonywalny programu. Możesz skompilować kod ręcznie, przy użyciu narzędzia **cmake** z wykorzystaniem skryptu *CMakeLists.txt* znajdującego się w tym repozytorium, albo pobrać gotowy plik wykonywalny

Listę kandydatów definiuje się w pliku tekstowym. Każdego kandydata należy umieścić w osobnej linii i nie robić pomiędzy nimi przerw. Przykłady znajdziesz w tym repozytorium.

Następnie musisz wywołać program z linii poleceń, a jako jedyny parametr podać nazwę pliku z kandydatami.

```bash
$ ./pomocnik-wyborcy prezydenckie.txt
```

