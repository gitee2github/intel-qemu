#ifndef PROFILE_H
#define PROFILE_H
#define SYS_CALL       0
#define CALL           1
#define RET            2
#define JMP            3
#define BR             4
#define BSR            5
#define MEMB           6
#define IMEMB          7
#define WMEMB          8
#define RTC            9
#define RCID          10
#define HALT          11
#define RD_F          12
#define WR_F          13
#define RTID          14
#define CSRWS         15
#define CSRWC         16
#define PRI_RCSR      17
#define PRI_WCSR      18
#define PRI_RET       19
#define LLDW          20
#define LLDL          21
#define LDW_INC       22
#define LDL_INC       23
#define LDW_DEC       24
#define LDL_DEC       25
#define LDW_SET       26
#define LDL_SET       27
#define LSTW          28
#define LSTL          29
#define LDW_NC        30
#define LDL_NC        31
#define LDD_NC        32
#define STW_NC        33
#define STL_NC        34
#define STD_NC        35
#define LDWE          36
#define LDSE          37
#define LDDE          38
#define VLDS          39
#define VLDD          40
#define VSTS          41
#define VSTD          42
#define FIMOVS        43
#define FIMOVD        44
#define ADDW          45
#define SUBW          46
#define S4ADDW        47
#define S4SUBW        48
#define S8ADDW        49
#define S8SUBW        50
#define ADDL          51
#define SUBL          52
#define S4ADDL        53
#define S4SUBL        54
#define S8ADDL        55
#define S8SUBL        56
#define MULW          57
#define DIVW          58
#define UDIVW         59
#define REMW          60
#define UREMW         61
#define MULL          62
#define MULH          63
#define DIVL          64
#define UDIVL         65
#define REML          66
#define UREML         67
#define ADDPI         68
#define ADDPIS        69
#define CMPEQ         70
#define CMPLT         71
#define CMPLE         72
#define CMPULT        73
#define CMPULE        74
#define SBT           75
#define CBT           76
#define AND           77
#define BIC           78
#define BIS           79
#define ORNOT         80
#define XOR           81
#define EQV           82
#define INSLB         83
#define INSLH         84
#define INSLW         85
#define INSLL         86
#define INSHB         87
#define INSHH         88
#define INSHW         89
#define INSHL         90
#define SLLL          91
#define SRLL          92
#define SRAL          93
#define ROLL          94
#define SLLW          95
#define SRLW          96
#define SRAW          97
#define ROLW          98
#define EXTLB         99
#define EXTLH        100
#define EXTLW        101
#define EXTLL        102
#define EXTHB        103
#define EXTHH        104
#define EXTHW        105
#define EXTHL        106
#define CTPOP        107
#define CTLZ         108
#define CTTZ         109
#define REVBH        110
#define REVBW        111
#define REVBL        112
#define CASW         113
#define CASL         114
#define MASKLB       115
#define MASKLH       116
#define MASKLW       117
#define MASKLL       118
#define MASKHB       119
#define MASKHH       120
#define MASKHW       121
#define MASKHL       122
#define ZAP          123
#define ZAPNOT       124
#define SEXTB        125
#define SEXTH        126
#define SELEQ        127
#define SELGE        128
#define SELGT        129
#define SELLE        130
#define SELLT        131
#define SELNE        132
#define SELLBC       133
#define SELLBS       134
#define ADDWI        135
#define SUBWI        136
#define S4ADDWI      137
#define S4SUBWI      138
#define S8ADDWI      139
#define S8SUBWI      140
#define ADDLI        141
#define SUBLI        142
#define S4ADDLI      143
#define S4SUBLI      144
#define S8ADDLI      145
#define S8SUBLI      146
#define MULWI        147
#define DIVWI        148
#define UDIVWI       149
#define REMWI        150
#define UREMWI       151
#define MULLI        152
#define MULHI        153
#define DIVLI        154
#define UDIVLI       155
#define REMLI        156
#define UREMLI       157
#define ADDPII       158
#define ADDPISI      159
#define CMPEQI       160
#define CMPLTI       161
#define CMPLEI       162
#define CMPULTI      163
#define CMPULEI      164
#define SBTI         165
#define CBTI         166
#define ANDI         167
#define BICI         168
#define BISI         169
#define ORNOTI       170
#define XORI         171
#define EQVI         172
#define INSLBI       173
#define INSLHI       174
#define INSLWI       175
#define INSLLI       176
#define INSHBI       177
#define INSHHI       178
#define INSHWI       179
#define INSHLI       180
#define SLLLI        181
#define SRLLI        182
#define SRALI        183
#define ROLLI        184
#define SLLWI        185
#define SRLWI        186
#define SRAWI        187
#define ROLWI        188
#define EXTLBI       189
#define EXTLHI       190
#define EXTLWI       191
#define EXTLLI       192
#define EXTHBI       193
#define EXTHHI       194
#define EXTHWI       195
#define EXTHLI       196
#define CTPOPI       197
#define CTLZI        198
#define CTTZI        199
#define REVBHI       200
#define REVBWI       201
#define REVBLI       202
#define CASWI        203
#define CASLI        204
#define MASKLBI      205
#define MASKLHI      206
#define MASKLWI      207
#define MASKLLI      208
#define MASKHBI      209
#define MASKHHI      210
#define MASKHWI      211
#define MASKHLI      212
#define ZAPI         213
#define ZAPNOTI      214
#define SEXTBI       215
#define SEXTHI       216
#define CMPGEBI      217
#define SELEQI       218
#define SELGEI       219
#define SELGTI       220
#define SELLEI       221
#define SELLTI       222
#define SELNEI       223
#define SELLBCI      224
#define SELLBSI      225
#define VLOGZZ       226
#define FADDS        227
#define FADDD        228
#define FSUBS        229
#define FSUBD        230
#define FMULS        231
#define FMULD        232
#define FDIVS        233
#define FDIVD        234
#define FSQRTS       235
#define FSQRTD       236
#define FCMPEQ       237
#define FCMPLE       238
#define FCMPLT       239
#define FCMPUN       240
#define FCVTSD       241
#define FCVTDS       242
#define FCVTDL_G     243
#define FCVTDL_P     244
#define FCVTDL_Z     245
#define FCVTDL_N     246
#define FCVTDL       247
#define FCVTWL       248
#define FCVTLW       249
#define FCVTLS       250
#define FCVTLD       251
#define FCPYS        252
#define FCPYSE       253
#define FCPYSN       254
#define IFMOVS       255
#define IFMOVD       256
#define RFPCR        257
#define WFPCR        258
#define SETFPEC0     259
#define SETFPEC1     260
#define SETFPEC2     261
#define SETFPEC3     262
#define FRECS        263
#define FRECD        264
#define FRIS         265
#define FRIS_G       266
#define FRIS_P       267
#define FRIS_Z       268
#define FRIS_N       269
#define FRID         270
#define FRID_G       271
#define FRID_P       272
#define FRID_Z       273
#define FRID_N       274
#define FMAS         275
#define FMAD         276
#define FMSS         277
#define FMSD         278
#define FNMAS        279
#define FNMAD        280
#define FNMSS        281
#define FNMSD        282
#define FSELEQ       283
#define FSELNE       284
#define FSELLT       285
#define FSELLE       286
#define FSELGT       287
#define FSELGE       288
#define VADDW        289
#define VADDWI       290
#define VSUBW        291
#define VSUBWI       292
#define VCMPGEW      293
#define VCMPGEWI     294
#define VCMPEQW      295
#define VCMPEQWI     296
#define VCMPLEW      297
#define VCMPLEWI     298
#define VCMPLTW      299
#define VCMPLTWI     300
#define VCMPULEW     301
#define VCMPULEWI    302
#define VCMPULTW     303
#define VCMPULTWI    304
#define VSLLW        305
#define VSLLWI       306
#define VSRLW        307
#define VSRLWI       308
#define VSRAW        309
#define VSRAWI       310
#define VROLW        311
#define VROLWI       312
#define SLLOW        313
#define SLLOWI       314
#define SRLOW        315
#define SRLOWI       316
#define VADDL        317
#define VADDLI       318
#define VSUBL        319
#define VSUBLI       320
#define VSLLB        321
#define VSLLBI       322
#define VSRLB        323
#define VSRLBI       324
#define VSRAB        325
#define VSRABI       326
#define VROLB        327
#define VROLBI       328
#define VSLLH        329
#define VSLLHI       330
#define VSRLH        331
#define VSRLHI       332
#define VSRAH        333
#define VSRAHI       334
#define VROLH        335
#define VROLHI       336
#define CTPOPOW      337
#define CTLZOW       338
#define VSLLL        339
#define VSLLLI       340
#define VSRLL        341
#define VSRLLI       342
#define VSRAL        343
#define VSRALI       344
#define VROLL        345
#define VROLLI       346
#define VMAXB        347
#define VMINB        348
#define VUCADDW      349
#define VUCADDWI     350
#define VUCSUBW      351
#define VUCSUBWI     352
#define VUCADDH      353
#define VUCADDHI     354
#define VUCSUBH      355
#define VUCSUBHI     356
#define VUCADDB      357
#define VUCADDBI     358
#define VUCSUBB      359
#define VUCSUBBI     360
#define SRAOW        361
#define SRAOWI       362
#define VSUMW        363
#define VSUML        364
#define VSM4R        365
#define VBINVW       366
#define VCMPUEQB     367
#define VCMPUGTB     368
#define VCMPUGTBI    369
#define VSM3MSW      370
#define VMAXH        371
#define VMINH        372
#define VMAXW        373
#define VMINW        374
#define VMAXL        375
#define VMINL        376
#define VUMAXB       377
#define VUMINB       378
#define VUMAXH       379
#define VUMINH       380
#define VUMAXW       381
#define VUMINW       382
#define VUMAXL       383
#define VUMINL       384
#define VSM4KEY      385
#define VADDS        386
#define VADDD        387
#define VSUBS        388
#define VSUBD        389
#define VMULS        390
#define VMULD        391
#define VDIVS        392
#define VDIVD        393
#define VSQRTS       394
#define VSQRTD       395
#define VFCMPEQ      396
#define VFCMPLE      397
#define VFCMPLT      398
#define VFCMPUN      399
#define VCPYS        400
#define VCPYSE       401
#define VCPYSN       402
#define VSUMS        403
#define VSUMD        404
#define VFCVTSD      405
#define VFCVTDS      406
#define VFCVTLS      407
#define VFCVTLD      408
#define VFCVTDL      409
#define VFCVTDL_G    410
#define VFCVTDL_P    411
#define VFCVTDL_Z    412
#define VFCVTDL_N    413
#define VFRIS        414
#define VFRIS_G      415
#define VFRIS_P      416
#define VFRIS_Z      417
#define VFRIS_N      418
#define VFRID        419
#define VFRID_G      420
#define VFRID_P      421
#define VFRID_Z      422
#define VFRID_N      423
#define VFRECS       424
#define VFRECD       425
#define VMAXS        426
#define VMINS        427
#define VMAXD        428
#define VMIND        429
#define VMAS         430
#define VMAD         431
#define VMSS         432
#define VMSD         433
#define VNMAS        434
#define VNMAD        435
#define VNMSS        436
#define VNMSD        437
#define VFSELEQ      438
#define VFSELLT      439
#define VFSELLE      440
#define VSELEQW      441
#define VSELEQWI     442
#define VSELLBCW     443
#define VSELLBCWI    444
#define VSELLTW      445
#define VSELLTWI     446
#define VSELLEW      447
#define VSELLEWI     448
#define VINSW        449
#define VINSF        450
#define VEXTW        451
#define VEXTF        452
#define VCPYW        453
#define VCPYF        454
#define VCONW        455
#define VSHFW        456
#define VCONS        457
#define VCOND        458
#define VINSB        459
#define VINSH        460
#define VINSECTLH    461
#define VINSECTLW    462
#define VINSECTLL    463
#define VINSECTLB    464
#define VSHFQ        465
#define VSHFQB       466
#define VCPYB        467
#define VCPYH        468
#define VSM3R        469
#define VFCVTSH      470
#define VFCVTHS      471
#define VLDW_U       472
#define VSTW_U       473
#define VLDS_U       474
#define VSTS_U       475
#define VLDD_U       476
#define VSTD_U       477
#define VSTW_UL      478
#define VSTW_UH      479
#define VSTS_UL      480
#define VSTS_UH      481
#define VSTD_UL      482
#define VSTD_UH      483
#define VLDD_NC      484
#define VSTD_NC      485
#define LBR          486
#define LDBU_A       487
#define LDHU_A       488
#define LDW_A        489
#define LDL_A        490
#define FLDS_A       491
#define FLDD_A       492
#define STBU_A       493
#define STHU_A       494
#define STW_A        495
#define STL_A        496
#define FSTS_A       497
#define FSTD_A       498
#define DPFHR        499
#define DPFHW        500
#define LDBU         501
#define LDHU         502
#define LDW          503
#define LDL          504
#define LDL_U        505
#define PRI_LDL      506
#define PRI_LDW      507
#define FLDS         508
#define FLDD         509
#define STB          510
#define STH          511
#define STW          512
#define STL          513
#define STL_U        514
#define PRI_STL      515
#define PRI_STW      516
#define FSTS         517
#define FSTD         518
#define BEQ          519
#define BNE          520
#define BLT          521
#define BLE          522
#define BGT          523
#define BGE          524
#define BLBC         525
#define BLBS         526
#define FBEQ         527
#define FBNE         528
#define FBLT         529
#define FBLE         530
#define FBGT         531
#define FBGE         532
#define LDIH         533
#define LDI          534

extern const char *insn_opc[535];

#endif
