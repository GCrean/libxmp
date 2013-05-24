#ifndef XMP_HIO_H
#define XMP_HIO_H

typedef struct {
#define HIO_HANDLE_TYPE_FILE	0
#define HIO_HANDLE_TYPE_MEMORY	1
	int type;
	FILE *f;
	uint8 *p;
	uint8 *start;
} HIO_HANDLE;

int8	hio_read8s	(HIO_HANDLE *);
uint8	hio_read8	(HIO_HANDLE *);
uint16	hio_read16l	(HIO_HANDLE *);
uint16	hio_read16b	(HIO_HANDLE *);
uint32	hio_read24l	(HIO_HANDLE *);
uint32	hio_read24b	(HIO_HANDLE *);
uint32	hio_read32l	(HIO_HANDLE *);
uint32	hio_read32b	(HIO_HANDLE *);
int	hio_read	(void *, int, int, HIO_HANDLE *);	
int	hio_seek	(HIO_HANDLE *, long, int);
long	hio_tell	(HIO_HANDLE *);
int	hio_eof		(HIO_HANDLE *);
HIO_HANDLE *hio_open	(void *, int);
int	hio_close	(HIO_HANDLE *);

#endif