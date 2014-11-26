#MAIN= paper.tex
MAIN= paper_phase3
#TEXPARTS= 	$(MAIN).tex 		\
		000abstract.tex		\
		010intro.tex 		\
		020survey.tex 		\
		030method.tex 		\
		040experiments.tex 	\
		050conclusions.tex 	\
		099appendix.tex 		

TEXPARTS= 	$(MAIN).tex 		\
		000introduction.tex		\
		010survey.tex 		\
		020kcore.tex 		\
		030unittest.tex 		\
		060indexing.tex 	\
		070experiment.tex 	\
		080phase3divisionlabour.tex 	\
		090conclusion.tex



BIBPARTS= BIB/*.bib
FIGPARTS= FIG/*.pdf FIG/*.png
STYPARTS= mdwlist.sty
ALL= makefile $(TEXPARTS) $(BIBPARTS) $(FIGPARTS) $(STYPARTS) README 

$(MAIN).pdf: $(MAIN).tex
	pdflatex $(MAIN).tex
	bibtex $(MAIN)
	pdflatex $(MAIN).tex
	pdflatex $(MAIN).tex

clean:
	\rm -f *.dvi *.bbl *.aux *.log *.blg *.toc

spotless: clean
	\rm -f $(MAIN).ps $(MAIN).pdf
	\rm -rf TST
	\rm -f all.tar

all.tar:
	tar cvfh all.tar makefile $(MAIN).tex $(TEXPARTS) $(BIBPARTS) \
	$(FIGPARTS) README 

