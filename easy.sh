input_file=$1
output_dir=$2
direction=$3 # --undirected or --directed 
k=$4
delim=$5

if [ $1 ] && [ $2 ] && [ $3 ] && [ $4 ] && [ $5 ]
then
    python graphminer/gm_main.py --file ${input_file} ${direction} --dest_dir ${output_dir} --unweighted --k ${k} --delim ${delim}
else  
    echo "Please enter the command as following: "
    echo "./easy.sh {input_file} {output_dir} {direction} {k} {delim}"
fi
