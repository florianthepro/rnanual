### Wichtig
Beginne mit how-to-setup-debian

Lade zuerst die Skriptdatei [setup-minecraft-full.sh](https://florianthepro.github.io/docs/minecraft/setup.sh) herunter, sodass sie sich lose im Downloads-Ordner unter Windows befindet.
>Es sollte so aussehen: `C:\Users\<DeinWindowsBenutzer>\Downloads\setup-minecraft-full.sh`

Pakete aktualisieren und upgraden:
```
sudo apt update && sudo apt upgrade -y
```

Übertrage das Setup-Skript von Windows auf den Debian-Server (PowerShell unter Windows):
```
scp $env:USERPROFILE\Downloads\setup-minecraft-full.sh <benutzername>@<server-ip>:/home/<benutzername>/
```

Auf dem Debian-Server das Skript ausführbar machen und ausführen:
```
chmod +x setup-minecraft-full.sh && ./setup-minecraft-full.sh
```

Installiere Playit (für Tunneling/Remote-Zugriff):
```
sudo apt install gnupg -y && curl -SsL https://playit-cloud.github.io/ppa/key.gpg | gpg --dearmor | sudo tee /etc/apt/trusted.gpg.d/playit.gpg >/dev/null && echo "deb [signed-by=/etc/apt/trusted.gpg.d/playit.gpg] https://playit-cloud.github.io/ppa/data ./" | sudo tee /etc/apt/sources.list.d/playit-cloud.list && sudo apt update && sudo apt install playit && playit
```

Starte den Minecraft-Server mit Docker Compose:
```
docker compose up -d
```
