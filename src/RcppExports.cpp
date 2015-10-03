// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/gdtools.h"
#include "../inst/include/gdtools_types.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// str_extents
NumericMatrix str_extents(CharacterVector x, std::string fontname, double fontsize, int bold, int italic);
RcppExport SEXP gdtools_str_extents(SEXP xSEXP, SEXP fontnameSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname(fontnameSEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< int >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< int >::type italic(italicSEXP);
    __result = Rcpp::wrap(str_extents(x, fontname, fontsize, bold, italic));
    return __result;
END_RCPP
}
// str_metrics
NumericVector str_metrics(std::string x, std::string fontname, double fontsize, int bold, int italic);
RcppExport SEXP gdtools_str_metrics(SEXP xSEXP, SEXP fontnameSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname(fontnameSEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< int >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< int >::type italic(italicSEXP);
    __result = Rcpp::wrap(str_metrics(x, fontname, fontsize, bold, italic));
    return __result;
END_RCPP
}
// context_create
XPtrCairoContext context_create();
static SEXP gdtools_context_create_try() {
BEGIN_RCPP
    Rcpp::RObject __result;
    __result = Rcpp::wrap(context_create());
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_context_create() {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(gdtools_context_create_try());
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// context_set_font
bool context_set_font(XPtrCairoContext cc, std::string fontname, double fontsize, bool bold, bool italic);
static SEXP gdtools_context_set_font_try(SEXP ccSEXP, SEXP fontnameSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< XPtrCairoContext >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname(fontnameSEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< bool >::type italic(italicSEXP);
    __result = Rcpp::wrap(context_set_font(cc, fontname, fontsize, bold, italic));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_context_set_font(SEXP ccSEXP, SEXP fontnameSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(gdtools_context_set_font_try(ccSEXP, fontnameSEXP, fontsizeSEXP, boldSEXP, italicSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// context_extents
FontMetric context_extents(XPtrCairoContext cc, std::string x);
static SEXP gdtools_context_extents_try(SEXP ccSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< XPtrCairoContext >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    __result = Rcpp::wrap(context_extents(cc, x));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_context_extents(SEXP ccSEXP, SEXP xSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(gdtools_context_extents_try(ccSEXP, xSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// raster_to_str
String raster_to_str(IntegerVector red, IntegerVector green, IntegerVector blue, IntegerVector alpha, int w, int h, double width, double height, int interpolate);
RcppExport SEXP gdtools_raster_to_str(SEXP redSEXP, SEXP greenSEXP, SEXP blueSEXP, SEXP alphaSEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type red(redSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type green(greenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type blue(blueSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type interpolate(interpolateSEXP);
    __result = Rcpp::wrap(raster_to_str(red, green, blue, alpha, w, h, width, height, interpolate));
    return __result;
END_RCPP
}
// base64_file_encode
std::string base64_file_encode(std::string filename);
RcppExport SEXP gdtools_base64_file_encode(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    __result = Rcpp::wrap(base64_file_encode(filename));
    return __result;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int gdtools_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("XPtrCairoContext(*context_create)()");
        signatures.insert("bool(*context_set_font)(XPtrCairoContext,std::string,double,bool,bool)");
        signatures.insert("FontMetric(*context_extents)(XPtrCairoContext,std::string)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP gdtools_RcppExport_registerCCallable() { 
    R_RegisterCCallable("gdtools", "gdtools_context_create", (DL_FUNC)gdtools_context_create_try);
    R_RegisterCCallable("gdtools", "gdtools_context_set_font", (DL_FUNC)gdtools_context_set_font_try);
    R_RegisterCCallable("gdtools", "gdtools_context_extents", (DL_FUNC)gdtools_context_extents_try);
    R_RegisterCCallable("gdtools", "gdtools_RcppExport_validate", (DL_FUNC)gdtools_RcppExport_validate);
    return R_NilValue;
}
