input_file=$(python -c 'import os,sys;print os.path.realpath(sys.argv[1])' $1)
output_dir=$(python -c 'import os,sys;print os.path.realpath(sys.argv[1])' $2)
direction=$3 # --undirected or --directed 
k=$4
delim=$5

echo $1, $2, $3, $4, \'$5\'

if [ $1 ] && [ $2 ] && [ $3 ] && [ $4 ]; then
    python gm_main.py --file ${input_file} ${direction} --dest_dir ${output_dir} --unweighted --k ${k} --delim "${delim}" ;
else  
    echo "Please enter the command as following: "
    echo "./easy.sh {input_file} {output_dir} {direction} {k} {delim}"
    echo "e.g. ./easy.sh unitTest/cc-all-separate.txt output --undirected 5 ','"
fi
