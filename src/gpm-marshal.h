
#ifndef __gpm_marshal_MARSHAL_H__
#define __gpm_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* NONE:INT,BOXED (gpm-marshal.list:1) */
extern void gpm_marshal_VOID__INT_BOXED (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);
#define gpm_marshal_NONE__INT_BOXED	gpm_marshal_VOID__INT_BOXED

/* NONE:STRING,STRING (gpm-marshal.list:2) */
extern void gpm_marshal_VOID__STRING_STRING (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);
#define gpm_marshal_NONE__STRING_STRING	gpm_marshal_VOID__STRING_STRING

/* NONE:POINTER,STRING,STRING (gpm-marshal.list:3) */
extern void gpm_marshal_VOID__POINTER_STRING_STRING (GClosure     *closure,
                                                     GValue       *return_value,
                                                     guint         n_param_values,
                                                     const GValue *param_values,
                                                     gpointer      invocation_hint,
                                                     gpointer      marshal_data);
#define gpm_marshal_NONE__POINTER_STRING_STRING	gpm_marshal_VOID__POINTER_STRING_STRING

/* NONE:UINT,UINT,BOOL (gpm-marshal.list:4) */
extern void gpm_marshal_VOID__UINT_UINT_BOOLEAN (GClosure     *closure,
                                                 GValue       *return_value,
                                                 guint         n_param_values,
                                                 const GValue *param_values,
                                                 gpointer      invocation_hint,
                                                 gpointer      marshal_data);
#define gpm_marshal_NONE__UINT_UINT_BOOL	gpm_marshal_VOID__UINT_UINT_BOOLEAN

/* NONE:STRING,STRING,STRING (gpm-marshal.list:5) */
extern void gpm_marshal_VOID__STRING_STRING_STRING (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);
#define gpm_marshal_NONE__STRING_STRING_STRING	gpm_marshal_VOID__STRING_STRING_STRING

/* NONE:STRING,BOOLEAN (gpm-marshal.list:6) */
extern void gpm_marshal_VOID__STRING_BOOLEAN (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);
#define gpm_marshal_NONE__STRING_BOOLEAN	gpm_marshal_VOID__STRING_BOOLEAN

/* NONE:STRING,STRING,BOOLEAN (gpm-marshal.list:7) */
extern void gpm_marshal_VOID__STRING_STRING_BOOLEAN (GClosure     *closure,
                                                     GValue       *return_value,
                                                     guint         n_param_values,
                                                     const GValue *param_values,
                                                     gpointer      invocation_hint,
                                                     gpointer      marshal_data);
#define gpm_marshal_NONE__STRING_STRING_BOOLEAN	gpm_marshal_VOID__STRING_STRING_BOOLEAN

/* NONE:STRING,STRING,BOOLEAN,BOOLEAN,BOOLEAN (gpm-marshal.list:8) */
extern void gpm_marshal_VOID__STRING_STRING_BOOLEAN_BOOLEAN_BOOLEAN (GClosure     *closure,
                                                                     GValue       *return_value,
                                                                     guint         n_param_values,
                                                                     const GValue *param_values,
                                                                     gpointer      invocation_hint,
                                                                     gpointer      marshal_data);
#define gpm_marshal_NONE__STRING_STRING_BOOLEAN_BOOLEAN_BOOLEAN	gpm_marshal_VOID__STRING_STRING_BOOLEAN_BOOLEAN_BOOLEAN

/* NONE:INT (gpm-marshal.list:9) */
#define gpm_marshal_VOID__INT	g_cclosure_marshal_VOID__INT
#define gpm_marshal_NONE__INT	gpm_marshal_VOID__INT

/* NONE:STRING (gpm-marshal.list:10) */
#define gpm_marshal_VOID__STRING	g_cclosure_marshal_VOID__STRING
#define gpm_marshal_NONE__STRING	gpm_marshal_VOID__STRING

/* NONE:INT,LONG,BOOLEAN,BOOLEAN (gpm-marshal.list:11) */
extern void gpm_marshal_VOID__INT_LONG_BOOLEAN_BOOLEAN (GClosure     *closure,
                                                        GValue       *return_value,
                                                        guint         n_param_values,
                                                        const GValue *param_values,
                                                        gpointer      invocation_hint,
                                                        gpointer      marshal_data);
#define gpm_marshal_NONE__INT_LONG_BOOLEAN_BOOLEAN	gpm_marshal_VOID__INT_LONG_BOOLEAN_BOOLEAN

/* NONE:BOOLEAN,BOOLEAN (gpm-marshal.list:12) */
extern void gpm_marshal_VOID__BOOLEAN_BOOLEAN (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data);
#define gpm_marshal_NONE__BOOLEAN_BOOLEAN	gpm_marshal_VOID__BOOLEAN_BOOLEAN

/* NONE:UINT (gpm-marshal.list:13) */
#define gpm_marshal_VOID__UINT	g_cclosure_marshal_VOID__UINT
#define gpm_marshal_NONE__UINT	gpm_marshal_VOID__UINT

/* NONE:UINT,UINT (gpm-marshal.list:14) */
extern void gpm_marshal_VOID__UINT_UINT (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);
#define gpm_marshal_NONE__UINT_UINT	gpm_marshal_VOID__UINT_UINT

/* NONE:UINT,POINTER (gpm-marshal.list:15) */
#define gpm_marshal_VOID__UINT_POINTER	g_cclosure_marshal_VOID__UINT_POINTER
#define gpm_marshal_NONE__UINT_POINTER	gpm_marshal_VOID__UINT_POINTER

G_END_DECLS

#endif /* __gpm_marshal_MARSHAL_H__ */

