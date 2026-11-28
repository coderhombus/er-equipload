                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             void __fastcall PlayerCharacter::WornArmorChanged(Player
             void              <VOID>         <RETURN>
             PlayerCharacte    RCX:8          this
                             PlayerCharacter::WornArmorChanged               XREF[2]:     1418ac2c8(*), 14366025c(*)
       14074a800 40 53           PUSH       RBX                                                                                          REL::ID(40708)
                                                                                                                                         Source: CommonLibSSE (fallback)
       14074a802 48 83 ec 20     SUB        RSP,0x20
       14074a806 48 8b d9        MOV        RBX,this
       14074a809 e8 c2 b1        CALL       FUN_1402259d0                                                                                undefined FUN_1402259d0()
                 ad ff
       14074a80e 48 8b c8        MOV        this,RAX
       14074a811 e8 1a e4        CALL       FUN_140238c30                                                                                undefined FUN_140238c30()
                 ae ff
       14074a816 48 8b cb        MOV        this,RBX
       14074a819 48 83 c4 20     ADD        RSP,0x20
       14074a81d 5b              POP        RBX
       14074a81e e9 fd 78        JMP        TESObjectREFR::GetWeightInContainer                                                          float TESObjectREFR::GetWeightInContainer(TESObjectREFR * this)
                 b9 ff
                             -- Flow Override: CALL_RETURN (CALL_TERMINATOR)
       14074a823 cc              ??         CCh
       14074a824 cc              ??         CCh
       14074a825 cc              ??         CCh
       14074a826 cc              ??         CCh
       14074a827 cc              ??         CCh
       14074a828 cc              ??         CCh
       14074a829 cc              ??         CCh
       14074a82a cc              ??         CCh
       14074a82b cc              ??         CCh
       14074a82c cc              ??         CCh
       14074a82d cc              ??         CCh
       14074a82e cc              ??         CCh
       14074a82f cc              ??         CCh


/* WARNING: Enum "Flag__enum_42": Some values do not have unique names */
/* WARNING: Enum "hkpShapeType": Some values do not have unique names */
/* WARNING: Enum "D3D_SRV_DIMENSION": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "FunctionID": Some values do not have unique names */
/* WARNING: Enum "DIALOGUE_TYPE": Some values do not have unique names */
/* WARNING: Enum "SpellType": Some values do not have unique names */
/* WARNING: Enum "Texture": Some values do not have unique names */
/* WARNING: Enum "BIPED_OBJECT": Some values do not have unique names */
/* WARNING: Enum "COL_LAYER": Some values do not have unique names */
/* WARNING: Enum "hkpCharacterStateType": Some values do not have unique names */
/* WARNING: Enum "CHARACTER_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Flag__enum_20": Some values do not have unique names */

void PlayerCharacter::WornArmorChanged(PlayerCharacter *this)

{
  undefined8 uVar1;

  uVar1 = FUN_1402259d0();
  FUN_140238c30(uVar1);
  TESObjectREFR::GetWeightInContainer((TESObjectREFR *)this);
  return;
}

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


                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_140238c30()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_140238c30                                   XREF[4]:     ActorState::Func21:1406c70fc(c),
                                                                                          PlayerCharacter::WornArmorChange
                                                                                          FUN_14074eb50:14074ed0c(c),
                                                                                          FUN_14074ed40:14074ee83(c)
       140238c30 8b 41 10        MOV        EAX,dword ptr [RCX + 0x10]
       140238c33 48 8b 51 08     MOV        RDX,qword ptr [RCX + 0x8]
       140238c37 89 41 14        MOV        dword ptr [RCX + 0x14],EAX
       140238c3a c7 41 10        MOV        dword ptr [RCX + 0x10],0xbf800000
                 00 00 80 bf
       140238c41 48 85 d2        TEST       RDX,RDX
       140238c44 74 19           JZ         LAB_140238c5f
       140238c46 33 c0           XOR        EAX,EAX
       140238c48 80 7a 1a 3e     CMP        byte ptr [RDX + 0x1a],0x3e
       140238c4c 48 0f 44 c2     CMOVZ      RAX,RDX
       140238c50 48 85 c0        TEST       RAX,RAX
       140238c53 74 0a           JZ         LAB_140238c5f
       140238c55 c7 80 00        MOV        dword ptr [RAX + 0x200],0xbf800000
                 02 00 00
                 00 00 80 bf
                             LAB_140238c5f                                   XREF[2]:     140238c44(j), 140238c53(j)
       140238c5f c3              RET
       140238c60 cc              ??         CCh
       140238c61 cc              ??         CCh
       140238c62 cc              ??         CCh
       140238c63 cc              ??         CCh
       140238c64 cc              ??         CCh
       140238c65 cc              ??         CCh
       140238c66 cc              ??         CCh
       140238c67 cc              ??         CCh
       140238c68 cc              ??         CCh
       140238c69 cc              ??         CCh
       140238c6a cc              ??         CCh
       140238c6b cc              ??         CCh
       140238c6c cc              ??         CCh
       140238c6d cc              ??         CCh
       140238c6e cc              ??         CCh
       140238c6f cc              ??         CCh
                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_140238c30()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_140238c30                                   XREF[4]:     ActorState::Func21:1406c70fc(c),
                                                                                          PlayerCharacter::WornArmorChange
                                                                                          FUN_14074eb50:14074ed0c(c),
                                                                                          FUN_14074ed40:14074ee83(c)
       140238c30 8b 41 10        MOV        EAX,dword ptr [RCX + 0x10]
       140238c33 48 8b 51 08     MOV        RDX,qword ptr [RCX + 0x8]
       140238c37 89 41 14        MOV        dword ptr [RCX + 0x14],EAX
       140238c3a c7 41 10        MOV        dword ptr [RCX + 0x10],0xbf800000
                 00 00 80 bf
       140238c41 48 85 d2        TEST       RDX,RDX
       140238c44 74 19           JZ         LAB_140238c5f
       140238c46 33 c0           XOR        EAX,EAX
       140238c48 80 7a 1a 3e     CMP        byte ptr [RDX + 0x1a],0x3e
       140238c4c 48 0f 44 c2     CMOVZ      RAX,RDX
       140238c50 48 85 c0        TEST       RAX,RAX
       140238c53 74 0a           JZ         LAB_140238c5f
       140238c55 c7 80 00        MOV        dword ptr [RAX + 0x200],0xbf800000
                 02 00 00
                 00 00 80 bf
                             LAB_140238c5f                                   XREF[2]:     140238c44(j), 140238c53(j)
       140238c5f c3              RET
       140238c60 cc              ??         CCh
       140238c61 cc              ??         CCh
       140238c62 cc              ??         CCh
       140238c63 cc              ??         CCh
       140238c64 cc              ??         CCh
       140238c65 cc              ??         CCh
       140238c66 cc              ??         CCh
       140238c67 cc              ??         CCh
       140238c68 cc              ??         CCh
       140238c69 cc              ??         CCh
       140238c6a cc              ??         CCh
       140238c6b cc              ??         CCh
       140238c6c cc              ??         CCh
       140238c6d cc              ??         CCh
       140238c6e cc              ??         CCh
       140238c6f cc              ??         CCh

int FUN_140238c70(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;

  if ((param_2 != 0) && (param_3 != 0)) {
    plVar2 = (longlong *)*param_1;
    do {
      if (plVar2 == (longlong *)0x0) {
        return -1;
      }
      plVar1 = (longlong *)*plVar2;
      plVar2 = (longlong *)plVar2[1];
    } while ((plVar1 == (longlong *)0x0) || (*plVar1 != param_2));
    iVar3 = 0;
    for (plVar2 = (longlong *)plVar1[1]; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1])
    {
      if ((*plVar2 != 0) && (*plVar2 == param_3)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    }
  }
  return -1;
}
