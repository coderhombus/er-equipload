                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined InventoryChanges::GetEquippedWeight()
             undefined         <UNASSIGNED>   <RETURN>
             undefined8        Stack[0x18]:8  local_res18                             XREF[2]:     14023653a(W), 
                                                                                                   14023668c(R)  
             undefined8        Stack[0x10]:8  local_res10                             XREF[2]:     140236535(W), 
                                                                                                   140236691(R)  
             undefined4        Stack[0x8]:4   local_res8                              XREF[4]:     140236524(W), 
                                                                                                   1402365bb(W), 
                                                                                                   140236648(*), 
                                                                                                   140236664(R)  
             undefined8        Stack[-0x10]:8 local_10                                XREF[2]:     14023653f(W), 
                                                                                                   140236687(R)  
             undefined8        Stack[-0x18]:8 local_18                                XREF[2]:     140236544(W), 
                                                                                                   140236682(R)  
             undefined8        Stack[-0x20]:8 local_20                                XREF[2]:     140236549(W), 
                                                                                                   14023667a(R)  
             undefined8        Stack[-0x28]:8 local_28                                XREF[2]:     14023654e(W), 
                                                                                                   140236696(R)  
             undefined1[16]    Stack[-0x38]   local_38                                XREF[3]:     14023651c(W), 
                                                                                                   14023669b(R), 
                                                                                                   1402366a7(R)  
                             InventoryChanges::GetEquippedWeight             XREF[5]:     Actor::CalcEquippedWeight:1406a3
                                                                                          Actor::GetEquippedWeight:1406ab3
                                                                                          141c3b19c(*), 141c3b1ac(*), 
                                                                                          14361f744(*)  
       140236510 41 54           PUSH       R12                                                                                          REL::ID(16126)
                                                                                                                                         Source: AE rename database (fallback)
       140236512 48 83 ec 50     SUB        RSP,0x50
       140236516 48 8b 01        MOV        RAX,qword ptr [RCX]
       140236519 4c 8b e2        MOV        R12,RDX
       14023651c 0f 29 74        MOVAPS     xmmword ptr [RSP + local_38[0]],XMM6
                 24 20
       140236521 0f 57 f6        XORPS      XMM6,XMM6
       140236524 c7 44 24        MOV        dword ptr [RSP + local_res8],0x0
                 60 00 00 
                 00 00
       14023652c 48 85 c0        TEST       RAX,RAX
       14023652f 0f 84 72        JZ         LAB_1402366a7
                 01 00 00
                             LAB_140236535                                   XREF[3]:     141c3b1a0(*), 141c3b1b0(*), 
                                                                                          14361f750(*)  
       140236535 48 89 5c        MOV        qword ptr [RSP + local_res10],RBX
                 24 68
       14023653a 48 89 6c        MOV        qword ptr [RSP + local_res18],RBP
                 24 70
       14023653f 48 89 74        MOV        qword ptr [RSP + local_10],RSI
                 24 48
       140236544 48 89 7c        MOV        qword ptr [RSP + local_18],RDI
                 24 40
       140236549 4c 89 74        MOV        qword ptr [RSP + local_20],R14
                 24 38
       14023654e 4c 89 7c        MOV        qword ptr [RSP + local_28],R15
                 24 30
                             LAB_140236553                                   XREF[1]:     140236674(j)  
       140236553 48 83 78        CMP        qword ptr [RAX + 0x8],0x0
                 08 00
       140236558 4c 8d 78 08     LEA        R15,[RAX + 0x8]
       14023655c 75 0a           JNZ        LAB_140236568
       14023655e 48 83 38 00     CMP        qword ptr [RAX],0x0
       140236562 0f 84 12        JZ         LAB_14023667a
                 01 00 00
                             LAB_140236568                                   XREF[1]:     14023655c(j)  
       140236568 4c 8b 30        MOV        R14,qword ptr [RAX]
       14023656b 4d 85 f6        TEST       R14,R14
       14023656e 0f 84 06        JZ         LAB_14023667a
                 01 00 00
       140236574 49 8b 5e 08     MOV        RBX,qword ptr [R14 + 0x8]
       140236578 48 85 db        TEST       RBX,RBX
       14023657b 0f 84 ed        JZ         LAB_14023666e
                 00 00 00
                             LAB_140236581                                   XREF[1]:     1402365a2(j)  
       140236581 48 8b 0b        MOV        RCX,qword ptr [RBX]
       140236584 48 85 c9        TEST       RCX,RCX
       140236587 0f 84 e1        JZ         LAB_14023666e
                 00 00 00
       14023658d 45 33 c0        XOR        R8D,R8D
       140236590 b2 01           MOV        DL,0x1
       140236592 e8 09 8b        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f2 ff
       140236597 84 c0           TEST       AL,AL
       140236599 75 0e           JNZ        LAB_1402365a9
       14023659b 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14023659f 48 85 db        TEST       RBX,RBX
       1402365a2 75 dd           JNZ        LAB_140236581
       1402365a4 e9 c5 00        JMP        LAB_14023666e
                 00 00
                             LAB_1402365a9                                   XREF[1]:     140236599(j)  
       1402365a9 49 8b 0e        MOV        RCX,qword ptr [R14]
       1402365ac 80 79 1a 2a     CMP        byte ptr [RCX + 0x1a],0x2a
       1402365b0 0f 84 b8        JZ         LAB_14023666e
                 00 00 00
       1402365b6 e8 35 7b        CALL       TESBoundObject::GetWeight                                                                    undefined TESBoundObject::GetWeight()
                 fb ff
       1402365bb f3 0f 11        MOVSS      dword ptr [RSP + local_res8],XMM0
                 44 24 60
       1402365c1 bb 01 00        MOV        EBX,0x1
                 00 00
       1402365c6 4d 8b 06        MOV        R8,qword ptr [R14]
       1402365c9 41 0f b6        MOVZX      EAX,byte ptr [R8 + 0x1a]
                 40 1a
       1402365ce 3c 29           CMP        AL,0x29
       1402365d0 75 72           JNZ        LAB_140236644
       1402365d2 49 8b 5e 08     MOV        RBX,qword ptr [R14 + 0x8]
       1402365d6 33 f6           XOR        ESI,ESI
                             LAB_1402365d8                                   XREF[1]:     1402365ff(j)  
       1402365d8 48 85 db        TEST       RBX,RBX
       1402365db 74 24           JZ         LAB_140236601
       1402365dd 48 8b 3b        MOV        RDI,qword ptr [RBX]
       1402365e0 48 85 ff        TEST       RDI,RDI
       1402365e3 74 1c           JZ         LAB_140236601
       1402365e5 41 b0 01        MOV        R8B,0x1
       1402365e8 33 d2           XOR        EDX,EDX
       1402365ea 48 8b cf        MOV        RCX,RDI
       1402365ed e8 ae 8a        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f2 ff
       1402365f2 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       1402365f6 84 c0           TEST       AL,AL
       1402365f8 48 0f 45 f7     CMOVNZ     RSI,RDI
       1402365fc 48 85 f6        TEST       RSI,RSI
       1402365ff 74 d7           JZ         LAB_1402365d8
                             LAB_140236601                                   XREF[2]:     1402365db(j), 1402365e3(j)  
       140236601 49 8b 5e 08     MOV        RBX,qword ptr [R14 + 0x8]
       140236605 33 ed           XOR        EBP,EBP
       140236607 48 85 f6        TEST       RSI,RSI
       14023660a 40 0f 95 c5     SETNZ      BPL
       14023660e 33 f6           XOR        ESI,ESI
                             LAB_140236610                                   XREF[1]:     140236637(j)  
       140236610 48 85 db        TEST       RBX,RBX
       140236613 74 24           JZ         LAB_140236639
       140236615 48 8b 3b        MOV        RDI,qword ptr [RBX]
       140236618 48 85 ff        TEST       RDI,RDI
       14023661b 74 1c           JZ         LAB_140236639
       14023661d 45 33 c0        XOR        R8D,R8D
       140236620 33 d2           XOR        EDX,EDX
       140236622 48 8b cf        MOV        RCX,RDI
       140236625 e8 76 8a        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f2 ff
       14023662a 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14023662e 84 c0           TEST       AL,AL
       140236630 48 0f 45 f7     CMOVNZ     RSI,RDI
       140236634 48 85 f6        TEST       RSI,RSI
       140236637 74 d7           JZ         LAB_140236610
                             LAB_140236639                                   XREF[2]:     140236613(j), 14023661b(j)  
       140236639 48 85 f6        TEST       RSI,RSI
       14023663c 8d 5d 01        LEA        EBX,[RBP + 0x1]
       14023663f 0f 44 dd        CMOVZ      EBX,EBP
       140236642 eb 16           JMP        LAB_14023665a
                             LAB_140236644                                   XREF[1]:     1402365d0(j)  
       140236644 3c 1a           CMP        AL,0x1a
       140236646 75 12           JNZ        LAB_14023665a
       140236648 4c 8d 4c        LEA        R9=>local_res8,[RSP + 0x60]
                 24 60
       14023664d 49 8b d4        MOV        RDX,R12
       140236650 b9 20 00        MOV        ECX,0x20
                 00 00
       140236655 e8 d6 f8        CALL       BGSEntryPoint::HandleEntryPoint                                                              void BGSEntryPoint::HandleEntryPoint(ENTRY_POINT p0, Actor * p1, pointer p2)
                 14 00
                             LAB_14023665a                                   XREF[2]:     140236642(j), 140236646(j)  
       14023665a 0f 57 c0        XORPS      XMM0,XMM0
       14023665d 8b c3           MOV        EAX,EBX
       14023665f f3 48 0f        CVTSI2SS   XMM0,RAX
                 2a c0
       140236664 f3 0f 59        MULSS      XMM0,dword ptr [RSP + local_res8]
                 44 24 60
       14023666a f3 0f 58 f0     ADDSS      XMM6,XMM0
                             LAB_14023666e                                   XREF[4]:     14023657b(j), 140236587(j), 
                                                                                          1402365a4(j), 1402365b0(j)  
       14023666e 49 8b 07        MOV        RAX,qword ptr [R15]
       140236671 48 85 c0        TEST       RAX,RAX
       140236674 0f 85 d9        JNZ        LAB_140236553
                 fe ff ff
                             LAB_14023667a                                   XREF[2]:     140236562(j), 14023656e(j)  
       14023667a 4c 8b 74        MOV        R14,qword ptr [RSP + local_20]
                 24 38
       14023667f 0f 28 c6        MOVAPS     XMM0,XMM6
       140236682 48 8b 7c        MOV        RDI,qword ptr [RSP + local_18]
                 24 40
       140236687 48 8b 74        MOV        RSI,qword ptr [RSP + local_10]
                 24 48
       14023668c 48 8b 6c        MOV        RBP,qword ptr [RSP + local_res18]
                 24 70
       140236691 48 8b 5c        MOV        RBX,qword ptr [RSP + local_res10]
                 24 68
       140236696 4c 8b 7c        MOV        R15,qword ptr [RSP + local_28]
                 24 30
       14023669b 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + local_38[0]]
                 24 20
       1402366a0 48 83 c4 50     ADD        RSP,0x50
       1402366a4 41 5c           POP        R12
       1402366a6 c3              RET
                             LAB_1402366a7                                   XREF[2]:     14023652f(j), 14361f75c(*)  
       1402366a7 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + local_38[0]]
                 24 20
       1402366ac 0f 57 c0        XORPS      XMM0,XMM0
       1402366af 48 83 c4 50     ADD        RSP,0x50
       1402366b3 41 5c           POP        R12
       1402366b5 c3              RET
       1402366b6 cc              ??         CCh
       1402366b7 cc              ??         CCh
       1402366b8 cc              ??         CCh
       1402366b9 cc              ??         CCh
       1402366ba cc              ??         CCh
       1402366bb cc              ??         CCh
       1402366bc cc              ??         CCh
       1402366bd cc              ??         CCh
       1402366be cc              ??         CCh
       1402366bf cc              ??         CCh


