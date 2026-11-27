                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             float TESObjectREFR::GetWeightInContainer(TESObjectREFR 
             float             XMM0_Da:4      <RETURN>
             TESObjectREFR     RCX:8          this
                             TESObjectREFR::GetWeightInContainer             XREF[6]:     140673603(c), 
                                                                                          PlayerCharacter::DropObject:1407
                                                                                          PlayerCharacter::WornArmorChange
                                                                                          FUN_14074cdc0:14074d096(c), 
                                                                                          FUN_14098fc80:14098fc9d(c), 
                                                                                          1436278bc(*)  
       1402e2120 48 89 5c        MOV        qword ptr [RSP + 0x8],RBX                                                                    RELOCATION_ID(19277, 19703)
                 24 08                                                                                                                   Source: CommonLibSSE headers
       1402e2125 57              PUSH       RDI
       1402e2126 48 83 ec 30     SUB        RSP,0x30
       1402e212a 48 8b d9        MOV        RBX,this
       1402e212d 0f 29 74        MOVAPS     xmmword ptr [RSP + 0x20],XMM6
                 24 20
       1402e2132 48 8b 49 40     MOV        this,qword ptr [RCX + this->data.objectReference]
       1402e2136 33 ff           XOR        EDI,EDI
       1402e2138 0f 57 f6        XORPS      XMM6,XMM6
       1402e213b 48 85 c9        TEST       this,this
       1402e213e 74 64           JZ         LAB_1402e21a4
       1402e2140 0f b6 41 1a     MOVZX      EAX,byte ptr [RCX + this->formType]
       1402e2144 3c 1c           CMP        AL,0x1c
       1402e2146 74 0b           JZ         LAB_1402e2153
       1402e2148 3c 2b           CMP        AL,0x2b
       1402e214a 75 58           JNZ        LAB_1402e21a4
       1402e214c b8 88 00        MOV        EAX,0x88
                 00 00
       1402e2151 eb 05           JMP        LAB_1402e2158
                             LAB_1402e2153                                   XREF[1]:     1402e2146(j)  
       1402e2153 b8 30 00        MOV        EAX,0x30
                 00 00
                             LAB_1402e2158                                   XREF[1]:     1402e2151(j)  
       1402e2158 48 03 c1        ADD        RAX,this
       1402e215b 74 47           JZ         LAB_1402e21a4
       1402e215d 48 8d 4b 70     LEA        this,[RBX + 0x70]
       1402e2161 e8 2a d5        CALL       ExtraDataList::GetInventoryChanges                                                           undefined ExtraDataList::GetInventoryChanges()
                 e7 ff
       1402e2166 48 85 c0        TEST       RAX,RAX
       1402e2169 74 0a           JZ         LAB_1402e2175
       1402e216b 48 8b c8        MOV        this,RAX
       1402e216e e8 7d 3d        CALL       InventoryChanges::GetInventoryWeight                                                         float InventoryChanges::GetInventoryWeight(InventoryChanges * this)
                 f5 ff
       1402e2173 eb 2c           JMP        LAB_1402e21a1
                             LAB_1402e2175                                   XREF[1]:     1402e2169(j)  
       1402e2175 48 8b 43 40     MOV        RAX,qword ptr [RBX + 0x40]
       1402e2179 48 8b cf        MOV        this,RDI
       1402e217c 48 85 c0        TEST       RAX,RAX
       1402e217f 74 1b           JZ         LAB_1402e219c
       1402e2181 0f b6 50 1a     MOVZX      EDX,byte ptr [RAX + 0x1a]
       1402e2185 80 fa 1c        CMP        DL,0x1c
       1402e2188 74 0e           JZ         LAB_1402e2198
       1402e218a 80 fa 2b        CMP        DL,0x2b
       1402e218d 75 0d           JNZ        LAB_1402e219c
       1402e218f 48 8d 88        LEA        this,[RAX + 0x88]
                 88 00 00 00
       1402e2196 eb 04           JMP        LAB_1402e219c
                             LAB_1402e2198                                   XREF[1]:     1402e2188(j)  
       1402e2198 48 8d 48 30     LEA        this,[RAX + 0x30]
                             LAB_1402e219c                                   XREF[3]:     1402e217f(j), 1402e218d(j), 
                                                                                          1402e2196(j)  
       1402e219c e8 1f 92        CALL       TESContainer::GetItemWeight                                                                  undefined TESContainer::GetItemWeight()
                 ef ff
                             LAB_1402e21a1                                   XREF[1]:     1402e2173(j)  
       1402e21a1 0f 28 f0        MOVAPS     XMM6,XMM0
                             LAB_1402e21a4                                   XREF[3]:     1402e213e(j), 1402e214a(j), 
                                                                                          1402e215b(j)  
       1402e21a4 48 3b 1d        CMP        RBX,qword ptr [DAT_1431874f8]
                 4d 53 ea 02
       1402e21ab 74 29           JZ         LAB_1402e21d6
       1402e21ad 80 7b 1a 3e     CMP        byte ptr [RBX + 0x1a],0x3e
       1402e21b1 48 0f 44 fb     CMOVZ      RDI,RBX
       1402e21b5 48 85 ff        TEST       RDI,RDI
       1402e21b8 74 1c           JZ         LAB_1402e21d6
       1402e21ba 48 8b cf        MOV        this,RDI
       1402e21bd e8 ee 12        CALL       Actor::GetTotalCarryWeight                                                                   float Actor::GetTotalCarryWeight(Actor * this)
                 39 00
       1402e21c2 f3 0f 5d c6     MINSS      XMM0,XMM6
       1402e21c6 48 8b 5c        MOV        RBX,qword ptr [RSP + 0x40]
                 24 40
       1402e21cb 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + 0x20]
                 24 20
       1402e21d0 48 83 c4 30     ADD        RSP,0x30
       1402e21d4 5f              POP        RDI
       1402e21d5 c3              RET
                             LAB_1402e21d6                                   XREF[2]:     1402e21ab(j), 1402e21b8(j)  
       1402e21d6 48 8b 5c        MOV        RBX,qword ptr [RSP + 0x40]
                 24 40
       1402e21db 0f 28 c6        MOVAPS     XMM0,XMM6
       1402e21de 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + 0x20]
                 24 20
       1402e21e3 48 83 c4 30     ADD        RSP,0x30
       1402e21e7 5f              POP        RDI
       1402e21e8 c3              RET
       1402e21e9 cc              ??         CCh
       1402e21ea cc              ??         CCh
       1402e21eb cc              ??         CCh
       1402e21ec cc              ??         CCh
       1402e21ed cc              ??         CCh
       1402e21ee cc              ??         CCh
       1402e21ef cc              ??         CCh

## Decompiled Function:


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
/* WARNING: Enum "hkpCharacterStateType": Some values do not have unique names */
/* WARNING: Enum "CHARACTER_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Flag__enum_20": Some values do not have unique names */

float TESObjectREFR::GetWeightInContainer(TESObjectREFR *this)

