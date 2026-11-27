                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined Actor::SendActorValueUpdate()
             undefined         <UNASSIGNED>   <RETURN>
             undefined8        Stack[0x10]:8  local_res10                             XREF[2]:     1406b2a45(W), 
                                                                                                   1406b2b34(R)  
             undefined8        Stack[0x8]:8   local_res8                              XREF[2]:     1406b2a40(W), 
                                                                                                   1406b2b30(R)  
             undefined         Stack[-0x8]:1  local_8                                 XREF[1]:     1406b2b2b(*)  
             undefined1[16]    Stack[-0x18]   local_18                                XREF[2]:     1406b2a4f(W), 
                                                                                                   1406b2b26(R)  
             undefined1[16]    Stack[-0x28]   local_28                                XREF[2]:     1406b2a66(W), 
                                                                                                   1406b2b42(R)  
             undefined1[16]    Stack[-0x38]   local_38                                XREF[2]:     1406b2a71(W), 
                                                                                                   1406b2b38(R)  
             undefined1[16]    Stack[-0x48]   local_48                                XREF[2]:     1406b2a7a(W), 
                                                                                                   1406b2b3d(R)  
             undefined8        Stack[-0x58]:8 local_58                                XREF[1]:     1406b2b1a(W)  
                             Actor::SendActorValueUpdate                     XREF[8]:     InventoryChanges::GetInventoryWe
                                                                                          ActorValueOwner::SetBaseActorVal
                                                                                          ActorValueOwner::ModifyActorValu
                                                                                          Actor::SetActorValueModifiers:14
                                                                                          FUN_1406b4560:1406b45d8(c), 
                                                                                          PlayerCharacter::sub:1406b46a8(c
                                                                                          Character::sub:1406b4784(c), 
                                                                                          14365aab4(*)  
       1406b2a40 48 89 5c        MOV        qword ptr [RSP + local_res8],RBX                                                             REL::ID(38470)
                 24 08                                                                                                                   Source: AE rename database (fallback)
       1406b2a45 48 89 74        MOV        qword ptr [RSP + local_res10],RSI
                 24 10
       1406b2a4a 57              PUSH       RDI
       1406b2a4b 48 83 ec 70     SUB        RSP,0x70
       1406b2a4f 0f 29 74        MOVAPS     xmmword ptr [RSP + local_18[0]],XMM6
                 24 60
       1406b2a54 48 8d 35        LEA        RSI,[ActorValueUpdateSinks]
                 05 7a ae 02
       1406b2a5b f3 0f 10        MOVSS      XMM6,dword ptr [fDamagedAVRegenDelay]                                                        = 3F800000h
                 35 6d 38 
                 95 01
       1406b2a63 48 8b f9        MOV        RDI,RCX
       1406b2a66 0f 29 7c        MOVAPS     xmmword ptr [RSP + local_28[0]],XMM7
                 24 50
       1406b2a6b 0f 57 ff        XORPS      XMM7,XMM7
       1406b2a6e 48 63 da        MOVSXD     RBX,EDX
       1406b2a71 44 0f 29        MOVAPS     xmmword ptr [RSP + local_38[0]],XMM8
                 44 24 40
       1406b2a77 44 8b c3        MOV        R8D,EBX
       1406b2a7a 44 0f 29        MOVAPS     xmmword ptr [RSP + local_48[0]],XMM9
                 4c 24 30
       1406b2a80 44 0f 28 c3     MOVAPS     XMM8,XMM3
       1406b2a84 44 0f 28 ca     MOVAPS     XMM9,XMM2
       1406b2a88 48 8b 34 de     MOV        RSI=>ActorValueUpdateSinks,qword ptr [RSI + RBX*0x8]
       1406b2a8c 41 83 e8 18     SUB        R8D,0x18
       1406b2a90 74 20           JZ         LAB_1406b2ab2
       1406b2a92 41 83 e8 01     SUB        R8D,0x1
       1406b2a96 74 10           JZ         LAB_1406b2aa8
       1406b2a98 41 83 f8 01     CMP        R8D,0x1
       1406b2a9c 75 38           JNZ        LAB_1406b2ad6
       1406b2a9e f3 0f 10        MOVSS      XMM6,dword ptr [fDamagedStaminaRegenDelay]                                                   = 3F800000h
                 35 72 38 
                 95 01
       1406b2aa6 eb 2e           JMP        LAB_1406b2ad6
                             LAB_1406b2aa8                                   XREF[1]:     1406b2a96(j)  
       1406b2aa8 f3 0f 10        MOVSS      XMM6,dword ptr [fDamagedMagickaRegenDelay]                                                   = 3F800000h
                 35 50 38 
                 95 01
       1406b2ab0 eb 24           JMP        LAB_1406b2ad6
                             LAB_1406b2ab2                                   XREF[1]:     1406b2a90(j)  
       1406b2ab2 48 81 c1        ADD        RCX,0xb8
                 b8 00 00 00
       1406b2ab9 ba 86 00        MOV        EDX,0x86
                 00 00
       1406b2abe 48 8b 01        MOV        RAX,qword ptr [RCX]
       1406b2ac1 ff 50 08        CALL       qword ptr [RAX + 0x8]
       1406b2ac4 0f 2e c7        UCOMISS    XMM0,XMM7
       1406b2ac7 75 0a           JNZ        LAB_1406b2ad3
       1406b2ac9 f3 0f 10        MOVSS      XMM6,dword ptr [fDamagedHealthRegenDelay]                                                    = 3F800000h
                 35 17 38 
                 95 01
       1406b2ad1 eb 03           JMP        LAB_1406b2ad6
                             LAB_1406b2ad3                                   XREF[1]:     1406b2ac7(j)  
       1406b2ad3 0f 57 f6        XORPS      XMM6,XMM6
                             LAB_1406b2ad6                                   XREF[4]:     1406b2a9c(j), 1406b2aa6(j), 
                                                                                          1406b2ab0(j), 1406b2ad1(j)  
       1406b2ad6 48 8b 8f        MOV        RCX,qword ptr [RDI + 0xf8]
                 f8 00 00 00
       1406b2add 48 85 c9        TEST       RCX,RCX
       1406b2ae0 74 23           JZ         LAB_1406b2b05
       1406b2ae2 44 0f 2f c7     COMISS     XMM8,XMM7
       1406b2ae6 73 1d           JNC        LAB_1406b2b05
       1406b2ae8 8b d3           MOV        EDX,EBX
       1406b2aea e8 91 aa        CALL       FUN_1406ed580                                                                                undefined FUN_1406ed580()
                 03 00
       1406b2aef 0f 2f c6        COMISS     XMM0,XMM6
       1406b2af2 73 11           JNC        LAB_1406b2b05
       1406b2af4 48 8b 8f        MOV        RCX,qword ptr [RDI + 0xf8]
                 f8 00 00 00
       1406b2afb 0f 28 d6        MOVAPS     XMM2,XMM6
       1406b2afe 8b d3           MOV        EDX,EBX
       1406b2b00 e8 fb aa        CALL       FUN_1406ed600                                                                                undefined FUN_1406ed600()
                 03 00
                             LAB_1406b2b05                                   XREF[3]:     1406b2ae0(j), 1406b2ae6(j), 
                                                                                          1406b2af2(j)  
       1406b2b05 48 85 f6        TEST       RSI,RSI
       1406b2b08 74 1c           JZ         LAB_1406b2b26
       1406b2b0a 48 8b 84        MOV        RAX,qword ptr [RSP + Stack[0x28]]
                 24 a0 00 
                 00 00
       1406b2b12 41 0f 28 d8     MOVAPS     XMM3,XMM8
       1406b2b16 41 0f 28 d1     MOVAPS     XMM2,XMM9
       1406b2b1a 48 89 44        MOV        qword ptr [RSP + local_58],RAX
                 24 20
       1406b2b1f 8b d3           MOV        EDX,EBX
       1406b2b21 48 8b cf        MOV        RCX,RDI
       1406b2b24 ff d6           CALL       RSI
                             LAB_1406b2b26                                   XREF[1]:     1406b2b08(j)  
       1406b2b26 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + local_18[0]]
                 24 60
       1406b2b2b 4c 8d 5c        LEA        R11=>local_8,[RSP + 0x70]
                 24 70
       1406b2b30 49 8b 5b 10     MOV        RBX,qword ptr [R11 + local_res8]
       1406b2b34 49 8b 73 18     MOV        RSI,qword ptr [R11 + local_res10]
       1406b2b38 45 0f 28        MOVAPS     XMM8,xmmword ptr [R11 + local_38[0]]
                 43 d0
       1406b2b3d 45 0f 28        MOVAPS     XMM9,xmmword ptr [R11 + local_48[0]]
                 4b c0
       1406b2b42 0f 28 7c        MOVAPS     XMM7,xmmword ptr [RSP + local_28[0]]
                 24 50
       1406b2b47 49 8b e3        MOV        RSP,R11
       1406b2b4a 5f              POP        RDI
       1406b2b4b c3              RET
       1406b2b4c cc              ??         CCh
       1406b2b4d cc              ??         CCh
       1406b2b4e cc              ??         CCh
       1406b2b4f cc              ??         CCh
       1406b2b50 cc              ??         CCh
       1406b2b51 cc              ??         CCh
       1406b2b52 cc              ??         CCh
       1406b2b53 cc              ??         CCh
       1406b2b54 cc              ??         CCh
       1406b2b55 cc              ??         CCh
       1406b2b56 cc              ??         CCh
       1406b2b57 cc              ??         CCh
       1406b2b58 cc              ??         CCh
       1406b2b59 cc              ??         CCh
       1406b2b5a cc              ??         CCh
       1406b2b5b cc              ??         CCh
       1406b2b5c cc              ??         CCh
       1406b2b5d cc              ??         CCh
       1406b2b5e cc              ??         CCh
       1406b2b5f cc              ??         CCh

