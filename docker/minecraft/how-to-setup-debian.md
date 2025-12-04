<h1>How to Install Debian and Set Up a Minecraft Server</h1>

<details><summary>1. Install Debian</summary>

- [Download ISO](https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/debian-13.2.0-amd64-netinst.iso)
- [Flash ISO to USB using Balena](https://github.com/balena-io/etcher/releases/download/v2.1.4/balenaEtcher-2.1.4.Setup.exe)
- Boot from USB

<details>
<summary>Installation settings:</summary>

- Install
- Language: English
- Region: Other -> Europe -> Germany
- Keyboard layouts: de_de and US
- Timezone: Europe -> Berlin
- Partitioning: Guided – use entire disk with LVM, separate /home partition
- Desktop selection: uncheck Desktop Environment and GNOME, keep System Utilities

Important: Create two users during installation:
- root (random 20-character password)
- `<username>` (name of your choice, random 20-character password)

</details></details><details><summary>2. Post-Installation Setup</summary>

Log in as root and run:

<script type="text/plain" id="cmd-01">
sudo apt update
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-01').textContent)">
Copy
</button>



<script type="text/plain" id="cmd-02">
sudo apt upgrade
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-02').textContent)">
Copy
</button>

---

<script type="text/plain" id="cmd-03">
apt install sudo
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-03').textContent)">
Copy
</button>

Create user !!!Only!!! if you dont creat by installing os:
<script type="text/plain" id="cmd-04">
useradd -m -s /bin/bash <username>
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-04').textContent)">
Copy
</button>

Add user to sudo group:

<script type="text/plain" id="cmd-05">
sudo usermod -aG sudo <username>
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-05').textContent)">
Copy
</button>

---

<script type="text/plain" id="cmd-06">
su - <username>
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-06').textContent)">
Copy
</button>

Install and enable SSH:

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
(check IP address)

</details><details><summary>3. Use SSH from Windows</summary>

Open PowerShell and install OpenSSH client:

```
Add-WindowsCapability -Online -Name OpenSSH.Client~~~~0.0.1.0
```

Connect to Debian:

```
ssh <username>@<ip-address>
```

Inside SSH:

```
sudo reboot now
```

Reconnect after reboot:

```
ssh <username>@<ip-address>
```

</details><details><summary>4. Install Docker</summary>

Inside SSH session:

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

</details><details><summary>5. Set Up Minecraft Server</summary>

Follow the instructions in the `how-to-setup-minecraft`

</details>
