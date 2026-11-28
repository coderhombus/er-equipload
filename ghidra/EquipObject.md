                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             void __fastcall ActorEquipManager::EquipObject(ActorEqui
             void              <VOID>         <RETURN>
             ActorEquipMana    RCX:8          this
             Actor *64         RDX:8          p0
             TESBoundObject    R8:8           p1
             ExtraDataList     R9:8           p2
             uint              Stack[0x28]:4  p3                                      XREF[1]:     1406c9938(R)  
             BGSEquipSlot *    Stack[0x30]:8  p4                                      XREF[1]:     1406c9915(R)  
             bool              Stack[0x38]:1  p5                                      XREF[1]:     1406c994d(R)  
             bool              Stack[0x40]:1  p6                                      XREF[1]:     1406c9959(R)  
             bool              Stack[0x48]:1  p7                                      XREF[1]:     1406c9965(R)  
             bool              Stack[0x50]:1  p8                                      XREF[1]:     1406c9971(R)  
             undefined8        Stack[0x20]:8  local_res20                             XREF[2]:     1406c9849(W), 
                                                                                                   1406c99dc(R)  
             undefined8        Stack[0x18]:8  local_res18                             XREF[2]:     1406c9845(W), 
                                                                                                   1406c99d8(R)  
             undefined8        Stack[0x10]:8  local_res10                             XREF[1]:     1406c9883(W)  
             undefined8        Stack[0x8]:8   local_res8                              XREF[2]:     1406c9841(W), 
                                                                                                   1406c99d4(R)  
             undefined         Stack[-0x28]:1 local_28                                XREF[1]:     1406c99cf(*)  
             undefined1        Stack[-0x2c]:1 local_2c                                XREF[1]:     1406c997d(W)  
             undefined1        Stack[-0x2d]:1 local_2d                                XREF[1]:     1406c9979(W)  
             undefined1        Stack[-0x2e]:1 local_2e                                XREF[1]:     1406c996d(W)  
             undefined1        Stack[-0x2f]:1 local_2f                                XREF[1]:     1406c9961(W)  
             undefined1        Stack[-0x30]:1 local_30                                XREF[1]:     1406c9955(W)  
             undefined8        Stack[-0x38]:8 local_38                                XREF[1]:     1406c9948(W)  
             undefined8        Stack[-0x40]:8 local_40                                XREF[1]:     1406c9943(W)  
             undefined4        Stack[-0x48]:4 local_48                                XREF[1]:     1406c993f(W)  
             undefined8        Stack[-0x50]:8 local_50                                XREF[2]:     1406c9933(W), 
                                                                                                   1406c9982(*)  
             undefined8        Stack[-0x58]:8 local_58                                XREF[1]:     1406c9839(W)  
                             ActorEquipManager::EquipObject                  XREF[20]:    InventoryChanges::RemoveItem:140
                                                                                          FUN_140232a70:140232b3d(c), 
                                                                                          TESObjectREFR::RemoveItem:1402e1
                                                                                          Actor::AddWornOutfit:1402e1bff(c
                                                                                          GameFunc::handler::EquipItem:140
                                                                                          FUN_1403bd380:1403bd690(c), 
                                                                                          FUN_1403bd380:1403bda9c(c), 
                                                                                          FUN_140487cb0:1404884fd(c), 
                                                                                          Actor::RemoveItem:14069292b(c), 
                                                                                          FUN_1406c9b20:1406c9d7f(c), 
                                                                                          FUN_1406ca4d0:1406ca5cd(c), 
                                                                                          FUN_1406ca610:1406ca8f0(c), 
                                                                                          FUN_1406cacc0:1406cadd7(c), 
                                                                                          FUN_1406f20a0:1406f2fe7(c), 
                                                                                          FUN_1406fca70:1406fd5ed(c), 
                                                                                          FUN_1406fca70:1406fd788(c), 
                                                                                          FUN_1406fd880:1406fdf98(c), 
                                                                                          FUN_14070e250:14070e31b(c), 
                                                                                          FUN_140713a80:140713c19(c), 
                                                                                          Actor::AutoEquipNewAmmo:1407641b
                                                                                          [more]
       1406c9820 48 85 d2        TEST       p0,p0                                                                                        RELOCATION_ID(37938, 38894)
                                                                                                                                         Source: CommonLibSSE headers
       1406c9823 0f 84 c3        JZ         LAB_1406c99ec
                 01 00 00
       1406c9829 48 8b c4        MOV        RAX,RSP
       1406c982c 57              PUSH       RDI
       1406c982d 41 54           PUSH       R12
       1406c982f 41 55           PUSH       R13
       1406c9831 41 56           PUSH       R14
       1406c9833 41 57           PUSH       R15
       1406c9835 48 83 ec 50     SUB        RSP,0x50
       1406c9839 48 c7 40        MOV        qword ptr [RAX + local_58],-0x2
                 a8 fe ff 
                 ff ff
       1406c9841 48 89 58 08     MOV        qword ptr [RAX + local_res8],RBX
       1406c9845 48 89 68 18     MOV        qword ptr [RAX + local_res18],RBP
       1406c9849 48 89 70 20     MOV        qword ptr [RAX + local_res20],RSI
       1406c984d 49 8b f9        MOV        RDI,p2
       1406c9850 49 8b e8        MOV        RBP,p1
       1406c9853 4c 8b f2        MOV        R14,p0
       1406c9856 4c 8b f9        MOV        R15,this
       1406c9859 4d 85 c0        TEST       p1,p1
       1406c985c 0f 84 6d        JZ         LAB_1406c99cf
                 01 00 00
       1406c9862 4d 85 c9        TEST       p2,p2
       1406c9865 74 15           JZ         LAB_1406c987c
       1406c9867 45 33 c0        XOR        p1,p1
       1406c986a b2 01           MOV        p0,0x1
       1406c986c 49 8b c9        MOV        this,p2
       1406c986f e8 2c 58        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 a9 ff
       1406c9874 84 c0           TEST       AL,AL
       1406c9876 0f 85 53        JNZ        LAB_1406c99cf
                 01 00 00
                             LAB_1406c987c                                   XREF[1]:     1406c9865(j)  
       1406c987c 48 8d 05        LEA        RAX,[DAT_14319ac00]
                 7d 13 ad 02
       1406c9883 48 89 84        MOV        qword ptr [RSP + local_res10],RAX=>DAT_14319ac00
                 24 88 00 
                 00 00
       1406c988b ff 15 27        CALL       qword ptr [->KERNEL32.DLL::GetCurrentThreadId]                                               = 01fcea20
                 5c 08 01
       1406c9891 8b f0           MOV        ESI,EAX
       1406c9893 0f ae e8        LFENCE
       1406c9896 45 33 ed        XOR        R13D,R13D
       1406c9899 45 8d 65 01     LEA        R12D,[R13 + 0x1]
       1406c989d 39 05 5d        CMP        dword ptr [DAT_14319ac00],EAX
                 13 ad 02
       1406c98a3 75 09           JNZ        LAB_1406c98ae
       1406c98a5 f0 ff 05        INC.LOCK   dword ptr [DAT_14319ac04]
                 58 13 ad 02
       1406c98ac eb 67           JMP        LAB_1406c9915
                             LAB_1406c98ae                                   XREF[1]:     1406c98a3(j)  
       1406c98ae 41 8b dd        MOV        EBX,R13D
       1406c98b1 33 c0           XOR        EAX,EAX
       1406c98b3 f0 44 0f        CMPXCHG.   dword ptr [DAT_14319ac04],R12D
                 b1 25 48 
                 13 ad 02
       1406c98bc 0f 94 c1        SETZ       this
       1406c98bf 84 c9           TEST       this,this
       1406c98c1 75 49           JNZ        LAB_1406c990c
       1406c98c3 f3 90           PAUSE
       1406c98c5 33 c0           XOR        EAX,EAX
       1406c98c7 f0 44 0f        CMPXCHG.   dword ptr [DAT_14319ac04],R12D
                 b1 25 34 
                 13 ad 02
       1406c98d0 0f 94 c1        SETZ       this
       1406c98d3 84 c9           TEST       this,this
       1406c98d5 75 32           JNZ        LAB_1406c9909
       1406c98d7 66 0f 1f        NOP        word ptr [RAX + RAX*0x1]
                 84 00 00 
                 00 00 00
                             LAB_1406c98e0                                   XREF[1]:     1406c9902(j)  
       1406c98e0 ff c3           INC        EBX
       1406c98e2 33 c9           XOR        this,this
                             LAB_1406c98e4                                   XREF[1]:     1406c9907(j)  
       1406c98e4 ff 15 d6        CALL       qword ptr [->KERNEL32.DLL::Sleep]                                                            = 01fcea18
                 5b 08 01
       1406c98ea 33 c0           XOR        EAX,EAX
       1406c98ec f0 44 0f        CMPXCHG.   dword ptr [DAT_14319ac04],R12D
                 b1 25 0f 
                 13 ad 02
       1406c98f5 0f 94 c1        SETZ       this
       1406c98f8 84 c9           TEST       this,this
       1406c98fa 75 0d           JNZ        LAB_1406c9909
       1406c98fc 81 fb 10        CMP        EBX,0x2710
                 27 00 00
       1406c9902 72 dc           JC         LAB_1406c98e0
       1406c9904 41 8b cc        MOV        this,R12D
       1406c9907 eb db           JMP        LAB_1406c98e4
                             LAB_1406c9909                                   XREF[2]:     1406c98d5(j), 1406c98fa(j)  
       1406c9909 0f ae e8        LFENCE
                             LAB_1406c990c                                   XREF[1]:     1406c98c1(j)  
       1406c990c 89 35 ee        MOV        dword ptr [DAT_14319ac00],ESI
                 12 ad 02
       1406c9912 0f ae f8        SFENCE
                             LAB_1406c9915                                   XREF[1]:     1406c98ac(j)  
       1406c9915 48 8b 8c        MOV        this,qword ptr [RSP + p4]
                 24 a8 00 
                 00 00
       1406c991d 48 85 c9        TEST       this,this
       1406c9920 75 11           JNZ        LAB_1406c9933
       1406c9922 4c 8b c5        MOV        p1,RBP
       1406c9925 49 8b d6        MOV        p0,R14
       1406c9928 49 8b cf        MOV        this,R15
       1406c992b e8 f0 11        CALL       FUN_1406cab20                                                                                undefined FUN_1406cab20()
                 00 00
       1406c9930 48 8b c8        MOV        this,RAX
                             LAB_1406c9933                                   XREF[1]:     1406c9920(j)  
       1406c9933 48 89 7c        MOV        qword ptr [RSP + local_50],RDI
                 24 28
       1406c9938 8b 84 24        MOV        EAX,dword ptr [RSP + p3]
                 a0 00 00 00
       1406c993f 89 44 24 30     MOV        dword ptr [RSP + local_48],EAX
       1406c9943 48 89 4c        MOV        qword ptr [RSP + local_40],this
                 24 38
       1406c9948 4c 89 6c        MOV        qword ptr [RSP + local_38],R13
                 24 40
       1406c994d 0f b6 84        MOVZX      EAX,byte ptr [RSP + p5]
                 24 b0 00 
                 00 00
       1406c9955 88 44 24 48     MOV        byte ptr [RSP + local_30],AL
       1406c9959 0f b6 84        MOVZX      EAX,byte ptr [RSP + p6]
                 24 b8 00 
                 00 00
       1406c9961 88 44 24 49     MOV        byte ptr [RSP + local_2f],AL
       1406c9965 0f b6 84        MOVZX      EAX,byte ptr [RSP + p7]
                 24 c0 00 
                 00 00
       1406c996d 88 44 24 4a     MOV        byte ptr [RSP + local_2e],AL
       1406c9971 0f b6 84        MOVZX      EAX,byte ptr [RSP + p8]
                 24 c8 00 
                 00 00
       1406c9979 88 44 24 4b     MOV        byte ptr [RSP + local_2d],AL
       1406c997d c6 44 24        MOV        byte ptr [RSP + local_2c],0x0
                 4c 00
       1406c9982 4c 8d 4c        LEA        p2=>local_50,[RSP + 0x28]
                 24 28
       1406c9987 4c 8b c5        MOV        p1,RBP
       1406c998a 49 8b d6        MOV        p0,R14
       1406c998d 49 8b cf        MOV        this,R15
       1406c9990 e8 9b 24        CALL       FUN_1406cbe30                                                                                undefined FUN_1406cbe30()
                 00 00
       1406c9995 90              NOP
       1406c9996 0f ae e8        LFENCE
       1406c9999 ff 15 19        CALL       qword ptr [->KERNEL32.DLL::GetCurrentThreadId]                                               = 01fcea20
                 5b 08 01
       1406c999f 39 05 5b        CMP        dword ptr [DAT_14319ac00],EAX
                 12 ad 02
       1406c99a5 75 28           JNZ        LAB_1406c99cf
       1406c99a7 83 3d 56        CMP        dword ptr [DAT_14319ac04],0x1
                 12 ad 02 01
       1406c99ae 75 18           JNZ        LAB_1406c99c8
       1406c99b0 44 89 2d        MOV        dword ptr [DAT_14319ac00],R13D
                 49 12 ad 02
       1406c99b7 0f ae f0        MFENCE
       1406c99ba 41 8b c4        MOV        EAX,R12D
       1406c99bd f0 44 0f        CMPXCHG.   dword ptr [DAT_14319ac04],R13D
                 b1 2d 3e 
                 12 ad 02
       1406c99c6 eb 07           JMP        LAB_1406c99cf
                             LAB_1406c99c8                                   XREF[1]:     1406c99ae(j)  
       1406c99c8 f0 ff 0d        DEC.LOCK   dword ptr [DAT_14319ac04]
                 35 12 ad 02
                             LAB_1406c99cf                                   XREF[4]:     1406c985c(j), 1406c9876(j), 
                                                                                          1406c99a5(j), 1406c99c6(j)  
       1406c99cf 4c 8d 5c        LEA        R11=>local_28,[RSP + 0x50]
                 24 50
       1406c99d4 49 8b 5b 30     MOV        RBX,qword ptr [R11 + local_res8]
       1406c99d8 49 8b 6b 40     MOV        RBP,qword ptr [R11 + local_res18]
       1406c99dc 49 8b 73 48     MOV        RSI,qword ptr [R11 + local_res20]
       1406c99e0 49 8b e3        MOV        RSP,R11
       1406c99e3 41 5f           POP        R15
       1406c99e5 41 5e           POP        R14
       1406c99e7 41 5d           POP        R13
       1406c99e9 41 5c           POP        R12
       1406c99eb 5f              POP        RDI
                             LAB_1406c99ec                                   XREF[1]:     1406c9823(j)  
       1406c99ec c3              RET
       1406c99ed cc              ??         CCh
       1406c99ee cc              ??         CCh
       1406c99ef cc              ??         CCh
       1406c99f0 cc              ??         CCh
       1406c99f1 cc              ??         CCh
       1406c99f2 cc              ??         CCh
       1406c99f3 cc              ??         CCh
       1406c99f4 cc              ??         CCh
       1406c99f5 cc              ??         CCh
       1406c99f6 cc              ??         CCh
       1406c99f7 cc              ??         CCh
       1406c99f8 cc              ??         CCh
       1406c99f9 cc              ??         CCh
       1406c99fa cc              ??         CCh
       1406c99fb cc              ??         CCh
       1406c99fc cc              ??         CCh
       1406c99fd cc              ??         CCh
       1406c99fe cc              ??         CCh
       1406c99ff cc              ??         CCh


/* WARNING: Removing unreachable block (ram,0x0001406c99bd) */
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

void ActorEquipManager::EquipObject
               (ActorEquipManager *this,Actor *p0,TESBoundObject *p1,ExtraDataList *p2,uint p3,
               BGSEquipSlot *p4,bool p5,bool p6,bool p7,bool p8)

{
  char cVar1;
  DWORD DVar2;
  DWORD dwMilliseconds;
  uint uVar3;
  bool bVar4;
  ExtraDataList *local_50;
  uint local_48;
  BGSEquipSlot *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  
  if (((p0 != (Actor *)0x0) && (p1 != (TESBoundObject *)0x0)) &&
     ((p2 == (ExtraDataList *)0x0 ||
      (cVar1 = ExtraDataList::IsWorn(p2,1,0,p2,0xfffffffffffffffe), cVar1 == '\0')))) {
    DVar2 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_14319ac00 == DVar2) {
      LOCK();
      DAT_14319ac04 = DAT_14319ac04 + 1;
      UNLOCK();
      DVar2 = DAT_14319ac00;
    }
    else {
      LOCK();
      bVar4 = DAT_14319ac04 == 0;
      if (bVar4) {
        DAT_14319ac04 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        LOCK();
        bVar4 = DAT_14319ac04 == 0;
        if (bVar4) {
          DAT_14319ac04 = 1;
        }
        UNLOCK();
        if (!bVar4) {
          do {
            uVar3 = uVar3 + 1;
            dwMilliseconds = 0;
            while( true ) {
              Sleep(dwMilliseconds);
              LOCK();
              bVar4 = DAT_14319ac04 == 0;
              if (bVar4) {
                DAT_14319ac04 = 1;
              }
              UNLOCK();
              if (bVar4) goto LAB_1406c9915;
              if (uVar3 < 10000) break;
              dwMilliseconds = 1;
            }
          } while( true );
        }
      }
    }
LAB_1406c9915:
    DAT_14319ac00 = DVar2;
    if (p4 == (BGSEquipSlot *)0x0) {
      p4 = (BGSEquipSlot *)FUN_1406cab20(this,p0,p1);
    }
    local_48 = p3;
    local_38 = 0;
    local_30 = p5;
    local_2f = p6;
    local_2e = p7;
    local_2d = p8;
    local_2c = 0;
    local_50 = p2;
    local_40 = p4;
    FUN_1406cbe30(this,p0,p1,&local_50);
    DVar2 = GetCurrentThreadId();
    if (DAT_14319ac00 == DVar2) {
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
  }
  return;
}