## Decompiled FUNCTION

void Actor::SendActorValueUpdate
               (longlong param_1,int param_2,undefined4 param_3,float param_4,undefined8 param_5)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  
  pcVar1 = (code *)(&ActorValueUpdateSinks)[param_2];
  if (param_2 == 0x18) {
    fVar2 = (float)(**(code **)(*(longlong *)(param_1 + 0xb8) + 8))
                             ((longlong *)(param_1 + 0xb8),0x86);
    fVar3 = fDamagedHealthRegenDelay;
    if (fVar2 != 0.0) {
      fVar3 = 0.0;
    }
  }
  else {
    fVar3 = fDamagedMagickaRegenDelay;
    if ((param_2 != 0x19) && (fVar3 = fDamagedAVRegenDelay, param_2 == 0x1a)) {
      fVar3 = fDamagedStaminaRegenDelay;
    }
  }
  if (((*(longlong *)(param_1 + 0xf8) != 0) && (param_4 < 0.0)) &&
     (fVar2 = (float)FUN_1406ed580(*(longlong *)(param_1 + 0xf8),param_2), fVar2 < fVar3)) {
    FUN_1406ed600(*(undefined8 *)(param_1 + 0xf8),param_2,fVar3);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

## ActorValueUpdateSinks[0x1F]  resovles to:
DAT_14319a558                                   XREF[1]:     1400a1a6f(W)  
14319a558 00              ??         00h
14319a559 00              ??         00h
14319a55a 00              ??         00h
14319a55b 00              ??         00h
14319a55c 00              ??         00h
14319a55d 00              ??         00h
14319a55e 00              ??         00h
14319a55f 00              ??         00h

### which i believe is a pointer:
PTR_14319a558                                   XREF[1]:     1400a1a6f(W)  
14319a558 00 00 00        addr       00000000
00 00 00 
00 00

### And is referenced here:

                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_1400a19a0()
             undefined         <UNASSIGNED>   <RETURN>
             undefined8        Stack[0x10]:8  local_res10                             XREF[2]:     1400a19af(W), 
                                                                                                   1400a19fb(R)  
             undefined4        Stack[0x8]:4   local_res8                              XREF[1]:     1400a19d1(W)  
             undefined8        Stack[-0x18]:8 local_18                                XREF[1]:     1400a19a6(W)  
                             FUN_1400a19a0                                   XREF[2]:     14175bdd8(*), 143602c8c(*)  
       1400a19a0 40 57           PUSH       RDI
       1400a19a2 48 83 ec 30     SUB        RSP,0x30
       1400a19a6 48 c7 44        MOV        qword ptr [RSP + local_18],-0x2
                 24 20 fe 
                 ff ff ff
       1400a19af 48 89 5c        MOV        qword ptr [RSP + local_res10],RBX
                 24 48
       1400a19b4 8b 0d be        MOV        ECX,dword ptr [_tls_index]
                 ee 54 03
       1400a19ba 65 48 8b        MOV        RAX,qword ptr GS:[0x58]
                 04 25 58 
                 00 00 00
       1400a19c3 ba 68 07        MOV        EDX,0x768
                 00 00
       1400a19c8 48 8b 3c c8     MOV        RDI,qword ptr [RAX + RCX*0x8]
       1400a19cc 48 03 fa        ADD        RDI,RDX
       1400a19cf 8b 1f           MOV        EBX,dword ptr [RDI]
       1400a19d1 89 5c 24 40     MOV        dword ptr [RSP + local_res8],EBX
       1400a19d5 c7 07 66        MOV        dword ptr [RDI],0x66
                 00 00 00
       1400a19db e8 10 68        CALL       InitializeSkyrimINISettingCollection                                                         undefined InitializeSkyrimINISettingCollection()
                 0f 00
       1400a19e0 4c 8b 00        MOV        R8,qword ptr [RAX]
       1400a19e3 48 8d 15        LEA        RDX,[gIni_uVariableCacheSize_Animation]                                                      = 141775178
                 0e 1e f7 01
       1400a19ea 48 8b c8        MOV        RCX,RAX
       1400a19ed 41 ff 50 08     CALL       qword ptr [R8 + 0x8]
       1400a19f1 90              NOP
       1400a19f2 89 1f           MOV        dword ptr [RDI],EBX
       1400a19f4 48 8d 0d        LEA        RCX,[FUN_141722010]
                 15 06 68 01
       1400a19fb 48 8b 5c        MOV        RBX,qword ptr [RSP + local_res10]
                 24 48
       1400a1a00 48 83 c4 30     ADD        RSP,0x30
       1400a1a04 5f              POP        RDI
       1400a1a05 e9 76 96        JMP        atexit                                                                                       int atexit(_func_5014 * param_1)
                 49 01
                             -- Flow Override: CALL_RETURN (CALL_TERMINATOR)
       1400a1a0a cc              ??         CCh
       1400a1a0b cc              ??         CCh
       1400a1a0c cc              ??         CCh
       1400a1a0d cc              ??         CCh
       1400a1a0e cc              ??         CCh
       1400a1a0f cc              ??         CCh
                             LAB_1400a1a10                                   XREF[1]:     14175be48(*)  
       1400a1a10 48 8d 0d        LEA        RCX,[FUN_141722060]
                 49 06 68 01
       1400a1a17 e9 64 96        JMP        atexit                                                                                       int atexit(_func_5014 * param_1)
                 49 01
                             -- Flow Override: CALL_RETURN (CALL_TERMINATOR)
       1400a1a1c cc              ??         CCh
       1400a1a1d cc              ??         CCh
       1400a1a1e cc              ??         CCh
       1400a1a1f cc              ??         CCh
                             LAB_1400a1a20                                   XREF[1]:     14175be50(*)  
       1400a1a20 33 d2           XOR        EDX,EDX
       1400a1a22 48 8d 05        LEA        RAX,[ActorValueUpdateSinks]
                 37 8a 0f 03
       1400a1a29 8d 4a 14        LEA        ECX,[RDX + 0x14]
       1400a1a2c 0f 1f 40 00     NOP        dword ptr [RAX]
                             LAB_1400a1a30                                   XREF[1]:     1400a1a57(j)  
       1400a1a30 48 89 10        MOV        qword ptr [RAX]=>ActorValueUpdateSinks,RDX
       1400a1a33 48 89 50 08     MOV        qword ptr [RAX + 0x8]=>DAT_14319a468,RDX
       1400a1a37 48 89 50 10     MOV        qword ptr [RAX + 0x10]=>DAT_14319a470,RDX
       1400a1a3b 48 8d 40 40     LEA        RAX,[RAX + 0x40]=>DAT_14319a4a0
       1400a1a3f 48 89 50 d8     MOV        qword ptr [RAX + -0x28]=>DAT_14319a478,RDX
       1400a1a43 48 89 50 e0     MOV        qword ptr [RAX + -0x20]=>DAT_14319a480,RDX
       1400a1a47 48 89 50 e8     MOV        qword ptr [RAX + -0x18]=>DAT_14319a488,RDX
       1400a1a4b 48 89 50 f0     MOV        qword ptr [RAX + -0x10]=>DAT_14319a490,RDX
       1400a1a4f 48 89 50 f8     MOV        qword ptr [RAX + -0x8]=>DAT_14319a498,RDX
       1400a1a53 48 83 e9 01     SUB        RCX,0x1
       1400a1a57 75 d7           JNZ        LAB_1400a1a30
       1400a1a59 48 89 10        MOV        qword ptr [RAX]=>DAT_14319a4e0,RDX
       1400a1a5c 48 89 50 08     MOV        qword ptr [RAX + 0x8]=>DAT_14319a4e8,RDX
       1400a1a60 48 89 50 10     MOV        qword ptr [RAX + 0x10]=>DAT_14319a4f0,RDX
       1400a1a64 48 89 50 18     MOV        qword ptr [RAX + 0x18]=>DAT_14319a4f8,RDX
       1400a1a68 48 8d 05        LEA        RAX,[PlayerCharacter::sub]
                 21 22 61 00
       1400a1a6f 48 89 05        MOV        qword ptr [PTR_14319a558],RAX                                                                = 00000000
                 e2 8a 0f 03
       1400a1a76 48 8d 05        LEA        RAX,[PlayerCharacter::sub]
                 c3 22 61 00
       1400a1a7d 48 89 05        MOV        qword ptr [DAT_14319a560],RAX
                 dc 8a 0f 03
       1400a1a84 48 8d 05        LEA        RAX,[Actor::sub]
                 95 23 61 00
       1400a1a8b 48 89 05        MOV        qword ptr [DAT_14319a520],RAX
                 8e 8a 0f 03
       1400a1a92 48 8d 05        LEA        RAX,[FUN_1406b4060]
                 c7 25 61 00
       1400a1a99 48 89 05        MOV        qword ptr [DAT_14319a528],RAX
                 88 8a 0f 03
       1400a1aa0 48 8d 05        LEA        RAX,[FUN_1406b4130]
                 89 26 61 00
       1400a1aa7 48 89 05        MOV        qword ptr [DAT_14319a6f0],RAX
                 42 8c 0f 03
       1400a1aae 48 89 05        MOV        qword ptr [DAT_14319a660],RAX
                 ab 8b 0f 03
       1400a1ab5 48 8d 05        LEA        RAX,[LAB_1406b41b0]
                 f4 26 61 00
       1400a1abc 48 89 05        MOV        qword ptr [DAT_14319a530],RAX
                 6d 8a 0f 03
       1400a1ac3 48 8d 05        LEA        RAX,[FUN_1406b4230]
                 66 27 61 00
       1400a1aca 48 89 05        MOV        qword ptr [DAT_14319a658],RAX
                 87 8b 0f 03
       1400a1ad1 48 8d 05        LEA        RAX,[LAB_1406b4350]
                 78 28 61 00
       1400a1ad8 48 89 05        MOV        qword ptr [DAT_14319a608],RAX
                 29 8b 0f 03
       1400a1adf 48 8d 05        LEA        RAX,[FUN_1406b41c0]
                 da 26 61 00
       1400a1ae6 48 89 05        MOV        qword ptr [DAT_14319a588],RAX
                 9b 8a 0f 03
       1400a1aed 48 8d 05        LEA        RAX,[LAB_1406b4390]
                 9c 28 61 00
       1400a1af4 48 89 05        MOV        qword ptr [DAT_14319a4c0],RAX
                 c5 89 0f 03
       1400a1afb 48 89 05        MOV        qword ptr [DAT_14319a4b8],RAX
                 b6 89 0f 03
       1400a1b02 48 8d 05        LEA        RAX,[LAB_1406b43b0]
                 a7 28 61 00
       1400a1b09 48 89 05        MOV        qword ptr [DAT_14319a610],RAX
                 00 8b 0f 03
       1400a1b10 48 8d 05        LEA        RAX,[LAB_1406b4400]
                 e9 28 61 00
       1400a1b17 48 89 05        MOV        qword ptr [DAT_14319a468],RAX
                 4a 89 0f 03
       1400a1b1e 48 8d 05        LEA        RAX,[LAB_1406b4440]
                 1b 29 61 00
       1400a1b25 48 89 05        MOV        qword ptr [DAT_14319a598],RAX
                 6c 8a 0f 03
       1400a1b2c 48 8d 05        LEA        RAX,[LAB_1406b4470]
                 3d 29 61 00
       1400a1b33 48 89 05        MOV        qword ptr [DAT_14319a720],RAX
                 e6 8b 0f 03
       1400a1b3a 48 8d 05        LEA        RAX,[LAB_1406b44a0]
                 5f 29 61 00
       1400a1b41 48 89 05        MOV        qword ptr [DAT_14319a890],RAX
                 48 8d 0f 03
       1400a1b48 48 8d 05        LEA        RAX,[FUN_1406b44d0]
                 81 29 61 00
       1400a1b4f 48 89 05        MOV        qword ptr [DAT_14319a888],RAX
                 32 8d 0f 03
       1400a1b56 48 8d 05        LEA        RAX,[LAB_1406b4500]
                 a3 29 61 00
       1400a1b5d 48 89 05        MOV        qword ptr [DAT_14319a928],RAX
                 c4 8d 0f 03
       1400a1b64 c3              RET
       1400a1b65 cc              ??         CCh
       1400a1b66 cc              ??         CCh
       1400a1b67 cc              ??         CCh
       1400a1b68 cc              ??         CCh
       1400a1b69 cc              ??         CCh
       1400a1b6a cc              ??         CCh
       1400a1b6b cc              ??         CCh
       1400a1b6c cc              ??         CCh
       1400a1b6d cc              ??         CCh
       1400a1b6e cc              ??         CCh
       1400a1b6f cc              ??         CCh
                             LAB_1400a1b70                                   XREF[1]:     14175be68(*)  
       1400a1b70 48 8d 0d        LEA        RCX,[FUN_141722130]
                 b9 05 68 01
       1400a1b77 e9 04 95        JMP        atexit                                                                                       int atexit(_func_5014 * param_1)
                 49 01
                             -- Flow Override: CALL_RETURN (CALL_TERMINATOR)
       1400a1b7c cc              ??         CCh
       1400a1b7d cc              ??         CCh
       1400a1b7e cc              ??         CCh
       1400a1b7f cc              ??         CCh

## Decompiled FUNCTION


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UndefinedFunction_1400a1a20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x14;
  puVar1 = &ActorValueUpdateSinks;
  do {
    puVar2 = puVar1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar2 + 8;
  } while (lVar3 != 0);
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  PTR_14319a558 = PlayerCharacter::sub;
  _DAT_14319a560 = PlayerCharacter::sub;
  _DAT_14319a520 = Actor::sub;
  _DAT_14319a528 = FUN_1406b4060;
  _DAT_14319a6f0 = FUN_1406b4130;
  _DAT_14319a660 = FUN_1406b4130;
  _DAT_14319a530 = &LAB_1406b41b0;
  _DAT_14319a658 = FUN_1406b4230;
  _DAT_14319a608 = &LAB_1406b4350;
  _DAT_14319a588 = FUN_1406b41c0;
  DAT_14319a4c0 = &LAB_1406b4390;
  DAT_14319a4b8 = &LAB_1406b4390;
  _DAT_14319a610 = &LAB_1406b43b0;
  DAT_14319a468 = &LAB_1406b4400;
  _DAT_14319a598 = &LAB_1406b4440;
  _DAT_14319a720 = &LAB_1406b4470;
  _DAT_14319a890 = &LAB_1406b44a0;
  _DAT_14319a888 = FUN_1406b44d0;
  _DAT_14319a928 = &LAB_1406b4500;
  return;
}


                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined PlayerCharacter::sub()
             undefined         <UNASSIGNED>   <RETURN>
             undefined1[16]    Stack[-0x18]   local_18                                XREF[2]:     1406b3c96(W), 
                                                                                                   1406b3d1f(R)  
             undefined1[16]    Stack[-0x28]   local_28                                XREF[2]:     1406b3c9e(W), 
                                                                                                   1406b3d24(R)  
                             PlayerCharacter::sub                            XREF[2]:     1400a1a68(*), 14365abbc(*)  
       1406b3c90 40 53           PUSH       RBX                                                                                          REL::ID(38489)
                                                                                                                                         Source: AE rename database (fallback)
       1406b3c92 48 83 ec 40     SUB        RSP,0x40
       1406b3c96 0f 29 74        MOVAPS     xmmword ptr [RSP + local_18[0]],XMM6
                 24 30
       1406b3c9b 48 8b d9        MOV        RBX,RCX
       1406b3c9e 0f 29 7c        MOVAPS     xmmword ptr [RSP + local_28[0]],XMM7
                 24 20
       1406b3ca3 48 81 c1        ADD        RCX,0x208
                 08 02 00 00
       1406b3caa 0f 28 fb        MOVAPS     XMM7,XMM3
       1406b3cad 0f 28 f2        MOVAPS     XMM6,XMM2
       1406b3cb0 e8 6b c9        CALL       FUN_1406d0620                                                                                undefined FUN_1406d0620()
                 01 00
       1406b3cb5 48 8b cb        MOV        RCX,RBX
       1406b3cb8 e8 03 be        CALL       FUN_14067fac0                                                                                undefined FUN_14067fac0()
                 fc ff
       1406b3cbd 48 8b 05        MOV        RAX,qword ptr [DAT_14317aba8]
                 e4 6e ac 02
       1406b3cc4 8b 90 40        MOV        EDX,dword ptr [RAX + 0x340]
                 03 00 00
       1406b3cca d1 ea           SHR        EDX,0x1
       1406b3ccc f6 c2 01        TEST       DL,0x1
       1406b3ccf 75 08           JNZ        LAB_1406b3cd9
       1406b3cd1 48 8b cb        MOV        RCX,RBX
       1406b3cd4 e8 d7 79        CALL       Character::UpdateMovementSpeed                                                               undefined Character::UpdateMovementSpeed()
                 fe ff
                             LAB_1406b3cd9                                   XREF[1]:     1406b3ccf(j)  
       1406b3cd9 48 3b 1d        CMP        RBX,qword ptr [gPlayerCharacter3]
                 b8 39 a8 02
       1406b3ce0 75 3d           JNZ        LAB_1406b3d1f
       1406b3ce2 0f 57 c0        XORPS      XMM0,XMM0
       1406b3ce5 0f 2f f8        COMISS     XMM7,XMM0
       1406b3ce8 76 35           JBE        LAB_1406b3d1f
       1406b3cea 48 8b 0d        MOV        RCX,qword ptr [DAT_1431874f8]
                 07 38 ad 02
       1406b3cf1 ba 20 00        MOV        EDX,0x20
                 00 00
       1406b3cf6 48 81 c1        ADD        RCX,0xb8
                 b8 00 00 00
       1406b3cfd 48 8b 01        MOV        RAX,qword ptr [RCX]
       1406b3d00 ff 50 08        CALL       qword ptr [RAX + 0x8]
       1406b3d03 0f 2f f0        COMISS     XMM6,XMM0
       1406b3d06 77 17           JA         LAB_1406b3d1f
       1406b3d08 f3 0f 58 f7     ADDSS      XMM6,XMM7
       1406b3d0c 0f 2f f0        COMISS     XMM6,XMM0
       1406b3d0f 76 0e           JBE        LAB_1406b3d1f
       1406b3d11 48 8b 0d        MOV        RCX,qword ptr [DAT_1431874f8]
                 e0 37 ad 02
       1406b3d18 b2 01           MOV        DL,0x1
       1406b3d1a e8 31 65        CALL       FUN_14073a250                                                                                undefined FUN_14073a250()
                 08 00
                             LAB_1406b3d1f                                   XREF[4]:     1406b3ce0(j), 1406b3ce8(j), 
                                                                                          1406b3d06(j), 1406b3d0f(j)  
       1406b3d1f 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + local_18[0]]
                 24 30
       1406b3d24 0f 28 7c        MOVAPS     XMM7,xmmword ptr [RSP + local_28[0]]
                 24 20
       1406b3d29 48 83 c4 40     ADD        RSP,0x40
       1406b3d2d 5b              POP        RBX
       1406b3d2e c3              RET
       1406b3d2f cc              ??         CCh
       1406b3d30 cc              ??         CCh
       1406b3d31 cc              ??         CCh
       1406b3d32 cc              ??         CCh
       1406b3d33 cc              ??         CCh
       1406b3d34 cc              ??         CCh
       1406b3d35 cc              ??         CCh
       1406b3d36 cc              ??         CCh
       1406b3d37 cc              ??         CCh
       1406b3d38 cc              ??         CCh
       1406b3d39 cc              ??         CCh
       1406b3d3a cc              ??         CCh
       1406b3d3b cc              ??         CCh
       1406b3d3c cc              ??         CCh
       1406b3d3d cc              ??         CCh
       1406b3d3e cc              ??         CCh
       1406b3d3f cc              ??         CCh