{
  TESBoundObject *pTVar1;
  longlong lVar2;
  InventoryChanges *this_00;
  Actor *pAVar3;
  Actor *this_01;
  float fVar4;
  float fVar5;
  
  pTVar1 = (this->data).objectReference;
  this_01 = (Actor *)0x0;
  fVar5 = 0.0;
  if (pTVar1 != (TESBoundObject *)0x0) {
    if (pTVar1->formType == Container) {
      lVar2 = 0x30;
    }
    else {
      if (pTVar1->formType != NPC) goto LAB_1402e21a4;
      lVar2 = 0x88;
    }
    if ((longlong)&pTVar1->__vftable + lVar2 != 0) {
      this_00 = (InventoryChanges *)ExtraDataList::GetInventoryChanges(&this->extraList);
      if (this_00 == (InventoryChanges *)0x0) {
        pTVar1 = (this->data).objectReference;
        pAVar3 = this_01;
        if (pTVar1 != (TESBoundObject *)0x0) {
          if (pTVar1->formType == Container) {
            pAVar3 = (Actor *)(pTVar1 + 1);
          }
          else if (pTVar1->formType == NPC) {
            pAVar3 = (Actor *)&pTVar1[2].boundData.boundMax.y;
          }
        }
        fVar5 = (float)TESContainer::GetItemWeight(pAVar3);
      }
      else {
        fVar5 = InventoryChanges::GetInventoryWeight(this_00);
      }
    }
  }
LAB_1402e21a4:
  if (this != DAT_1431874f8) {
    if (this->formType == ActorCharacter) {
      this_01 = (Actor *)this;
    }
    if (this_01 != (Actor *)0x0) {
      fVar4 = Actor::GetTotalCarryWeight(this_01);
      if (fVar5 <= fVar4) {
        fVar4 = fVar5;
      }
      return fVar4;
    }
  }
  return fVar5;
}



                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             float __fastcall InventoryChanges::GetInventoryWeight(In
             float             XMM0_Da:4      <RETURN>
             InventoryChang    RCX:8          this
             undefined8        Stack[0x18]:8  local_res18                             XREF[2]:     140235f0a(W), 
                                                                                                   14023621c(R)  
             undefined8        Stack[0x10]:8  local_res10                             XREF[4]:     140235f47(W), 
                                                                                                   140235f51(W), 
                                                                                                   140236143(R), 
                                                                                                   1402361b1(R)  
             undefined4        Stack[0x8]:4   local_res8                              XREF[7]:     140235f64(W), 
                                                                                                   140235fcd(W), 
                                                                                                   140235fdf(W), 
                                                                                                   140236130(W), 
                                                                                                   14023617f(R), 
                                                                                                   1402361ed(*), 
                                                                                                   140236205(R)  
             undefined1[16]    Stack[-0x48]   local_48                                XREF[2]:     140235f0e(W), 
                                                                                                   140236224(R)  
             undefined1[16]    Stack[-0x58]   local_58                                XREF[2]:     140235f12(W), 
                                                                                                   140236229(R)  
             undefined1[16]    Stack[-0x68]   local_68                                XREF[2]:     140235f16(W), 
                                                                                                   14023622e(R)  
             undefined8        Stack[-0x78]:8 local_78                                XREF[1]:     140235f02(W)  
             undefined8        Stack[-0x88]:8 local_88                                XREF[1]:     1402361c8(W)  
                             InventoryChanges::GetInventoryWeight            XREF[3]:     TESObjectREFR::GetWeightInContai
                                                                                          FUN_1408f9ac0:1408f9b31(c), 
                                                                                          14361f720(*)  
       140235ef0 48 8b c4        MOV        RAX,RSP                                                                                      RELOCATION_ID(15883, 16123)
                                                                                                                                         Source: CommonLibSSE headers
       140235ef3 55              PUSH       RBP
       140235ef4 56              PUSH       RSI
       140235ef5 57              PUSH       RDI
       140235ef6 41 54           PUSH       R12
       140235ef8 41 55           PUSH       R13
       140235efa 41 56           PUSH       R14
       140235efc 41 57           PUSH       R15
       140235efe 48 83 ec 70     SUB        RSP,0x70
       140235f02 48 c7 40        MOV        qword ptr [RAX + local_78],-0x2
                 88 fe ff 
                 ff ff
       140235f0a 48 89 58 18     MOV        qword ptr [RAX + local_res18],RBX
       140235f0e 0f 29 70 b8     MOVAPS     xmmword ptr [RAX + local_48[0]],XMM6
       140235f12 0f 29 78 a8     MOVAPS     xmmword ptr [RAX + local_58[0]],XMM7
       140235f16 44 0f 29        MOVAPS     xmmword ptr [RAX + local_68[0]],XMM8
                 40 98
       140235f1b 4c 8b e9        MOV        R13,this
       140235f1e f3 0f 10        MOVSS      XMM0,dword ptr [RCX + this->totalWeight]
                 41 10
       140235f23 f3 0f 10        MOVSS      XMM6,dword ptr [DAT_141769578]                                                               = BF800000h
                 35 4d 36 
                 53 01
       140235f2b 0f 2e c6        UCOMISS    XMM0,XMM6
       140235f2e 0f 85 e8        JNZ        LAB_14023621c
                 02 00 00
       140235f34 48 8b 49 08     MOV        this,qword ptr [RCX + this->owner]
       140235f38 48 85 c9        TEST       this,this
       140235f3b 74 14           JZ         LAB_140235f51
       140235f3d 33 c0           XOR        EAX,EAX
       140235f3f 80 79 1a 3e     CMP        byte ptr [RCX + this->unk1A],0x3e
       140235f43 48 0f 44 c1     CMOVZ      RAX,this
       140235f47 48 89 84        MOV        qword ptr [RSP + local_res10],RAX
                 24 b8 00 
                 00 00
       140235f4f eb 0c           JMP        LAB_140235f5d
                             LAB_140235f51                                   XREF[1]:     140235f3b(j)  
       140235f51 48 c7 84        MOV        qword ptr [RSP + local_res10],0x0
                 24 b8 00 
                 00 00 00 
                             LAB_140235f5d                                   XREF[1]:     140235f4f(j)  
       140235f5d 45 0f 57 c0     XORPS      XMM8,XMM8
       140235f61 0f 57 ff        XORPS      XMM7,XMM7
       140235f64 c7 84 24        MOV        dword ptr [RSP + local_res8],0x0
                 b0 00 00 
                 00 00 00 
       140235f6f 48 85 c9        TEST       this,this
       140235f72 74 07           JZ         LAB_140235f7b
       140235f74 e8 77 c1        CALL       FUN_1402e20f0                                                                                undefined FUN_1402e20f0()
                 0a 00
       140235f79 eb 02           JMP        LAB_140235f7d
                             LAB_140235f7b                                   XREF[1]:     140235f72(j)  
       140235f7b 33 c0           XOR        EAX,EAX
                             LAB_140235f7d                                   XREF[1]:     140235f79(j)  
       140235f7d 8b 48 10        MOV        this,dword ptr [RAX + 0x10]
       140235f80 4c 8b 78 08     MOV        R15,qword ptr [RAX + 0x8]
       140235f84 85 c9           TEST       this,this
       140235f86 0f 84 e0        JZ         LAB_14023606c
                 00 00 00
       140235f8c 44 8b e1        MOV        R12D,this
       140235f8f 90              NOP
                             LAB_140235f90                                   XREF[1]:     140236066(j)  
       140235f90 49 8b 07        MOV        RAX,qword ptr [R15]
       140235f93 4c 8b 70 08     MOV        R14,qword ptr [RAX + 0x8]
       140235f97 49 8b 45 00     MOV        RAX,qword ptr [R13]
       140235f9b b2 01           MOV        DL,0x1
       140235f9d 48 85 c0        TEST       RAX,RAX
       140235fa0 74 1e           JZ         LAB_140235fc0
                             LAB_140235fa2                                   XREF[1]:     140235fbe(j)  
       140235fa2 84 d2           TEST       DL,DL
       140235fa4 74 50           JZ         LAB_140235ff6
       140235fa6 48 8b 08        MOV        this,qword ptr [RAX]
       140235fa9 48 85 c9        TEST       this,this
       140235fac 74 09           JZ         LAB_140235fb7
       140235fae 4c 39 31        CMP        qword ptr [this->entryList],R14
       140235fb1 75 04           JNZ        LAB_140235fb7
       140235fb3 32 d2           XOR        DL,DL
       140235fb5 eb 04           JMP        LAB_140235fbb
                             LAB_140235fb7                                   XREF[2]:     140235fac(j), 140235fb1(j)  
       140235fb7 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
                             LAB_140235fbb                                   XREF[1]:     140235fb5(j)  
       140235fbb 48 85 c0        TEST       RAX,RAX
       140235fbe 75 e2           JNZ        LAB_140235fa2
                             LAB_140235fc0                                   XREF[2]:     140235fa0(j), 140235ff9(j)  
       140235fc0 33 ed           XOR        EBP,EBP
                             LAB_140235fc2                                   XREF[3]:     140236001(j), 14023600d(j), 
                                                                                          140236041(j)  
       140235fc2 49 8b ce        MOV        this,R14
       140235fc5 e8 26 81        CALL       TESBoundObject::GetWeight                                                                    undefined TESBoundObject::GetWeight()
                 fb ff
       140235fca 0f 28 c8        MOVAPS     XMM1,XMM0
       140235fcd f3 0f 11        MOVSS      dword ptr [RSP + local_res8],XMM0
                 84 24 b0 
                 00 00 00
       140235fd6 0f 2e c6        UCOMISS    XMM0,XMM6
       140235fd9 75 0d           JNZ        LAB_140235fe8
       140235fdb 41 0f 28 c8     MOVAPS     XMM1,XMM8
       140235fdf f3 0f 11        MOVSS      dword ptr [RSP + local_res8],XMM1
                 8c 24 b0 
                 00 00 00
                             LAB_140235fe8                                   XREF[1]:     140235fd9(j)  
       140235fe8 49 8b 07        MOV        RAX,qword ptr [R15]
       140235feb 48 85 ed        TEST       RBP,RBP
       140235fee 75 56           JNZ        LAB_140236046
       140235ff0 66 0f 6e 00     MOVD       XMM0,dword ptr [RAX]
       140235ff4 eb 5d           JMP        LAB_140236053
                             LAB_140235ff6                                   XREF[1]:     140235fa4(j)  
       140235ff6 48 85 c0        TEST       RAX,RAX
       140235ff9 74 c5           JZ         LAB_140235fc0
       140235ffb 48 8b 28        MOV        RBP,qword ptr [RAX]
       140235ffe 48 85 ed        TEST       RBP,RBP
       140236001 74 bf           JZ         LAB_140235fc2
       140236003 40 32 f6        XOR        SIL,SIL
       140236006 48 8b 5d 08     MOV        RBX,qword ptr [RBP + 0x8]
       14023600a 48 85 db        TEST       RBX,RBX
       14023600d 74 b3           JZ         LAB_140235fc2
       14023600f 90              NOP
                             LAB_140236010                                   XREF[1]:     14023603a(j)  
       140236010 48 83 7b        CMP        qword ptr [RBX + 0x8],0x0
                 08 00
       140236015 75 06           JNZ        LAB_14023601d
       140236017 48 83 3b 00     CMP        qword ptr [RBX],0x0
       14023601b 74 1f           JZ         LAB_14023603c
                             LAB_14023601d                                   XREF[1]:     140236015(j)  
       14023601d 40 84 f6        TEST       SIL,SIL
       140236020 75 3c           JNZ        LAB_14023605e
       140236022 48 8b 0b        MOV        this,qword ptr [RBX]
       140236025 e8 76 77        CALL       ExtraDataList::HasQuestObjectAlias                                                           bool ExtraDataList::HasQuestObjectAlias(ExtraDataList * this)
                 f3 ff
       14023602a 84 c0           TEST       AL,AL
       14023602c 74 05           JZ         LAB_140236033
       14023602e 40 b6 01        MOV        SIL,0x1
       140236031 eb 04           JMP        LAB_140236037
                             LAB_140236033                                   XREF[1]:     14023602c(j)  
       140236033 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
                             LAB_140236037                                   XREF[1]:     140236031(j)  
       140236037 48 85 db        TEST       RBX,RBX
       14023603a 75 d4           JNZ        LAB_140236010
                             LAB_14023603c                                   XREF[1]:     14023601b(j)  
       14023603c 40 84 f6        TEST       SIL,SIL
       14023603f 75 1d           JNZ        LAB_14023605e
       140236041 e9 7c ff        JMP        LAB_140235fc2
                 ff ff
                             LAB_140236046                                   XREF[1]:     140235fee(j)  
       140236046 8b 55 10        MOV        EDX,dword ptr [RBP + 0x10]
       140236049 8b 00           MOV        EAX,dword ptr [RAX]
       14023604b 03 d0           ADD        EDX,EAX
       14023604d 74 0f           JZ         LAB_14023605e
       14023604f 66 0f 6e c2     MOVD       XMM0,EDX
                             LAB_140236053                                   XREF[1]:     140235ff4(j)  
       140236053 0f 5b c0        CVTDQ2PS   XMM0,XMM0
       140236056 f3 0f 59 c1     MULSS      XMM0,XMM1
       14023605a f3 0f 58 f8     ADDSS      XMM7,XMM0
                             LAB_14023605e                                   XREF[3]:     140236020(j), 14023603f(j), 
                                                                                          14023604d(j)  
       14023605e 49 83 c7 08     ADD        R15,0x8
       140236062 49 83 ec 01     SUB        R12,0x1
       140236066 0f 85 24        JNZ        LAB_140235f90
                 ff ff ff
                             LAB_14023606c                                   XREF[1]:     140235f86(j)  
       14023606c 41 0f 28 f0     MOVAPS     XMM6,XMM8
       140236070 49 8b 45 00     MOV        RAX,qword ptr [R13]
       140236074 48 85 c0        TEST       RAX,RAX
       140236077 0f 84 2a        JZ         LAB_1402361a7
                 01 00 00
       14023607d 0f 1f 00        NOP        dword ptr [RAX]
                             LAB_140236080                                   XREF[1]:     1402361a1(j)  
       140236080 4c 8d 78 08     LEA        R15,[RAX + 0x8]
       140236084 49 83 3f 00     CMP        qword ptr [R15],0x0
       140236088 75 0a           JNZ        LAB_140236094
       14023608a 48 83 38 00     CMP        qword ptr [RAX],0x0
       14023608e 0f 84 13        JZ         LAB_1402361a7
                 01 00 00
                             LAB_140236094                                   XREF[1]:     140236088(j)  
       140236094 4c 8b 30        MOV        R14,qword ptr [RAX]
       140236097 4d 85 f6        TEST       R14,R14
       14023609a 0f 84 07        JZ         LAB_1402361a7
                 01 00 00
       1402360a0 49 8b 2e        MOV        RBP,qword ptr [R14]
       1402360a3 48 85 ed        TEST       RBP,RBP
       1402360a6 0f 84 ef        JZ         LAB_14023619b
                 00 00 00
       1402360ac 49 8b 4d 08     MOV        this,qword ptr [R13 + 0x8]
       1402360b0 48 85 c9        TEST       this,this
       1402360b3 74 2f           JZ         LAB_1402360e4
       1402360b5 e8 36 c0        CALL       FUN_1402e20f0                                                                                undefined FUN_1402e20f0()
                 0a 00
       1402360ba 48 85 c0        TEST       RAX,RAX
       1402360bd 74 25           JZ         LAB_1402360e4
       1402360bf 49 8b 4d 08     MOV        this,qword ptr [R13 + 0x8]
       1402360c3 48 85 c9        TEST       this,this
       1402360c6 74 07           JZ         LAB_1402360cf
       1402360c8 e8 23 c0        CALL       FUN_1402e20f0                                                                                undefined FUN_1402e20f0()
                 0a 00
       1402360cd eb 02           JMP        LAB_1402360d1
                             LAB_1402360cf                                   XREF[1]:     1402360c6(j)  
       1402360cf 33 c0           XOR        EAX,EAX
                             LAB_1402360d1                                   XREF[1]:     1402360cd(j)  
       1402360d1 48 8b d5        MOV        RDX,RBP
       1402360d4 48 8b c8        MOV        this,RAX
       1402360d7 e8 74 52        CALL       TESContainer::HasItem                                                                        undefined TESContainer::HasItem()
                 fa ff
       1402360dc 84 c0           TEST       AL,AL
       1402360de 0f 85 b7        JNZ        LAB_14023619b
                 00 00 00
                             LAB_1402360e4                                   XREF[2]:     1402360b3(j), 1402360bd(j)  
       1402360e4 40 32 f6        XOR        SIL,SIL
       1402360e7 49 8b 5e 08     MOV        RBX,qword ptr [R14 + 0x8]
       1402360eb 48 85 db        TEST       RBX,RBX
       1402360ee 74 35           JZ         LAB_140236125
                             LAB_1402360f0                                   XREF[1]:     14023611e(j)  
       1402360f0 48 83 7b        CMP        qword ptr [RBX + 0x8],0x0
                 08 00
       1402360f5 75 06           JNZ        LAB_1402360fd
       1402360f7 48 83 3b 00     CMP        qword ptr [RBX],0x0
       1402360fb 74 23           JZ         LAB_140236120
                             LAB_1402360fd                                   XREF[1]:     1402360f5(j)  
       1402360fd 40 84 f6        TEST       SIL,SIL
       140236100 0f 85 95        JNZ        LAB_14023619b
                 00 00 00
       140236106 48 8b 0b        MOV        this,qword ptr [RBX]
       140236109 e8 92 76        CALL       ExtraDataList::HasQuestObjectAlias                                                           bool ExtraDataList::HasQuestObjectAlias(ExtraDataList * this)
                 f3 ff
       14023610e 84 c0           TEST       AL,AL
       140236110 74 05           JZ         LAB_140236117
       140236112 40 b6 01        MOV        SIL,0x1
       140236115 eb 04           JMP        LAB_14023611b
                             LAB_140236117                                   XREF[1]:     140236110(j)  
       140236117 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
                             LAB_14023611b                                   XREF[1]:     140236115(j)  
       14023611b 48 85 db        TEST       RBX,RBX
       14023611e 75 d0           JNZ        LAB_1402360f0
                             LAB_140236120                                   XREF[1]:     1402360fb(j)  
       140236120 40 84 f6        TEST       SIL,SIL
       140236123 75 76           JNZ        LAB_14023619b
                             LAB_140236125                                   XREF[1]:     1402360ee(j)  
       140236125 48 8b cd        MOV        this,RBP
       140236128 e8 c3 7f        CALL       TESBoundObject::GetWeight                                                                    undefined TESBoundObject::GetWeight()
                 fb ff
       14023612d 0f 28 c8        MOVAPS     XMM1,XMM0
       140236130 f3 0f 11        MOVSS      dword ptr [RSP + local_res8],XMM0
                 84 24 b0 
                 00 00 00
       140236139 41 0f 2f c0     COMISS     XMM0,XMM8
       14023613d 76 5c           JBE        LAB_14023619b
       14023613f 41 8b 7e 10     MOV        EDI,dword ptr [R14 + 0x10]
       140236143 48 8b b4        MOV        RSI,qword ptr [RSP + local_res10]
                 24 b8 00 
                 00 00
       14023614b 48 85 f6        TEST       RSI,RSI
       14023614e 74 38           JZ         LAB_140236188
       140236150 80 7d 1a 1a     CMP        byte ptr [RBP + 0x1a],0x1a
       140236154 75 32           JNZ        LAB_140236188
       140236156 49 8b 5e 08     MOV        RBX,qword ptr [R14 + 0x8]
       14023615a 48 85 db        TEST       RBX,RBX
       14023615d 74 29           JZ         LAB_140236188
       14023615f 90              NOP
                             LAB_140236160                                   XREF[1]:     14023617d(j)  
       140236160 48 8b 0b        MOV        this,qword ptr [RBX]
       140236163 48 85 c9        TEST       this,this
       140236166 74 17           JZ         LAB_14023617f
       140236168 45 33 c0        XOR        R8D,R8D
       14023616b b2 01           MOV        DL,0x1
       14023616d e8 2e 8f        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f2 ff
       140236172 84 c0           TEST       AL,AL
       140236174 75 73           JNZ        LAB_1402361e9
       140236176 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14023617a 48 85 db        TEST       RBX,RBX
       14023617d 75 e1           JNZ        LAB_140236160
                             LAB_14023617f                                   XREF[1]:     140236166(j)  
       14023617f f3 0f 10        MOVSS      XMM1,dword ptr [RSP + local_res8]
                 8c 24 b0 
                 00 00 00
                             LAB_140236188                                   XREF[4]:     14023614e(j), 140236154(j), 
                                                                                          14023615d(j), 140236214(j)  
       140236188 85 ff           TEST       EDI,EDI
       14023618a 7e 0f           JLE        LAB_14023619b
       14023618c 66 0f 6e c7     MOVD       XMM0,EDI
       140236190 0f 5b c0        CVTDQ2PS   XMM0,XMM0
       140236193 f3 0f 59 c1     MULSS      XMM0,XMM1
       140236197 f3 0f 58 f8     ADDSS      XMM7,XMM0
                             LAB_14023619b                                   XREF[7]:     1402360a6(j), 1402360de(j), 
                                                                                          140236100(j), 140236123(j), 
                                                                                          14023613d(j), 14023618a(j), 
                                                                                          1402361eb(j)  
       14023619b 49 8b 07        MOV        RAX,qword ptr [R15]
       14023619e 48 85 c0        TEST       RAX,RAX
       1402361a1 0f 85 d9        JNZ        LAB_140236080
                 fe ff ff
                             LAB_1402361a7                                   XREF[3]:     140236077(j), 14023608e(j), 
                                                                                          14023609a(j)  
       1402361a7 f3 0f 58 f7     ADDSS      XMM6,XMM7
       1402361ab f3 41 0f        MOVSS      dword ptr [R13 + 0x10],XMM6
                 11 75 10
       1402361b1 48 8b 84        MOV        RAX,qword ptr [RSP + local_res10]
                 24 b8 00 
                 00 00
       1402361b9 48 85 c0        TEST       RAX,RAX
       1402361bc 74 5b           JZ         LAB_140236219
       1402361be f3 41 0f        MOVSS      XMM2,dword ptr [R13 + 0x14]
                 10 55 14
       1402361c4 f3 0f 5c f2     SUBSS      XMM6,XMM2
       1402361c8 48 c7 44        MOV        qword ptr [RSP + local_88],0x0
                 24 20 00 
                 00 00 00
       1402361d1 0f 28 de        MOVAPS     XMM3,XMM6
       1402361d4 ba 1f 00        MOV        EDX,0x1f
                 00 00
       1402361d9 48 8b c8        MOV        this,RAX
       1402361dc e8 5f c8        CALL       Actor::SendActorValueUpdate                                                                  undefined Actor::SendActorValueUpdate()
                 47 00
       1402361e1 f3 41 0f        MOVSS      XMM0,dword ptr [R13 + 0x10]
                 10 45 10
       1402361e7 eb 33           JMP        LAB_14023621c
                             LAB_1402361e9                                   XREF[1]:     140236174(j)  
       1402361e9 85 ff           TEST       EDI,EDI
       1402361eb 7e ae           JLE        LAB_14023619b
       1402361ed 4c 8d 8c        LEA        R9=>local_res8,[RSP + 0xb0]
                 24 b0 00 
                 00 00
       1402361f5 4d 8b 06        MOV        R8,qword ptr [R14]
       1402361f8 48 8b d6        MOV        RDX,RSI
       1402361fb b9 20 00        MOV        this,0x20
                 00 00
       140236200 e8 2b fd        CALL       BGSEntryPoint::HandleEntryPoint                                                              void BGSEntryPoint::HandleEntryPoint(ENTRY_POINT p0, Actor * p1, pointer p2)
                 14 00
       140236205 f3 0f 10        MOVSS      XMM1,dword ptr [RSP + local_res8]
                 8c 24 b0 
                 00 00 00
       14023620e f3 0f 58 f1     ADDSS      XMM6,XMM1
       140236212 ff cf           DEC        EDI
       140236214 e9 6f ff        JMP        LAB_140236188
                 ff ff
                             LAB_140236219                                   XREF[1]:     1402361bc(j)  
       140236219 0f 28 c6        MOVAPS     XMM0,XMM6
                             LAB_14023621c                                   XREF[2]:     140235f2e(j), 1402361e7(j)  
       14023621c 48 8b 9c        MOV        RBX,qword ptr [RSP + local_res18]
                 24 c0 00 
                 00 00
       140236224 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + local_48[0]]
                 24 60
       140236229 0f 28 7c        MOVAPS     XMM7,xmmword ptr [RSP + local_58[0]]
                 24 50
       14023622e 44 0f 28        MOVAPS     XMM8,xmmword ptr [RSP + local_68[0]]
                 44 24 40
       140236234 48 83 c4 70     ADD        RSP,0x70
       140236238 41 5f           POP        R15
       14023623a 41 5e           POP        R14
       14023623c 41 5d           POP        R13
       14023623e 41 5c           POP        R12
       140236240 5f              POP        RDI
       140236241 5e              POP        RSI
       140236242 5d              POP        RBP
       140236243 c3              RET
       140236244 cc              ??         CCh
       140236245 cc              ??         CCh
       140236246 cc              ??         CCh
       140236247 cc              ??         CCh
       140236248 cc              ??         CCh
       140236249 cc              ??         CCh
       14023624a cc              ??         CCh
       14023624b cc              ??         CCh
       14023624c cc              ??         CCh
       14023624d cc              ??         CCh
       14023624e cc              ??         CCh
       14023624f cc              ??         CCh




