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
