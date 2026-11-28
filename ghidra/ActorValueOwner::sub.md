       1406b252a e8 01 9c        CALL       ActorValueOwner::sub                                                                         undefined ActorValueOwner::sub()
                 d8 ff
cVar2 = ActorValueOwner::sub(lVar4,param_2,local_res8);

                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined ActorValueOwner::sub()
             undefined         <UNASSIGNED>   <RETURN>
                             ActorValueOwner::sub                            XREF[3]:     ConsoleFunc::handler::GetActorVa
                                                                                          ActorValueOwner::GetBaseActorVal
                                                                                          14363bb9c(*)  
       14043c130 40 53           PUSH       RBX                                                                                          REL::ID(27229)
                                                                                                                                         Source: AE rename database (fallback)
       14043c132 48 83 ec 20     SUB        RSP,0x20
       14043c136 41 c7 00        MOV        dword ptr [R8],0x0
                 00 00 00 00
       14043c13d 49 8b d8        MOV        RBX,R8
       14043c140 81 fa a3        CMP        EDX,0xa3
                 00 00 00
       14043c146 77 2b           JA         LAB_14043c173
       14043c148 48 8b 05        MOV        RAX,qword ptr [DAT_1420f6310]
                 c1 a1 cb 01
       14043c14f 4c 63 ca        MOVSXD     R9,EDX
       14043c152 4e 8b 54        MOV        R10,qword ptr [RAX + R9*0x8 + 0x8]
                 c8 08
       14043c157 4d 85 d2        TEST       R10,R10
       14043c15a 74 17           JZ         LAB_14043c173
       14043c15c 49 8b 42 68     MOV        RAX,qword ptr [R10 + 0x68]
       14043c160 48 85 c0        TEST       RAX,RAX
       14043c163 74 0e           JZ         LAB_14043c173
       14043c165 ff d0           CALL       RAX
       14043c167 f3 0f 11 03     MOVSS      dword ptr [RBX],XMM0
       14043c16b b0 01           MOV        AL,0x1
       14043c16d 48 83 c4 20     ADD        RSP,0x20
       14043c171 5b              POP        RBX
       14043c172 c3              RET
                             LAB_14043c173                                   XREF[3]:     14043c146(j), 14043c15a(j), 
                                                                                          14043c163(j)  
       14043c173 32 c0           XOR        AL,AL
       14043c175 48 83 c4 20     ADD        RSP,0x20
       14043c179 5b              POP        RBX
       14043c17a c3              RET
       14043c17b cc              ??         CCh
       14043c17c cc              ??         CCh
       14043c17d cc              ??         CCh
       14043c17e cc              ??         CCh
       14043c17f cc              ??         CCh
       14043c180 cc              ??         CCh
       14043c181 cc              ??         CCh
       14043c182 cc              ??         CCh
       14043c183 cc              ??         CCh
       14043c184 cc              ??         CCh
       14043c185 cc              ??         CCh
       14043c186 cc              ??         CCh
       14043c187 cc              ??         CCh
       14043c188 cc              ??         CCh
       14043c189 cc              ??         CCh
       14043c18a cc              ??         CCh
       14043c18b cc              ??         CCh
       14043c18c cc              ??         CCh
       14043c18d cc              ??         CCh
       14043c18e cc              ??         CCh
       14043c18f cc              ??         CCh
       14043c190 48              ??         48h    H
       14043c191 8b              ??         8Bh
       14043c192 05              ??         05h
       14043c193 79              ??         79h    y
       14043c194 a1              ??         A1h
       14043c195 cb              ??         CBh
       14043c196 01              ??         01h
       14043c197 48              ??         48h    H
       14043c198 63              ??         63h    c
       14043c199 c9              ??         C9h
       14043c19a 48              ??         48h    H
       14043c19b 8b              ??         8Bh
       14043c19c 4c              ??         4Ch    L
       14043c19d c8              ??         C8h
       14043c19e 08              ??         08h
       14043c19f 8b              ??         8Bh
       14043c1a0 41              ??         41h    A
       14043c1a1 70              ??         70h    p
       14043c1a2 c3              ??         C3h
       14043c1a3 cc              ??         CCh
       14043c1a4 cc              ??         CCh
       14043c1a5 cc              ??         CCh
       14043c1a6 cc              ??         CCh
       14043c1a7 cc              ??         CCh
       14043c1a8 cc              ??         CCh
       14043c1a9 cc              ??         CCh
       14043c1aa cc              ??         CCh
       14043c1ab cc              ??         CCh
       14043c1ac cc              ??         CCh
       14043c1ad cc              ??         CCh
       14043c1ae cc              ??         CCh
       14043c1af cc              ??         CCh
       14043c1b0 85              ??         85h
       14043c1b1 d2              ??         D2h
       14043c1b2 78              ??         78h    x
       14043c1b3 1e              ??         1Eh
       14043c1b4 48              ??         48h    H
       14043c1b5 8b              ??         8Bh
       14043c1b6 05              ??         05h
       14043c1b7 55              ??         55h    U
       14043c1b8 a1              ??         A1h
       14043c1b9 cb              ??         CBh
       14043c1ba 01              ??         01h
       14043c1bb 48              ??         48h    H
       14043c1bc 63              ??         63h    c
       14043c1bd c9              ??         C9h
       14043c1be 4c              ??         4Ch    L
       14043c1bf 8b              ??         8Bh
       14043c1c0 44              ??         44h    D
       14043c1c1 c8              ??         C8h
       14043c1c2 08              ??         08h
       14043c1c3 41              ??         41h    A
       14043c1c4 3b              ??         3Bh    ;
       14043c1c5 50              ??         50h    P
       14043c1c6 70              ??         70h    p
       14043c1c7 7f              ??         7Fh    
       14043c1c8 09              ??         09h
       14043c1c9 48              ??         48h    H
       14043c1ca 63              ??         63h    c
       14043c1cb c2              ??         C2h
       14043c1cc 41              ??         41h    A
       14043c1cd 8b              ??         8Bh
       14043c1ce 44              ??         44h    D
       14043c1cf 80              ??         80h
       14043c1d0 74              ??         74h    t
       14043c1d1 c3              ??         C3h
       14043c1d2 b8              ??         B8h
       14043c1d3 a4              ??         A4h
       14043c1d4 00              ??         00h
       14043c1d5 00              ??         00h
       14043c1d6 00              ??         00h
       14043c1d7 c3              ??         C3h
       14043c1d8 cc              ??         CCh
       14043c1d9 cc              ??         CCh
       14043c1da cc              ??         CCh
       14043c1db cc              ??         CCh
       14043c1dc cc              ??         CCh
       14043c1dd cc              ??         CCh
       14043c1de cc              ??         CCh
       14043c1df cc              ??         CCh



undefined8 ActorValueOwner::sub(undefined8 param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 extraout_XMM0_Da;
  
  *param_3 = 0;
  if (param_2 < 0xa4) {
    lVar1 = *(longlong *)(DAT_1420f6310 + 8 + (longlong)(int)param_2 * 8);
    if ((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0x68), pcVar2 != (code *)0x0)) {
      (*pcVar2)();
      *param_3 = extraout_XMM0_Da;
      return 1;
    }
  }
  return 0;
}
