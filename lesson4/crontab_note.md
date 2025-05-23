## Crontab is a sys process that will automatically perform tasks as per the specific schedule. It is a set of commands that are used for running regular scheduling tasks.

## Why use Crontab?
- Helps OS to take a scheduled backup of log files or database.
- Delete old log files
- Archive and purge database tables
- Send out any notification email such as Newsletters, Password expiration email
- Regular clean-up of cached data
- It is used to automate system maintence 

## Working with Crontab

```bash
crontab -l # list cronjob for current user 
crontab -e # to create a new cron job

```

## to read doc
```bash
cat /etc/crontab 
```

```bash
vim shellscript-demo.sh

#!/bin/bash
echo "$(date)" >> daily-log.txt #example

#ESC -> :wq!

crontab -e

*/1 * * * *
```
