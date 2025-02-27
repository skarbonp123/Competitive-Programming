#!/bin/bash

if [ -z "$1" ]; then
	echo "Error: Commit Message Required" 
	exit 1
fi

git add .

git commit -m "$1"

git push

echo "Changes have been pushed to the repository."
