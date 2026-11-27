                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined Actor::CanRun()
             undefined         <UNASSIGNED>   <RETURN>
                             Actor::CanRun                                   XREF[7]:     TESObjectREFR::sub:14067fdb3(c), 
                                                                                          Character::sub:1406800f5(c), 
                                                                                          Actor::SetMaximumMovementSpeed:1
                                                                                          Actor::SetMaximumMovementSpeed:1
                                                                                          141d4fb7c(*), 141d4fb8c(*), 
                                                                                          143657388(*)  
       140661970 40 56           PUSH       RSI                                                                                          REL::ID(37235)
                                                                                                                                         Source: AE rename database (fallback)
       140661972 48 83 ec 30     SUB        RSP,0x30
       140661976 48 8b f1        MOV        RSI,RCX
       140661979 48 8b 89        MOV        RCX,qword ptr [RCX + 0xf8]
                 f8 00 00 00
       140661980 48 85 c9        TEST       RCX,RCX
       140661983 74 0e           JZ         LAB_140661993
       140661985 e8 36 1f        CALL       FUN_1406e38c0                                                                                undefined FUN_1406e38c0()
                 08 00
       14066198a 83 f8 07        CMP        EAX,0x7
       14066198d 0f 84 c9        JZ         LAB_140661a5c
                 00 00 00
                             LAB_140661993                                   XREF[1]:     140661983(j)  
       140661993 48 3b 35        CMP        RSI,qword ptr [gPlayerCharacter3]
                 fe 5c ad 02
       14066199a 0f 85 c4        JNZ        LAB_140661a64
                 00 00 00
       1406619a0 e8 6b 5f        CALL       FUN_140737910                                                                                undefined FUN_140737910()
                 0d 00
       1406619a5 84 c0           TEST       AL,AL
       1406619a7 0f 85 85        JNZ        LAB_140661a32
                 00 00 00
       1406619ad 48 8b ce        MOV        RCX,RSI
       1406619b0 e8 bb e8        CALL       Actor::IsOnMount                                                                             undefined Actor::IsOnMount()
                 c1 ff
       1406619b5 84 c0           TEST       AL,AL
       1406619b7 75 79           JNZ        LAB_140661a32
                             LAB_1406619b9                                   XREF[3]:     141d4fb80(*), 141d4fb90(*), 
                                                                                          143657394(*)  
       1406619b9 48 89 5c        MOV        qword ptr [RSP + 0x48],RBX
                 24 48
       1406619be ba 20 00        MOV        EDX,0x20
                 00 00
       1406619c3 48 8b 1d        MOV        RBX,qword ptr [DAT_1431874f8]
                 2e 5b b2 02
       1406619ca 48 89 7c        MOV        qword ptr [RSP + 0x50],RDI
                 24 50
       1406619cf 0f 29 74        MOVAPS     xmmword ptr [RSP + 0x20],XMM6
                 24 20
       1406619d4 48 8b 83        MOV        RAX,qword ptr [RBX + 0xb8]
                 b8 00 00 00
       1406619db 48 8d 8b        LEA        RCX,[RBX + 0xb8]
                 b8 00 00 00
       1406619e2 ff 50 08        CALL       qword ptr [RAX + 0x8]
       1406619e5 4c 8d 44        LEA        R8,[RSP + 0x40]
                 24 40
       1406619ea 48 8b d3        MOV        RDX,RBX
       1406619ed b9 0a 00        MOV        ECX,0xa
                 00 00
       1406619f2 f3 0f 11        MOVSS      dword ptr [RSP + 0x40],XMM0
                 44 24 40
       1406619f8 e8 33 45        CALL       BGSEntryPoint::HandleEntryPoint                                                              void BGSEntryPoint::HandleEntryPoint(ENTRY_POINT p0, Actor * p1, pointer p2)
                 d2 ff
       1406619fd 48 8b 83        MOV        RAX,qword ptr [RBX + 0xb8]
                 b8 00 00 00
       140661a04 48 8d 8b        LEA        RCX,[RBX + 0xb8]
                 b8 00 00 00
       140661a0b f3 0f 10        MOVSS      XMM6,dword ptr [RSP + 0x40]
                 74 24 40
       140661a11 ba 1f 00        MOV        EDX,0x1f
                 00 00
       140661a16 ff 50 08        CALL       qword ptr [RAX + 0x8]
       140661a19 48 8b 7c        MOV        RDI,qword ptr [RSP + 0x50]
                 24 50
       140661a1e 48 8b 5c        MOV        RBX,qword ptr [RSP + 0x48]
                 24 48
       140661a23 0f 2f c6        COMISS     XMM0,XMM6
       140661a26 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + 0x20]
                 24 20
       140661a2b 0f 97 c0        SETA       AL
       140661a2e 84 c0           TEST       AL,AL
       140661a30 75 2a           JNZ        LAB_140661a5c
                             LAB_140661a32                                   XREF[3]:     1406619a7(j), 1406619b7(j), 
                                                                                          1436573a0(*)  
       140661a32 48 3b 35        CMP        RSI,qword ptr [gPlayerCharacter3]
                 5f 5c ad 02
       140661a39 75 29           JNZ        LAB_140661a64
       140661a3b 48 8b 05        MOV        RAX,qword ptr [DAT_1431874f8]
                 b6 5a b2 02
       140661a42 83 b8 c8        CMP        dword ptr [RAX + 0x8c8],0x0
                 08 00 00 00
       140661a49 74 19           JZ         LAB_140661a64
       140661a4b f3 0f 10        MOVSS      XMM0,dword ptr [fZKeyHeavyWeight]                                                            = 42960000h
                 05 2d 53 
                 9a 01
       140661a53 0f 2f 80        COMISS     XMM0,dword ptr [RAX + 0x8d4]
                 d4 08 00 00
       140661a5a 73 08           JNC        LAB_140661a64
                             LAB_140661a5c                                   XREF[2]:     14066198d(j), 140661a30(j)  
       140661a5c 32 c0           XOR        AL,AL
       140661a5e 48 83 c4 30     ADD        RSP,0x30
       140661a62 5e              POP        RSI
       140661a63 c3              RET
                             LAB_140661a64                                   XREF[4]:     14066199a(j), 140661a39(j), 
                                                                                          140661a49(j), 140661a5a(j)  
       140661a64 b0 01           MOV        AL,0x1
       140661a66 48 83 c4 30     ADD        RSP,0x30
       140661a6a 5e              POP        RSI
       140661a6b c3              RET
       140661a6c cc              ??         CCh
       140661a6d cc              ??         CCh
       140661a6e cc              ??         CCh
       140661a6f cc              ??         CCh
       140661a70 cc              ??         CCh
       140661a71 cc              ??         CCh
       140661a72 cc              ??         CCh
       140661a73 cc              ??         CCh
       140661a74 cc              ??         CCh
       140661a75 cc              ??         CCh
       140661a76 cc              ??         CCh
       140661a77 cc              ??         CCh
       140661a78 cc              ??         CCh
       140661a79 cc              ??         CCh
       140661a7a cc              ??         CCh
       140661a7b cc              ??         CCh
       140661a7c cc              ??         CCh
       140661a7d cc              ??         CCh
       140661a7e cc              ??         CCh
       140661a7f cc              ??         CCh
       140661a80 48              ??         48h    H
       140661a81 8b              ??         8Bh
       140661a82 81              ??         81h
       140661a83 f8              ??         F8h
       140661a84 00              ??         00h
       140661a85 00              ??         00h
       140661a86 00              ??         00h
       140661a87 48              ??         48h    H
       140661a88 85              ??         85h
       140661a89 c0              ??         C0h
       140661a8a 74              ??         74h    t
       140661a8b 10              ??         10h
       140661a8c 48              ??         48h    H
       140661a8d 8b              ??         8Bh
       140661a8e 40              ??         40h    @
       140661a8f 50              ??         50h    P
       140661a90 48              ??         48h    H
       140661a91 85              ??         85h
       140661a92 c0              ??         C0h
       140661a93 74              ??         74h    t
       140661a94 07              ??         07h
       140661a95 81              ??         81h
       140661a96 60              ??         60h    `
       140661a97 2c              ??         2Ch    ,
       140661a98 ff              ??         FFh
       140661a99 bf              ??         BFh
       140661a9a ff              ??         FFh
       140661a9b ff              ??         FFh
       140661a9c c3              ??         C3h
       140661a9d cc              ??         CCh
       140661a9e cc              ??         CCh
       140661a9f cc              ??         CCh
       140661aa0 cc              ??         CCh
       140661aa1 cc              ??         CCh
       140661aa2 cc              ??         CCh
       140661aa3 cc              ??         CCh
       140661aa4 cc              ??         CCh
       140661aa5 cc              ??         CCh
       140661aa6 cc              ??         CCh
       140661aa7 cc              ??         CCh
       140661aa8 cc              ??         CCh
       140661aa9 cc              ??         CCh
       140661aaa cc              ??         CCh
       140661aab cc              ??         CCh
       140661aac cc              ??         CCh
       140661aad cc              ??         CCh
       140661aae cc              ??         CCh
       140661aaf cc              ??         CCh


Other functions:
**************************************************************
*                          FUNCTION                          *
**************************************************************
undefined FUN_1406e38c0()
undefined         <UNASSIGNED>   <RETURN>
FUN_1406e38c0                                   XREF[10]:    Actor::CanRun:140661985(c), 
                                                             Actor::Update:140668228(c), 
                                                             Actor::EvaluatePackage:14066cfc9
                                                             Character::sub:140674fcc(c), 
                                                             FUN_14067a0a0:14067a0c3(c), 
                                                             FUN_14067a100:14067a10a(j), 
                                                             Character::sub:140689650(c), 
                                                             Character::sub:1406a06ca(c), 
                                                             AIProcess::KnockExplosion:140710
                                                             PlayerCharacter::sub:140736c0b(c
1406e38c0 48 8b 41 10     MOV        RAX,qword ptr [RCX + 0x10]
1406e38c4 48 85 c0        TEST       RAX,RAX
1406e38c7 74 08           JZ         LAB_1406e38d1
1406e38c9 0f bf 80        MOVSX      EAX,word ptr [RAX + 0x2d8]
d8 02 00 00
1406e38d0 c3              RET
LAB_1406e38d1                                   XREF[1]:     1406e38c7(j)  
1406e38d1 b8 ff ff        MOV        EAX,0xffffffff
ff ff
1406e38d6 c3              RET
1406e38d7 cc              ??         CCh
1406e38d8 cc              ??         CCh
1406e38d9 cc              ??         CCh
1406e38da cc              ??         CCh
1406e38db cc              ??         CCh
1406e38dc cc              ??         CCh
1406e38dd cc              ??         CCh
1406e38de cc              ??         CCh
1406e38df cc              ??         CCh
1406e38e0 48              ??         48h    H
1406e38e1 8b              ??         8Bh
1406e38e2 41              ??         41h    A
1406e38e3 10              ??         10h
1406e38e4 48              ??         48h    H
1406e38e5 85              ??         85h
1406e38e6 c0              ??         C0h
1406e38e7 74              ??         74h    t
1406e38e8 08              ??         08h
1406e38e9 48              ??         48h    H
1406e38ea 8b              ??         8Bh
1406e38eb 80              ??         80h
1406e38ec d0              ??         D0h
1406e38ed 02              ??         02h
1406e38ee 00              ??         00h
1406e38ef 00              ??         00h
1406e38f0 c3              ??         C3h
1406e38f1 c3              ??         C3h
1406e38f2 cc              ??         CCh
1406e38f3 cc              ??         CCh
1406e38f4 cc              ??         CCh
1406e38f5 cc              ??         CCh
1406e38f6 cc              ??         CCh
1406e38f7 cc              ??         CCh
1406e38f8 cc              ??         CCh
1406e38f9 cc              ??         CCh
1406e38fa cc              ??         CCh
1406e38fb cc              ??         CCh
1406e38fc cc              ??         CCh
1406e38fd cc              ??         CCh
1406e38fe cc              ??         CCh
1406e38ff cc              ??         CCh


                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_140737910()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_140737910                                   XREF[9]:     ConsoleFunc::handler::ToggleGodM
                                                                                          ConsoleFunc::handler::ToggleGodM
                                                                                          ActorMagicCaster::Func29:1405b0f
                                                                                          ActorMagicCaster::Func10:1405b16
                                                                                          Actor::CanRun:1406619a0(c), 
                                                                                          Actor::IsOverEncumbered:14067351
                                                                                          Actor::AttachArrow:1406b5953(c), 
                                                                                          Actor::DetachArrow:1406b5acd(c), 
                                                                                          PlayerCharacter::ReduceCurrently
       140737910 0f b6 05        MOVZX      EAX,byte ptr [DAT_14319b9d6]
                 bf 40 a6 02
       140737917 c3              RET
       140737918 cc              ??         CCh
       140737919 cc              ??         CCh
       14073791a cc              ??         CCh
       14073791b cc              ??         CCh
       14073791c cc              ??         CCh
       14073791d cc              ??         CCh
       14073791e cc              ??         CCh
