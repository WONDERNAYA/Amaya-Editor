/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern int CounterValMinMax ( int counterNum,
                              PtrSSchema pSS,
                              PtrPSchema pSchP,
                              PtrElement pElNum,
                              int view,
                              ThotBool Maximum );
extern int CounterVal ( int counterNum,
                        PtrSSchema pSS,
                        PtrPSchema pSchP,
                        PtrElement pElNum,
                        int view,
                        PtrDocument pDoc );
extern ThotBool PresAbsBoxUserEditable ( PtrAbstractBox pAb );
extern void GetCounterValue ( int number,
                              CounterStyle style,
                              char *string,
                              int *len );
extern ThotBool NewVariable ( int varNum,
                              PtrSSchema pSS,
                              PtrPSchema pSchP,
                              PtrAbstractBox pAb,
                              PtrAttribute pAttr,
                              PtrDocument pDoc );

#else /* __STDC__ */

extern int CounterValMinMax ( int counterNum,
                                PtrSSchema pSS,
                                PtrPSchema pSchP,
                                PtrElement pElNum,
                                int view,
                                ThotBool Maximum );
extern int CounterVal ( int counterNum,
                          PtrSSchema pSS,
                          PtrPSchema pSchP,
                          PtrElement pElNum,
                          int view,
                          PtrDocument pDoc );
extern ThotBool PresAbsBoxUserEditable ( PtrAbstractBox pAb );
extern void GetCounterValue ( int number,
                                CounterStyle style,
                                char *string,
                                int *len );
extern ThotBool NewVariable ( int varNum,
                                PtrSSchema pSS,
                                PtrPSchema pSchP,
                                PtrAbstractBox pAb,
                                PtrAttribute pAttr,
                                PtrDocument pDoc );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
