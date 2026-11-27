                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             bool __fastcall Actor::IsOverEncumbered(Actor * this)
             bool              AL:1           <RETURN>
             Actor *64         RCX:8          this
                             Actor::IsOverEncumbered                         XREF[14]:    GameFunc::native::IsOverEncumber
                                                                                          FUN_140462c70:140462cd6(c), 
                                                                                          FUN_1406cf1b0:1406cf3a6(c), 
                                                                                          FUN_1406f6740:1406f67e1(c), 
                                                                                          FUN_1406fa6f0:1406fa72b(c), 
                                                                                          Actor::sub:140731894(c), 
                                                                                          Actor::sub:140731aaa(c), 
                                                                                          PlayerCharacter::Update:1407338c
                                                                                          FUN_14073a250:14073a2b3(c), 
                                                                                          Actor::sub:14074e89a(c), 
                                                                                          1409f54f3(c), 141d52664(*), 
                                                                                          141d52674(*), 143657dd8(*)  
       140673500 40 53           PUSH       RBX                                                                                          RELOCATION_ID(36457, 37453)
                                                                                                                                         Source: CommonLibSSE headers
       140673502 48 83 ec 30     SUB        RSP,0x30
       140673506 48 3b 0d        CMP        this,qword ptr [gPlayerCharacter3]
                 8b 41 ac 02
       14067350d 48 8b d9        MOV        RBX,this
       140673510 0f 85 86        JNZ        LAB_14067359c
                 00 00 00
       140673516 e8 f5 43        CALL       FUN_140737910                                                                                undefined FUN_140737910()
                 0c 00
       14067351b 84 c0           TEST       AL,AL
       14067351d 75 7d           JNZ        LAB_14067359c
       14067351f 48 8b cb        MOV        this,RBX
       140673522 e8 49 cd        CALL       Actor::IsOnMount                                                                             undefined Actor::IsOnMount()
                 c0 ff
       140673527 84 c0           TEST       AL,AL
       140673529 75 71           JNZ        LAB_14067359c
       14067352b 48 8b 1d        MOV        RBX,qword ptr [DAT_1431874f8]
                 c6 3f b1 02
       140673532 ba 20 00        MOV        EDX,0x20
                 00 00
                             LAB_140673537                                   XREF[3]:     141d52668(*), 141d52678(*), 
                                                                                          143657de4(*)  
       140673537 48 89 7c        MOV        qword ptr [RSP + 0x48],RDI
                 24 48
       14067353c 0f 29 74        MOVAPS     xmmword ptr [RSP + 0x20],XMM6
                 24 20
       140673541 48 8b 83        MOV        RAX,qword ptr [RBX + 0xb8]
                 b8 00 00 00
       140673548 48 8d 8b        LEA        this,[RBX + 0xb8]
                 b8 00 00 00
       14067354f ff 50 08        CALL       qword ptr [RAX + 0x8]
       140673552 4c 8d 44        LEA        R8,[RSP + 0x40]
                 24 40
       140673557 48 8b d3        MOV        RDX,RBX
       14067355a b9 0a 00        MOV        this,0xa
                 00 00
       14067355f f3 0f 11        MOVSS      dword ptr [RSP + 0x40],XMM0
                 44 24 40
       140673565 e8 c6 29        CALL       BGSEntryPoint::HandleEntryPoint                                                              void BGSEntryPoint::HandleEntryPoint(ENTRY_POINT p0, Actor * p1, pointer p2)
                 d1 ff
       14067356a 48 8b 83        MOV        RAX,qword ptr [RBX + 0xb8]
                 b8 00 00 00
       140673571 48 8d 8b        LEA        this,[RBX + 0xb8]
                 b8 00 00 00
       140673578 f3 0f 10        MOVSS      XMM6,dword ptr [RSP + 0x40]
                 74 24 40
       14067357e ba 1f 00        MOV        EDX,0x1f
                 00 00
       140673583 ff 50 08        CALL       qword ptr [RAX + 0x8]
       140673586 48 8b 7c        MOV        RDI,qword ptr [RSP + 0x48]
                 24 48
       14067358b 0f 2f c6        COMISS     XMM0,XMM6
       14067358e 0f 28 74        MOVAPS     XMM6,xmmword ptr [RSP + 0x20]
                 24 20
       140673593 0f 97 c0        SETA       AL
       140673596 48 83 c4 30     ADD        RSP,0x30
       14067359a 5b              POP        RBX
       14067359b c3              RET
                             LAB_14067359c                                   XREF[4]:     140673510(j), 14067351d(j), 
                                                                                          140673529(j), 143657df0(*)  
       14067359c 32 c0           XOR        AL,AL
       14067359e 48 83 c4 30     ADD        RSP,0x30
       1406735a2 5b              POP        RBX
       1406735a3 c3              RET
       1406735a4 cc              ??         CCh
       1406735a5 cc              ??         CCh
       1406735a6 cc              ??         CCh
       1406735a7 cc              ??         CCh
       1406735a8 cc              ??         CCh
       1406735a9 cc              ??         CCh
       1406735aa cc              ??         CCh
       1406735ab cc              ??         CCh
       1406735ac cc              ??         CCh
       1406735ad cc              ??         CCh
       1406735ae cc              ??         CCh
       1406735af cc              ??         CCh
       1406735b0 48              ??         48h    H
       1406735b1 3b              ??         3Bh    ;
       1406735b2 0d              ??         0Dh
       1406735b3 e1              ??         E1h
       1406735b4 40              ??         40h    @
       1406735b5 ac              ??         ACh
       1406735b6 02              ??         02h
       1406735b7 75              ??         75h    u
       1406735b8 24              ??         24h    $
       1406735b9 48              ??         48h    H
       1406735ba 8b              ??         8Bh
       1406735bb 05              ??         05h
       1406735bc 38              ??         38h    8
       1406735bd 3f              ??         3Fh    ?
       1406735be b1              ??         B1h
       1406735bf 02              ??         02h
       1406735c0 83              ??         83h
       1406735c1 b8              ??         B8h
       1406735c2 c8              ??         C8h
       1406735c3 08              ??         08h
       1406735c4 00              ??         00h
       1406735c5 00              ??         00h
       1406735c6 00              ??         00h
       1406735c7 74              ??         74h    t
       1406735c8 14              ??         14h
       1406735c9 f3              ??         F3h
       1406735ca 0f              ??         0Fh
       1406735cb 10              ??         10h
       1406735cc 05              ??         05h
       1406735cd af              ??         AFh
       1406735ce 37              ??         37h    7
       1406735cf 99              ??         99h
       1406735d0 01              ??         01h
       1406735d1 0f              ??         0Fh
       1406735d2 2f              ??         2Fh    /
       1406735d3 80              ??         80h
       1406735d4 d4              ??         D4h
       1406735d5 08              ??         08h
       1406735d6 00              ??         00h
       1406735d7 00              ??         00h
       1406735d8 73              ??         73h    s
       1406735d9 03              ??         03h
       1406735da b0              ??         B0h
       1406735db 01              ??         01h
       1406735dc c3              ??         C3h
       1406735dd 32              ??         32h    2
       1406735de c0              ??         C0h
       1406735df c3              ??         C3h
       1406735e0 cc              ??         CCh
       1406735e1 cc              ??         CCh
       1406735e2 cc              ??         CCh
       1406735e3 cc              ??         CCh
       1406735e4 cc              ??         CCh
       1406735e5 cc              ??         CCh
       1406735e6 cc              ??         CCh
       1406735e7 cc              ??         CCh
       1406735e8 cc              ??         CCh
       1406735e9 cc              ??         CCh
       1406735ea cc              ??         CCh
       1406735eb cc              ??         CCh
       1406735ec cc              ??         CCh
       1406735ed cc              ??         CCh
       1406735ee cc              ??         CCh
       1406735ef cc              ??         CCh
                             LAB_1406735f0                                   XREF[2]:     FUN_14043c1e0:14043c579(*), 
                                                                                          FUN_14043c1e0:14043c583(*)  
       1406735f0 48 8b c1        MOV        RAX,RCX
       1406735f3 33 d2           XOR        EDX,EDX
       1406735f5 48 81 c1        ADD        RCX,-0xb8
                 48 ff ff ff
       1406735fc 48 85 c0        TEST       RAX,RAX
       1406735ff 48 0f 44 ca     CMOVZ      RCX,RDX
       140673603 e9 18 eb        JMP        TESObjectREFR::GetWeightInContainer                                                          float TESObjectREFR::GetWeightInContainer(TESObjectREFR * this)
                 c6 ff
                             -- Flow Override: CALL_RETURN (CALL_TERMINATOR)
       140673608 cc              ??         CCh
       140673609 cc              ??         CCh
       14067360a cc              ??         CCh
       14067360b cc              ??         CCh
       14067360c cc              ??         CCh
       14067360d cc              ??         CCh
       14067360e cc              ??         CCh
       14067360f cc              ??         CCh


