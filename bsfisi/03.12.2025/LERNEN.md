AP: ER/RE modell
 - | - Faktorirungsplan abnahme
 - | - Logisches modell

ER->RE: In Tabellen Atribute+forrent keys in die Tabelle ansonsten selbe Verbindung ohne realation ship

Forrent:
Primary: id_Kd (PK)
Identification: id_Kd (FK)

---

ITS: DHCP

HOW TO


# Lerninhalte – Offene Punkte

- **Implementierung relationales Modell**
  - Wird durch ein **DBMS** umgesetzt, nicht durch Compiler oder serielle Befehlsabarbeitung.

- **Abbildung ER → Relationen**
  - Entitätstyp → Tabelle  
  - Entität → Zeile (Datensatz)  
  - Attribut → Spalte  

- **Tabellenstruktur**
  - Tabellen = Spalten nebeneinander, Zeilen untereinander.

- **Primärschlüssel**
  - Eindeutige Identifikation ✔  
  - Wird als Fremdschlüssel referenziert ✔  
  - **Zusätzlich lernen:** Primärschlüssel sichert Integrität (keine Duplikate, keine Nullwerte).

- **Fremdschlüssel**
  - Verweist auf Primärschlüssel ✔  
  - Darf mehrfach vorkommen ✔  
  - **Zusätzlich lernen:** Kein Mittel gegen Redundanz; kann als Suchkriterium genutzt werden.

- **1:1-Beziehungen**
  - Primärschlüssel einer Tabelle als Fremdschlüssel in der anderen ✔  
  - **Zusätzlich lernen:** Auch Zwischentabelle oder Zusammenlegung möglich.

- **n:m-Beziehungen**
  - Nicht direkt möglich.  
  - Umsetzung über **Zwischentabelle** mit zwei Fremdschlüsseln.  
  - Kombination der beiden Fremdschlüssel kann Primärschlüssel sein.

- **Referentielle Integrität**
  - Jeder Fremdschlüssel muss auf existierenden Primärschlüssel verweisen.  
  - Keine „verwaisten“ Fremdschlüssel erlaubt.