void PlayerCharacter::sub(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  
  FUN_1406d0620(param_1 + 0x208);
  FUN_14067fac0(param_1);
  if ((*(uint *)(DAT_14317aba8 + 0x340) >> 1 & 1) == 0) {
    Character::UpdateMovementSpeed(param_1);
  }
  if ((param_1 == gPlayerCharacter3) && (0.0 < param_4)) {
    fVar1 = (float)(**(code **)(*(longlong *)(DAT_1431874f8 + 0xb8) + 8))
                             ((longlong *)(DAT_1431874f8 + 0xb8),0x20);
    if ((param_3 <= fVar1) && (fVar1 < param_3 + param_4)) {
      FUN_14073a250(DAT_1431874f8,1);
    }
  }
  return;
}

                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined PlayerCharacter::sub()
             undefined         <UNASSIGNED>   <RETURN>
             undefined1[16]    Stack[-0x18]   local_18                                XREF[2]:     1406b3d46(W), 
                                                                                                   1406b3dc0(R)  
             undefined1[16]    Stack[-0x28]   local_28                                XREF[2]:     1406b3d4e(W), 
                                                                                                   1406b3dc5(R)  
                             PlayerCharacter::sub                            XREF[2]:     1400a1a76(*), 14365abc8(*)  
       1406b3d40 40 53           PUSH       RBX                                                                                          REL::ID(38490)
                                                                                                                                         Source: AE rename database (fallback)
       1406b3d42 48 83 ec 40     SUB        RSP,0x40
       1406b3d46 0f 29 74        MOVAPS     xmmword ptr [RSP + local_18[0]],XMM6
                 24 30
       1406b3d4b 48 8b d9        MOV        RBX,RCX
       1406b3d4e 0f 29 7c        MOVAPS     xmmword ptr [RSP + local_28[0]],XMM7
                 24 20
       1406b3d53 0f 28 f2        MOVAPS     XMM6,XMM2
       1406b3d56 0f 28 fb        MOVAPS     XMM7,XMM3
       1406b3d59 e8 62 bd        CALL       FUN_14067fac0                                                                                undefined FUN_14067fac0()
                 fc ff
       1406b3d5e 48 8b 05        MOV        RAX,qword ptr [DAT_14317aba8]
                 43 6e ac 02
       1406b3d65 8b 90 40        MOV        EDX,dword ptr [RAX + 0x340]
                 03 00 00
       1406b3d6b d1 ea           SHR        EDX,0x1
       1406b3d6d f6 c2 01        TEST       DL,0x1
       1406b3d70 75 08           JNZ        LAB_1406b3d7a
       1406b3d72 48 8b cb        MOV        RCX,RBX
       1406b3d75 e8 36 79        CALL       Character::UpdateMovementSpeed                                                               undefined Character::UpdateMovementSpeed()
                 fe ff
                             LAB_1406b3d7a                                   XREF[1]:     1406b3d70(j)  
       1406b3d7a 48 3b 1d        CMP        RBX,qword ptr [gPlayerCharacter3]
                 17 39 a8 02
       1406b3d81 75 3d           JNZ        LAB_1406b3dc0
       1406b3d83 0f 57 c0        XORPS      XMM0,XMM0
       1406b3d86 0f 2f f8        COMISS     XMM7,XMM0
       1406b3d89 73 35           JNC        LAB_1406b3dc0
       1406b3d8b 48 8b 0d        MOV        RCX,qword ptr [DAT_1431874f8]
                 66 37 ad 02
       1406b3d92 ba 1f 00        MOV        EDX,0x1f
                 00 00
       1406b3d97 48 81 c1        ADD        RCX,0xb8
                 b8 00 00 00
       1406b3d9e 48 8b 01        MOV        RAX,qword ptr [RCX]
       1406b3da1 ff 50 08        CALL       qword ptr [RAX + 0x8]
       1406b3da4 0f 2f c6        COMISS     XMM0,XMM6
       1406b3da7 77 17           JA         LAB_1406b3dc0
       1406b3da9 f3 0f 58 f7     ADDSS      XMM6,XMM7
       1406b3dad 0f 2f c6        COMISS     XMM0,XMM6
       1406b3db0 76 0e           JBE        LAB_1406b3dc0
       1406b3db2 48 8b 0d        MOV        RCX,qword ptr [DAT_1431874f8]
                 3f 37 ad 02
       1406b3db9 b2 01           MOV        DL,0x1
       1406b3dbb e8 90 64        CALL       FUN_14073a250                                                                                undefined FUN_14073a250()
                 08 00
                             LAB_1406b3dc0                                   XREF[4]:     1406b3d81(j), 1406b3d89(j), 
                                                                                          1406b3da7(j), 1406b3db0(j)  
       1406b3dc0 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + local_18[0]]
                 24 30
       1406b3dc5 0f 28 7c        MOVAPS     XMM7,xmmword ptr [RSP + local_28[0]]
                 24 20
       1406b3dca 48 83 c4 40     ADD        RSP,0x40
       1406b3dce 5b              POP        RBX
       1406b3dcf c3              RET
       1406b3dd0 cc              ??         CCh
       1406b3dd1 cc              ??         CCh
       1406b3dd2 cc              ??         CCh
       1406b3dd3 cc              ??         CCh
       1406b3dd4 cc              ??         CCh
       1406b3dd5 cc              ??         CCh
       1406b3dd6 cc              ??         CCh
       1406b3dd7 cc              ??         CCh
       1406b3dd8 cc              ??         CCh
       1406b3dd9 cc              ??         CCh
       1406b3dda cc              ??         CCh
       1406b3ddb cc              ??         CCh
       1406b3ddc cc              ??         CCh
       1406b3ddd cc              ??         CCh
       1406b3dde cc              ??         CCh
       1406b3ddf cc              ??         CCh


