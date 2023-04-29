install:
	R CMD INSTALL RTMB

doc-update:
	echo "library(roxygen2);suppressWarnings(roxygenize(\"RTMB\",roclets = c(\"collate\", \"rd\"), load_code=load_installed))" | R --slave
	sed -i '/RoxygenNote/d' RTMB/DESCRIPTION

unexport TEXINPUTS
pdf:
	rm -f RTMB.pdf
	R CMD Rd2pdf --no-preview RTMB

distributions:
	R --slave < distr.R

rcpp:
	echo 'Rcpp::compileAttributes("RTMB", verbose=TRUE)' | R --slave
	sed -i '/RcppEigen/d' RTMB/src/RcppExports.cpp
	sed -i '/R_CallMethodDef/ s/$$/\n    TMB_CALLDEFS,/' RTMB/src/RcppExports.cpp
	sed -i '/include.*Rcpp/ s/$$/\n#include "TMB.h"/' RTMB/src/RcppExports.cpp
	sed -i '/R_useDynamicSymbols/ s/$$/\n    TMB_CCALLABLES("RTMB");/' RTMB/src/RcppExports.cpp

test-all: linreg spatial mvrw spde sdv_multi test-sparse

test-sparse:
	R --slave < tests/test-sparse.R

linreg:
	cd tmb_examples; R --slave < linreg.R

spatial:
	cd tmb_examples; R --slave < spatial.R

mvrw:
	cd tmb_examples; R --slave < mvrw.R

spde:
	cd tmb_examples; R --slave < spde.R

sdv_multi:
	cd tmb_examples; R --slave < sdv_multi.R

cran-version:
	R CMD build RTMB

cran-check:
	R CMD check --as-cran RTMB*.tar.gz

parallel-version:
	rm -rf RTMBp
	cp -r RTMB RTMBp
	sed -i 's/RTMB::/RTMBp::/g' RTMBp/R/*.R
	sed -i 's/DLL="RTMB"/DLL="RTMBp"/g' RTMBp/R/*.R
	sed -i 's/RTMB/RTMBp/g' RTMBp/DESCRIPTION
	sed -i 's/RTMB/RTMBp/g' RTMBp/NAMESPACE
	sed -i 's/"RTMB"/"RTMBp"/g' RTMBp/src/RcppExports.cpp
	sed -i 's/R_init_RTMB/R_init_RTMBp/g' RTMBp/src/RcppExports.cpp
	echo 'PKG_LIBS = $$(SHLIB_OPENMP_CXXFLAGS)' >> RTMBp/src/Makevars
	echo 'PKG_CXXFLAGS=$$(SHLIB_OPENMP_CXXFLAGS)' >> RTMBp/src/Makevars
	echo '.onLoad <- function(libname, pkgname) { TMB::openmp(parallel::detectCores(), autopar=TRUE, DLL="RTMBp") }' >> RTMBp/R/zzz.R
