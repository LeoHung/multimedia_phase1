all: test    
	
install:
	sudo apt-get install python-psycopg2

all.tar:
	tar -zcvf graphminer.tar.gz *.txt makefile *.py matlab output doc

clean:
	rm *.pyc

test:
	chmod a+rwx `pwd`
	python gm_main.py --file `pwd`/test_case/cc-all-separate.txt --dest_dir `pwd`/output/cc-all-separate --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/cc-bridge-connected.txt  --dest_dir `pwd`/output/cc-bridge-connected --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/circle.txt  --dest_dir `pwd`/output/circle --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/clique.txt --dest_dir `pwd`/output/clique --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/dd-1-10node-undirect.txt --dest_dir `pwd`/output/dd-1-10node-undirect --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 5 
	python gm_main.py --file `pwd`/test_case/dd-2-star-direct.txt --dest_dir `pwd`/output/dd-2-star-direct --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 2 
	python gm_main.py --file `pwd`/test_case/k-core1-10node.txt --dest_dir `pwd`/output/k-core1-10node --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/k-core2-all-connected.txt --dest_dir `pwd`/output/k-core2-all-connected --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 4
	python gm_main.py --file `pwd`/test_case/twin_node.txt --dest_dir `pwd`/output/twin_node --belief_file `pwd`/priorsbelief.txt --unweighted --undirected --k 1

