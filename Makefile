all : index.html

index.html : index.Rmd
	Rscript -e "library(slidify);slidify('$<')"
