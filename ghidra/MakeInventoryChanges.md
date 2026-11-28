                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             InventoryChanges * __fastcall TESObjectREFR::MakeInvento
             InventoryChang    RAX:8          <RETURN>
             TESObjectREFR     RCX:8          this
             undefined8        Stack[0x20]:8  local_res20                             XREF[2]:     140225a09(W), 
                                                                                                   140225b47(R)  
             undefined8        Stack[0x18]:8  local_res18                             XREF[1]:     140225a7f(W)  
             undefined8        Stack[0x10]:8  local_res10                             XREF[2]:     140225a94(W), 
                                                                                                   140225ad6(W)  
             undefined4        Stack[0x8]:4   local_res8                              XREF[1]:     140225a68(W)  
             undefined8        Stack[-0x48]:8 local_48                                XREF[1]:     140225a00(W)  
                             TESObjectREFR::MakeInventoryChanges             XREF[20]:    FUN_1401bcd40:1401bce74(c), 
                                                                                          FUN_140291100:140291596(c), 
                                                                                          TESObjectREFR::InitItemImpl:1402
                                                                                          TESObjectREFR::SaveGame:1402da67
                                                                                          TESObjectREFR::LoadGame:1402da9c
                                                                                          TESObjectREFR::InitLoadGame:1402
                                                                                          TESObjectREFR::sub:1402e047d(c), 
                                                                                          TESObjectREFR::sub:1402e1640(c), 
                                                                                          TESObjectREFR::sub:1402e170f(c), 
                                                                                          Actor::RemoveOutfitItems:1402e19
                                                                                          Actor::RemoveOutfitItems:1402e1a
                                                                                          Actor::HasOutfitItems:1402e1a67(
                                                                                          Actor::AddWornOutfit:1402e1b36(c
                                                                                          TESObjectREFR::AddWornItem:1402e
                                                                                          Character::sub:1402e2208(c), 
                                                                                          TESObjectREFR::AddObjectToContai
                                                                                          FUN_1403bd380:1403bd3bb(c), 
                                                                                          Actor::Update:140668bc5(c), 
                                                                                          PlayerCharacter::sub:1406756c0(c
                                                                                          Character::sub:14069fb56(c), 
                                                                                          [more]
       1402259f0 40 55           PUSH       RBP                                                                                          RELOCATION_ID(15802, 16040)
                                                                                                                                         Source: CommonLibSSE headers
       1402259f2 56              PUSH       RSI
       1402259f3 57              PUSH       RDI
       1402259f4 41 54           PUSH       R12
       1402259f6 41 55           PUSH       R13
       1402259f8 41 56           PUSH       R14
       1402259fa 41 57           PUSH       R15
       1402259fc 48 83 ec 30     SUB        RSP,0x30
       140225a00 48 c7 44        MOV        qword ptr [RSP + local_48],-0x2
                 24 20 fe 
                 ff ff ff
       140225a09 48 89 9c        MOV        qword ptr [RSP + local_res20],RBX
                 24 88 00 
                 00 00
       140225a11 48 8b e9        MOV        RBP,this
       140225a14 33 f6           XOR        ESI,ESI
       140225a16 48 85 c9        TEST       this,this
       140225a19 0f 84 25        JZ         LAB_140225b44
                 01 00 00
       140225a1f 4c 8d 61 70     LEA        R12,[RCX + this->extraList._extraData.__vftable]
       140225a23 4d 85 e4        TEST       R12,R12
       140225a26 0f 84 18        JZ         LAB_140225b44
                 01 00 00
       140225a2c e8 bf c6        CALL       FUN_1402e20f0                                                                                undefined FUN_1402e20f0()
                 0b 00
       140225a31 48 85 c0        TEST       RAX,RAX
       140225a34 0f 84 0a        JZ         LAB_140225b44
                 01 00 00
       140225a3a 49 8b cc        MOV        this,R12
       140225a3d e8 4e 9c        CALL       ExtraDataList::GetInventoryChanges                                                           undefined ExtraDataList::GetInventoryChanges()
                 f3 ff
       140225a42 48 85 c0        TEST       RAX,RAX
       140225a45 0f 85 fc        JNZ        LAB_140225b47
                 00 00 00
       140225a4b 8b 0d 27        MOV        this,dword ptr [_tls_index]
                 ae 3c 03
       140225a51 65 48 8b        MOV        RAX,qword ptr GS:[0x58]
                 04 25 58 
                 00 00 00
       140225a5a 41 bd 68        MOV        R13D,0x768
                 07 00 00
       140225a60 4c 8b 3c c8     MOV        R15,qword ptr [RAX + this->__vftable*0x8]
       140225a64 43 8b 3c 2f     MOV        EDI,dword ptr [R15 + R13*0x1]
       140225a68 89 7c 24 70     MOV        dword ptr [RSP + local_res8],EDI
       140225a6c 43 c7 04        MOV        dword ptr [R15 + R13*0x1],0x62
                 2f 62 00 
                 00 00
       140225a74 8d 4e 20        LEA        this,[RSI + 0x20]
       140225a77 e8 84 62        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       140225a7c 4c 8b f0        MOV        R14,RAX
       140225a7f 48 89 84        MOV        qword ptr [RSP + local_res18],RAX
                 24 80 00 
                 00 00
       140225a87 48 85 c0        TEST       RAX,RAX
       140225a8a 0f 84 9c        JZ         LAB_140225b2c
                 00 00 00
       140225a90 43 8b 1c 2f     MOV        EBX,dword ptr [R15 + R13*0x1]
       140225a94 89 5c 24 78     MOV        dword ptr [RSP + local_res10],EBX
       140225a98 43 c7 04        MOV        dword ptr [R15 + R13*0x1],0x62
                 2f 62 00 
                 00 00
       140225aa0 48 89 68 08     MOV        qword ptr [RAX + 0x8],RBP
       140225aa4 83 3d 25        CMP        dword ptr [gMemoryManagerState],0x2
                 b7 3c 03 02
       140225aab 74 13           JZ         LAB_140225ac0
       140225aad 48 8d 15        LEA        RDX,[gMemoryManagerState]
                 1c b7 3c 03
       140225ab4 48 8d 0d        LEA        this,[gMemoryManager]
                 25 b7 3c 03
       140225abb e8 c0 eb        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140225ac0                                   XREF[1]:     140225aab(j)  
       140225ac0 45 33 c9        XOR        R9D,R9D
       140225ac3 45 33 c0        XOR        R8D,R8D
       140225ac6 41 8d 51 10     LEA        EDX,[R9 + 0x10]
       140225aca 48 8d 0d        LEA        this,[gMemoryManager]
                 0f b7 3c 03
       140225ad1 e8 ea e5        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       140225ad6 48 89 44        MOV        qword ptr [RSP + local_res10],RAX
                 24 78
       140225adb 48 85 c0        TEST       RAX,RAX
       140225ade 74 09           JZ         LAB_140225ae9
       140225ae0 48 89 30        MOV        qword ptr [RAX],RSI
       140225ae3 48 89 70 08     MOV        qword ptr [RAX + 0x8],RSI
       140225ae7 eb 03           JMP        LAB_140225aec
                             LAB_140225ae9                                   XREF[1]:     140225ade(j)  
       140225ae9 48 8b c6        MOV        RAX,RSI
                             LAB_140225aec                                   XREF[1]:     140225ae7(j)  
       140225aec 49 89 06        MOV        qword ptr [R14],RAX
       140225aef 41 8b 46 10     MOV        EAX,dword ptr [R14 + 0x10]
       140225af3 41 89 46 14     MOV        dword ptr [R14 + 0x14],EAX
       140225af7 41 c7 46        MOV        dword ptr [R14 + 0x10],0xbf800000
                 10 00 00 
                 80 bf
       140225aff 49 8b 46 08     MOV        RAX,qword ptr [R14 + 0x8]
       140225b03 48 85 c0        TEST       RAX,RAX
       140225b06 74 17           JZ         LAB_140225b1f
       140225b08 80 78 1a 3e     CMP        byte ptr [RAX + 0x1a],0x3e
       140225b0c 48 0f 44 f0     CMOVZ      RSI,RAX
       140225b10 48 85 f6        TEST       RSI,RSI
       140225b13 74 0a           JZ         LAB_140225b1f
       140225b15 c7 86 00        MOV        dword ptr [RSI + 0x200],0xbf800000
                 02 00 00 
                 00 00 80 bf
                             LAB_140225b1f                                   XREF[2]:     140225b06(j), 140225b13(j)  
       140225b1f 66 41 c7        MOV        word ptr [R14 + 0x18],0x0
                 46 18 00 00
       140225b26 43 89 1c 2f     MOV        dword ptr [R15 + R13*0x1],EBX
       140225b2a eb 03           JMP        LAB_140225b2f
                             LAB_140225b2c                                   XREF[1]:     140225a8a(j)  
       140225b2c 4c 8b f6        MOV        R14,RSI
                             LAB_140225b2f                                   XREF[1]:     140225b2a(j)  
       140225b2f 49 8b d6        MOV        RDX,R14
       140225b32 49 8b cc        MOV        this,R12
       140225b35 e8 56 64        CALL       ExtraDataList::AddOrSetExtraContainerChangesData                                             undefined ExtraDataList::AddOrSetExtraContainerChangesData()
                 f3 ff
       140225b3a 90              NOP
       140225b3b 43 89 3c 2f     MOV        dword ptr [R15 + R13*0x1],EDI
       140225b3f 49 8b c6        MOV        RAX,R14
       140225b42 eb 03           JMP        LAB_140225b47
                             LAB_140225b44                                   XREF[3]:     140225a19(j), 140225a26(j), 
                                                                                          140225a34(j)  
       140225b44 48 8b c6        MOV        RAX,RSI
                             LAB_140225b47                                   XREF[2]:     140225a45(j), 140225b42(j)  
       140225b47 48 8b 9c        MOV        RBX,qword ptr [RSP + local_res20]
                 24 88 00 
                 00 00
       140225b4f 48 83 c4 30     ADD        RSP,0x30
       140225b53 41 5f           POP        R15
       140225b55 41 5e           POP        R14
       140225b57 41 5d           POP        R13
       140225b59 41 5c           POP        R12
       140225b5b 5f              POP        RDI
       140225b5c 5e              POP        RSI
       140225b5d 5d              POP        RBP
       140225b5e c3              RET
       140225b5f cc              ??         CCh
       140225b60 cc              ??         CCh
       140225b61 cc              ??         CCh
       140225b62 cc              ??         CCh
       140225b63 cc              ??         CCh
       140225b64 cc              ??         CCh
       140225b65 cc              ??         CCh
       140225b66 cc              ??         CCh
       140225b67 cc              ??         CCh
       140225b68 cc              ??         CCh
       140225b69 cc              ??         CCh
       140225b6a cc              ??         CCh
       140225b6b cc              ??         CCh
       140225b6c cc              ??         CCh
       140225b6d cc              ??         CCh
       140225b6e cc              ??         CCh
       140225b6f cc              ??         CCh


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

InventoryChanges * TESObjectREFR::MakeInventoryChanges(TESObjectREFR *this)

{
  ExtraDataList *pEVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  TESObjectREFR_vtbl *pTVar5;
  TESObjectREFR *pTVar6;
  TESObjectREFR_vtbl *pTVar7;
  TESObjectREFR_vtbl *pTVar8;
  longlong unaff_GS_OFFSET;
  
  pTVar8 = (TESObjectREFR_vtbl *)0x0;
  pTVar5 = pTVar8;
  if ((((this != (TESObjectREFR *)0x0) &&
       (pEVar1 = &this->extraList, pEVar1 != (ExtraDataList *)0x0)) &&
      (lVar4 = FUN_1402e20f0(), lVar4 != 0)) &&
     (pTVar5 = (TESObjectREFR_vtbl *)ExtraDataList::GetInventoryChanges(pEVar1),
     pTVar5 == (TESObjectREFR_vtbl *)0x0)) {
    lVar4 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar4 + 0x768);
    *(undefined4 *)(lVar4 + 0x768) = 0x62;
    pTVar6 = (TESObjectREFR *)NiMemoryAllocate(0x20);
    if (pTVar6 != (TESObjectREFR *)0x0) {
      uVar3 = *(undefined4 *)(lVar4 + 0x768);
      *(undefined4 *)(lVar4 + 0x768) = 0x62;
      (pTVar6->sourceFiles).array = (TESFileArray *)this;
      if (gMemoryManagerState != 2) {
        Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
      }
      pTVar7 = MemoryManager::Allocate((MemoryManager *)&gMemoryManager,0x10,0,false);
      pTVar5 = pTVar8;
      if (pTVar7 != (TESObjectREFR_vtbl *)0x0) {
        ((Node *)&pTVar7->_dtor_BaseFormComponent)->item = (InventoryEntryData *)0x0;
        ((TESFileContainer *)&pTVar7->InitializeDataComponent)->array = (TESFileArray *)0x0;
        pTVar5 = pTVar7;
      }
      pTVar6->__vftable = pTVar5;
      pTVar6->formID = pTVar6->formFlags;
      pTVar6->formFlags = 0xbf800000;
      pTVar5 = (TESObjectREFR_vtbl *)(pTVar6->sourceFiles).array;
      if (pTVar5 != (TESObjectREFR_vtbl *)0x0) {
        if (*(FormType *)((longlong)&pTVar5->CopyComponent + 2) == ActorCharacter) {
          pTVar8 = pTVar5;
        }
        if (pTVar8 != (TESObjectREFR_vtbl *)0x0) {
          *(undefined4 *)&pTVar8->UpdateSoundCallBack = 0xbf800000;
        }
      }
      pTVar6->inGameFormFlags = 0;
      *(undefined4 *)(lVar4 + 0x768) = uVar3;
      pTVar8 = (TESObjectREFR_vtbl *)pTVar6;
    }
    ExtraDataList::AddOrSetExtraContainerChangesData(pEVar1,pTVar8);
    *(undefined4 *)(lVar4 + 0x768) = uVar2;
    pTVar5 = pTVar8;
  }
  return (InventoryChanges *)pTVar5;
}
