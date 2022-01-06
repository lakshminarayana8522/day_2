#!/bin/bash

while [ 1 ]
do
	echo "Enter Password: "
	read -s pas
	if [ "$pas" = "lakshmi" ]
	then
		echo "password is correct!"
		break;
	fi
	echo "password incorrect.."
done

