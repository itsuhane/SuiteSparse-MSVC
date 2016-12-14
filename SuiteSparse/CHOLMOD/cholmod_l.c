#define DLONG

/* core module */
#include "cholmod_aat.c"
#include "cholmod_add.c"
#include "cholmod_band.c"
#include "cholmod_change_factor.c"
#include "cholmod_common.c"
#include "cholmod_complex.c"
#include "cholmod_copy.c"
#include "cholmod_dense.c"
#include "cholmod_error.c"
#include "cholmod_factor.c"
#include "cholmod_memory.c"
#include "cholmod_sparse.c"
#include "cholmod_transpose.c"
#include "cholmod_triplet.c"
#include "cholmod_version.c"

/* check module */
#include "cholmod_check.c"
#include "cholmod_read.c"
/* #include "cholmod_write.c" */

/* cholesky module */
#include "cholmod_amd.c"
#include "cholmod_analyze.c"
#include "cholmod_colamd.c"
#include "cholmod_etree.c"
#include "cholmod_factorize.c"
#include "cholmod_postorder.c"
#include "cholmod_rcond.c"
#include "cholmod_resymbol.c"
#include "cholmod_rowcolcounts.c"
#include "cholmod_rowfac.c"
#include "cholmod_solve.c"
#include "cholmod_spsolve.c"

/* matrixops module */
#include "cholmod_drop.c"
#include "cholmod_horzcat.c"
#include "cholmod_norm.c"
#include "cholmod_scale.c"
#include "cholmod_sdmult.c"
#include "cholmod_ssmult.c"
/* #include "cholmod_submatrix.c" */
#include "cholmod_vertcat.c"
#include "cholmod_symmetry.c"

/* partition module */
#include "cholmod_ccolamd.c"
#include "cholmod_csymamd.c"
#include "cholmod_metis.c"
#include "cholmod_nesdis.c"
#include "cholmod_camd.c"

/* modify module */
#include "cholmod_rowadd.c"
#include "cholmod_rowdel.c"
/* #include "cholmod_updown.c" */

/* supernodal module */
#include "cholmod_super_numeric.c"
#include "cholmod_super_solve.c"
#include "cholmod_super_symbolic.c"

#undef DLONG