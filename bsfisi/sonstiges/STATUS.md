>Projekt: Intelligente Alarmanlage - Kraut & Korn GmbH
Datei: review01
Version: 1.0
Datum: 2025-11-26
Autor: FlorianK

Ziel dieses Reviews ist die Zusammenfassung der ersten Arbeitspakete von Mebis:
- NodeMCU Eigenschaften verstehen und Anforderungen ableiten
- Arduino IDE einrichten und erste Nutzung
- Ueberwachungsplan und Prozessbeschreibung vorbereiten
- Review: Nutzwertanalyse, Entscheidungsmatrix, technische Grundlagen, Sicherheit und Integration

<details><summary>Inhalte des ersten Reviews</summary>

1) NodeMCU und Eigenschaften (30 min)
   - Mikrocontroller-Board mit WLAN (ESP8266/ESP32, je nach Board)
   - Anbindung von Sensoren/Aktoren ueber GPIO, I2C, SPI
   - Ableitung: Welche Anforderungen der Alarmanlage sind mit NodeMCU erfuellbar

2) Arduino IDE Einfuehrung (30 min)
   - Installation, Board-Manager, Port-Auswahl
   - Beispiel-Sketch kompilieren/flashen (Blink, Serial)
   - Bibliotheken verwalten (Sensors/Aktoren), schnelle Startfaehigkeit sicherstellen

3) Ueberwachungsplan & Prozessbeschreibung (20 min)
   - Review: Nutzwertanalyse, technische Grundlagen/Komponenten, Sicherheit/Integration
   - Vorbereitung Fachgespraech (Lehrkraft, Kunde)
   - Entscheidungsmatrix durchgehen und begruenden

</details>

<details><summary>Leitfragen</summary>

Nutzwertanalyse:
- Was ist die Nutzwertanalyse und warum wichtig?
- Welche Kriterien sind definiert (z. B. Kosten, Sicherheit, Erweiterbarkeit, Integration)?
- Bewertung: NodeMCU vs. Abus Smartvest vs. Aqara Camera Hub G3 nach Kriterien
- Schlussfolgerung: Welche Loesung passt am besten und warum?

Bezogspreiskalkulation:
- Warum eine uebersichtliche Bezugspreistabelle?
- Rolle der Bezugsmenge
- Einfluss von Rabatten und Skonto auf Einkaufsstrategie
- Risiko: Nur Preis beachten statt Qualitaet/Technik
- Wechselkursschwankungen beim Auslandseinkauf

Technische Grundlagen & Komponenten:
- Anforderungen der Alarmanlage fuer Kraut & Korn definieren
- Funktionsweise NodeMCU und Auswahlgruende
- Vorteile Arduino IDE fuer NodeMCU-Programmierung

Sicherheit & Integration:
- Datenschutzkonforme Verarbeitung der Sensordaten
- Bedeutung und Umsetzung von Verschluesselung (chiffrierte Mitteilungen)
- Bedrohungsszenarien Zentrallager und Sensorreaktionen
- Optimierung der Reaktionszeit
- Nutzung serieller Monitor zur Diagnose und Anzeige
- Integrationsherausforderungen (Kompatibilitaet, Timing, Stromversorgung)
- Zukunftssichere, erweiterbare Architektur

</details>

<details><summary>Checkliste fuer Review 01</summary>

- [ ] NodeMCU: Eigenschaften verstanden, Pins/Interfaces identifiziert

- [ ] Arduino IDE: Installation fertig, Board/Port korrekt eingestellt

- [ ] Test-Sketch: Serial-Ausgabe und einfacher GPIO-Test erfolgreich

- [ ] Ueberwachungsplan: Zielzustand, Prozesse, Verantwortlichkeiten skizziert

- [ ] Kriterienkatalog fuer Nutzwertanalyse: final und begruendet

- [ ] Bewertungstabelle: drei Produkte nach Kriterien verglichen

- [ ] Entscheidungsmatrix: Ergebnis und klare Begruendung dokumentiert

- [ ] Bezugspreistabelle: Struktur, Bezugsmenge, Rabatte/Skonto beruecksichtigt

- [ ] Sicherheitskonzept: Datenschutz, Verschluesselung, Bedrohungsszenarien

- [ ] Integrationsplan: Komponentenliste, Schnittstellen, Risiken/Mitigation

- [ ] Reaktionszeit: Mess- und Optimierungsansatz definiert

- [ ] Serielle Monitor-Nutzung: Debug-Plan und Log-Formate festgelegt

</details>

<details><summary>Fragen fuer das Fachgespraech</summary>

- Sind die definierten Alarm-Anforderungen vollstaendig und realistisch?
- Reicht die NodeMCU-Leistung fuer geforderte Sensorik/Aktorik?
- Welche Ziele priorisieren wir in der Nutzwertanalyse (z. B. Sicherheit > Kosten)?
- Welche Verschluesselungsmethode ist angemessen (z. B. TLS/WPA2, AES auf Application-Layer)?
- Wie messen wir die Reaktionszeit (End-to-End) und welche Grenzwerte gelten?
- Welche Integrationsrisiken sind kritisch (z. B. EMV, Netzwerkausfall) und wie mitigieren wir sie?
- Wie stellen wir Erweiterbarkeit sicher (Modul-Design, Topic-Namen, API/Protokolle)?

<details><summary>Deep</summary>

========================================
Status und naechste Schritte
========================================
Status:
- Grundlagen NodeMCU/Arduino IDE: initial erledigt
- Nutzwertanalyse/Entscheidungsmatrix: in Bearbeitung, Entwurf vorhanden
- Bezugspreise: Struktur festgelegt, Datenbeschaffung laeuft
- Sicherheit/Integration: Konzeptentwurf erstellt

Naechste Schritte:
1) Kriterien finalisieren und Bewertungstabelle abschliessen
2) Entscheidung dokumentieren und Kundenargumentation vorbereiten
3) Prototyp: Basis-Sensorik anbinden, serielle Logs testen
4) Sicherheits-Implementierung: erste Verschluesselungskette validieren
5) Reaktionszeit messen und optimieren (Debounce, Interrupts, Netzwerkpfad)

</details>

</details>
