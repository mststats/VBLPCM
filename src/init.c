#include <stdio.h>
#include <string.h>
#include <math.h>
#include <gsl/gsl_sf.h>
#include "headers.h"
#include <R_ext/Utils.h>
#include <R_ext/Print.h>
#include <R_ext/Rdynload.h>
#include <R_ext/Visibility.h>

static const R_CMethodDef CEntries[] = {
    {"c_Rf_VB_bbs", (DL_FUNC) &c_Rf_VB_bbs, 43},
    {"c_Y_to_E", (DL_FUNC) &c_Y_to_E, 4},
    {"c_Y_to_nonE", (DL_FUNC) &c_Y_to_nonE, 4},
    {"c_Y_to_M", (DL_FUNC) &c_Y_to_M, 4},
    {"c_E_to_Y", (DL_FUNC) &c_E_to_Y, 5},
    {"c_KL_total", (DL_FUNC) &c_KL_total, 39},
    {"c_fruchterman_reingold", (DL_FUNC) &c_fruchterman_reingold, 9},
    {"c_log_like_forces", (DL_FUNC) &c_log_like_forces, 8},
    {NULL, NULL, 0}
};

void R_init_VBLPCM(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    R_forceSymbols(dll, TRUE);
}

