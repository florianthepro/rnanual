# Wie man Debian installiert und einen Minecraft-Server einrichtet

<details><summary>1. Debian installieren</summary>

- [ISO herunterladen](https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/debian-13.2.0-amd64-netinst.iso)
- [ISO mit Balena auf USB schreiben](https://github.com/balena-io/etcher/releases/download/v2.1.4/balenaEtcher-2.1.4.Setup.exe)
- Von USB booten

<details>
<summary>Installations-Einstellungen:</summary>

- Installieren
- Sprache: Englisch
- Region: Andere -> Europa -> Deutschland
- Tastaturlayouts: de_de und US
- Zeitzone: Europa -> Berlin
- Partitionierung: Geführt – gesamte Festplatte mit LVM, separate /home Partition
- Desktop-Auswahl: Desktop-Umgebung und GNOME deaktivieren, System Utilities behalten

Wichtig: Erstelle während der Installation zwei Benutzer:
- root (zufälliges 20-stelliges Passwort)
- `<benutzername>` (Name deiner Wahl, zufälliges 20-stelliges Passwort)

</details></details><details><summary>2. Nach der Installation</summary>

Als root anmelden und ausführen:
```
sudo apt update
```
```
sudo apt upgrade
```
```
apt install sudo
```

Benutzer erstellen und zur sudo-Gruppe hinzufügen:
>Nur wenn du keinen Benutzer bei der Installation erstellt hast: `useradd -m -s /bin/bash <benutzername>`
```
sudo usermod -aG sudo <benutzername>
```
```
su - <benutzername>
```

SSH installieren und aktivieren:
```
sudo apt install openssh-server
```
```
sudo systemctl enable ssh
```
```
sudo systemctl start ssh
```
```
ip a
```
(IP-Adresse prüfen)

</details><details><summary>3. SSH von Windows nutzen</summary>

PowerShell öffnen und OpenSSH-Client installieren:
```
Add-WindowsCapability -Online -Name OpenSSH.Client~~~~0.0.1.0
```

Mit Debian verbinden:
```
ssh <benutzername>@<ip-adresse>
```

Innerhalb von SSH:
```
sudo reboot now
```

Nach dem Neustart erneut verbinden:
```
ssh <benutzername>@<ip-adresse>
```

</details><details><summary>4. Docker installieren</summary>

Innerhalb der SSH-Sitzung:
```
sudo apt install curl
```
```
curl -fsSL https://get.docker.com -o get-docker.sh
```
```
sudo sh get-docker.sh
```
```
sudo usermod -aG docker $USER
```
```
newgrp docker
```

</details><details><summary>5. Minecraft-Server einrichten</summary>

Folge den Anweisungen in `how-to-setup-minecraft`

</details>