void PlayerCharacter::sub(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  
  FUN_14067fac0();
  if ((*(uint *)(DAT_14317aba8 + 0x340) >> 1 & 1) == 0) {
    Character::UpdateMovementSpeed(param_1);
  }
  if ((param_1 == gPlayerCharacter3) && (param_4 < 0.0)) {
    fVar1 = (float)(**(code **)(*(longlong *)(DAT_1431874f8 + 0xb8) + 8))
                             ((longlong *)(DAT_1431874f8 + 0xb8),0x1f);
    if ((fVar1 <= param_3) && (param_3 + param_4 < fVar1)) {
      FUN_14073a250(DAT_1431874f8,1);
    }
  }
  return;
}

                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_14067fac0()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_14067fac0                                   XREF[20]:    FUN_1401d74e0:1401d77a8(c), 
                                                                                          FUN_140458470:140459533(c), 
                                                                                          Actor::Resurrect:140665bd3(c), 
                                                                                          Actor::Update:1406682b0(c), 
                                                                                          Actor::Update:1406688af(c), 
                                                                                          Actor::Update:140668bae(c), 
                                                                                          Actor::Update:140668c03(c), 
                                                                                          Actor::Update:140668c74(c), 
                                                                                          Actor::LoadGame:140686f7c(c), 
                                                                                          Actor::Revert:140688d39(c), 
                                                                                          Character::sub:14069fa80(c), 
                                                                                          Character::sub:1406a02d8(c), 
                                                                                          Character::sub:1406a2ba2(c), 
                                                                                          PlayerCharacter::sub:1406b3cb8(c
                                                                                          PlayerCharacter::sub:1406b3d59(c
                                                                                          PlayerCharacter::sub:1406b3de9(c
                                                                                          FUN_1406ea820:1406ea9b0(c), 
                                                                                          FUN_14070f110:14070f3ca(c), 
                                                                                          FUN_14070f7d0:14070f990(c), 
                                                                                          PlayerCharacter::sub:1407408a9(c
                                                                                          [more]
       14067fac0 48 8b 81        MOV        RAX,qword ptr [RCX + 0xf8]
                 f8 00 00 00
       14067fac7 48 85 c0        TEST       RAX,RAX
       14067faca 74 55           JZ         LAB_14067fb21
       14067facc 48 8b 50 50     MOV        RDX,qword ptr [RAX + 0x50]
       14067fad0 48 85 d2        TEST       RDX,RDX
       14067fad3 74 0e           JZ         LAB_14067fae3
       14067fad5 81 62 2c        AND        dword ptr [RDX + 0x2c],0xffffdfff
                 ff df ff ff
       14067fadc 48 8b 81        MOV        RAX,qword ptr [RCX + 0xf8]
                 f8 00 00 00
                             LAB_14067fae3                                   XREF[1]:     14067fad3(j)  
       14067fae3 48 8b 50 50     MOV        RDX,qword ptr [RAX + 0x50]
       14067fae7 48 85 d2        TEST       RDX,RDX
       14067faea 74 0e           JZ         LAB_14067fafa
       14067faec 81 62 2c        AND        dword ptr [RDX + 0x2c],0xffffefff
                 ff ef ff ff
       14067faf3 48 8b 81        MOV        RAX,qword ptr [RCX + 0xf8]
                 f8 00 00 00
                             LAB_14067fafa                                   XREF[1]:     14067faea(j)  
       14067fafa 48 8b 50 50     MOV        RDX,qword ptr [RAX + 0x50]
       14067fafe 48 85 d2        TEST       RDX,RDX
       14067fb01 74 0e           JZ         LAB_14067fb11
       14067fb03 81 62 2c        AND        dword ptr [RDX + 0x2c],0xfffff7ff
                 ff f7 ff ff
       14067fb0a 48 8b 81        MOV        RAX,qword ptr [RCX + 0xf8]
                 f8 00 00 00
                             LAB_14067fb11                                   XREF[1]:     14067fb01(j)  
       14067fb11 48 8b 48 50     MOV        RCX,qword ptr [RAX + 0x50]
       14067fb15 48 85 c9        TEST       RCX,RCX
       14067fb18 74 07           JZ         LAB_14067fb21
       14067fb1a 81 61 2c        AND        dword ptr [RCX + 0x2c],0xfffffbff
                 ff fb ff ff
                             LAB_14067fb21                                   XREF[2]:     14067faca(j), 14067fb18(j)  
       14067fb21 c3              RET
       14067fb22 cc              ??         CCh
       14067fb23 cc              ??         CCh
       14067fb24 cc              ??         CCh
       14067fb25 cc              ??         CCh
       14067fb26 cc              ??         CCh
       14067fb27 cc              ??         CCh
       14067fb28 cc              ??         CCh
       14067fb29 cc              ??         CCh
       14067fb2a cc              ??         CCh
       14067fb2b cc              ??         CCh
       14067fb2c cc              ??         CCh
       14067fb2d cc              ??         CCh
       14067fb2e cc              ??         CCh
       14067fb2f cc              ??         CCh

void FUN_14067fac0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xf8);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      puVar1 = (uint *)(*(longlong *)(lVar2 + 0x50) + 0x2c);
      *puVar1 = *puVar1 & 0xffffdfff;
      lVar2 = *(longlong *)(param_1 + 0xf8);
    }
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      puVar1 = (uint *)(*(longlong *)(lVar2 + 0x50) + 0x2c);
      *puVar1 = *puVar1 & 0xffffefff;
      lVar2 = *(longlong *)(param_1 + 0xf8);
    }
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      puVar1 = (uint *)(*(longlong *)(lVar2 + 0x50) + 0x2c);
      *puVar1 = *puVar1 & 0xfffff7ff;
      lVar2 = *(longlong *)(param_1 + 0xf8);
    }
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      puVar1 = (uint *)(*(longlong *)(lVar2 + 0x50) + 0x2c);
      *puVar1 = *puVar1 & 0xfffffbff;
    }
  }
  return;
}


                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_1406d0620()
             undefined         <UNASSIGNED>   <RETURN>
             undefined8        Stack[0x20]:8  local_res20                             XREF[2]:     1406d063e(W), 
                                                                                                   1406d0906(R)  
             undefined8        Stack[0x18]:8  local_res18                             XREF[1]:     1406d0650(W)  
             undefined4        Stack[0x10]:4  local_res10                             XREF[1]:     1406d06a2(W)  
             undefined8        Stack[0x8]:8   local_res8                              XREF[2]:     1406d0696(W), 
                                                                                                   1406d080c(R)  
             undefined         Stack[-0x138   local_138                               XREF[2]:     1406d08c4(*), 
                                                                                                   1406d08eb(*)  
             undefined8        Stack[-0x148   local_148                               XREF[1]:     1406d0635(W)  
                             FUN_1406d0620                                   XREF[10]:    Character::sub:1406b2e5d(c), 
                                                                                          FUN_1406b31c0:1406b31f9(c), 
                                                                                          FUN_1406b31c0:1406b3274(c), 
                                                                                          FUN_1406b31c0:1406b3285(c), 
                                                                                          FUN_1406b31c0:1406b3296(c), 
                                                                                          PlayerCharacter::sub:1406b3cb0(c
                                                                                          FUN_140726650:140726711(c), 
                                                                                          BSTask::sub:14072680f(c), 
                                                                                          140726f00(c), 14365c548(*)  
       1406d0620 48 8b c4        MOV        RAX,RSP
       1406d0623 55              PUSH       RBP
       1406d0624 56              PUSH       RSI
       1406d0625 57              PUSH       RDI
       1406d0626 41 54           PUSH       R12
       1406d0628 41 55           PUSH       R13
       1406d062a 41 56           PUSH       R14
       1406d062c 41 57           PUSH       R15
       1406d062e 48 81 ec        SUB        RSP,0x130
                 30 01 00 00
       1406d0635 48 c7 44        MOV        qword ptr [RSP + local_148],-0x2
                 24 20 fe 
                 ff ff ff
       1406d063e 48 89 58 20     MOV        qword ptr [RAX + local_res20],RBX
       1406d0642 8b da           MOV        EBX,EDX
       1406d0644 48 8b f1        MOV        RSI,RCX
       1406d0647 fe c3           INC        BL
       1406d0649 4c 8d 3d        LEA        R15,[DAT_14319acd8]
                 88 a6 ac 02
       1406d0650 4c 89 78 18     MOV        qword ptr [RAX + local_res18],R15=>DAT_14319acd8
       1406d0654 49 8b cf        MOV        RCX=>DAT_14319acd8,R15
       1406d0657 e8 e4 8a        CALL       BSReadWriteLock::LockForWrite                                                                void BSReadWriteLock::LockForWrite(BSReadWriteLock * this)
                 5f 00
       1406d065c 90              NOP
       1406d065d 48 8b 3e        MOV        RDI,qword ptr [RSI]
       1406d0660 0f b6 07        MOVZX      EAX,byte ptr [RDI]
       1406d0663 3a c3           CMP        AL,BL
       1406d0665 73 10           JNC        LAB_1406d0677
                             LAB_1406d0667                                   XREF[1]:     1406d0673(j)  
       1406d0667 84 c0           TEST       AL,AL
       1406d0669 74 0a           JZ         LAB_1406d0675
       1406d066b 48 ff c7        INC        RDI
       1406d066e 0f b6 07        MOVZX      EAX,byte ptr [RDI]
       1406d0671 3a c3           CMP        AL,BL
       1406d0673 72 f2           JC         LAB_1406d0667
                             LAB_1406d0675                                   XREF[1]:     1406d0669(j)  
       1406d0675 3a c3           CMP        AL,BL
                             LAB_1406d0677                                   XREF[1]:     1406d0665(j)  
       1406d0677 0f 85 80        JNZ        LAB_1406d08fd
                 02 00 00
       1406d067d 8b 0d f5        MOV        ECX,dword ptr [_tls_index]
                 01 f2 02
       1406d0683 65 48 8b        MOV        RAX,qword ptr GS:[0x58]
                 04 25 58 
                 00 00 00
       1406d068c 41 bc 68        MOV        R12D,0x768
                 07 00 00
       1406d0692 4c 8b 34 c8     MOV        R14,qword ptr [RAX + RCX*0x8]
       1406d0696 4c 89 b4        MOV        qword ptr [RSP + local_res8],R14
                 24 70 01 
                 00 00
       1406d069e 43 8b 1c 26     MOV        EBX,dword ptr [R14 + R12*0x1]
       1406d06a2 89 9c 24        MOV        dword ptr [RSP + local_res10],EBX
                 78 01 00 00
       1406d06a9 43 c7 04        MOV        dword ptr [R14 + R12*0x1],0x68
                 26 68 00 
                 00 00
       1406d06b1 48 2b 3e        SUB        RDI,qword ptr [RSI]
       1406d06b4 48 8b ce        MOV        RCX,RSI
       1406d06b7 e8 04 c3        CALL       FUN_140cec9c0                                                                                undefined FUN_140cec9c0()
                 61 00
       1406d06bc 44 8b e8        MOV        R13D,EAX
       1406d06bf 45 8d 55 ff     LEA        R10D,[R13 + -0x1]
       1406d06c3 33 ed           XOR        EBP,EBP
       1406d06c5 a8 01           TEST       AL,0x1
       1406d06c7 0f 84 54        JZ         LAB_1406d0821
                 01 00 00
       1406d06cd 44 8b f5        MOV        R14D,EBP
       1406d06d0 41 83 fd 01     CMP        R13D,0x1
       1406d06d4 0f 86 fb        JBE        LAB_1406d07d5
                 00 00 00
       1406d06da 45 8b fa        MOV        R15D,R10D
       1406d06dd 41 bc 04        MOV        R12D,0x4
                 00 00 00
       1406d06e3 41 8b c4        MOV        EAX,R12D
       1406d06e6 49 f7 e7        MUL        R15
       1406d06e9 48 c7 c1        MOV        RCX,-0x1
                 ff ff ff ff
       1406d06f0 48 0f 40 c1     CMOVO      RAX,RCX
       1406d06f4 48 8b c8        MOV        RCX,RAX
       1406d06f7 e8 44 b6        CALL       FUN_14011bd40                                                                                undefined FUN_14011bd40()
                 a4 ff
       1406d06fc 4c 8b f0        MOV        R14,RAX
       1406d06ff 8b c5           MOV        EAX,EBP
       1406d0701 48 85 ff        TEST       RDI,RDI
       1406d0704 74 20           JZ         LAB_1406d0726
       1406d0706 44 8b c5        MOV        R8D,EBP
       1406d0709 0f 1f 80        NOP        dword ptr [RAX]
                 00 00 00 00
                             LAB_1406d0710                                   XREF[1]:     1406d0724(j)  
       1406d0710 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d0714 42 8b 14 81     MOV        EDX,dword ptr [RCX + R8*0x4]
       1406d0718 43 89 14 86     MOV        dword ptr [R14 + R8*0x4],EDX
       1406d071c ff c0           INC        EAX
       1406d071e 44 8b c0        MOV        R8D,EAX
       1406d0721 4c 3b c7        CMP        R8,RDI
       1406d0724 72 ea           JC         LAB_1406d0710
                             LAB_1406d0726                                   XREF[1]:     1406d0704(j)  
       1406d0726 48 8b d7        MOV        RDX,RDI
       1406d0729 49 3b ff        CMP        RDI,R15
       1406d072c 0f 83 9d        JNC        LAB_1406d07cf
                 00 00 00
       1406d0732 49 8b c7        MOV        RAX,R15
       1406d0735 48 2b c7        SUB        RAX,RDI
       1406d0738 49 3b c4        CMP        RAX,R12
       1406d073b 72 79           JC         LAB_1406d07b6
       1406d073d 4d 8d 46 08     LEA        R8,[R14 + 0x8]
       1406d0741 4d 8d 04 b8     LEA        R8,[R8 + RDI*0x4]
       1406d0745 41 ba 08        MOV        R10D,0x8
                 00 00 00
       1406d074b 4d 2b d6        SUB        R10,R14
       1406d074e 4d 2b e6        SUB        R12,R14
       1406d0751 49 c7 c3        MOV        R11,-0x8
                 f8 ff ff ff
       1406d0758 4d 2b de        SUB        R11,R14
       1406d075b 4d 8b cf        MOV        R9,R15
       1406d075e 4c 2b cf        SUB        R9,RDI
       1406d0761 49 83 e9 04     SUB        R9,0x4
       1406d0765 49 c1 e9 02     SHR        R9,0x2
       1406d0769 49 ff c1        INC        R9
       1406d076c 4a 8d 14 8f     LEA        RDX,[RDI + R9*0x4]
                             LAB_1406d0770                                   XREF[1]:     1406d07b4(j)  
       1406d0770 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d0774 49 03 cb        ADD        RCX,R11
       1406d0777 42 8b 44        MOV        EAX,dword ptr [RCX + R8*0x1 + 0x4]
                 01 04
       1406d077c 41 89 40 f8     MOV        dword ptr [R8 + -0x8],EAX
       1406d0780 48 8b 46 08     MOV        RAX,qword ptr [RSI + 0x8]
       1406d0784 49 2b c6        SUB        RAX,R14
       1406d0787 42 8b 04 00     MOV        EAX,dword ptr [RAX + R8*0x1]
       1406d078b 41 89 40 fc     MOV        dword ptr [R8 + -0x4],EAX
       1406d078f 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d0793 49 03 cc        ADD        RCX,R12
       1406d0796 42 8b 04 01     MOV        EAX,dword ptr [RCX + R8*0x1]
       1406d079a 41 89 00        MOV        dword ptr [R8],EAX
       1406d079d 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d07a1 49 03 ca        ADD        RCX,R10
       1406d07a4 42 8b 04 01     MOV        EAX,dword ptr [RCX + R8*0x1]
       1406d07a8 41 89 40 04     MOV        dword ptr [R8 + 0x4],EAX
       1406d07ac 4d 8d 40 10     LEA        R8,[R8 + 0x10]
       1406d07b0 49 83 e9 01     SUB        R9,0x1
       1406d07b4 75 ba           JNZ        LAB_1406d0770
                             LAB_1406d07b6                                   XREF[1]:     1406d073b(j)  
       1406d07b6 49 3b d7        CMP        RDX,R15
       1406d07b9 73 14           JNC        LAB_1406d07cf
                             LAB_1406d07bb                                   XREF[1]:     1406d07cd(j)  
       1406d07bb 48 8b 46 08     MOV        RAX,qword ptr [RSI + 0x8]
       1406d07bf 8b 4c 90 04     MOV        ECX,dword ptr [RAX + RDX*0x4 + 0x4]
       1406d07c3 41 89 0c 96     MOV        dword ptr [R14 + RDX*0x4],ECX
       1406d07c7 48 ff c2        INC        RDX
       1406d07ca 49 3b d7        CMP        RDX,R15
       1406d07cd 72 ec           JC         LAB_1406d07bb
                             LAB_1406d07cf                                   XREF[2]:     1406d072c(j), 1406d07b9(j)  
       1406d07cf 41 bc 68        MOV        R12D,0x768
                 07 00 00
                             LAB_1406d07d5                                   XREF[1]:     1406d06d4(j)  
       1406d07d5 4c 8b 7e 08     MOV        R15,qword ptr [RSI + 0x8]
       1406d07d9 83 3d f0        CMP        dword ptr [gMemoryManagerState],0x2
                 09 f2 02 02
       1406d07e0 74 13           JZ         LAB_1406d07f5
       1406d07e2 48 8d 15        LEA        RDX,[gMemoryManagerState]
                 e7 09 f2 02
       1406d07e9 48 8d 0d        LEA        RCX,[gMemoryManager]
                 f0 09 f2 02
       1406d07f0 e8 8b 3e        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 5f 00
                             LAB_1406d07f5                                   XREF[1]:     1406d07e0(j)  
       1406d07f5 45 33 c0        XOR        R8D,R8D
       1406d07f8 49 8b d7        MOV        RDX,R15
       1406d07fb 48 8d 0d        LEA        RCX,[gMemoryManager]
                 de 09 f2 02
       1406d0802 e8 09 3d        CALL       MemoryManager::Deallocate                                                                    void MemoryManager::Deallocate(MemoryManager * this, void * p0, bool p1)
                 5f 00
       1406d0807 90              NOP
       1406d0808 4c 89 76 08     MOV        qword ptr [RSI + 0x8],R14
       1406d080c 4c 8b b4        MOV        R14,qword ptr [RSP + local_res8]
                 24 70 01 
                 00 00
       1406d0814 45 8d 55 ff     LEA        R10D,[R13 + -0x1]
       1406d0818 4c 8d 3d        LEA        R15,[DAT_14319acd8]
                 b9 a4 ac 02
       1406d081f eb 6e           JMP        LAB_1406d088f
                             LAB_1406d0821                                   XREF[1]:     1406d06c7(j)  
       1406d0821 48 8d 57 01     LEA        RDX,[RDI + 0x1]
       1406d0825 49 3b d5        CMP        RDX,R13
       1406d0828 73 65           JNC        LAB_1406d088f
       1406d082a 49 8b c5        MOV        RAX,R13
       1406d082d 48 2b c2        SUB        RAX,RDX
       1406d0830 48 83 f8 04     CMP        RAX,0x4
       1406d0834 72 41           JC         LAB_1406d0877
       1406d0836 4d 8d 4d fd     LEA        R9,[R13 + -0x3]
       1406d083a 66 0f 1f        NOP        word ptr [RAX + RAX*0x1]
                 44 00 00
                             LAB_1406d0840                                   XREF[1]:     1406d0875(j)  
       1406d0840 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d0844 8b 04 91        MOV        EAX,dword ptr [RCX + RDX*0x4]
       1406d0847 89 44 91 fc     MOV        dword ptr [RCX + RDX*0x4 + -0x4],EAX
       1406d084b 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d084f 8b 44 91 04     MOV        EAX,dword ptr [RCX + RDX*0x4 + 0x4]
       1406d0853 89 04 91        MOV        dword ptr [RCX + RDX*0x4],EAX
       1406d0856 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d085a 8b 44 91 08     MOV        EAX,dword ptr [RCX + RDX*0x4 + 0x8]
       1406d085e 89 44 91 04     MOV        dword ptr [RCX + RDX*0x4 + 0x4],EAX
       1406d0862 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d0866 8b 44 91 0c     MOV        EAX,dword ptr [RCX + RDX*0x4 + 0xc]
       1406d086a 89 44 91 08     MOV        dword ptr [RCX + RDX*0x4 + 0x8],EAX
       1406d086e 48 83 c2 04     ADD        RDX,0x4
       1406d0872 49 3b d1        CMP        RDX,R9
       1406d0875 72 c9           JC         LAB_1406d0840
                             LAB_1406d0877                                   XREF[1]:     1406d0834(j)  
       1406d0877 49 3b d5        CMP        RDX,R13
       1406d087a 73 13           JNC        LAB_1406d088f
                             LAB_1406d087c                                   XREF[1]:     1406d088d(j)  
       1406d087c 48 8b 4e 08     MOV        RCX,qword ptr [RSI + 0x8]
       1406d0880 8b 04 91        MOV        EAX,dword ptr [RCX + RDX*0x4]
       1406d0883 89 44 91 fc     MOV        dword ptr [RCX + RDX*0x4 + -0x4],EAX
       1406d0887 48 ff c2        INC        RDX
       1406d088a 49 3b d5        CMP        RDX,R13
       1406d088d 72 ed           JC         LAB_1406d087c
                             LAB_1406d088f                                   XREF[3]:     1406d081f(j), 1406d0828(j), 
                                                                                          1406d087a(j)  
       1406d088f 48 85 ff        TEST       RDI,RDI
       1406d0892 74 1d           JZ         LAB_1406d08b1
       1406d0894 48 8b 16        MOV        RDX,qword ptr [RSI]
       1406d0897 48 8b cd        MOV        RCX,RBP
       1406d089a 66 0f 1f        NOP        word ptr [RAX + RAX*0x1]
                 44 00 00
                             LAB_1406d08a0                                   XREF[1]:     1406d08af(j)  
       1406d08a0 0f b6 04 11     MOVZX      EAX,byte ptr [RCX + RDX*0x1]
       1406d08a4 88 44 0c 30     MOV        byte ptr [RSP + RCX*0x1 + 0x30],AL
       1406d08a8 ff c5           INC        EBP
       1406d08aa 8b cd           MOV        ECX,EBP
       1406d08ac 48 3b cf        CMP        RCX,RDI
       1406d08af 72 ef           JC         LAB_1406d08a0
                             LAB_1406d08b1                                   XREF[1]:     1406d0892(j)  
       1406d08b1 49 8b d5        MOV        RDX,R13
       1406d08b4 48 ff c7        INC        RDI
       1406d08b7 49 3b fd        CMP        RDI,R13
       1406d08ba 73 26           JNC        LAB_1406d08e2
       1406d08bc 4c 8b 06        MOV        R8,qword ptr [RSI]
       1406d08bf 48 8d 4c        LEA        RCX,[RSP + RDI*0x1 + 0x2f]
                 3c 2f
       1406d08c4 48 8d 44        LEA        RAX=>local_138,[RSP + 0x30]
                 24 30
       1406d08c9 4c 2b c0        SUB        R8,RAX
       1406d08cc 48 2b d7        SUB        RDX,RDI
       1406d08cf 90              NOP
                             LAB_1406d08d0                                   XREF[1]:     1406d08e0(j)  
       1406d08d0 41 0f b6        MOVZX      EAX,byte ptr [R8 + RCX*0x1 + 0x1]
                 44 08 01
       1406d08d6 88 01           MOV        byte ptr [RCX],AL
       1406d08d8 48 8d 49 01     LEA        RCX,[RCX + 0x1]
       1406d08dc 48 83 ea 01     SUB        RDX,0x1
       1406d08e0 75 ee           JNZ        LAB_1406d08d0
                             LAB_1406d08e2                                   XREF[1]:     1406d08ba(j)  
       1406d08e2 42 c6 44        MOV        byte ptr [RSP + R10*0x1 + 0x30],0x0
                 14 30 00
       1406d08e8 45 33 c0        XOR        R8D,R8D
       1406d08eb 48 8d 54        LEA        RDX=>local_138,[RSP + 0x30]
                 24 30
       1406d08f0 48 8b ce        MOV        RCX,RSI
       1406d08f3 e8 78 c1        CALL       FUN_140ceca70                                                                                undefined FUN_140ceca70()
                 61 00
       1406d08f8 90              NOP
       1406d08f9 43 89 1c 26     MOV        dword ptr [R14 + R12*0x1],EBX
                             LAB_1406d08fd                                   XREF[1]:     1406d0677(j)  
       1406d08fd 49 8b cf        MOV        RCX=>DAT_14319acd8,R15
       1406d0900 e8 8b 8a        CALL       BSReadWriteLock::UnlockForWrite                                                              undefined BSReadWriteLock::UnlockForWrite()
                 5f 00
       1406d0905 90              NOP
       1406d0906 48 8b 9c        MOV        RBX,qword ptr [RSP + local_res20]
                 24 88 01 
                 00 00
       1406d090e 48 81 c4        ADD        RSP,0x130
                 30 01 00 00
       1406d0915 41 5f           POP        R15
       1406d0917 41 5e           POP        R14
       1406d0919 41 5d           POP        R13
       1406d091b 41 5c           POP        R12
       1406d091d 5f              POP        RDI
       1406d091e 5e              POP        RSI
       1406d091f 5d              POP        RBP
       1406d0920 c3              RET
       1406d0921 cc              ??         CCh
       1406d0922 cc              ??         CCh
       1406d0923 cc              ??         CCh
       1406d0924 cc              ??         CCh
       1406d0925 cc              ??         CCh
       1406d0926 cc              ??         CCh
       1406d0927 cc              ??         CCh
       1406d0928 cc              ??         CCh
       1406d0929 cc              ??         CCh
       1406d092a cc              ??         CCh
       1406d092b cc              ??         CCh
       1406d092c cc              ??         CCh
       1406d092d cc              ??         CCh
       1406d092e cc              ??         CCh
       1406d092f cc              ??         CCh


void FUN_1406d0620(longlong *param_1,char param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *p0;
  undefined1 auVar4 [16];
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong unaff_GS_OFFSET;
  bool bVar18;
  undefined1 local_138 [256];
  
  BSReadWriteLock::LockForWrite((BSReadWriteLock *)&DAT_14319acd8);
  pbVar12 = (byte *)*param_1;
  bVar1 = *pbVar12;
  while ((bVar1 < (byte)(param_2 + 1U) && (bVar18 = bVar1 != 0, bVar1 = 0, bVar18))) {
    pbVar12 = pbVar12 + 1;
    bVar1 = *pbVar12;
  }
  if (bVar1 == (byte)(param_2 + 1U)) {
    lVar3 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0x768);
    *(undefined4 *)(lVar3 + 0x768) = 0x68;
    uVar13 = (longlong)pbVar12 - *param_1;
    uVar5 = FUN_140cec9c0(param_1);
    uVar17 = (ulonglong)uVar5;
    uVar7 = (ulonglong)(uVar5 - 1);
    uVar11 = 0;
    if ((uVar5 & 1) == 0) {
      uVar9 = uVar13 + 1;
      if (uVar9 < uVar17) {
        if (3 < uVar17 - uVar9) {
          do {
            *(undefined4 *)(param_1[1] + -4 + uVar9 * 4) = *(undefined4 *)(param_1[1] + uVar9 * 4);
            *(undefined4 *)(param_1[1] + uVar9 * 4) = *(undefined4 *)(param_1[1] + 4 + uVar9 * 4);
            *(undefined4 *)(param_1[1] + 4 + uVar9 * 4) =
                 *(undefined4 *)(param_1[1] + 8 + uVar9 * 4);
            *(undefined4 *)(param_1[1] + 8 + uVar9 * 4) =
                 *(undefined4 *)(param_1[1] + 0xc + uVar9 * 4);
            uVar9 = uVar9 + 4;
          } while (uVar9 < uVar17 - 3);
        }
        for (; uVar9 < uVar17; uVar9 = uVar9 + 1) {
          *(undefined4 *)(param_1[1] + -4 + uVar9 * 4) = *(undefined4 *)(param_1[1] + uVar9 * 4);
        }
      }
    }
    else {
      uVar7 = uVar11;
      if (1 < uVar5) {
        uVar9 = CONCAT44(0,uVar5 - 1);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        uVar6 = SUB168(ZEXT816(4) * auVar4,0);
        if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
          uVar6 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14011bd40(uVar6);
        uVar14 = uVar11;
        if (uVar13 != 0) {
          do {
            *(undefined4 *)(uVar7 + uVar14 * 4) = *(undefined4 *)(param_1[1] + uVar14 * 4);
            uVar14 = (ulonglong)((int)uVar14 + 1);
          } while (uVar14 < uVar13);
        }
        if (uVar13 < uVar9) {
          uVar14 = uVar13;
          if (3 < uVar9 - uVar13) {
            puVar15 = (undefined4 *)(uVar7 + 8 + uVar13 * 4);
            lVar16 = ((uVar9 - uVar13) - 4 >> 2) + 1;
            uVar14 = uVar13 + lVar16 * 4;
            do {
              puVar15[-2] = *(undefined4 *)((param_1[1] - uVar7) + -4 + (longlong)puVar15);
              puVar15[-1] = *(undefined4 *)((param_1[1] - uVar7) + (longlong)puVar15);
              *puVar15 = *(undefined4 *)(param_1[1] + (4 - uVar7) + (longlong)puVar15);
              puVar15[1] = *(undefined4 *)(param_1[1] + (8 - uVar7) + (longlong)puVar15);
              puVar15 = puVar15 + 4;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          for (; uVar14 < uVar9; uVar14 = uVar14 + 1) {
            *(undefined4 *)(uVar7 + uVar14 * 4) = *(undefined4 *)(param_1[1] + 4 + uVar14 * 4);
          }
        }
      }
      p0 = (void *)param_1[1];
      if (gMemoryManagerState != 2) {
        Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
      }
      MemoryManager::Deallocate((MemoryManager *)&gMemoryManager,p0,false);
      param_1[1] = uVar7;
      uVar7 = (ulonglong)(uVar5 - 1);
    }
    if (uVar13 != 0) {
      lVar16 = *param_1;
      do {
        local_138[uVar11] = *(undefined1 *)(uVar11 + lVar16);
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (uVar11 < uVar13);
    }
    if (uVar13 + 1 < uVar17) {
      lVar16 = *param_1;
      puVar8 = local_138 + uVar13;
      lVar10 = uVar17 - (uVar13 + 1);
      do {
        *puVar8 = puVar8[(lVar16 - (longlong)local_138) + 1];
        puVar8 = puVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    local_138[uVar7] = 0;
    FUN_140ceca70(param_1,local_138,0);
    *(undefined4 *)(lVar3 + 0x768) = uVar2;
  }
  BSReadWriteLock::UnlockForWrite(&DAT_14319acd8);
  return;
}

                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_14073a250()
             undefined         <UNASSIGNED>   <RETURN>
             undefined8        Stack[0x8]:8   local_res8                              XREF[2]:     14073a250(W), 
                                                                                                   14073a2d7(R)  
                             FUN_14073a250                                   XREF[3]:     PlayerCharacter::sub:1406b3d1a(c
                                                                                          PlayerCharacter::sub:1406b3dbb(c
                                                                                          14365f848(*)  
       14073a250 48 89 5c        MOV        qword ptr [RSP + local_res8],RBX
                 24 08
       14073a255 57              PUSH       RDI
       14073a256 48 83 ec 20     SUB        RSP,0x20
       14073a25a 48 8b d9        MOV        RBX,RCX
       14073a25d 0f b6 fa        MOVZX      EDI,DL
       14073a260 48 8b 0d        MOV        RCX,qword ptr [DAT_1420f6320]
                 b9 c0 9b 01
       14073a267 e8 64 2a        CALL       FUN_1401bccd0                                                                                undefined FUN_1401bccd0()
                 a8 ff
       14073a26c 84 c0           TEST       AL,AL
       14073a26e 75 67           JNZ        LAB_14073a2d7
       14073a270 40 84 ff        TEST       DIL,DIL
       14073a273 75 47           JNZ        LAB_14073a2bc
       14073a275 48 8b 05        MOV        RAX,qword ptr [DAT_1420f6a00]
                 84 c7 9b 01
       14073a27c 83 b8 60        CMP        dword ptr [RAX + 0x160],0x0
                 01 00 00 00
       14073a283 77 52           JA         LAB_14073a2d7
       14073a285 f3 0f 10        MOVSS      XMM0,dword ptr [DAT_1431cc288]
                 05 fb 1f 
                 a9 02
       14073a28d f3 0f 58        ADDSS      XMM0,dword ptr [RBX + 0x908]
                 83 08 09 
                 00 00
       14073a295 f3 0f 11        MOVSS      dword ptr [RBX + 0x908],XMM0
                 83 08 09 
                 00 00
       14073a29d 0f 2f 05        COMISS     XMM0,dword ptr [DAT_1420142e0]
                 3c a0 8d 01
       14073a2a4 72 31           JC         LAB_14073a2d7
       14073a2a6 48 8b cb        MOV        RCX,RBX
       14073a2a9 c7 83 08        MOV        dword ptr [RBX + 0x908],0x0
                 09 00 00 
                 00 00 00 00
       14073a2b3 e8 48 92        CALL       Actor::IsOverEncumbered                                                                      bool Actor::IsOverEncumbered(Actor * this)
                 f3 ff
       14073a2b8 84 c0           TEST       AL,AL
       14073a2ba 74 1b           JZ         LAB_14073a2d7
                             LAB_14073a2bc                                   XREF[1]:     14073a273(j)  
       14073a2bc 48 8b 0d        MOV        RCX=>aYouAreCarrying,qword ptr [->aYouAreCarrying]                                           = "You are carrying too much to be able to run."
                 f5 e9 8c 01                                                                                                             = 141830070
       14073a2c3 41 b0 01        MOV        R8B,0x1
       14073a2c6 33 d2           XOR        EDX,EDX
       14073a2c8 e8 13 03        CALL       SendHUDMessage::ShowHUDMessage                                                               void SendHUDMessage::ShowHUDMessage(byte * p0, byte * p1, bool p2)
                 24 00
       14073a2cd c7 83 08        MOV        dword ptr [RBX + 0x908],0x0
                 09 00 00 
                 00 00 00 00
                             LAB_14073a2d7                                   XREF[4]:     14073a26e(j), 14073a283(j), 
                                                                                          14073a2a4(j), 14073a2ba(j)  
       14073a2d7 48 8b 5c        MOV        RBX,qword ptr [RSP + local_res8]
                 24 30
       14073a2dc 48 83 c4 20     ADD        RSP,0x20
       14073a2e0 5f              POP        RDI
       14073a2e1 c3              RET
       14073a2e2 cc              ??         CCh
       14073a2e3 cc              ??         CCh
       14073a2e4 cc              ??         CCh
       14073a2e5 cc              ??         CCh
       14073a2e6 cc              ??         CCh
       14073a2e7 cc              ??         CCh
       14073a2e8 cc              ??         CCh
       14073a2e9 cc              ??         CCh
       14073a2ea cc              ??         CCh
       14073a2eb cc              ??         CCh
       14073a2ec cc              ??         CCh
       14073a2ed cc              ??         CCh
       14073a2ee cc              ??         CCh
       14073a2ef cc              ??         CCh



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Flag__enum_42": Some values do not have unique names */
/* WARNING: Enum "hkpShapeType": Some values do not have unique names */
/* WARNING: Enum "D3D_SRV_DIMENSION": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "SpellType": Some values do not have unique names */
/* WARNING: Enum "Texture": Some values do not have unique names */
/* WARNING: Enum "FunctionID": Some values do not have unique names */
/* WARNING: Enum "DIALOGUE_TYPE": Some values do not have unique names */
/* WARNING: Enum "BIPED_OBJECT": Some values do not have unique names */
/* WARNING: Enum "COL_LAYER": Some values do not have unique names */
/* WARNING: Enum "Flag__enum_20": Some values do not have unique names */
/* WARNING: Enum "hkpCharacterStateType": Some values do not have unique names */
/* WARNING: Enum "CHARACTER_FLAGS": Some values do not have unique names */

void FUN_14073a250(Actor *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  
  cVar1 = FUN_1401bccd0(DAT_1420f6320);
  if (cVar1 != '\0') {
    return;
  }
  if (param_2 == '\0') {
    if (*(int *)(DAT_1420f6a00 + 0x160) != 0) {
      return;
    }
    fVar3 = DAT_1431cc288 + *(float *)&param_1[3].__vftable_IPostAnimationChannelUpdateFunctor;
    *(float *)&param_1[3].__vftable_IPostAnimationChannelUpdateFunctor = fVar3;
    if (fVar3 < _DAT_1420142e0) {
      return;
    }
    *(undefined4 *)&param_1[3].__vftable_IPostAnimationChannelUpdateFunctor = 0;
    bVar2 = Actor::IsOverEncumbered(param_1);
    if (!bVar2) {
      return;
    }
  }
  SendHUDMessage::ShowHUDMessage(PTR_aYouAreCarrying_142008cb8,(byte *)0x0,true);
  *(undefined4 *)&param_1[3].__vftable_IPostAnimationChannelUpdateFunctor = 0;
  return;
}
