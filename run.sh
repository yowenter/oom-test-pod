# /bin/sh

echo $MEMORY

if [ "$MEMORY" ]; then
    echo "Allocating Memory Started"
    mem-hog $MEMORY

else
    echo "MEMORY environment not set"

fi


