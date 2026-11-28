                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             bool __fastcall ActorEquipManager::UnequipObject(ActorEq
             bool              AL:1           <RETURN>
             ActorEquipMana    RCX:8          this
             Actor *64         RDX:8          p0
             TESBoundObject    R8:8           p1
             ExtraDataList     R9:8           p2
             uint              Stack[0x28]:4  p3                                      XREF[1]:     1406ca143(R)  
             BGSEquipSlot *    Stack[0x30]:8  p4                                      XREF[1]:     1406ca0e5(R)  
             bool              Stack[0x38]:1  p5                                      XREF[1]:     1406ca158(R)  
             bool              Stack[0x40]:1  p6                                      XREF[1]:     1406ca164(R)  
             bool              Stack[0x48]:1  p7                                      XREF[1]:     1406ca170(R)  
             bool              Stack[0x50]:1  p8                                      XREF[1]:     1406ca17c(R)  
             BGSEquipSlot *    Stack[0x58]:8  p9                                      XREF[1]:     1406ca1ab(R)  
             undefined8        Stack[0x20]:8  local_res20                             XREF[2]:     1406ca030(W), 
                                                                                                   1406ca226(R)  
             undefined8        Stack[0x18]:8  local_res18                             XREF[2]:     1406ca02c(W), 
                                                                                                   1406ca222(R)  
             undefined8        Stack[0x10]:8  local_res10                             XREF[1]:     1406ca059(W)  
             undefined8        Stack[0x8]:8   local_res8                              XREF[2]:     1406ca028(W), 
                                                                                                   1406ca21e(R)  
             undefined         Stack[-0x28]:1 local_28                                XREF[1]:     1406ca219(*)  
             undefined1        Stack[-0x2c]:1 local_2c                                XREF[2]:     1406ca188(W), 
                                                                                                   1406ca1d1(R)  
             undefined1        Stack[-0x2d]:1 local_2d                                XREF[1]:     1406ca184(W)  
             undefined1        Stack[-0x2e]:1 local_2e                                XREF[1]:     1406ca178(W)  
             undefined1        Stack[-0x2f]:1 local_2f                                XREF[1]:     1406ca16c(W)  
             undefined1        Stack[-0x30]:1 local_30                                XREF[1]:     1406ca160(W)  
             undefined8        Stack[-0x38]:8 local_38                                XREF[1]:     1406ca153(W)  
             undefined8        Stack[-0x40]:8 local_40                                XREF[1]:     1406ca14e(W)  
             undefined4        Stack[-0x48]:4 local_48                                XREF[1]:     1406ca14a(W)  
             undefined8        Stack[-0x50]:8 local_50                                XREF[2]:     1406ca13e(W), 
                                                                                                   1406ca1bb(*)  
             undefined8        Stack[-0x58]:8 local_58                                XREF[1]:     1406ca020(W)  
                             ActorEquipManager::UnequipObject                XREF[20]:    InventoryChanges::RemoveItem:140
                                                                                          UnequipArmorFunctor::Visit:14023
                                                                                          GameFunc::handler::UnequipItem:1
                                                                                          BoundItemEffect::Func21:1405b4e0
                                                                                          Actor::DropObject:1406782a6(c), 
                                                                                          FUN_140678c70:140678ed3(c), 
                                                                                          Actor::UnequipItem:14069d339(c), 
                                                                                          Actor::AddWornItem:1406a0c6e(c), 
                                                                                          Actor::AddWornItem:1406a0e5e(c), 
                                                                                          Actor::UseAmmo:1406b61f2(c), 
                                                                                          Actor::RemoveCastScroll:1406c2f8
                                                                                          FUN_1406c9e90:1406c9f50(c), 
                                                                                          FUN_1406c9e90:1406c9fd7(c), 
                                                                                          FUN_1406ca360:1406ca461(c), 
                                                                                          FUN_1406ca610:1406ca720(c), 
                                                                                          FUN_1406f20a0:1406f2f70(c), 
                                                                                          FUN_140713a80:140713cb6(c), 
                                                                                          PlayerCharacter::sub:140736c81(c
                                                                                          Actor::AutoEquipNewAmmo:1407642b
                                                                                          FUN_1407f1080:1407f13e4(c), [more]
       1406ca010 4c 8b dc        MOV        R11,RSP                                                                                      RELOCATION_ID(37945, 38901)
                                                                                                                                         Source: CommonLibSSE headers
       1406ca013 57              PUSH       RDI
       1406ca014 41 54           PUSH       R12
       1406ca016 41 55           PUSH       R13
       1406ca018 41 56           PUSH       R14
       1406ca01a 41 57           PUSH       R15
       1406ca01c 48 83 ec 50     SUB        RSP,0x50
       1406ca020 49 c7 43        MOV        qword ptr [R11 + local_58],-0x2
                 a8 fe ff 
                 ff ff
       1406ca028 49 89 5b 08     MOV        qword ptr [R11 + local_res8],RBX
       1406ca02c 49 89 6b 18     MOV        qword ptr [R11 + local_res18],RBP
       1406ca030 49 89 73 20     MOV        qword ptr [R11 + local_res20],RSI
       1406ca034 49 8b f9        MOV        RDI,p2
       1406ca037 49 8b e8        MOV        RBP,p1
       1406ca03a 4c 8b f2        MOV        R14,p0
       1406ca03d 4c 8b f9        MOV        R15,this
       1406ca040 48 85 d2        TEST       p0,p0
       1406ca043 0f 84 ce        JZ         LAB_1406ca217
                 01 00 00
       1406ca049 4d 85 c0        TEST       p1,p1
       1406ca04c 0f 84 c5        JZ         LAB_1406ca217
                 01 00 00
       1406ca052 48 8d 05        LEA        RAX,[DAT_14319ac00]
                 a7 0b ad 02
       1406ca059 49 89 43 10     MOV        qword ptr [R11 + local_res10],RAX=>DAT_14319ac00
       1406ca05d ff 15 55        CALL       qword ptr [->KERNEL32.DLL::GetCurrentThreadId]                                               = 01fcea20
                 54 08 01
       1406ca063 8b f0           MOV        ESI,EAX
       1406ca065 0f ae e8        LFENCE
       1406ca068 45 33 ed        XOR        R13D,R13D
       1406ca06b 45 8d 65 01     LEA        R12D,[R13 + 0x1]
       1406ca06f 39 05 8b        CMP        dword ptr [DAT_14319ac00],EAX
                 0b ad 02
       1406ca075 75 09           JNZ        LAB_1406ca080
       1406ca077 f0 ff 05        INC.LOCK   dword ptr [DAT_14319ac04]
                 86 0b ad 02
       1406ca07e eb 65           JMP        LAB_1406ca0e5
                             LAB_1406ca080                                   XREF[1]:     1406ca075(j)  
       1406ca080 41 8b dd        MOV        EBX,R13D
       1406ca083 33 c0           XOR        EAX,EAX
       1406ca085 f0 44 0f        CMPXCHG.   dword ptr [DAT_14319ac04],R12D
                 b1 25 76 
                 0b ad 02
       1406ca08e 0f 94 c1        SETZ       this
       1406ca091 84 c9           TEST       this,this
       1406ca093 75 47           JNZ        LAB_1406ca0dc
       1406ca095 f3 90           PAUSE
       1406ca097 33 c0           XOR        EAX,EAX
       1406ca099 f0 44 0f        CMPXCHG.   dword ptr [DAT_14319ac04],R12D
                 b1 25 62 
                 0b ad 02
       1406ca0a2 0f 94 c1        SETZ       this
       1406ca0a5 84 c9           TEST       this,this
       1406ca0a7 75 30           JNZ        LAB_1406ca0d9
       1406ca0a9 0f 1f 80        NOP        dword ptr [RAX]
                 00 00 00 00
                             LAB_1406ca0b0                                   XREF[1]:     1406ca0d2(j)  
       1406ca0b0 ff c3           INC        EBX
       1406ca0b2 33 c9           XOR        this,this
                             LAB_1406ca0b4                                   XREF[1]:     1406ca0d7(j)  
       1406ca0b4 ff 15 06        CALL       qword ptr [->KERNEL32.DLL::Sleep]                                                            = 01fcea18
                 54 08 01
       1406ca0ba 33 c0           XOR        EAX,EAX
       1406ca0bc f0 44 0f        CMPXCHG.   dword ptr [DAT_14319ac04],R12D
                 b1 25 3f 
                 0b ad 02
       1406ca0c5 0f 94 c1        SETZ       this
       1406ca0c8 84 c9           TEST       this,this
       1406ca0ca 75 0d           JNZ        LAB_1406ca0d9
       1406ca0cc 81 fb 10        CMP        EBX,0x2710
                 27 00 00
       1406ca0d2 72 dc           JC         LAB_1406ca0b0
       1406ca0d4 41 8b cc        MOV        this,R12D
       1406ca0d7 eb db           JMP        LAB_1406ca0b4
                             LAB_1406ca0d9                                   XREF[2]:     1406ca0a7(j), 1406ca0ca(j)  
       1406ca0d9 0f ae e8        LFENCE
                             LAB_1406ca0dc                                   XREF[1]:     1406ca093(j)  
       1406ca0dc 89 35 1e        MOV        dword ptr [DAT_14319ac00],ESI
                 0b ad 02
       1406ca0e2 0f ae f8        SFENCE
                             LAB_1406ca0e5                                   XREF[1]:     1406ca07e(j)  
       1406ca0e5 48 8b 8c        MOV        this,qword ptr [RSP + p4]
                 24 a8 00 
                 00 00
       1406ca0ed 48 85 ff        TEST       RDI,RDI
       1406ca0f0 74 36           JZ         LAB_1406ca128
       1406ca0f2 48 85 c9        TEST       this,this
       1406ca0f5 75 47           JNZ        LAB_1406ca13e
       1406ca0f7 41 b0 01        MOV        p1,0x1
       1406ca0fa 33 d2           XOR        p0,p0
       1406ca0fc 48 8b cf        MOV        this,RDI
       1406ca0ff e8 9c 4f        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 a9 ff
       1406ca104 84 c0           TEST       AL,AL
       1406ca106 74 07           JZ         LAB_1406ca10f
       1406ca108 e8 63 e8        CALL       FUN_140388970                                                                                undefined FUN_140388970()
                 cb ff
       1406ca10d eb 16           JMP        LAB_1406ca125
                             LAB_1406ca10f                                   XREF[1]:     1406ca106(j)  
       1406ca10f 45 33 c0        XOR        p1,p1
       1406ca112 33 d2           XOR        p0,p0
       1406ca114 48 8b cf        MOV        this,RDI
       1406ca117 e8 84 4f        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 a9 ff
       1406ca11c 84 c0           TEST       AL,AL
       1406ca11e 74 0d           JZ         LAB_1406ca12d
       1406ca120 e8 5b e8        CALL       FUN_140388980                                                                                undefined FUN_140388980()
                 cb ff
                             LAB_1406ca125                                   XREF[1]:     1406ca10d(j)  
       1406ca125 48 8b c8        MOV        this,RAX
                             LAB_1406ca128                                   XREF[1]:     1406ca0f0(j)  
       1406ca128 48 85 c9        TEST       this,this
       1406ca12b 75 11           JNZ        LAB_1406ca13e
                             LAB_1406ca12d                                   XREF[1]:     1406ca11e(j)  
       1406ca12d 4c 8b c5        MOV        p1,RBP
       1406ca130 49 8b d6        MOV        p0,R14
       1406ca133 49 8b cf        MOV        this,R15
       1406ca136 e8 f5 0a        CALL       Actor::GetItemEquipSlot                                                                      undefined Actor::GetItemEquipSlot()
                 00 00
       1406ca13b 48 8b c8        MOV        this,RAX
                             LAB_1406ca13e                                   XREF[2]:     1406ca0f5(j), 1406ca12b(j)  
       1406ca13e 48 89 7c        MOV        qword ptr [RSP + local_50],RDI
                 24 28
       1406ca143 8b 84 24        MOV        EAX,dword ptr [RSP + p3]
                 a0 00 00 00
       1406ca14a 89 44 24 30     MOV        dword ptr [RSP + local_48],EAX
       1406ca14e 48 89 4c        MOV        qword ptr [RSP + local_40],this
                 24 38
       1406ca153 4c 89 6c        MOV        qword ptr [RSP + local_38],R13
                 24 40
       1406ca158 0f b6 84        MOVZX      EAX,byte ptr [RSP + p5]
                 24 b0 00 
                 00 00
       1406ca160 88 44 24 48     MOV        byte ptr [RSP + local_30],AL
       1406ca164 0f b6 84        MOVZX      EAX,byte ptr [RSP + p6]
                 24 b8 00 
                 00 00
       1406ca16c 88 44 24 49     MOV        byte ptr [RSP + local_2f],AL
       1406ca170 0f b6 84        MOVZX      EAX,byte ptr [RSP + p7]
                 24 c0 00 
                 00 00
       1406ca178 88 44 24 4a     MOV        byte ptr [RSP + local_2e],AL
       1406ca17c 0f b6 84        MOVZX      EAX,byte ptr [RSP + p8]
                 24 c8 00 
                 00 00
       1406ca184 88 44 24 4b     MOV        byte ptr [RSP + local_2d],AL
       1406ca188 c6 44 24        MOV        byte ptr [RSP + local_2c],0x0
                 4c 00
       1406ca18d 8b 0d e5        MOV        this,dword ptr [_tls_index]
                 66 f2 02
       1406ca193 65 48 8b        MOV        RAX,qword ptr GS:[0x58]
                 04 25 58 
                 00 00 00
       1406ca19c ba 80 06        MOV        p0,0x680
                 00 00
       1406ca1a1 48 8b 1c c8     MOV        RBX,qword ptr [RAX + this->field0_0x0*0x8]
       1406ca1a5 48 03 da        ADD        RBX,p0
       1406ca1a8 48 8b 3b        MOV        RDI,qword ptr [RBX]
       1406ca1ab 48 8b 84        MOV        RAX,qword ptr [RSP + p9]
                 24 d0 00 
                 00 00
       1406ca1b3 48 85 c0        TEST       RAX,RAX
       1406ca1b6 74 03           JZ         LAB_1406ca1bb
       1406ca1b8 48 89 03        MOV        qword ptr [RBX],RAX
                             LAB_1406ca1bb                                   XREF[1]:     1406ca1b6(j)  
       1406ca1bb 4c 8d 4c        LEA        p2=>local_50,[RSP + 0x28]
                 24 28
       1406ca1c0 4c 8b c5        MOV        p1,RBP
       1406ca1c3 49 8b d6        MOV        p0,R14
       1406ca1c6 49 8b cf        MOV        this,R15
       1406ca1c9 e8 42 26        CALL       FUN_1406cc810                                                                                undefined FUN_1406cc810()
                 00 00
       1406ca1ce 48 89 3b        MOV        qword ptr [RBX],RDI
       1406ca1d1 0f b6 5c        MOVZX      EBX,byte ptr [RSP + local_2c]
                 24 4c
       1406ca1d6 0f ae e8        LFENCE
       1406ca1d9 ff 15 d9        CALL       qword ptr [->KERNEL32.DLL::GetCurrentThreadId]                                               = 01fcea20
                 52 08 01
       1406ca1df 39 05 1b        CMP        dword ptr [DAT_14319ac00],EAX
                 0a ad 02
       1406ca1e5 75 1f           JNZ        LAB_1406ca206
       1406ca1e7 83 3d 16        CMP        dword ptr [DAT_14319ac04],0x1
                 0a ad 02 01
       1406ca1ee 75 1b           JNZ        LAB_1406ca20b
       1406ca1f0 44 89 2d        MOV        dword ptr [DAT_14319ac00],R13D
                 09 0a ad 02
       1406ca1f7 0f ae f0        MFENCE
       1406ca1fa 41 8b c4        MOV        EAX,R12D
       1406ca1fd f0 44 0f        CMPXCHG.   dword ptr [DAT_14319ac04],R13D
                 b1 2d fe 
                 09 ad 02
                             LAB_1406ca206                                   XREF[1]:     1406ca1e5(j)  
       1406ca206 0f b6 c3        MOVZX      EAX,BL
       1406ca209 eb 0e           JMP        LAB_1406ca219
                             LAB_1406ca20b                                   XREF[1]:     1406ca1ee(j)  
       1406ca20b f0 ff 0d        DEC.LOCK   dword ptr [DAT_14319ac04]
                 f2 09 ad 02
       1406ca212 0f b6 c3        MOVZX      EAX,BL
       1406ca215 eb 02           JMP        LAB_1406ca219
                             LAB_1406ca217                                   XREF[2]:     1406ca043(j), 1406ca04c(j)  
       1406ca217 32 c0           XOR        AL,AL
                             LAB_1406ca219                                   XREF[2]:     1406ca209(j), 1406ca215(j)  
       1406ca219 4c 8d 5c        LEA        R11=>local_28,[RSP + 0x50]
                 24 50
       1406ca21e 49 8b 5b 30     MOV        RBX,qword ptr [R11 + local_res8]
       1406ca222 49 8b 6b 40     MOV        RBP,qword ptr [R11 + local_res18]
       1406ca226 49 8b 73 48     MOV        RSI,qword ptr [R11 + local_res20]
       1406ca22a 49 8b e3        MOV        RSP,R11
       1406ca22d 41 5f           POP        R15
       1406ca22f 41 5e           POP        R14
       1406ca231 41 5d           POP        R13
       1406ca233 41 5c           POP        R12
       1406ca235 5f              POP        RDI
       1406ca236 c3              RET
       1406ca237 cc              ??         CCh
       1406ca238 cc              ??         CCh
       1406ca239 cc              ??         CCh
       1406ca23a cc              ??         CCh
       1406ca23b cc              ??         CCh
       1406ca23c cc              ??         CCh
       1406ca23d cc              ??         CCh
       1406ca23e cc              ??         CCh
       1406ca23f cc              ??         CCh



/* WARNING: Removing unreachable block (ram,0x0001406ca1fd) */
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

bool ActorEquipManager::UnequipObject
               (ActorEquipManager *this,Actor *p0,TESBoundObject *p1,ExtraDataList *p2,uint p3,
               BGSEquipSlot *p4,bool p5,bool p6,bool p7,bool p8,BGSEquipSlot *p9)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  DWORD DVar4;
  DWORD dwMilliseconds;
  uint uVar5;
  undefined8 *puVar6;
  longlong unaff_GS_OFFSET;
  bool bVar7;
  undefined8 uVar8;
  ExtraDataList *local_50;
  uint local_48;
  BGSEquipSlot *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  
  uVar8 = 0xfffffffffffffffe;
  if ((p0 == (Actor *)0x0) || (p1 == (TESBoundObject *)0x0)) {
    return false;
  }
  DVar4 = GetCurrentThreadId();
  uVar5 = 0;
  if (DAT_14319ac00 == DVar4) {
    LOCK();
    DAT_14319ac04 = DAT_14319ac04 + 1;
    UNLOCK();
    DVar4 = DAT_14319ac00;
  }
  else {
    LOCK();
    bVar7 = DAT_14319ac04 == 0;
    if (bVar7) {
      DAT_14319ac04 = 1;
    }
    UNLOCK();
    if (!bVar7) {
      LOCK();
      bVar7 = DAT_14319ac04 == 0;
      if (bVar7) {
        DAT_14319ac04 = 1;
      }
      UNLOCK();
      if (!bVar7) {
        do {
          uVar5 = uVar5 + 1;
          dwMilliseconds = 0;
          while( true ) {
            Sleep(dwMilliseconds);
            LOCK();
            bVar7 = DAT_14319ac04 == 0;
            if (bVar7) {
              DAT_14319ac04 = 1;
            }
            UNLOCK();
            if (bVar7) goto LAB_1406ca0e5;
            if (uVar5 < 10000) break;
            dwMilliseconds = 1;
          }
        } while( true );
      }
    }
  }
LAB_1406ca0e5:
  DAT_14319ac00 = DVar4;
  if (p2 == (ExtraDataList *)0x0) goto LAB_1406ca128;
  if (p4 != (BGSEquipSlot *)0x0) goto LAB_1406ca13e;
  cVar3 = ExtraDataList::IsWorn(p2,0,1);
  if (cVar3 == '\0') {
    cVar3 = ExtraDataList::IsWorn(p2,0,0);
    if (cVar3 != '\0') {
      p4 = (BGSEquipSlot *)FUN_140388980();
      goto LAB_1406ca128;
    }
  }
  else {
    p4 = (BGSEquipSlot *)FUN_140388970();
LAB_1406ca128:
    if (p4 != (BGSEquipSlot *)0x0) goto LAB_1406ca13e;
  }
  p4 = (BGSEquipSlot *)Actor::GetItemEquipSlot(this,p0,p1);
LAB_1406ca13e:
  local_48 = p3;
  local_38 = 0;
  local_30 = p5;
  local_2f = p6;
  local_2e = p7;
  local_2d = p8;
  local_2c = 0;
  puVar6 = (undefined8 *)
           (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x680
           );
  uVar1 = *puVar6;
  if (p9 != (BGSEquipSlot *)0x0) {
    *puVar6 = p9;
  }
  local_50 = p2;
  local_40 = p4;
  FUN_1406cc810(this,p0,p1,&local_50,uVar8);
  uVar2 = local_2c;
  *puVar6 = uVar1;
  DVar4 = GetCurrentThreadId();
  if (DAT_14319ac00 == DVar4) {
    if (DAT_14319ac04 == 1) {
      DAT_14319ac00 = 0;
      LOCK();
      DAT_14319ac04 = 0;
      UNLOCK();
    }
    else {
      LOCK();
      DAT_14319ac04 = DAT_14319ac04 + -1;
      UNLOCK();
    }
  }
  return (bool)uVar2;
}
