#!/bin/bash

temp_dir="temp_obj_dir"
mkdir -p "$temp_dir"

for source_file in *.c; do
    object_file="${temp_dir}/${source_file%.c}.o"
    gcc -c "$source_file" -o "$object_file"
    if [ $? -ne 0 ]; then
        echo "Compilation failed for $source_file"
        exit 1
    fi
done

ar rcs liball.a "${temp_dir}"/*.o

rm -r "$temp_dir"


