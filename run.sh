for file in as-Caida.undir.txt  soc-Youtube-75000.undir.txt soc-hamsterster.undir.txt  bio-protein-undir.txt
do
    echo ${file}
    mkdir -p intermediate_files/${file}/
    python graphminer/gm_main.py --file $(pwd)/data/${file} --undirected --dest_dir $(pwd)/intermediate_files/${file} --unweighted --k 5 --delim ' '  | grep 'Number of Triangles' > intermediate_files/${file}/triangle.txt
done


for file in text-spanishbook.txt soc-digg.txt   soc-pokec-75000.txt cit-Cora.txt  soc-flickr-75000.txt soft-jdkdependency.txt
do
    echo ${file}
    mkdir -p intermediate_files/${file}/
    python graphminer/gm_main.py --file $(pwd)/data/${file} --dest_dir $(pwd)/intermediate_files/${file} --unweighted --k 5 --delim ' ' |  grep 'Number of Triangles' > intermediate_files/${file}/triangle.txt
done

