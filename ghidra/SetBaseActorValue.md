       14189e310 b0 25 6b        addr       ActorValueOwner::SetBaseActorValue
                 40 01 00 
                 00 00
                 **************************************************************
                 *                          FUNCTION                          *
                 **************************************************************
                 undefined ActorValueOwner::SetBaseActorValue()
 undefined         <UNASSIGNED>   <RETURN>
 undefined8        Stack[0x18]:8  local_res18                             XREF[2]:     1406b25ce(W), 
                                                                                       1406b2654(R)  
 undefined4        Stack[0x10]:4  local_res10                             XREF[3]:     1406b25e8(*), 
                                                                                       1406b25ed(W), 
                                                                                       1406b261b(R)  
 undefined8        Stack[0x8]:8   local_res8                              XREF[2]:     1406b25c7(W), 
                                                                                       1406b262b(R)  
 undefined1[16]    Stack[-0x18]   local_18                                XREF[2]:     1406b25d9(W), 
                                                                                       1406b2633(R)  
 undefined1[16]    Stack[-0x28]   local_28                                XREF[2]:     1406b25c1(W), 
                                                                                       1406b2662(R)  
 undefined1[16]    Stack[-0x38]   local_38                                XREF[2]:     1406b25dd(W), 
                                                                                       1406b265c(R)  
 undefined8        Stack[-0x48]:8 local_48                                XREF[1]:     1406b263d(W)  
                 ActorValueOwner::SetBaseActorValue              XREF[7]:     14189e310(*), 1418a6008(*), 
                                                                              1418ac498(*), 141d5d24c(*), 
                                                                              141d5d264(*), 141d5d274(*), 
                                                                              14365aa30(*)  
1406b25b0 83 fa ff        CMP        EDX,-0x1                                                                                     REL::ID(38465)
                                                                                                                             Source: AE rename database (fallback)
1406b25b3 0f 84 b3        JZ         LAB_1406b266c
     00 00 00
1406b25b9 48 8b c4        MOV        RAX,RSP
1406b25bc 57              PUSH       RDI
1406b25bd 48 83 ec 60     SUB        RSP,0x60
1406b25c1 0f 29 78 d8     MOVAPS     xmmword ptr [RAX + local_28[0]],XMM7
1406b25c5 8b fa           MOV        EDI,EDX
                 LAB_1406b25c7                                   XREF[4]:     141d5d250(*), 141d5d268(*), 
                                                                              141d5d278(*), 14365aa3c(*)  
1406b25c7 48 89 58 08     MOV        qword ptr [RAX + local_res8],RBX
1406b25cb 0f 28 fa        MOVAPS     XMM7,XMM2
1406b25ce 48 89 70 18     MOV        qword ptr [RAX + local_res18],RSI
1406b25d2 48 8d b1        LEA        RSI,[RCX + -0xb8]
     48 ff ff ff
1406b25d9 0f 29 70 e8     MOVAPS     xmmword ptr [RAX + local_18[0]],XMM6
1406b25dd 44 0f 29        MOVAPS     xmmword ptr [RAX + local_38[0]],XMM8
     40 c8
1406b25e2 48 8b 01        MOV        RAX,qword ptr [RCX]
1406b25e5 ff 50 08        CALL       qword ptr [RAX + 0x8]
1406b25e8 4c 8d 44        LEA        R8=>local_res10,[RSP + 0x78]
     24 78
1406b25ed c7 44 24        MOV        dword ptr [RSP + local_res10],0x0
     78 00 00 
     00 00
1406b25f5 8b d7           MOV        EDX,EDI
1406b25f7 48 8d 8e        LEA        RCX,[RSI + 0x208]
     08 02 00 00
1406b25fe 44 0f 28 c0     MOVAPS     XMM8,XMM0
1406b2602 0f 57 f6        XORPS      XMM6,XMM6
1406b2605 e8 d6 dc        CALL       FUN_1406d02e0                                                                                undefined FUN_1406d02e0()
     01 00
