#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    // Aktuelle Zeit holen
    time(&rawtime);

    // In lokale Zeit umwandeln
    timeinfo = localtime(&rawtime);

    // Zeit formatieren: %Z = Zeitzonenname, %z = numerische Zeitzone
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S %Z %z", timeinfo);

    printf("Aktuelles Datum mit Zeitzone: %s\n", buffer);

    return 0;
}
