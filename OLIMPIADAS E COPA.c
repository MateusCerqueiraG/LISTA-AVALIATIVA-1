#include <stdio.h>

int main() {
    
    int ano;

    scanf("%d", &ano);

     if (ano = ano) {
        int OLIMPIADAS = 0;
        int COPA = 0;

        if (ano == 1896 || ano == 1900 || ano == 1904 || ano == 1908 || ano == 1912 ||
            ano == 1920 || ano == 1924 || ano == 1928 || ano == 1932 || ano == 1936 ||
            ano == 1948 || ano == 1952 || ano == 1956 || ano == 1960 || ano == 1964 ||
            ano == 1968 || ano == 1972 || ano == 1976 || ano == 1980 || ano == 1984 ||
            ano == 1988 || ano == 1992 || ano == 1996 || ano == 2000 || ano == 2004 ||
            ano == 2008 || ano == 2012 || ano == 2016 || ano == 2020) {
            OLIMPIADAS = 1;
        }

        if (ano == 1930 || ano == 1934 || ano == 1938 || ano == 1950 || ano == 1954 ||
            ano == 1958 || ano == 1962 || ano == 1966 || ano == 1970 || ano == 1974 ||
            ano == 1978 || ano == 1982 || ano == 1986 || ano == 1990 || ano == 1994 ||
            ano == 1998 || ano == 2002 || ano == 2006 || ano == 2010 || ano == 2014 ||
            ano == 2018 || ano == 2022) {
            COPA = 1;
        }

        if (OLIMPIADAS && COPA) {
            printf("Os Jogos Olímpicos de Verão e a Copa do Mundo de Futebol ocorreram no ano de %d.\n", ano);
        } else if (OLIMPIADAS) {
            printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.\n", ano);
        } else if (COPA) {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
        } else {
            printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %d.\n", ano);
        }
    }

    return 0;
}