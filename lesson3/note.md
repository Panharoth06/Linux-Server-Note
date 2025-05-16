## Note

```bash

# to create a new user
sudo useradd username
useradd --create-home --shell /bin/bash superman
useradd --create-home --shell /bin/bash batman

# to check new user
tail /etc/passwd

id #show user id and group id
groups # show group info of current user
groups username # show groups that username is in

sudo su username
sudo su - username # fresh login ( into home's of user )

exit #logout

# to add user to specific group
usermod -aG group_name username
usermod -aG docker $(whoami)

# to remove user from linux server
tldr deluser
tldr userdel # to read documentation
sudo deluser # remove user

# /home/username
sudo deluser username
sudo deluser --remove-home username
sudo deluser --remove-all-files usernaem

# run reactjs port
curl localhost:3000
curl -X POST http://localhost:8080/api/v1/login
curl google.com
curl wttr.in
curl wttr.in/Cambodia

sudo install apt hollywood -y
hollywood #run 
 
https://httpie.io/
sudo apt install httpie -y

#neovim, vim, lazyvim 
#nano

df -h #check disk usage
free -h #check memory (RAM and swap file)

tldr apt
#Update the list of available packages and versions (it's recommended to run this before other apt commands:
    sudo apt update

#Search for a given package (use apt search --name-only package to search within package name only):
    apt search package

#Show information for a package:
    apt show package

#Install a package, or update it to the latest available version:
    sudo apt install package

#Remove a package (using purge instead also removes its configuration files):
    sudo apt remove package
#Upgrade all installed packages to their newest available versions:
    sudo apt upgrade

#List all packages:
    apt list

#List installed packages:
    apt list --installed

# show sys info
    neofetch --ascii_distro arch

sudo systemctl status nginx # check nginx status
sudo systemctl start nginx
sudo systemctl stop nginx
sudo systemctl reload nginx
sudo systemctl restart nginx

sudo sytemctl service status nginx

sudo systemctl start [service_name]

#daemon: programs that run in the background (processes)
#e.g: Docker Daemon
sudo systemctl daemon-reload
```
