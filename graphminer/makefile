all: test

install:
	sudo apt-get install python-psycopg2

all.tar:
	tar -zcvf graphminer.tar.gz *.txt makefile *.py matlab output doc

clean:
	rm -rf *.pyc
	rm -rf output/*

test:
	chmod a+rwx `pwd`
	mkdir -p `pwd`/output/cc-all-separate
	mkdir -p `pwd`/output/cc-bridge-connected
	mkdir -p `pwd`/output/circle
	mkdir -p `pwd`/output/clique
	mkdir -p `pwd`/output/dd-1-10node-undirect
	mkdir -p `pwd`/output/k-core1-10node
	mkdir -p `pwd`/output/k-core2-all-connected
	mkdir -p `pwd`/output/twin_node

	python gm_main.py --file `pwd`/test_case/cc-all-separate.txt --dest_dir `pwd`/output/cc-all-separate --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/cc-bridge-connected.txt  --dest_dir `pwd`/output/cc-bridge-connected --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/circle.txt  --dest_dir `pwd`/output/circle --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/clique.txt --dest_dir `pwd`/output/clique --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/dd-1-10node-undirect.txt --dest_dir `pwd`/output/dd-1-10node-undirect --unweighted --undirected --k 5
	python gm_main.py --file `pwd`/test_case/k-core1-10node.txt --dest_dir `pwd`/output/k-core1-10node --unweighted --undirected --k 2
	python gm_main.py --file `pwd`/test_case/k-core2-all-connected.txt --dest_dir `pwd`/output/k-core2-all-connected --unweighted --undirected --k 4
	python gm_main.py --file `pwd`/test_case/twin_node.txt --dest_dir `pwd`/output/twin_node --unweighted --undirected --k 1

plot: test
	chmod a+rwx `pwd`
	matlab -nodisplay -nosplash -nodesktop -r "cd matlab; plotGM('../output/cc-all-separate');exit;"
	matlab -nodisplay -nosplash -nodesktop -r "cd matlab; plotGM('../output/cc-bridge-connected');exit;"
	matlab -nodisplay -nosplash -nodesktop -r "cd matlab; plotGM('../output/circle');exit;"
	matlab -nodisplay -nosplash -nodesktop -r "cd matlab; plotGM('../output/clique');exit;"
	matlab -nodisplay -nosplash -nodesktop -r "cd matlab; plotGM('../output/dd-1-10node-undirect');exit;"
	matlab -nodisplay -nosplash -nodesktop -r "cd matlab; plotGM('../output/k-core1-10node');exit;"
	matlab -nodisplay -nosplash -nodesktop -r "cd matlab; plotGM('../output/k-core2-all-connected');exit;"
	matlab -nodisplay -nosplash -nodesktop -r "cd matlab; plotGM('../output/twin_node');exit;"