/* WARNING: Enum "FunctionID": Some values do not have unique names */
/* WARNING: Enum "DIALOGUE_TYPE": Some values do not have unique names */
/* WARNING: Enum "Flag__enum_42": Some values do not have unique names */
/* WARNING: Enum "hkpShapeType": Some values do not have unique names */
/* WARNING: Enum "D3D_SRV_DIMENSION": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "SpellType": Some values do not have unique names */
/* WARNING: Enum "Texture": Some values do not have unique names */
/* WARNING: Enum "BIPED_OBJECT": Some values do not have unique names */
/* WARNING: Enum "COL_LAYER": Some values do not have unique names */
/* WARNING: Enum "hkpCharacterStateType": Some values do not have unique names */
/* WARNING: Enum "CHARACTER_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Flag__enum_20": Some values do not have unique names */

float InventoryChanges::GetInventoryWeight(InventoryChanges *this)

{
  Actor *pAVar1;
  TESBoundObject *pTVar2;
  Node *pNVar3;
  ExtraDataList *pEVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  Node *pNVar10;
  InventoryEntryData *pIVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res8;
  Actor *local_res10;
  
  fVar16 = this->totalWeight;
  if (fVar16 == -1.0) {
    pAVar1 = (Actor *)this->owner;
    if (pAVar1 == (Actor *)0x0) {
      local_res10 = (Actor *)0x0;
    }
    else {
      local_res10 = (Actor *)0x0;
      if (pAVar1->formType == ActorCharacter) {
        local_res10 = pAVar1;
      }
    }
    fVar17 = 0.0;
    if (pAVar1 == (Actor *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1402e20f0();
    }
    plVar14 = *(longlong **)(lVar7 + 8);
    if (*(uint *)(lVar7 + 0x10) != 0) {
      uVar13 = (ulonglong)*(uint *)(lVar7 + 0x10);
LAB_140235f90:
      pTVar2 = *(TESBoundObject **)(*plVar14 + 8);
      pNVar3 = &this->entryList->_listHead;
      bVar9 = true;
      while (pNVar3 != (Node *)0x0) {
        if (!bVar9) {
          if (pNVar3 != (Node *)0x0) {
            pIVar11 = pNVar3->item;
            if (pIVar11 == (InventoryEntryData *)0x0) goto LAB_140235fc2;
            bVar9 = false;
            pNVar10 = &pIVar11->extraLists->_listHead;
            if (pNVar10 == (Node *)0x0) goto LAB_140235fc2;
            goto LAB_140236010;
          }
          break;
        }
        pIVar11 = ((Node *)&pNVar3->item)->item;
        if ((pIVar11 == (InventoryEntryData *)0x0) || (pIVar11->object != pTVar2)) {
          pNVar3 = pNVar3->next;
        }
        else {
          bVar9 = false;
        }
      }
      pIVar11 = (InventoryEntryData *)0x0;
      goto LAB_140235fc2;
    }
LAB_14023606c:
    fVar16 = 0.0;
    for (pNVar3 = &this->entryList->_listHead;
        (pNVar3 != (Node *)0x0 &&
        (((pNVar3->next != (Node *)0x0 || (pNVar3->item != (InventoryEntryData *)0x0)) &&
         (pIVar11 = pNVar3->item, pIVar11 != (InventoryEntryData *)0x0)))); pNVar3 = pNVar3->next) {
      pTVar2 = pIVar11->object;
      if (pTVar2 != (TESBoundObject *)0x0) {
        if ((this->owner != (TESObjectREFR *)0x0) && (lVar7 = FUN_1402e20f0(), lVar7 != 0)) {
          if (this->owner == (TESObjectREFR *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_1402e20f0();
          }
          cVar5 = TESContainer::HasItem(uVar8,pTVar2);
          if (cVar5 != '\0') goto LAB_14023619b;
        }
        bVar9 = false;
        pNVar10 = &pIVar11->extraLists->_listHead;
        if (pNVar10 != (Node *)0x0) {
          do {
            if ((pNVar10->next == (Node *)0x0) &&
               (((Node *)&pNVar10->item)->item == (ExtraDataList *)0x0)) break;
            if (bVar9) goto LAB_14023619b;
            bVar6 = ExtraDataList::HasQuestObjectAlias(((Node *)&pNVar10->item)->item);
            if (bVar6) {
              bVar9 = true;
            }
            else {
              pNVar10 = pNVar10->next;
            }
          } while (pNVar10 != (Node *)0x0);
          if (bVar9) goto LAB_14023619b;
        }
        fVar15 = (float)TESBoundObject::GetWeight(pTVar2);
        if (0.0 < fVar15) {
          iVar12 = pIVar11->countDelta;
          if ((local_res10 != (Actor *)0x0) && (pTVar2->formType == Armor)) {
            pNVar10 = &pIVar11->extraLists->_listHead;
            while( true ) {
              if ((pNVar10 == (Node *)0x0) ||
                 (pEVar4 = ((Node *)&pNVar10->item)->item, pEVar4 == (ExtraDataList *)0x0))
              goto LAB_140236188;
              cVar5 = ExtraDataList::IsWorn(pEVar4,1,0);
              if (cVar5 != '\0') break;
              pNVar10 = pNVar10->next;
            }
            if (iVar12 < 1) goto LAB_14023619b;
            BGSEntryPoint::HandleEntryPoint
                      (kModArmorWeight,local_res10,(undefined *)pIVar11->object);
            fVar16 = fVar16 + fVar15;
            iVar12 = iVar12 + -1;
          }
LAB_140236188:
          if (0 < iVar12) {
            fVar17 = fVar17 + (float)iVar12 * fVar15;
          }
        }
      }
LAB_14023619b:
    }
    fVar16 = fVar16 + fVar17;
    this->totalWeight = fVar16;
    if (local_res10 != (Actor *)0x0) {
      Actor::SendActorValueUpdate(local_res10,0x1f,this->armorWeight,fVar16 - this->armorWeight,0);
      fVar16 = this->totalWeight;
    }
  }
  return fVar16;
  while( true ) {
    if (bVar9) goto LAB_14023605e;
    bVar6 = ExtraDataList::HasQuestObjectAlias(((Node *)&pNVar10->item)->item);
    if (bVar6) {
      bVar9 = true;
    }
    else {
      pNVar10 = pNVar10->next;
    }
    if (pNVar10 == (Node *)0x0) break;
LAB_140236010:
    if ((pNVar10->next == (Node *)0x0) && (((Node *)&pNVar10->item)->item == (ExtraDataList *)0x0))
    break;
  }
  if (!bVar9) {
LAB_140235fc2:
    local_res8 = (float)TESBoundObject::GetWeight(pTVar2);
    if (local_res8 == -1.0) {
      local_res8 = 0.0;
    }
    if (pIVar11 == (InventoryEntryData *)0x0) {
      iVar12 = *(int *)*plVar14;
    }
    else {
      iVar12 = pIVar11->countDelta + *(int *)*plVar14;
      if (iVar12 == 0) goto LAB_14023605e;
    }
    fVar17 = fVar17 + (float)iVar12 * local_res8;
  }
LAB_14023605e:
  plVar14 = plVar14 + 1;
  uVar13 = uVar13 - 1;
  if (uVar13 == 0) goto LAB_14023606c;
  goto LAB_140235f90;
}



                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_1402e20f0()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_1402e20f0                                   XREF[20]:    TESDataHandler::CreateReferenceA
                                                                                          TESDataHandler::CreateReferenceA
                                                                                          TESObjectREFR::InitInventoryIfRe
                                                                                          TESObjectREFR::InitInventoryIfRe
                                                                                          TESObjectREFR::MakeInventoryChan
                                                                                          FUN_140226a20:140227258(c), 
                                                                                          TESObjectREFR::sub:14022cb3d(c), 
                                                                                          InventoryChanges::InitScripts:14
                                                                                          FUN_14022fd80:14022fe12(c), 
                                                                                          FUN_14022fd80:14022ffad(c), 
                                                                                          FUN_14022fd80:1402301fb(c), 
                                                                                          FUN_140230250:14023038f(c), 
                                                                                          FUN_140230250:14023080e(c), 
                                                                                          FUN_140230b00:140230bf7(c), 
                                                                                          FUN_140230b00:140230ebc(c), 
                                                                                          InventoryChanges::InitLeveledIte
                                                                                          InventoryChanges::InitFromContai
                                                                                          FUN_140237310:140237358(c), 
                                                                                          FUN_140237310:140237595(c), 
                                                                                          TESBoundObject::GetCountDelta:14
                                                                                          [more]
       1402e20f0 48 8b 41 40     MOV        RAX,qword ptr [RCX + 0x40]
       1402e20f4 48 85 c0        TEST       RAX,RAX
       1402e20f7 74 1a           JZ         LAB_1402e2113
       1402e20f9 0f b6 48 1a     MOVZX      ECX,byte ptr [RAX + 0x1a]
       1402e20fd 80 f9 1c        CMP        CL,0x1c
       1402e2100 74 0c           JZ         LAB_1402e210e
       1402e2102 80 f9 2b        CMP        CL,0x2b
       1402e2105 75 0c           JNZ        LAB_1402e2113
       1402e2107 48 05 88        ADD        RAX,0x88
                 00 00 00
       1402e210d c3              RET
                             LAB_1402e210e                                   XREF[1]:     1402e2100(j)  
       1402e210e 48 83 c0 30     ADD        RAX,0x30
       1402e2112 c3              RET
                             LAB_1402e2113                                   XREF[2]:     1402e20f7(j), 1402e2105(j)  
       1402e2113 33 c0           XOR        EAX,EAX
       1402e2115 c3              RET
       1402e2116 cc              ??         CCh
       1402e2117 cc              ??         CCh
       1402e2118 cc              ??         CCh
       1402e2119 cc              ??         CCh
       1402e211a cc              ??         CCh
       1402e211b cc              ??         CCh
       1402e211c cc              ??         CCh
       1402e211d cc              ??         CCh
       1402e211e cc              ??         CCh
       1402e211f cc              ??         CCh



longlong FUN_1402e20f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1a) == '\x1c') {
      return lVar1 + 0x30;
    }
    if (*(char *)(lVar1 + 0x1a) == '+') {
      return lVar1 + 0x88;
    }
  }
  return 0;
}


                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_1402e20f0()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_1402e20f0                                   XREF[20]:    TESDataHandler::CreateReferenceA
                                                                                          TESDataHandler::CreateReferenceA
                                                                                          TESObjectREFR::InitInventoryIfRe
                                                                                          TESObjectREFR::InitInventoryIfRe
                                                                                          TESObjectREFR::MakeInventoryChan
                                                                                          FUN_140226a20:140227258(c), 
                                                                                          TESObjectREFR::sub:14022cb3d(c), 
                                                                                          InventoryChanges::InitScripts:14
                                                                                          FUN_14022fd80:14022fe12(c), 
                                                                                          FUN_14022fd80:14022ffad(c), 
                                                                                          FUN_14022fd80:1402301fb(c), 
                                                                                          FUN_140230250:14023038f(c), 
                                                                                          FUN_140230250:14023080e(c), 
                                                                                          FUN_140230b00:140230bf7(c), 
                                                                                          FUN_140230b00:140230ebc(c), 
                                                                                          InventoryChanges::InitLeveledIte
                                                                                          InventoryChanges::InitFromContai
                                                                                          FUN_140237310:140237358(c), 
                                                                                          FUN_140237310:140237595(c), 
                                                                                          TESBoundObject::GetCountDelta:14
                                                                                          [more]
       1402e20f0 48 8b 41 40     MOV        RAX,qword ptr [RCX + 0x40]
       1402e20f4 48 85 c0        TEST       RAX,RAX
       1402e20f7 74 1a           JZ         LAB_1402e2113
       1402e20f9 0f b6 48 1a     MOVZX      ECX,byte ptr [RAX + 0x1a]
       1402e20fd 80 f9 1c        CMP        CL,0x1c
       1402e2100 74 0c           JZ         LAB_1402e210e
       1402e2102 80 f9 2b        CMP        CL,0x2b
       1402e2105 75 0c           JNZ        LAB_1402e2113
       1402e2107 48 05 88        ADD        RAX,0x88
                 00 00 00
       1402e210d c3              RET
                             LAB_1402e210e                                   XREF[1]:     1402e2100(j)  
       1402e210e 48 83 c0 30     ADD        RAX,0x30
       1402e2112 c3              RET
                             LAB_1402e2113                                   XREF[2]:     1402e20f7(j), 1402e2105(j)  
       1402e2113 33 c0           XOR        EAX,EAX
       1402e2115 c3              RET
       1402e2116 cc              ??         CCh
       1402e2117 cc              ??         CCh
       1402e2118 cc              ??         CCh
       1402e2119 cc              ??         CCh
       1402e211a cc              ??         CCh
       1402e211b cc              ??         CCh
       1402e211c cc              ??         CCh
       1402e211d cc              ??         CCh
       1402e211e cc              ??         CCh
       1402e211f cc              ??         CCh


