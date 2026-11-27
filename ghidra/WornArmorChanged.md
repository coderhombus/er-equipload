                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             void __fastcall Actor::WornArmorChanged(Actor * this)
             void              <VOID>         <RETURN>
             Actor *64         RCX:8          this
             undefined8        Stack[0x8]:8   local_res8                              XREF[2]:     1406a1045(W), 
                                                                                                   1406a1076(R)  
                             Actor::WornArmorChanged                         XREF[3]:     14189e178(*), 1418a5e60(*), 
                                                                                          143659a04(*)  
       1406a1040 48 85 d2        TEST       RDX,RDX                                                                                      REL::ID(38006)
                                                                                                                                         Source: CommonLibSSE (fallback)
       1406a1043 74 3b           JZ         LAB_1406a1080
       1406a1045 48 89 5c        MOV        qword ptr [RSP + local_res8],RBX
                 24 08
       1406a104a 57              PUSH       RDI
       1406a104b 48 83 ec 20     SUB        RSP,0x20
       1406a104f 48 8b 01        MOV        RAX,qword ptr [this->__vftable]
       1406a1052 48 8b fa        MOV        RDI,RDX
       1406a1055 48 8b d9        MOV        RBX,this
       1406a1058 ff 90 f8        CALL       qword ptr [RAX + 0x3f8]
                 03 00 00
       1406a105e 48 83 38 00     CMP        qword ptr [RAX],0x0
       1406a1062 74 12           JZ         LAB_1406a1076
       1406a1064 48 8b 4b 40     MOV        this,qword ptr [RBX + 0x40]
       1406a1068 4c 8b cf        MOV        R9,RDI
       1406a106b 4c 8b c0        MOV        R8,RAX
       1406a106e 48 8b d3        MOV        RDX,RBX
       1406a1071 e8 7a c2        CALL       TESNPC::sub                                                                                  undefined TESNPC::sub()
                 d1 ff
                             LAB_1406a1076                                   XREF[1]:     1406a1062(j)  
       1406a1076 48 8b 5c        MOV        RBX,qword ptr [RSP + local_res8]
                 24 30
       1406a107b 48 83 c4 20     ADD        RSP,0x20
       1406a107f 5f              POP        RDI
                             LAB_1406a1080                                   XREF[1]:     1406a1043(j)  
       1406a1080 c3              RET
       1406a1081 cc              ??         CCh
       1406a1082 cc              ??         CCh
       1406a1083 cc              ??         CCh
       1406a1084 cc              ??         CCh
       1406a1085 cc              ??         CCh
       1406a1086 cc              ??         CCh
       1406a1087 cc              ??         CCh
       1406a1088 cc              ??         CCh
       1406a1089 cc              ??         CCh
       1406a108a cc              ??         CCh
       1406a108b cc              ??         CCh
       1406a108c cc              ??         CCh
       1406a108d cc              ??         CCh
       1406a108e cc              ??         CCh
       1406a108f cc              ??         CCh



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

void Actor::WornArmorChanged(Actor *this)

{
  BSTSmartPointer<> *pBVar1;
  longlong in_RDX;
  
  if ((in_RDX != 0) &&
     (pBVar1 = (*this->__vftable->GetBiped2)(this), pBVar1->_ptr != (BipedAnim *)0x0)) {
    TESNPC::sub((this->data).objectReference,this,pBVar1);
  }
  return;
}
