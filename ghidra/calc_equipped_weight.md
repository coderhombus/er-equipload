                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             float __fastcall Actor::CalcEquippedWeight(Actor * this)
             float             XMM0_Da:4      <RETURN>
             Actor *64         RCX:8          this
                             Actor::CalcEquippedWeight                       XREF[1]:     143659bb4(*)  
       1406a3330 40 53           PUSH       RBX                                                                                          RELOCATION_ID(37016, 38044)
                                                                                                                                         Source: CommonLibSSE headers
       1406a3332 48 83 ec 20     SUB        RSP,0x20
       1406a3336 48 8b d9        MOV        RBX,this
       1406a3339 e8 92 26        CALL       FUN_1402259d0                                                                                undefined FUN_1402259d0()
                 b8 ff
       1406a333e 48 85 c0        TEST       RAX,RAX
       1406a3341 74 19           JZ         LAB_1406a335c
       1406a3343 48 8b d3        MOV        RDX,RBX
       1406a3346 48 8b c8        MOV        this,RAX
       1406a3349 e8 c2 31        CALL       InventoryChanges::GetEquippedWeight                                                          undefined InventoryChanges::GetEquippedWeight()
                 b9 ff
       1406a334e f3 0f 11        MOVSS      dword ptr [RBX + 0x200],XMM0
                 83 00 02 
                 00 00
       1406a3356 48 83 c4 20     ADD        RSP,0x20
       1406a335a 5b              POP        RBX
       1406a335b c3              RET
                             LAB_1406a335c                                   XREF[1]:     1406a3341(j)  
       1406a335c 0f 57 c0        XORPS      XMM0,XMM0
       1406a335f f3 0f 11        MOVSS      dword ptr [RBX + 0x200],XMM0
                 83 00 02 
                 00 00
       1406a3367 48 83 c4 20     ADD        RSP,0x20
       1406a336b 5b              POP        RBX
       1406a336c c3              RET
       1406a336d cc              ??         CCh
       1406a336e cc              ??         CCh
       1406a336f cc              ??         CCh
       1406a3370 cc              ??         CCh
       1406a3371 cc              ??         CCh
       1406a3372 cc              ??         CCh
       1406a3373 cc              ??         CCh
       1406a3374 cc              ??         CCh
       1406a3375 cc              ??         CCh
       1406a3376 cc              ??         CCh
       1406a3377 cc              ??         CCh

## Decompiled functions

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

float Actor::CalcEquippedWeight(Actor *this)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = FUN_1402259d0();
  if (lVar1 != 0) {
    fVar2 = (float)InventoryChanges::GetEquippedWeight(lVar1,this);
    this->equippedWeight = fVar2;
    return fVar2;
  }
  this->equippedWeight = 0.0;
  return 0.0;
}


Other functions:

                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_1402259d0()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_1402259d0                                   XREF[20]:    TESObjectREFR::HasQuestObject:14
                                                                                          TESObjectREFR::sub:1402df582(c), 
                                                                                          TESObjectREFR::sub:1402e035f(c), 
                                                                                          TESObjectREFR::sub:1402e0fc4(c), 
                                                                                          TESObjectREFR::sub:1402e1dd7(c), 
                                                                                          TESObjectREFR::sub:1402e1e7f(c), 
                                                                                          PlayerCharacter::GetItemCount:14
                                                                                          Character::sub:1402e2244(c), 
                                                                                          TESObjectREFR::GetDisplayFullNam
                                                                                          TESNPC::sub:1403bb8e5(c), 
                                                                                          TESNPC::sub:1403bbaf9(c), 
                                                                                          TESNPC::sub:1403bbbcd(c), 
                                                                                          TESNPC::sub:1403bbc66(c), 
                                                                                          TESObjectREFR::sub:1405c6f07(c), 
                                                                                          Actor::DispelWornItemEnchantment
                                                                                          FUN_14061c090:14061c3c6(c), 
                                                                                          Character::sub:140678049(c), 
                                                                                          Actor::GetEquippedWeight:1406ab3
                                                                                          FUN_1406cacc0:1406cad46(c), 
                                                                                          FUN_1406cb550:1406cb57b(c), [more]
       1402259d0 48 85 c9        TEST       RCX,RCX
       1402259d3 74 0a           JZ         LAB_1402259df
       1402259d5 48 83 c1 70     ADD        RCX,0x70
       1402259d9 0f 85 b1        JNZ        ExtraDataList::GetInventoryChanges
                 9c f3 ff
                             LAB_1402259df                                   XREF[1]:     1402259d3(j)  
       1402259df 33 c0           XOR        EAX,EAX
       1402259e1 c3              RET
       1402259e2 cc              ??         CCh
       1402259e3 cc              ??         CCh
       1402259e4 cc              ??         CCh
       1402259e5 cc              ??         CCh
       1402259e6 cc              ??         CCh
       1402259e7 cc              ??         CCh
       1402259e8 cc              ??         CCh
       1402259e9 cc              ??         CCh
       1402259ea cc              ??         CCh
       1402259eb cc              ??         CCh
       1402259ec cc              ??         CCh
       1402259ed cc              ??         CCh
       1402259ee cc              ??         CCh
       1402259ef cc              ??         CCh


## Decompiled Function


undefined8 FUN_1402259d0(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (param_1 + 0x70 != 0)) {
    lVar1 = ExtraDataList::GetExtraData(param_1 + 0x70,0x15);
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x10);
    }
    return 0;
  }
  return 0;
}
