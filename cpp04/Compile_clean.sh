#!/bin/bash

# find all Makefiles in current dir and subdirs
find . -type f -name "Makefile" | while read -r makefile; do
    dir=$(dirname "$makefile")
    echo ">>> Entering $dir"
    
    # go into dir
    (
        cd "$dir" || exit
        
        echo ">>> Running make..."
        make
        
        echo ">>> Running make fclean..."
        make fclean
        
        echo ">>> Done in $dir"
        echo "----------------------------------"
    )
done

echo "All makefiles processed!"

