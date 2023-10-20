#!/bin/bash

today=$(date +%Y-%m-%d-%H-%M)

echo "Create C Lang Project"
echo "Type your project name. If input is None, project name will Today date."
echo -n ">"
read name
if [ "$name" = "" ]; then
	echo $today
        mkdir $today
        touch $today/main.c
	cp .gitignore_template $today/.gitignore
else
        echo $name
        mkdir $name
        touch $name/main.c
	cp .gitignore_template $name/.gitignore
fi