longlong FUN_1402e20f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1a) == '\x1c') {
      return lVar1 + 0x30;
    }
    if (*(char *)(lVar1 + 0x1a) == '+') {
      return lVar1 + 0x88;
    }
  }
  return 0;
}


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


                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_1406ed580()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_1406ed580                                   XREF[3]:     Character::sub:1406b21bf(c), 
                                                                                          Actor::SendActorValueUpdate:1406
                                                                                          PlayerControls::sub:14079b8c8(c)  
       1406ed580 4c 8b 41 10     MOV        R8,qword ptr [RCX + 0x10]
       1406ed584 4d 85 c0        TEST       R8,R8
       1406ed587 74 24           JZ         LAB_1406ed5ad
       1406ed589 83 ea 18        SUB        EDX,0x18
       1406ed58c 74 18           JZ         LAB_1406ed5a6
       1406ed58e 83 ea 01        SUB        EDX,0x1
       1406ed591 74 0c           JZ         LAB_1406ed59f
       1406ed593 83 fa 01        CMP        EDX,0x1
       1406ed596 75 15           JNZ        LAB_1406ed5ad
       1406ed598 f3 41 0f        MOVSS      XMM0,dword ptr [R8 + 0x20]
                 10 40 20
       1406ed59e c3              RET
                             LAB_1406ed59f                                   XREF[1]:     1406ed591(j)  
       1406ed59f f3 41 0f        MOVSS      XMM0,dword ptr [R8 + 0x24]
                 10 40 24
       1406ed5a5 c3              RET
                             LAB_1406ed5a6                                   XREF[1]:     1406ed58c(j)  
       1406ed5a6 f3 41 0f        MOVSS      XMM0,dword ptr [R8 + 0x1c]
                 10 40 1c
       1406ed5ac c3              RET
                             LAB_1406ed5ad                                   XREF[2]:     1406ed587(j), 1406ed596(j)  
       1406ed5ad 0f 57 c0        XORPS      XMM0,XMM0
       1406ed5b0 c3              RET
       1406ed5b1 cc              ??         CCh
       1406ed5b2 cc              ??         CCh
       1406ed5b3 cc              ??         CCh
       1406ed5b4 cc              ??         CCh
       1406ed5b5 cc              ??         CCh
       1406ed5b6 cc              ??         CCh
       1406ed5b7 cc              ??         CCh
       1406ed5b8 cc              ??         CCh
       1406ed5b9 cc              ??         CCh
       1406ed5ba cc              ??         CCh
       1406ed5bb cc              ??         CCh
       1406ed5bc cc              ??         CCh
       1406ed5bd cc              ??         CCh
       1406ed5be cc              ??         CCh
       1406ed5bf cc              ??         CCh