## Decompiled Function

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

bool Actor::IsOverEncumbered(Actor *this)

{
  Actor *p1;
  float fVar1;
  char cVar2;
  float fVar3;
  float local_res8 [2];
  
  if (this == gPlayerCharacter3) {
    cVar2 = FUN_140737910();
    if (cVar2 == '\0') {
      cVar2 = Actor::IsOnMount(this);
      p1 = DAT_1431874f8;
      if (cVar2 == '\0') {
        local_res8[0] =
             (float)(*(code *)DAT_1431874f8->__vftable_ActorValueOwner->GetActorValue)
                              (&DAT_1431874f8->__vftable_ActorValueOwner,0x20);
        BGSEntryPoint::HandleEntryPoint(kGetMaxCarryWeight,p1,(undefined *)local_res8);
        fVar1 = local_res8[0];
        fVar3 = (float)(*(code *)p1->__vftable_ActorValueOwner->GetActorValue)
                                 (&p1->__vftable_ActorValueOwner,0x1f);
        return fVar1 < fVar3;
      }
    }
  }
  return false;
}



                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_140737910()
             undefined         <UNASSIGNED>   <RETURN>
                             FUN_140737910                                   XREF[9]:     ConsoleFunc::handler::ToggleGodM
                                                                                          ConsoleFunc::handler::ToggleGodM
                                                                                          ActorMagicCaster::Func29:1405b0f
                                                                                          ActorMagicCaster::Func10:1405b16
                                                                                          Actor::CanRun:1406619a0(c), 
                                                                                          Actor::IsOverEncumbered:14067351
                                                                                          Actor::AttachArrow:1406b5953(c), 
                                                                                          Actor::DetachArrow:1406b5acd(c), 
                                                                                          PlayerCharacter::ReduceCurrently
       140737910 0f b6 05        MOVZX      EAX,byte ptr [DAT_14319b9d6]
                 bf 40 a6 02
       140737917 c3              RET
       140737918 cc              ??         CCh
       140737919 cc              ??         CCh
       14073791a cc              ??         CCh
       14073791b cc              ??         CCh
       14073791c cc              ??         CCh
       14073791d cc              ??         CCh
       14073791e cc              ??         CCh
       14073791f cc              ??         CCh
