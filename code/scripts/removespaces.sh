#1/bin/bash

FILES=~/code/cpp/gameinstitute/*

for file in $FILES
    do
        newfile=$( echo "$file" | tr -d ' ')
        test "$file" != "$newfile" && mv "$file" "$newfile"
    done
