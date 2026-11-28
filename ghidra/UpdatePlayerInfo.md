                             s_UpdatePlayerInfo_1418f0ed8                    XREF[6]:     BarterMenu::sub:1408ec45c(*), 
                                                                                          ContainerMenu::sub:1408fca74(*), 
                                                                                          FUN_140912350:140912722(*), 
                                                                                          FUN_140919fa0:14091a02e(*), 
                                                                                          InventoryMenu::sub:14092ecb4(*), 
                                                                                          MagicMenu::sub:14093d8a4(*)  
       1418f0ed8 55 70 64        ds         "UpdatePlayerInfo"
                 61 74 65 
                 50 6c 61 
       1418f0ee9 00              ??         00h
       1418f0eea 00              ??         00h
       1418f0eeb 00              ??         00h
       1418f0eec 00              ??         00h
       1418f0eed 00              ??         00h
       1418f0eee 00              ??         00h
       1418f0eef 00              ??         00h

## It is called here:
                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined InventoryMenu::sub()
             undefined         <UNASSIGNED>   <RETURN>
             undefined8        Stack[0x8]:8   local_res8                              XREF[2]:     14092ec43(W), 
                                                                                                   14092ecdc(R)  
             undefined4        Stack[-0x10]:4 local_10                                XREF[3]:     14092ec79(W), 
                                                                                                   14092ec8a(R), 
                                                                                                   14092eca2(W)  
             undefined         Stack[-0x28]:1 local_28                                XREF[1]:     14092ec9c(*)  
             undefined         Stack[-0x40]:1 local_40                                XREF[3]:     14092ec70(*), 
                                                                                                   14092ec97(*), 
                                                                                                   14092ecd1(*)  
             undefined8        Stack[-0x48]:8 local_48                                XREF[2]:     14092ec51(W), 
                                                                                                   14092ecaf(*)  
             undefined8        Stack[-0x58]:8 local_58                                XREF[1]:     14092ec3b(W)  
             undefined8        Stack[-0x68]:8 local_68                                XREF[1]:     14092ec5c(W)  
                             InventoryMenu::sub                              XREF[3]:     InventoryMenu::sub:14092c7f3(c), 
                                                                                          InventoryMenu::sub:14092d103(c), 
                                                                                          14367ad88(*)  
       14092ec30 4c 8b dc        MOV        R11,RSP                                                                                      REL::ID(51865)
                                                                                                                                         Source: AE rename database (fallback)
       14092ec33 57              PUSH       RDI
       14092ec34 48 81 ec        SUB        RSP,0x80
                 80 00 00 00
       14092ec3b 49 c7 43        MOV        qword ptr [R11 + local_58],-0x2
                 a8 fe ff 
                 ff ff
       14092ec43 49 89 5b 08     MOV        qword ptr [R11 + local_res8],RBX
       14092ec47 48 8b d9        MOV        RBX,RCX
       14092ec4a 48 8d 05        LEA        RAX,[VTABLE_FxResponseArgs_1_]                                                               = 1408eec90
                 5f 22 fc 00
       14092ec51 49 89 43 b8     MOV        qword ptr [R11 + local_48],RAX=>VTABLE_FxResponseArgs_1_                                     = 1408eec90
       14092ec55 48 8d 3d        LEA        RDI,[FUN_14056dae0]
                 84 ee c3 ff
       14092ec5c 49 89 7b 98     MOV        qword ptr [R11 + local_68],RDI=>FUN_14056dae0
       14092ec60 4c 8d 0d        LEA        R9,[LAB_14056d6e0]
                 79 ea c3 ff
       14092ec67 ba 18 00        MOV        EDX,0x18
                 00 00
       14092ec6c 44 8d 42 ea     LEA        R8D,[RDX + -0x16]
       14092ec70 49 8d 4b c0     LEA        RCX=>local_40,[R11 + -0x40]
       14092ec74 e8 9b ca        CALL       ??_L@YAXPEAX_K1P6AX0@Z2@Z                                                                    undefined ??_L@YAXPEAX_K1P6AX0@Z2@Z()
                 c0 00
       14092ec79 c7 44 24        MOV        dword ptr [RSP + local_10],0x1
                 78 01 00 
                 00 00
       14092ec81 48 8b 4b 58     MOV        RCX,qword ptr [RBX + 0x58]
       14092ec85 e8 16 0d        CALL       FUN_14094f9a0                                                                                undefined FUN_14094f9a0()
                 02 00
       14092ec8a 8b 54 24 78     MOV        EDX,dword ptr [RSP + local_10]
       14092ec8e 83 fa 01        CMP        EDX,0x1
       14092ec91 77 1c           JA         LAB_14092ecaf
       14092ec93 48 8d 0c 52     LEA        RCX,[RDX + RDX*0x2]
       14092ec97 48 8d 44        LEA        RAX=>local_40,[RSP + 0x48]
                 24 48
       14092ec9c 48 8d 0c c8     LEA        RCX=>local_28,[RAX + RCX*0x8]
       14092eca0 ff c2           INC        EDX
       14092eca2 89 54 24 78     MOV        dword ptr [RSP + local_10],EDX
       14092eca6 48 8b 53 58     MOV        RDX,qword ptr [RBX + 0x58]
       14092ecaa e8 91 ee        CALL       FUN_14056db40                                                                                undefined FUN_14056db40()
                 c3 ff
                             LAB_14092ecaf                                   XREF[1]:     14092ec91(j)  
       14092ecaf 4c 8d 44        LEA        R8=>local_48,[RSP + 0x40]
                 24 40
       14092ecb4 48 8d 15        LEA        RDX,[s_UpdatePlayerInfo_1418f0ed8]                                                           = "UpdatePlayerInfo"
                 1d 22 fc 00
       14092ecbb 48 8b 4b 10     MOV        RCX,qword ptr [RBX + 0x10]
       14092ecbf e8 3c fc        CALL       GFxMovieView::sub                                                                            undefined GFxMovieView::sub()
                 68 00
       14092ecc4 90              NOP
       14092ecc5 4c 8b cf        MOV        R9=>FUN_14056dae0,RDI
       14092ecc8 ba 18 00        MOV        EDX,0x18
                 00 00
       14092eccd 44 8d 42 ea     LEA        R8D,[RDX + -0x16]
       14092ecd1 48 8d 4c        LEA        RCX=>local_40,[RSP + 0x48]
                 24 48
       14092ecd6 e8 d1 c8        CALL       ??_M@YAXPEAX_K1P6AX0@Z@Z                                                                     undefined ??_M@YAXPEAX_K1P6AX0@Z@Z()
                 c0 00
       14092ecdb 90              NOP
       14092ecdc 48 8b 9c        MOV        RBX,qword ptr [RSP + local_res8]
                 24 90 00 
                 00 00
       14092ece4 48 81 c4        ADD        RSP,0x80
                 80 00 00 00
       14092eceb 5f              POP        RDI
       14092ecec c3              RET
       14092eced cc              ??         CCh
       14092ecee cc              ??         CCh
       14092ecef cc              ??         CCh
       14092ecf0 cc              ??         CCh
       14092ecf1 cc              ??         CCh
       14092ecf2 cc              ??         CCh
       14092ecf3 cc              ??         CCh
       14092ecf4 cc              ??         CCh
       14092ecf5 cc              ??         CCh
       14092ecf6 cc              ??         CCh
       14092ecf7 cc              ??         CCh
       14092ecf8 cc              ??         CCh
       14092ecf9 cc              ??         CCh
       14092ecfa cc              ??         CCh
       14092ecfb cc              ??         CCh
       14092ecfc cc              ??         CCh
       14092ecfd cc              ??         CCh
       14092ecfe cc              ??         CCh
       14092ecff cc              ??         CCh


