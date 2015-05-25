/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "fs_server.h"

bool_t
xdr_RWData (XDR *xdrs, RWData *objp)
{
	register int32_t *buf;

	 if (!xdr_bytes (xdrs, (char **)&objp->RWData_val, (u_int *) &objp->RWData_len, NFSMAXDATA2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ReadRes (XDR *xdrs, ReadRes *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->nread))
		 return FALSE;
	 if (!xdr_RWData (xdrs, &objp->data))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mi_creat_1_argument (XDR *xdrs, mi_creat_1_argument *objp)
{
	 if (!xdr_string (xdrs, &objp->name, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->modo))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mi_open_1_argument (XDR *xdrs, mi_open_1_argument *objp)
{
	 if (!xdr_string (xdrs, &objp->name, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->flags))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mi_read_1_argument (XDR *xdrs, mi_read_1_argument *objp)
{
	 if (!xdr_int (xdrs, &objp->fd))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->pos))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->size))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mi_write_1_argument (XDR *xdrs, mi_write_1_argument *objp)
{
	 if (!xdr_int (xdrs, &objp->fd))
		 return FALSE;
	 if (!xdr_RWData (xdrs, &objp->data))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->pos))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->size))
		 return FALSE;
	return TRUE;
}