1406b260a 0f 28 d7        MOVAPS     XMM2,XMM7
1406b260d 48 8d 8e        LEA        RCX,[RSI + 0x208]
     08 02 00 00
1406b2614 8b d7           MOV        EDX,EDI
1406b2616 e8 65 dd        CALL       FUN_1406d0380                                                                                undefined FUN_1406d0380()
     01 00
1406b261b f3 0f 5c        SUBSS      XMM7,dword ptr [RSP + local_res10]
     7c 24 78
1406b2621 8b d7           MOV        EDX,EDI
1406b2623 48 8b ce        MOV        RCX,RSI
1406b2626 e8 a5 11        CALL       Character::sub                                                                               undefined Character::sub()
     00 00
1406b262b 48 8b 5c        MOV        RBX,qword ptr [RSP + local_res8]
     24 70
1406b2630 0f 2e fe        UCOMISS    XMM7,XMM6
1406b2633 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + local_18[0]]
     24 50
1406b2638 74 1a           JZ         LAB_1406b2654
                 LAB_1406b263a                                   XREF[1]:     14365aa48(*)  
1406b263a 0f 28 df        MOVAPS     XMM3,XMM7
1406b263d 48 c7 44        MOV        qword ptr [RSP + local_48],0x0
     24 20 00 
     00 00 00
1406b2646 41 0f 28 d0     MOVAPS     XMM2,XMM8
1406b264a 8b d7           MOV        EDX,EDI
1406b264c 48 8b ce        MOV        RCX,RSI
1406b264f e8 ec 03        CALL       Actor::SendActorValueUpdate                                                                  undefined Actor::SendActorValueUpdate()
     00 00
                 LAB_1406b2654                                   XREF[1]:     1406b2638(j)  
1406b2654 48 8b b4        MOV        RSI,qword ptr [RSP + local_res18]
     24 80 00 
     00 00
1406b265c 44 0f 28        MOVAPS     XMM8,xmmword ptr [RSP + local_38[0]]
     44 24 30
1406b2662 0f 28 7c        MOVAPS     XMM7,xmmword ptr [RSP + local_28[0]]
     24 40
1406b2667 48 83 c4 60     ADD        RSP,0x60
1406b266b 5f              POP        RDI
                 LAB_1406b266c                                   XREF[2]:     1406b25b3(j), 14365aa54(*)  
1406b266c c3              RET
1406b266d cc              ??         CCh
1406b266e cc              ??         CCh
1406b266f cc              ??         CCh
1406b2670 cc              ??         CCh
1406b2671 cc              ??         CCh
1406b2672 cc              ??         CCh
1406b2673 cc              ??         CCh
1406b2674 cc              ??         CCh
1406b2675 cc              ??         CCh
1406b2676 cc              ??         CCh
1406b2677 cc              ??         CCh
1406b2678 cc              ??         CCh
1406b2679 cc              ??         CCh
1406b267a cc              ??         CCh
1406b267b cc              ??         CCh
1406b267c cc              ??         CCh
1406b267d cc              ??         CCh
1406b267e cc              ??         CCh
1406b267f cc              ??         CCh



void ActorValueOwner::SetBaseActorValue(longlong *param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  float local_res10 [2];
  
  if (param_2 != -1) {
    uVar1 = (**(code **)(*param_1 + 8))();
    local_res10[0] = 0.0;
    FUN_1406d02e0(param_1 + 0x2a,param_2,local_res10);
    FUN_1406d0380(param_1 + 0x2a,param_2,param_3);
    param_3 = param_3 - local_res10[0];
    Character::sub(param_1 + -0x17,param_2);
    if (param_3 != 0.0) {
      Actor::SendActorValueUpdate(param_1 + -0x17,param_2,uVar1,param_3,0);
    }
  }
  return;
}