void InventoryMenu::sub(longlong param_1)

{
  ulonglong uVar1;
  undefined **local_48;
  undefined1 local_40 [48];
  uint local_10;
  
  local_48 = &VTABLE_FxResponseArgs_1_;
  ??_L@YAXPEAX_K1P6AX0@Z2@Z(local_40,0x18,2,&LAB_14056d6e0,FUN_14056dae0);
  local_10 = 1;
  FUN_14094f9a0(*(undefined8 *)(param_1 + 0x58));
  uVar1 = (ulonglong)local_10;
  if (local_10 < 2) {
    local_10 = local_10 + 1;
    FUN_14056db40(local_40 + uVar1 * 0x18,*(undefined8 *)(param_1 + 0x58));
  }
  GFxMovieView::sub(*(undefined8 *)(param_1 + 0x10),"UpdatePlayerInfo",&local_48);
  ??_M@YAXPEAX_K1P6AX0@Z@Z(local_40,0x18,2,FUN_14056dae0);
  return;
}


                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_140919fa0()
             undefined         <UNASSIGNED>   <RETURN>
             undefined8        Stack[0x10]:8  local_res10                             XREF[2]:     140919fb3(W), 
                                                                                                   14091a081(R)  
             undefined8        Stack[0x8]:8   local_res8                              XREF[3]:     14091a00f(W), 
                                                                                                   14091a01b(*), 
                                                                                                   14091a03f(R)  
             undefined4        Stack[-0x10]:4 local_10                                XREF[1]:     140919fe9(W)  
             undefined         Stack[-0x40]:1 local_40                                XREF[2]:     140919fe0(*), 
                                                                                                   14091a076(*)  
             undefined8        Stack[-0x48]:8 local_48                                XREF[2]:     140919fc1(W), 
                                                                                                   14091a029(*)  
             undefined8        Stack[-0x58]:8 local_58                                XREF[1]:     140919fab(W)  
             undefined8        Stack[-0x68]:8 local_68                                XREF[1]:     140919fcc(W)  
                             FUN_140919fa0                                   XREF[3]:     GiftMenu::ProcessMessage:140918d
                                                                                          GiftMenu::ProcessMessage:1409192
                                                                                          143679fb4(*)  
       140919fa0 4c 8b dc        MOV        R11,RSP
       140919fa3 57              PUSH       RDI
       140919fa4 48 81 ec        SUB        RSP,0x80
                 80 00 00 00
       140919fab 49 c7 43        MOV        qword ptr [R11 + local_58],-0x2
                 a8 fe ff 
                 ff ff
       140919fb3 49 89 5b 10     MOV        qword ptr [R11 + local_res10],RBX
       140919fb7 48 8b d9        MOV        RBX,RCX
       140919fba 48 8d 05        LEA        RAX,[VTABLE_FxResponseArgs_1_]                                                               = 1408eec90
                 ef 6e fd 00
       140919fc1 49 89 43 b8     MOV        qword ptr [R11 + local_48],RAX=>VTABLE_FxResponseArgs_1_                                     = 1408eec90
       140919fc5 48 8d 3d        LEA        RDI,[FUN_14056dae0]
                 14 3b c5 ff
       140919fcc 49 89 7b 98     MOV        qword ptr [R11 + local_68],RDI=>FUN_14056dae0
       140919fd0 4c 8d 0d        LEA        R9,[LAB_14056d6e0]
                 09 37 c5 ff
       140919fd7 ba 18 00        MOV        EDX,0x18
                 00 00
       140919fdc 44 8d 42 ea     LEA        R8D,[RDX + -0x16]
       140919fe0 49 8d 4b c0     LEA        RCX=>local_40,[R11 + -0x40]
       140919fe4 e8 2b 17        CALL       ??_L@YAXPEAX_K1P6AX0@Z2@Z                                                                    undefined ??_L@YAXPEAX_K1P6AX0@Z2@Z()
                 c2 00
       140919fe9 c7 44 24        MOV        dword ptr [RSP + local_10],0x1
                 78 01 00 
                 00 00
       140919ff1 8b 05 89        MOV        EAX,dword ptr [DAT_1431ad380]
                 33 89 02
       140919ff7 48 8d 15        LEA        RDX,[DAT_1431ad384]
                 86 33 89 02
       140919ffe 48 8d 0d        LEA        RCX,[DAT_1431ad380]
                 7b 33 89 02
       14091a005 3b 05 e9        CMP        EAX,dword ptr [gBarterMenu_TargetRefHandle]
                 d4 86 02
       14091a00b 48 0f 44 ca     CMOVZ      RCX=>DAT_1431ad384,RDX
       14091a00f 48 c7 84        MOV        qword ptr [RSP + local_res8],0x0
                 24 90 00 
                 00 00 00 
       14091a01b 48 8d 94        LEA        RDX=>local_res8,[RSP + 0x90]
                 24 90 00 
                 00 00
       14091a023 e8 88 09        CALL       BSPointerHandleManagerInterface::GetSmartPointer                                             undefined BSPointerHandleManagerInterface::GetSmartPointer()
                 87 ff
       14091a028 90              NOP
       14091a029 4c 8d 44        LEA        R8=>local_48,[RSP + 0x40]
                 24 40
       14091a02e 48 8d 15        LEA        RDX,[s_UpdatePlayerInfo_1418f0ed8]                                                           = "UpdatePlayerInfo"
                 a3 6e fd 00
       14091a035 48 8b 4b 10     MOV        RCX,qword ptr [RBX + 0x10]
       14091a039 e8 c2 48        CALL       GFxMovieView::sub                                                                            undefined GFxMovieView::sub()
                 6a 00
       14091a03e 90              NOP
       14091a03f 48 8b 84        MOV        RAX,qword ptr [RSP + local_res8]
                 24 90 00 
                 00 00
       14091a047 48 85 c0        TEST       RAX,RAX
       14091a04a 74 1e           JZ         LAB_14091a06a
       14091a04c 48 8d 48 20     LEA        RCX,[RAX + 0x20]
       14091a050 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14091a055 f0 0f c1        XADD.LOCK  dword ptr [RCX + 0x8],EAX
                 41 08
       14091a05a ff c8           DEC        EAX
       14091a05c a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14091a061 75 07           JNZ        LAB_14091a06a
       14091a063 48 8b 01        MOV        RAX,qword ptr [RCX]
       14091a066 ff 50 08        CALL       qword ptr [RAX + 0x8]
       14091a069 90              NOP
                             LAB_14091a06a                                   XREF[2]:     14091a04a(j), 14091a061(j)  
       14091a06a 4c 8b cf        MOV        R9=>FUN_14056dae0,RDI
       14091a06d ba 18 00        MOV        EDX,0x18
                 00 00
       14091a072 44 8d 42 ea     LEA        R8D,[RDX + -0x16]
       14091a076 48 8d 4c        LEA        RCX=>local_40,[RSP + 0x48]
                 24 48
       14091a07b e8 2c 15        CALL       ??_M@YAXPEAX_K1P6AX0@Z@Z                                                                     undefined ??_M@YAXPEAX_K1P6AX0@Z@Z()
                 c2 00
       14091a080 90              NOP
       14091a081 48 8b 9c        MOV        RBX,qword ptr [RSP + local_res10]
                 24 98 00 
                 00 00
       14091a089 48 81 c4        ADD        RSP,0x80
                 80 00 00 00
       14091a090 5f              POP        RDI
       14091a091 c3              RET
       14091a092 cc              ??         CCh
       14091a093 cc              ??         CCh
       14091a094 cc              ??         CCh
       14091a095 cc              ??         CCh
       14091a096 cc              ??         CCh
       14091a097 cc              ??         CCh
       14091a098 cc              ??         CCh
       14091a099 cc              ??         CCh
       14091a09a cc              ??         CCh
       14091a09b cc              ??         CCh
       14091a09c cc              ??         CCh
       14091a09d cc              ??         CCh
       14091a09e cc              ??         CCh
       14091a09f cc              ??         CCh



void FUN_140919fa0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong local_res8;
  undefined **local_48;
  undefined1 local_40 [48];
  undefined4 local_10;
  
  local_48 = &VTABLE_FxResponseArgs_1_;
  ??_L@YAXPEAX_K1P6AX0@Z2@Z(local_40,0x18,2,&LAB_14056d6e0,FUN_14056dae0);
  local_10 = 1;
  puVar3 = &DAT_1431ad380;
  if (DAT_1431ad380 == gBarterMenu_TargetRefHandle) {
    puVar3 = &DAT_1431ad384;
  }
  local_res8 = 0;
  BSPointerHandleManagerInterface::GetSmartPointer(puVar3,&local_res8);
  GFxMovieView::sub(*(undefined8 *)(param_1 + 0x10),"UpdatePlayerInfo",&local_48);
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x28);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 - 1U & 0x3ff) == 0) {
      (**(code **)(*(longlong *)(local_res8 + 0x20) + 8))();
    }
  }
  ??_M@YAXPEAX_K1P6AX0@Z@Z(local_40,0x18,2,FUN_14056dae0);
  return;
}
