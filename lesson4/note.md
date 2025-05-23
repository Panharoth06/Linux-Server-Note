## Note
### User & Group Related Commands
```bash

sudo adduser dara # Create new user named “dara”
id dara # Show user info (user id, group id)
sudo usermod -u 3000 dara # Change user id number
sudo usermod -l dara new-dara # Change username
sudo su - new-dara # Switch user to “new-dara”
whoami # Show current username
sudo passwd new-dara # Change user password
sudo deluser new-dara # Delete user “new-dara”

#Note: You should add new user to sudo group “sudoers” and it will have privilege to use “sudo” command(superuser do).

sudo usermod -aG sudo dara # Add user “dara” to group “docker”
sudo addgroup dara # Create new group “dara”
sudo groupmod -g 3333 dara # Change group id
sudo groupmod -n new-dara dara # Change group name to “new-dara”
groups dara # Show joining group of user “dara”
sudo deluser dara sudo # Delete user “dara” from group “sudo”
sudo delgroup new-dara # Delete group “new-dara”
```
_____________________________________________________________

UNIX -> Linux

* Linux is multi-user operating system
1. Ownwership ( user, group, other ) 
```bash

sudo chown username file.txt #change user ownership
sudo chown username:group file.txt #change user ownership and group

```


2. Permission ( read, write, execute ) 
- There are 2 modes to set permission for files or directory: Absolute Mode ( Numeric ) Mode
--Read: 4
--Write: 2
--Excute: 1
-> 7: read, write, and execute, 6: read and write, 5: Read and Execute, 3: Write and Execute
Try to avoid - sudo chmod 777 filename.txt


*** Virtualization ( VMware, Virtual Bix ) vs Containerization ( Docker ) ?

```bash
sudo usermod -aG sudo username
sudo username -aG group-name $(whoami)

# to add additional priviledge 
sudo visudo
# e.g, james ALL=(ALL:ALL) NOPASSWD:ALL
```