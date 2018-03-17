FIGFILES     = $(wildcard *.fig)
PDFFILES   = $(patsubst %.fig,%.pdf,$(FIGFILES))
SVGFILES   = $(patsubst %.fig,%.svg,$(FIGFILES))
PSTEXTFILES  = $(patsubst %.fig,%.pstex_t,$(FIGFILES))

.PRECIOUS: $(PDFFILES)

all : $(PDFFILES) $(SVGFILES)

%.pdf: %.fig
	@#fig2dev -L pdf $< > $@
	./fig2pdf.sh $*
%.svg:%.pdf
	inkscape --without-gui --file=$*.pdf --export-plain-svg=$*.svg

clean :
	rm -f *.fig.bak *.eps  *~ $(PDFFILES) 

ultraclean: clean
