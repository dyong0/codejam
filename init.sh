#! /bin/bash
TEMPLATE_DIR=$(dirname "$0")/template
DEST_DIR=.

if [ ! -z $1 ]; then
    DEST_DIR=$1
fi

if [ ! -e $DEST_DIR ]; then
    mkdir -p $DEST_DIR
fi

cp $TEMPLATE_DIR/* $DEST_DIR
problems=( "A" "B" "C" "D" "E" )
for problem in "${problems[@]}"
do
    cp $DEST_DIR/template.cpp $DEST_DIR/$problem.cpp
done
rm $DEST_DIR/template.cpp

echo "`dirname ${DEST_DIR}`/${DEST_DIR} has been initialized:"
ls $DEST_DIR
