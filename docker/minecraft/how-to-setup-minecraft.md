### Importent
Start with how-to-setup-debian

First download the script file [setup-minecraft.sh](https://florianthepro.github.io/docs/files/minecraft/setup-minecraft.sh) so that it is placed loosely in your Downloads folder on Windows.
>It should look like this: `C:\Users\<YourWindowsUser>\Downloads\setup-minecraft-full.sh`

Update and upgrade packages:

<button onclick="navigator.clipboard.writeText('sudo apt update && sudo apt upgrade -y')">Copy</button>

Transfer the setup script from Windows to the Debian server (PowerShell on Windows):

<button onclick="navigator.clipboard.writeText('scp $env:USERPROFILE\Downloads\setup-minecraft-full.sh <username>@<server-ip>:/home/<username>/')">Copy</button>

On the Debian server, make the script executable and run it:

<button onclick="navigator.clipboard.writeText('chmod +x setup-minecraft-full.sh && ./setup-minecraft-full.sh')">Copy</button>

Install Playit (for tunneling/remote access):

<button onclick="navigator.clipboard.writeText('''
sudo apt install gnupg -y && curl -SsL https://playit-cloud.github.io/ppa/key.gpg | gpg --dearmor | sudo tee /etc/apt/trusted.gpg.d/playit.gpg >/dev/null && echo "deb [signed-by=/etc/apt/trusted.gpg.d/playit.gpg] https://playit-cloud.github.io/ppa/data ./" | sudo tee /etc/apt/sources.list.d/playit-cloud.list && sudo apt update && sudo apt install playit && playit
''')">Copy</button>

<button data-copy="sudo apt install gnupg -y && curl -SsL https://playit-cloud.github.io/ppa/key.gpg | gpg --dearmor | sudo tee /etc/apt/trusted.gpg.d/playit.gpg >/dev/null && echo "deb [signed-by=/etc/apt/trusted.gpg.d/playit.gpg] https://playit-cloud.github.io/ppa/data ./" | sudo tee /etc/apt/sources.list.d/playit-cloud.list && sudo apt update && sudo apt install playit && playit" onclick="navigator.clipboard.writeText(this.dataset.copy)">
  Copy
</button>

<button onclick="navigator.clipboard.writeText('sudo apt install gnupg -y && curl -SsL https://playit-cloud.github.io/ppa/key.gpg | gpg --dearmor | sudo tee /etc/apt/trusted.gpg.d/playit.gpg >/dev/null && echo \"deb [signed-by=/etc/apt/trusted.gpg.d/playit.gpg] https://playit-cloud.github.io/ppa/data ./\" | sudo tee /etc/apt/sources.list.d/playit-cloud.list && sudo apt update && sudo apt install playit && playit')">
  Copy
</button>

Start the Minecraft server with Docker Compose:

<button onclick="navigator.clipboard.writeText('docker compose up -d')">Copy</button>
