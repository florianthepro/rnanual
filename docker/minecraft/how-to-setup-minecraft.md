### Importent
Start with how-to-setup-debian

First download the script file [setup-minecraft.sh](https://florianthepro.github.io/docs/files/minecraft/setup-minecraft.sh) so that it is placed loosely in your Downloads folder on Windows.
>It should look like this: `C:\Users\<YourWindowsUser>\Downloads\setup-minecraft-full.sh`

Update and upgrade packages:

<script type="text/plain" id="cmd-01">
sudo apt update && sudo apt upgrade -y
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-01').textContent)">
Copy
</button>

Transfer the setup script from Windows to the Debian server (PowerShell on Windows):

<script type="text/plain" id="cmd-02">
scp $env:USERPROFILE\Downloads\setup-minecraft-full.sh <username>@<server-ip>:/home/<username>/
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-02').textContent)">
Copy
</button>

On the Debian server, make the script executable and run it:

<script type="text/plain" id="cmd-03">
chmod +x setup-minecraft-full.sh && ./setup-minecraft-full.sh
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-03').textContent)">
Copy
</button>

Install Playit (for tunneling/remote access):

<script type="text/plain" id="cmd-04">
sudo apt install gnupg -y && curl -SsL https://playit-cloud.github.io/ppa/key.gpg | gpg --dearmor | sudo tee /etc/apt/trusted.gpg.d/playit.gpg >/dev/null && echo "deb [signed-by=/etc/apt/trusted.gpg.d/playit.gpg] https://playit-cloud.github.io/ppa/data ./" | sudo tee /etc/apt/sources.list.d/playit-cloud.list && sudo apt update && sudo apt install playit && playit
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-04').textContent)">
Copy
</button>

Start the Minecraft server with Docker Compose:

<script type="text/plain" id="cmd-05">
docker compose up -d
</script>

<button onclick="navigator.clipboard.writeText(document.getElementById('cmd-05').textContent)">
Copy
</button>
