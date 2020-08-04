#!/bin/bash

echo "This will DELETE your old boot.elf files when it's done."
echo "So if you have some perverse attachment to them, edit line 14 of this script first."
echo "Press ctrl+c to NOT continue."
echo
read -p "Press any key to continue..."
echo
for i in * ; do if [ -d $i ] ; then 
    echo "Looking in $i"
    if [ -e $i/boot.elf ] ; then
        echo "  Found elf - Converting..."
        ./powerpc-gekko-objcopy -O binary $i/boot.elf $i/boot.dol
        if [ -e $i/boot.dol ] ; then
            rm $i/boot.elf # to keep, replace this with something like: mv $i/boot.elf $i/boot.elf.old
        fi
    fi
fi ; done
echo
echo "Done!"
echo
exit 0