void FUN_1406ed5c0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (param_2 == 0x18) {
      *(undefined4 *)(lVar1 + 0x1c) = param_3;
    }
    else {
      if (param_2 == 0x19) {
        *(undefined4 *)(lVar1 + 0x24) = param_3;
        return;
      }
      if (param_2 == 0x1a) {
        *(undefined4 *)(lVar1 + 0x20) = param_3;
        return;
      }
    }
  }
  return;
}


                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_1406ed600()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_1406ed600                                   XREF[7]:     Character::sub:1406a2ad7(c), 
                                                                                          Actor::SendActorValueUpdate:1406
                                                                                          1406b44b9(c), 
                                                                                          Actor::StopCombat:1406b73cc(c), 
                                                                                          Actor::sub:1406b9652(c), 
                                                                                          PlayerCharacter::Update:14073334
                                                                                          PlayerCharacter::sub:140763d20(c
       1406ed600 4c 8b 41 10     MOV        R8,qword ptr [RCX + 0x10]
       1406ed604 4d 85 c0        TEST       R8,R8
       1406ed607 74 74           JZ         LAB_1406ed67d
       1406ed609 83 ea 18        SUB        EDX,0x18
       1406ed60c 74 4e           JZ         LAB_1406ed65c
       1406ed60e 83 ea 01        SUB        EDX,0x1
       1406ed611 74 27           JZ         LAB_1406ed63a
       1406ed613 83 fa 01        CMP        EDX,0x1
       1406ed616 75 65           JNZ        LAB_1406ed67d
       1406ed618 0f 57 c0        XORPS      XMM0,XMM0
       1406ed61b 0f 2e d0        UCOMISS    XMM2,XMM0
       1406ed61e 74 07           JZ         LAB_1406ed627
       1406ed620 41 0f 2f        COMISS     XMM2,dword ptr [R8 + 0x20]
                 50 20
       1406ed625 76 56           JBE        LAB_1406ed67d
                             LAB_1406ed627                                   XREF[1]:     1406ed61e(j)  
       1406ed627 f3 0f 10        MOVSS      XMM0,dword ptr [fStaminaRegenDelayMax]                                                       = 40A00000h
                 05 d9 08 
                 91 01
       1406ed62f f3 0f 5d c2     MINSS      XMM0,XMM2
       1406ed633 f3 41 0f        MOVSS      dword ptr [R8 + 0x20],XMM0
                 11 40 20
       1406ed639 c3              RET
                             LAB_1406ed63a                                   XREF[1]:     1406ed611(j)  
       1406ed63a 0f 57 c0        XORPS      XMM0,XMM0
       1406ed63d 0f 2e d0        UCOMISS    XMM2,XMM0
       1406ed640 74 07           JZ         LAB_1406ed649
       1406ed642 41 0f 2f        COMISS     XMM2,dword ptr [R8 + 0x24]
                 50 24
       1406ed647 76 34           JBE        LAB_1406ed67d
                             LAB_1406ed649                                   XREF[1]:     1406ed640(j)  
       1406ed649 f3 0f 10        MOVSS      XMM0,dword ptr [fMagickaRegenDelayMax]                                                       = 40A00000h
                 05 cf 08 
                 91 01
       1406ed651 f3 0f 5d c2     MINSS      XMM0,XMM2
       1406ed655 f3 41 0f        MOVSS      dword ptr [R8 + 0x24],XMM0
                 11 40 24
       1406ed65b c3              RET
                             LAB_1406ed65c                                   XREF[1]:     1406ed60c(j)  
       1406ed65c 0f 57 c0        XORPS      XMM0,XMM0
       1406ed65f 0f 2e d0        UCOMISS    XMM2,XMM0
       1406ed662 74 07           JZ         LAB_1406ed66b
       1406ed664 41 0f 2f        COMISS     XMM2,dword ptr [R8 + 0x1c]
                 50 1c
       1406ed669 76 12           JBE        LAB_1406ed67d
                             LAB_1406ed66b                                   XREF[1]:     1406ed662(j)  
       1406ed66b f3 0f 10        MOVSS      XMM0,dword ptr [fHealthRegenDelayMax]                                                        = 40A00000h
                 05 7d 08 
                 91 01
       1406ed673 f3 0f 5d c2     MINSS      XMM0,XMM2
       1406ed677 f3 41 0f        MOVSS      dword ptr [R8 + 0x1c],XMM0
                 11 40 1c
                             LAB_1406ed67d                                   XREF[5]:     1406ed607(j), 1406ed616(j), 
                                                                                          1406ed625(j), 1406ed647(j), 
                                                                                          1406ed669(j)  
       1406ed67d c3              RET
       1406ed67e cc              ??         CCh
       1406ed67f cc              ??         CCh
       1406ed680 cc              ??         CCh
       1406ed681 cc              ??         CCh
       1406ed682 cc              ??         CCh
       1406ed683 cc              ??         CCh
       1406ed684 cc              ??         CCh
       1406ed685 cc              ??         CCh
       1406ed686 cc              ??         CCh
       1406ed687 cc              ??         CCh
       1406ed688 cc              ??         CCh
       1406ed689 cc              ??         CCh
       1406ed68a cc              ??         CCh
       1406ed68b cc              ??         CCh
       1406ed68c cc              ??         CCh
       1406ed68d cc              ??         CCh
       1406ed68e cc              ??         CCh
       1406ed68f cc              ??         CCh

void FUN_1406ed600(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (param_2 == 0x18) {
      if ((param_3 == 0.0) ||
         (*(float *)(lVar1 + 0x1c) <= param_3 && param_3 != *(float *)(lVar1 + 0x1c))) {
        fVar2 = fHealthRegenDelayMax;
        if (param_3 <= fHealthRegenDelayMax) {
          fVar2 = param_3;
        }
        *(float *)(lVar1 + 0x1c) = fVar2;
      }
    }
    else if (param_2 == 0x19) {
      if ((param_3 == 0.0) ||
         (*(float *)(lVar1 + 0x24) <= param_3 && param_3 != *(float *)(lVar1 + 0x24))) {
        fVar2 = fMagickaRegenDelayMax;
        if (param_3 <= fMagickaRegenDelayMax) {
          fVar2 = param_3;
        }
        *(float *)(lVar1 + 0x24) = fVar2;
        return;
      }
    }
    else if ((param_2 == 0x1a) &&
            ((param_3 == 0.0 ||
             (*(float *)(lVar1 + 0x20) <= param_3 && param_3 != *(float *)(lVar1 + 0x20))))) {
      fVar2 = fStaminaRegenDelayMax;
      if (param_3 <= fStaminaRegenDelayMax) {
        fVar2 = param_3;
      }
      *(float *)(lVar1 + 0x20) = fVar2;
      return;
    }
  }
  return;
}