## Decompiled FUNCTION

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

float InventoryChanges::GetEquippedWeight(longlong *param_1,Actor *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  param_1 = (longlong *)*param_1;
  fVar9 = 0.0;
  if (param_1 == (longlong *)0x0) {
    return 0.0;
  }
LAB_140236553:
  if ((param_1[1] == 0) && (*param_1 == 0)) {
    return fVar9;
  }
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) {
    return fVar9;
  }
  plVar4 = (longlong *)plVar5[1];
  while( true ) {
    if ((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) goto LAB_14023666e;
    cVar2 = ExtraDataList::IsWorn(*plVar4,1,0);
    if (cVar2 != '\0') break;
    plVar4 = (longlong *)plVar4[1];
  }
  if (*(char *)(*plVar5 + 0x1a) != '*') {
    fVar8 = (float)TESBoundObject::GetWeight();
    cVar2 = ((undefined *)*plVar5)[0x1a];
    if (cVar2 != ')') {
      bVar3 = 1;
      if (cVar2 == '\x1a') {
        BGSEntryPoint::HandleEntryPoint(kModArmorWeight,param_2,(undefined *)*plVar5);
      }
      goto LAB_14023665a;
    }
    plVar4 = (longlong *)plVar5[1];
    lVar6 = 0;
    goto LAB_1402365d8;
  }
  goto LAB_14023666e;
  while( true ) {
    cVar2 = ExtraDataList::IsWorn(lVar7,0,1);
    plVar4 = (longlong *)plVar4[1];
    if (cVar2 != '\0') {
      lVar6 = lVar7;
    }
    if (lVar6 != 0) break;
LAB_1402365d8:
    if ((plVar4 == (longlong *)0x0) || (lVar7 = *plVar4, lVar7 == 0)) break;
  }
  plVar5 = (longlong *)plVar5[1];
  lVar7 = 0;
  do {
    if ((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) break;
    cVar2 = ExtraDataList::IsWorn(lVar1,0,0);
    plVar5 = (longlong *)plVar5[1];
    if (cVar2 != '\0') {
      lVar7 = lVar1;
    }
  } while (lVar7 == 0);
  bVar3 = (lVar6 != 0) + 1;
  if (lVar7 == 0) {
    bVar3 = lVar6 != 0;
  }
LAB_14023665a:
  fVar9 = fVar9 + (float)bVar3 * fVar8;
LAB_14023666e:
  param_1 = (longlong *)param_1[1];
  if (param_1 == (longlong *)0x0) {
    return fVar9;
  }
  goto LAB_140236553;
}
