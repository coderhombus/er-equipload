                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             BSPointerHandle<> __fastcall InventoryChanges::RemoveIte
             BSPointerHandl    EAX:4          <RETURN>
             InventoryChang    RCX:8          this
             TESObjectREFR     RDX:8          p0
             TESBoundObject    R8:8           p1
             int               R9D:4          p2
             ITEM_REMOVE_RE    Stack[0x28]:4  p3                                      XREF[34]:    140228323(R), 
                                                                                                   140228357(R), 
                                                                                                   140228510(R), 
                                                                                                   14022865f(R), 
                                                                                                   140228703(W), 
                                                                                                   140228927(R), 
                                                                                                   14022892e(W), 
                                                                                                   14022912e(R), 
                                                                                                   140229287(R), 
                                                                                                   1402293de(R), 
                                                                                                   14022940c(R), 
                                                                                                   140229453(R), 
                                                                                                   14022946f(W), 
                                                                                                   14022947b(W), 
                                                                                                   140229931(R), 
                                                                                                   1402299f6(R), 
                                                                                                   140229a0d(R), 
                                                                                                   140229b04(R), 
                                                                                                   140229c0f(R), 
                                                                                                   140229c21(R)  
             ExtraDataList     Stack[0x30]:8  p4                                      XREF[14]:    140228293(R), 
                                                                                                   140228979(R), 
                                                                                                   140228f7f(R), 
                                                                                                   140229000(R), 
                                                                                                   1402290e8(R), 
                                                                                                   14022924e(R), 
                                                                                                   1402294ae(R), 
                                                                                                   140229efc(R), 
                                                                                                   14022a46b(R), 
                                                                                                   14022a7d5(R), 
                                                                                                   14022ab7e(R), 
                                                                                                   14022aca2(R), 
                                                                                                   14022ad65(R), 
                                                                                                   14022aecd(R)  
             TESObjectREFR     Stack[0x38]:8  p5                                      XREF[31]:    14022835d(R), 
                                                                                                   14022837f(R), 
                                                                                                   140228390(R), 
                                                                                                   1402283a5(R), 
                                                                                                   14022844b(W), 
                                                                                                   140228604(R), 
                                                                                                   140228665(R), 
                                                                                                   140228697(W), 
                                                                                                   140228efa(R), 
                                                                                                   1402292a4(W), 
                                                                                                   14022975c(R), 
                                                                                                   140229784(W), 
                                                                                                   14022978d(W), 
                                                                                                   140229797(R), 
                                                                                                   1402297bb(R), 
                                                                                                   1402297cb(R), 
                                                                                                   140229837(W), 
                                                                                                   140229b5a(W), 
                                                                                                   140229bca(R), 
                                                                                                   14022a84c(W)  
             NiPoint3 *64      Stack[0x40]:8  p6                                      XREF[15]:    140228224(R), 
                                                                                                   14022848e(R), 
                                                                                                   140228f06(R), 
                                                                                                   140228fa1(R), 
                                                                                                   140229008(R), 
                                                                                                   14022913d(R), 
                                                                                                   1402296df(R), 
                                                                                                   140229bbe(R), 
                                                                                                   14022a35d(R), 
                                                                                                   14022a621(R), 
                                                                                                   14022ab6d(R), 
                                                                                                   14022ac67(R), 
                                                                                                   14022af12(R), 
                                                                                                   14022aff1(R), 
                                                                                                   14022b007(R)  
             TESObjectREFR     Stack[0x48]:8  p7                                      XREF[9]:     140228be4(R), 
                                                                                                   140228d0d(R), 
                                                                                                   1402294c9(R), 
                                                                                                   140229bb2(R), 
                                                                                                   14022a042(R), 
                                                                                                   14022a18a(R), 
                                                                                                   14022ab61(R), 
                                                                                                   14022ac85(R), 
                                                                                                   14022ad92(R)  
             undefined8        Stack[0x20]:8  local_res20                             XREF[25]:    140228180(W), 
                                                                                                   140228333(R), 
                                                                                                   14022845f(R), 
                                                                                                   1402294df(R), 
                                                                                                   140229610(R), 
                                                                                                   140229732(R), 
                                                                                                   140229740(R), 
                                                                                                   1402297b2(R), 
                                                                                                   1402297c2(R), 
                                                                                                   14022987a(R), 
                                                                                                   1402298ef(R), 
                                                                                                   140229bdf(R), 
                                                                                                   140229fa1(R), 
                                                                                                   14022a2e1(R), 
                                                                                                   14022a79f(R), 
                                                                                                   14022a9bd(R), 
                                                                                                   14022ab92(R), 
                                                                                                   14022ac6e(R), 
                                                                                                   14022ada7(R), 
                                                                                                   14022ae00(R)  
             undefined8        Stack[0x18]:8  local_res18                             XREF[19]:    140228185(W), 
                                                                                                   140228c01(R), 
                                                                                                   140228d2a(R), 
                                                                                                   140228e6e(R), 
                                                                                                   140228f26(R), 
                                                                                                   1402290b1(R), 
                                                                                                   1402294e6(R), 
                                                                                                   140229623(R), 
                                                                                                   1402296f2(R), 
                                                                                                   14022992a(R), 
                                                                                                   140229b71(R), 
                                                                                                   14022a05f(R), 
                                                                                                   14022a1a7(R), 
                                                                                                   14022a266(R), 
                                                                                                   14022a434(R), 
                                                                                                   14022a7ce(R), 
                                                                                                   14022a8f9(R), 
                                                                                                   14022ab99(R), 
                                                                                                   14022ad5e(R)  
             undefined8        Stack[0x10]:8  local_res10                             XREF[12]:    14022818a(W), 
                                                                                                   1402284a4(R), 
                                                                                                   1402285ad(R), 
                                                                                                   14022a814(R), 
                                                                                                   14022ab16(R), 
                                                                                                   14022abcd(R), 
                                                                                                   14022ac14(R), 
                                                                                                   14022ac22(R), 
                                                                                                   14022ad00(R), 
                                                                                                   14022ad0e(R), 
                                                                                                   14022b26c(R), 
                                                                                                   14022b27a(R)  
             undefined8        Stack[0x8]:8   local_res8                              XREF[31]:    14022818f(W), 
                                                                                                   1402287af(R), 
                                                                                                   140228b12(R), 
                                                                                                   140228c12(R), 
                                                                                                   140228d3b(R), 
                                                                                                   140228d92(R), 
                                                                                                   140228fab(R), 
                                                                                                   140229147(R), 
                                                                                                   1402291c7(R), 
                                                                                                   1402294f4(R), 
                                                                                                   140229864(R), 
                                                                                                   1402298fa(R), 
                                                                                                   140229bf3(R), 
                                                                                                   140229fac(R), 
                                                                                                   14022a070(R), 
                                                                                                   14022a1b8(R), 
                                                                                                   14022a2ec(R), 
                                                                                                   14022a62b(R), 
                                                                                                   14022a690(R), 
                                                                                                   14022a7a6(R)  
             undefined8        Stack[-0x58]:8 local_58                                XREF[1]:     1402288dc(W)  
             undefined8        Stack[-0x60]:8 local_60                                XREF[1]:     14022a386(W)  
             undefined8        Stack[-0x68]:8 local_68                                XREF[1]:     140229dce(W)  
             undefined8        Stack[-0x70]:8 local_70                                XREF[1]:     14022981b(W)  
             undefined8        Stack[-0x78]:8 local_78                                XREF[1]:     140229770(W)  
             undefined8        Stack[-0x80]:8 local_80                                XREF[1]:     140229107(W)  
             undefined8        Stack[-0x88]:8 local_88                                XREF[1]:     14022906a(W)  
             undefined8        Stack[-0x90]:8 local_90                                XREF[1]:     1402289a9(W)  
             undefined8        Stack[-0x98]:8 local_98                                XREF[1]:     14022889f(W)  
             undefined8        Stack[-0xa0]:8 local_a0                                XREF[1]:     14022885e(W)  
             undefined8        Stack[-0xa8]:8 local_a8                                XREF[1]:     140228618(W)  
             undefined8        Stack[-0xb0]:8 local_b0                                XREF[1]:     1402281af(W)  
             undefined         Stack[-0xb4]:1 local_b4                                XREF[1]:     140229f50(*)  
             undefined         Stack[-0xb8]:1 local_b8                                XREF[1]:     14022adb1(*)  
             undefined         Stack[-0xbc]:1 local_bc                                XREF[1]:     14022a6ad(*)  
             undefined         Stack[-0xc0]:1 local_c0                                XREF[1]:     140229bec(*)  
             undefined         Stack[-0xc4]:1 local_c4                                XREF[1]:     14022a069(*)  
             undefined         Stack[-0xc8]:1 local_c8                                XREF[1]:     14022aba0(*)  
             undefined         Stack[-0xcc]:1 local_cc                                XREF[1]:     14022a1b1(*)  
             undefined         Stack[-0xd0]:1 local_d0                                XREF[1]:     14022a53c(*)  
             undefined         Stack[-0xd4]:1 local_d4                                XREF[1]:     14022acb6(*)  
             undefined         Stack[-0xd8]:1 local_d8                                XREF[1]:     140229f0e(*)  
             undefined         Stack[-0xdc]:1 local_dc                                XREF[1]:     1402294ed(*)  
             undefined         Stack[-0xe0]:1 local_e0                                XREF[1]:     1402291e4(*)  
             undefined         Stack[-0xe4]:1 local_e4                                XREF[1]:     140228d34(*)  
             undefined         Stack[-0xe8]:1 local_e8                                XREF[1]:     140228c0b(*)  
             undefined         Stack[-0xec]:1 local_ec                                XREF[1]:     140228adb(*)  
             undefined         Stack[-0xf0]:1 local_f0                                XREF[1]:     14022898f(*)  
             undefined2        Stack[-0xf4]:2 local_f4                                XREF[1]:     14022a59e(W)  
             undefined4        Stack[-0xf8]:4 local_f8                                XREF[1]:     14022a597(W)  
             undefined8        Stack[-0x100   local_100                               XREF[4]:     14022a572(W), 
                                                                                                   14022a590(W), 
                                                                                                   14022a5ad(*), 
                                                                                                   14022a5ba(R)  
             undefined8        Stack[-0x108   local_108                               XREF[3]:     14022a6c6(W), 
                                                                                                   14022a6cd(*), 
                                                                                                   14022a6de(R)  
             undefined8        Stack[-0x110   local_110                               XREF[3]:     1402291fd(W), 
                                                                                                   140229201(*), 
                                                                                                   14022920f(R)  
             undefined8        Stack[-0x118   local_118                               XREF[3]:     140228d67(W), 
                                                                                                   140228d79(W), 
                                                                                                   140228d8e(*)  
             undefined8        Stack[-0x120   local_120                               XREF[3]:     140228b3a(W), 
                                                                                                   140228b47(W), 
                                                                                                   140228b50(*)  
             undefined8        Stack[-0x128   local_128                               XREF[3]:     140228b1e(W), 
                                                                                                   140228b2b(W), 
                                                                                                   140228b34(*)  
             undefined8        Stack[-0x130   local_130                               XREF[4]:     140228ab5(W), 
                                                                                                   140228ab9(*), 
                                                                                                   140228ad0(R), 
                                                                                                   140228ec4(R)  
             undefined8        Stack[-0x138   local_138                               XREF[4]:     1402284f3(W), 
                                                                                                   1402287ed(W), 
                                                                                                   140229d61(W), 
                                                                                                   14022b0de(R)  
             undefined8        Stack[-0x140   local_140                               XREF[3]:     14022b04d(W), 
                                                                                                   14022b05f(W), 
                                                                                                   14022b077(*)  
             undefined8        Stack[-0x148   local_148                               XREF[3]:     14022add9(W), 
                                                                                                   14022adeb(W), 
                                                                                                   14022ae07(*)  
             undefined8        Stack[-0x150   local_150                               XREF[4]:     140229f2a(W), 
                                                                                                   140229f2e(*), 
                                                                                                   140229f45(R), 
                                                                                                   14022a328(R)  
             undefined8        Stack[-0x158   local_158                               XREF[3]:     1402298c7(W), 
                                                                                                   1402298de(W), 
                                                                                                   1402298f6(*)  
             undefined8        Stack[-0x160   local_160                               XREF[3]:     1402295e4(W), 
                                                                                                   1402295fb(W), 
                                                                                                   140229617(*)  
             undefined8        Stack[-0x168   local_168                               XREF[3]:     140229198(W), 
                                                                                                   1402291af(W), 
                                                                                                   1402291c3(*)  
             undefined4        Stack[-0x16c   local_16c                               XREF[2]:     14022a6c3(W), 
                                                                                                   14022a6d4(*)  
             undefined4        Stack[-0x170   local_170                               XREF[2]:     140229f27(W), 
                                                                                                   140229f32(*)  
             undefined4        Stack[-0x174   local_174                               XREF[2]:     14022847b(W), 
                                                                                                   14022945e(R)  
             undefined4        Stack[-0x178   local_178                               XREF[2]:     1402291fa(W), 
                                                                                                   140229205(*)  
             undefined4        Stack[-0x17c   local_17c                               XREF[2]:     140228ab2(W), 
                                                                                                   140228abd(*)  
             undefined4        Stack[-0x180   local_180                               XREF[2]:     1402281f7(W), 
                                                                                                   140228207(*)  
             undefined8        Stack[-0x188   local_188                               XREF[4]:     1402281a0(*), 
                                                                                                   140229f7f(*), 
                                                                                                   140229f8c(*), 
                                                                                                   140229fa8(*)  
             undefined8        Stack[-0x190   local_190                               XREF[3]:     14022a2b5(W), 
                                                                                                   14022a2cc(W), 
                                                                                                   14022a2e8(*)  
             undefined8        Stack[-0x198   local_198                               XREF[3]:     14022a661(W), 
                                                                                                   14022a678(W), 
                                                                                                   14022a68c(*)  
             undefined8        Stack[-0x1a0   local_1a0                               XREF[5]:     14022a54f(W), 
                                                                                                   14022a553(*), 
                                                                                                   14022a56e(R), 
                                                                                                   14022a58c(R), 
                                                                                                   14022a5e8(R)  
             undefined4        Stack[-0x1a8   local_1a8                               XREF[3]:     14022a518(W), 
                                                                                                   14022a521(*), 
                                                                                                   14022a565(R)  
             undefined8        Stack[-0x1b0   local_1b0                               XREF[6]:     1402282ad(W), 
                                                                                                   1402282d0(R), 
                                                                                                   1402282f4(R), 
                                                                                                   140228304(W), 
                                                                                                   140228345(R), 
                                                                                                   14022b200(R)  
             undefined4        Stack[-0x1b8   local_1b8                               XREF[4]:     14022828c(W), 
                                                                                                   1402282e0(R), 
                                                                                                   1402282f1(W), 
                                                                                                   14022b1f8(R)  
             undefined8        Stack[-0x1c0   local_1c0                               XREF[2]:     1402281dc(W), 
                                                                                                   14022b2b2(R)  
             undefined4        Stack[-0x1c8   local_1c8                               XREF[5]:     1402286af(W), 
                                                                                                   140229c33(W), 
                                                                                                   140229e2b(W), 
                                                                                                   14022a61d(R), 
                                                                                                   14022aab3(R)  
             undefined8        Stack[-0x1d0   local_1d0                               XREF[6]:     140228588(W), 
                                                                                                   140228a1a(W), 
                                                                                                   140228a6e(W), 
                                                                                                   140229a23(W), 
                                                                                                   140229cf2(W), 
                                                                                                   14022a741(R)  
             undefined4        Stack[-0x1d8   local_1d8                               XREF[5]:     140228488(W), 
                                                                                                   14022878f(R), 
                                                                                                   1402292c6(R), 
                                                                                                   140229489(R), 
                                                                                                   14022a7bb(R)  
             undefined8        Stack[-0x1e0   local_1e0                               XREF[10]:    1402285fd(W), 
                                                                                                   140228648(R), 
                                                                                                   14022868e(W), 
                                                                                                   140229283(R), 
                                                                                                   140229947(W), 
                                                                                                   140229a09(W), 
                                                                                                   140229c7a(W), 
                                                                                                   14022a73d(R), 
                                                                                                   14022a74c(W), 
                                                                                                   14022a764(W)  
             undefined8        Stack[-0x1e8   local_1e8                               XREF[11]:    1402285ef(W), 
                                                                                                   140228709(R), 
                                                                                                   1402292c2(R), 
                                                                                                   14022932e(R), 
                                                                                                   14022936f(R), 
                                                                                                   14022939c(R), 
                                                                                                   1402293ff(R), 
                                                                                                   14022993f(R), 
                                                                                                   14022999f(R), 
                                                                                                   1402299ee(R), 
                                                                                                   140229c67(R)  
             undefined8        Stack[-0x1f0   local_1f0                               XREF[11]:    140228522(W), 
                                                                                                   1402286f1(R), 
                                                                                                   14022878b(R), 
                                                                                                   140228800(R), 
                                                                                                   140228818(R), 
                                                                                                   1402292be(R), 
                                                                                                   140229464(R), 
                                                                                                   140229481(R), 
                                                                                                   140229c51(R), 
                                                                                                   140229d71(R), 
                                                                                                   140229d82(R)  
             undefined2        Stack[-0x1f4   local_1f4                               XREF[4]:     14022a51c(W), 
                                                                                                   14022a525(*), 
                                                                                                   14022a531(R), 
                                                                                                   14022a560(R)  
             undefined4        Stack[-0x1f8   local_1f8                               XREF[2]:     1402281e3(W), 
                                                                                                   14022b2b6(R)  
             undefined8        Stack[-0x200   local_200                               XREF[23]:    140228285(W), 
                                                                                                   14022851e(R), 
                                                                                                   1402285eb(R), 
                                                                                                   1402287ab(R), 
                                                                                                   140228bfa(R), 
                                                                                                   140228d23(R), 
                                                                                                   140229322(R), 
                                                                                                   140229aa1(R), 
                                                                                                   140229b61(R), 
                                                                                                   14022a058(R), 
                                                                                                   14022a1a0(R), 
                                                                                                   14022a7b2(W), 
                                                                                                   14022a7e8(R), 
                                                                                                   14022a7ff(R), 
                                                                                                   14022a897(R), 
                                                                                                   14022a91f(R), 
                                                                                                   14022a973(R), 
                                                                                                   14022ad46(R), 
                                                                                                   14022aed4(R), 
                                                                                                   14022b08f(W)  
             undefined1        Stack[-0x208   local_208                               XREF[3]:     1402284f9(W), 
                                                                                                   14022a75a(W), 
                                                                                                   14022ad54(R)  
             undefined8        Stack[-0x210   local_210                               XREF[23]:    140228583(W), 
                                                                                                   1402285e6(W), 
                                                                                                   140228974(R), 
                                                                                                   1402289d7(R), 
                                                                                                   140228c3b(W), 
                                                                                                   140228e9e(W), 
                                                                                                   140228ebf(R), 
                                                                                                   14022927e(W), 
                                                                                                   14022988b(R), 
                                                                                                   14022989a(R), 
                                                                                                   1402298a7(W), 
                                                                                                   1402298b1(R), 
                                                                                                   14022991e(W), 
                                                                                                   140229925(R), 
                                                                                                   140229a87(W), 
                                                                                                   140229d2d(W), 
                                                                                                   140229e7f(W), 
                                                                                                   140229ed4(W), 
                                                                                                   14022a3af(W), 
                                                                                                   14022a409(W)  
             undefined8        Stack[-0x218   local_218                               XREF[25]:    14022850a(W), 
                                                                                                   140228afc(W), 
                                                                                                   140228b54(W), 
                                                                                                   140228d74(W), 
                                                                                                   140228eef(W), 
                                                                                                   140228ff0(R), 
                                                                                                   1402291aa(W), 
                                                                                                   140229249(W), 
                                                                                                   14022944e(R), 
                                                                                                   140229551(W), 
                                                                                                   140229582(W), 
                                                                                                   1402295b3(W), 
                                                                                                   1402295df(W), 
                                                                                                   1402295f6(W), 
                                                                                                   1402298d9(W), 
                                                                                                   140229f71(W), 
                                                                                                   14022a0bc(W), 
                                                                                                   14022a1da(W), 
                                                                                                   14022a2c7(W), 
                                                                                                   14022a353(W)  
             undefined1        Stack[-0x220   local_220                               XREF[5]:     14022869e(W), 
                                                                                                   140228ef4(R), 
                                                                                                   140229968(W), 
                                                                                                   140229a00(W), 
                                                                                                   14022a78e(R)  
             undefined8        Stack[-0x228   local_228                               XREF[45]:    1402281fd(W), 
                                                                                                   140228202(*), 
                                                                                                   1402284ad(R), 
                                                                                                   1402284fc(R), 
                                                                                                   1402285b6(R), 
                                                                                                   140228aed(*), 
                                                                                                   140228af7(R), 
                                                                                                   140228b26(R), 
                                                                                                   140228b42(R), 
                                                                                                   140228d4a(*), 
                                                                                                   140228d54(R), 
                                                                                                   140228d6f(R), 
                                                                                                   140228eea(R), 
                                                                                                   1402291a5(R), 
                                                                                                   140229244(R), 
                                                                                                   140229556(W), 
                                                                                                   14022957d(R), 
                                                                                                   1402295ae(W), 
                                                                                                   1402295da(R), 
                                                                                                   1402295f1(R)  
             undefined8        Stack[-0x238   local_238                               XREF[1]:     14022a93b(W)  
             undefined8        Stack[-0x240   local_240                               XREF[5]:     140229bad(W), 
                                                                                                   14022a940(W), 
                                                                                                   14022aac1(W), 
                                                                                                   14022ab5c(W), 
                                                                                                   14022ac80(W)  
             undefined8        Stack[-0x248   local_248                               XREF[5]:     140229bb9(W), 
                                                                                                   14022a944(W), 
                                                                                                   14022aac6(W), 
                                                                                                   14022ab68(W), 
                                                                                                   14022ac8c(W)  
             undefined8        Stack[-0x250   local_250                               XREF[11]:    140228bdf(W), 
                                                                                                   140228d08(W), 
                                                                                                   1402294c4(W), 
                                                                                                   140229bc5(W), 
                                                                                                   14022a03d(W), 
                                                                                                   14022a185(W), 
                                                                                                   14022a949(W), 
                                                                                                   14022aacb(W), 
                                                                                                   14022ab74(W), 
                                                                                                   14022ac91(W), 
                                                                                                   14022ad8d(W)  
             undefined8        Stack[-0x258   local_258                               XREF[11]:    140228beb(W), 
                                                                                                   140228d14(W), 
                                                                                                   1402294d0(W), 
                                                                                                   140229bd1(W), 
                                                                                                   14022a049(W), 
                                                                                                   14022a191(W), 
                                                                                                   14022a94d(W), 
                                                                                                   14022aad0(W), 
                                                                                                   14022ab79(W), 
                                                                                                   14022ac9d(W), 
                                                                                                   14022ad99(W)  
             undefined8        Stack[-0x260   local_260                               XREF[21]:    140228b0a(W), 
                                                                                                   140228bf0(W), 
                                                                                                   140228d19(W), 
                                                                                                   140228d7d(W), 
                                                                                                   1402291b3(W), 
                                                                                                   1402294d5(W), 
                                                                                                   140229603(W), 
                                                                                                   1402298e2(W), 
                                                                                                   140229bd6(W), 
                                                                                                   140229f94(W), 
                                                                                                   14022a04e(W), 
                                                                                                   14022a196(W), 
                                                                                                   14022a2d4(W), 
                                                                                                   14022a67c(W), 
                                                                                                   14022a951(W), 
                                                                                                   14022aad5(W), 
                                                                                                   14022ab84(W), 
                                                                                                   14022aca8(W), 
                                                                                                   14022ad9e(W), 
                                                                                                   14022adf3(W)  
             undefined8        Stack[-0x268   local_268                               XREF[33]:    140228b2f(W), 
                                                                                                   140228b4b(W), 
                                                                                                   140228bf5(W), 
                                                                                                   140228ca3(W), 
                                                                                                   140228d1e(W), 
                                                                                                   140228d82(W), 
                                                                                                   140228e29(W), 
                                                                                                   140228fb6(W), 
                                                                                                   140229152(W), 
                                                                                                   1402291b8(W), 
                                                                                                   1402294da(W), 
                                                                                                   140229608(W), 
                                                                                                   140229681(W), 
                                                                                                   14022986f(W), 
                                                                                                   1402298e7(W), 
                                                                                                   140229bdb(W), 
                                                                                                   140229f99(W), 
                                                                                                   14022a053(W), 
                                                                                                   14022a10b(W), 
                                                                                                   14022a19b(W)  
                             InventoryChanges::RemoveItem                    XREF[15]:    140229bfd(c), 14022abae(c), 
                                                                                          14022acc0(c), 
                                                                                          FUN_14022b3b0:14022b4ea(c), 
                                                                                          FUN_1402344b0:140234604(c), 
                                                                                          FUN_1402346f0:1402349b5(c), 
                                                                                          FUN_1402346f0:140234a6a(c), 
                                                                                          FUN_140234ac0:140234d28(c), 
                                                                                          FUN_140234d80:1402350f4(c), 
                                                                                          FUN_140235140:14023521a(c), 
                                                                                          FUN_140235140:140235489(c), 
                                                                                          FUN_140235a20:140235c62(c), 
                                                                                          TESObjectREFR::RemoveItem:1402e1
                                                                                          Actor::TrapSoul:1406c6c46(c), 
                                                                                          14361f234(*)  
       140228180 4c 89 4c        MOV        qword ptr [RSP + local_res20],p2                                                             RELOCATION_ID(15821, 16059)
                 24 20                                                                                                                   Source: CommonLibSSE headers
       140228185 4c 89 44        MOV        qword ptr [RSP + local_res18],p1
                 24 18
       14022818a 48 89 54        MOV        qword ptr [RSP + local_res10],p0
                 24 10
       14022818f 48 89 4c        MOV        qword ptr [RSP + local_res8],this
                 24 08
       140228194 55              PUSH       RBP
       140228195 53              PUSH       RBX
       140228196 56              PUSH       RSI
       140228197 57              PUSH       RDI
       140228198 41 54           PUSH       R12
       14022819a 41 55           PUSH       R13
       14022819c 41 56           PUSH       R14
       14022819e 41 57           PUSH       R15
       1402281a0 48 8d ac        LEA        RBP=>local_188,[RSP + -0x148]
                 24 b8 fe 
                 ff ff
       1402281a8 48 81 ec        SUB        RSP,0x248
                 48 02 00 00
       1402281af 48 c7 85        MOV        qword ptr [RBP + local_b0],-0x2
                 d8 00 00 
                 00 fe ff 
       1402281ba 49 8b f1        MOV        RSI,p2
       1402281bd 4d 8b e0        MOV        R12,p1
       1402281c0 48 8b d9        MOV        RBX,this
       1402281c3 44 8b 15        MOV        R10D,dword ptr [_tls_index]
                 ae 86 3c 03
       1402281ca 65 48 8b        MOV        RAX,qword ptr GS:[0x58]
                 04 25 58 
                 00 00 00
       1402281d3 ba 68 07        MOV        p0,0x768
                 00 00
       1402281d8 4a 8b 0c d0     MOV        this,qword ptr [RAX + R10*0x8]
       1402281dc 48 89 4d c8     MOV        qword ptr [RBP + local_1c0],this
       1402281e0 8b 04 11        MOV        EAX,dword ptr [this->entryList + p0->__vftable*0x1]
       1402281e3 89 45 90        MOV        dword ptr [RBP + local_1f8],EAX
       1402281e6 c7 04 11        MOV        dword ptr [this->entryList + p0->__vftable*0x1],0x62
                 62 00 00 00
       1402281ed c6 43 18 01     MOV        byte ptr [RBX + 0x18],0x1
       1402281f1 8b 05 a5        MOV        EAX,dword ptr [gNullHandle]
                 e7 ec 01
       1402281f7 89 45 08        MOV        dword ptr [RBP + local_180],EAX
       1402281fa 45 33 ed        XOR        R13D,R13D
       1402281fd 4c 89 6c        MOV        qword ptr [RSP + local_228],R13
                 24 60
       140228202 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       140228207 48 8d 4d 08     LEA        this=>local_180,[RBP + 0x8]
       14022820b e8 00 15        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f5 ff
       140228210 90              NOP
       140228211 48 8b 4b 08     MOV        this,qword ptr [RBX + 0x8]
       140228215 48 85 c9        TEST       this,this
       140228218 74 0a           JZ         LAB_140228224
       14022821a 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022821d 41 8d 55 20     LEA        p0,[R13 + 0x20]
       140228221 ff 50 50        CALL       qword ptr [RAX + 0x50]
                             LAB_140228224                                   XREF[1]:     140228218(j)  
       140228224 48 8b 8d        MOV        this,qword ptr [RBP + p6]
                 c8 01 00 00
       14022822b 48 85 c9        TEST       this,this
       14022822e 74 0b           JZ         LAB_14022823b
       140228230 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       140228233 ba 20 00        MOV        p0,0x20
                 00 00
       140228238 ff 50 50        CALL       qword ptr [RAX + 0x50]
                             LAB_14022823b                                   XREF[1]:     14022822e(j)  
       14022823b 48 8b 4b 08     MOV        this,qword ptr [RBX + 0x8]
       14022823f 48 85 c9        TEST       this,this
       140228242 74 0a           JZ         LAB_14022824e
       140228244 e8 a7 9e        CALL       FUN_1402e20f0                                                                                undefined FUN_1402e20f0()
                 0b 00
       140228249 48 8b f8        MOV        RDI,RAX
       14022824c eb 03           JMP        LAB_140228251
                             LAB_14022824e                                   XREF[1]:     140228242(j)  
       14022824e 49 8b fd        MOV        RDI,R13
                             LAB_140228251                                   XREF[1]:     14022824c(j)  
       140228251 48 8b 03        MOV        RAX,qword ptr [RBX]
       140228254 b2 01           MOV        p0,0x1
       140228256 48 85 c0        TEST       RAX,RAX
       140228259 74 27           JZ         LAB_140228282
       14022825b 0f 1f 44        NOP        dword ptr [RAX + RAX*0x1]
                 00 00
                             LAB_140228260                                   XREF[1]:     140228280(j)  
       140228260 84 d2           TEST       p0,p0
       140228262 0f 84 92        JZ         LAB_1402282fa
                 00 00 00
       140228268 48 8b 08        MOV        this,qword ptr [RAX]
       14022826b 48 85 c9        TEST       this,this
       14022826e 74 09           JZ         LAB_140228279
       140228270 48 39 31        CMP        qword ptr [this->entryList],RSI
       140228273 75 04           JNZ        LAB_140228279
       140228275 32 d2           XOR        p0,p0
       140228277 eb 04           JMP        LAB_14022827d
                             LAB_140228279                                   XREF[2]:     14022826e(j), 140228273(j)  
       140228279 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
                             LAB_14022827d                                   XREF[1]:     140228277(j)  
       14022827d 48 85 c0        TEST       RAX,RAX
       140228280 75 de           JNZ        LAB_140228260
                             LAB_140228282                                   XREF[2]:     140228259(j), 1402282fd(j)  
       140228282 49 8b dd        MOV        RBX,R13
                             LAB_140228285                                   XREF[1]:     140228302(j)  
       140228285 48 89 5d 88     MOV        qword ptr [RBP + local_200],RBX
       140228289 4d 8b fd        MOV        R15,R13
       14022828c 44 88 7d d0     MOV        byte ptr [RBP + local_1b8],R15B
       140228290 49 8b c5        MOV        RAX,R13
       140228293 44 8b b5        MOV        R14D,dword ptr [RBP + p4]
                 b8 01 00 00
       14022829a 4c 3b 25        CMP        R12,qword ptr [DAT_1431874f8]
                 57 f2 f5 02
       1402282a1 75 61           JNZ        LAB_140228304
       1402282a3 41 80 7c        CMP        byte ptr [R12 + 0x1a],0x3e
                 24 1a 3e
       1402282a9 49 0f 44 c4     CMOVZ      RAX,R12
       1402282ad 48 89 45 d8     MOV        qword ptr [RBP + local_1b0],RAX
       1402282b1 48 85 c0        TEST       RAX,RAX
       1402282b4 74 52           JZ         LAB_140228308
       1402282b6 45 85 f6        TEST       R14D,R14D
       1402282b9 0f 84 e6        JZ         LAB_1402283a5
                 00 00 00
       1402282bf 48 8b 88        MOV        this,qword ptr [RAX + 0xf8]
                 f8 00 00 00
       1402282c6 e8 95 58        CALL       FUN_14070db60                                                                                undefined FUN_14070db60()
                 4e 00
       1402282cb 48 85 c0        TEST       RAX,RAX
       1402282ce 74 24           JZ         LAB_1402282f4
       1402282d0 48 8b 4d d8     MOV        this,qword ptr [RBP + local_1b0]
       1402282d4 48 8b 89        MOV        this,qword ptr [this->entryList + 0xf8]
                 f8 00 00 00
       1402282db e8 80 58        CALL       FUN_14070db60                                                                                undefined FUN_14070db60()
                 4e 00
       1402282e0 8b 4d d0        MOV        this,dword ptr [RBP + local_1b8]
       1402282e3 0f b6 c9        MOVZX      this,this
       1402282e6 48 39 30        CMP        qword ptr [RAX],RSI
       1402282e9 b8 01 00        MOV        EAX,0x1
                 00 00
       1402282ee 0f 44 c8        CMOVZ      this,EAX
       1402282f1 89 4d d0        MOV        dword ptr [RBP + local_1b8],this
                             LAB_1402282f4                                   XREF[1]:     1402282ce(j)  
       1402282f4 48 8b 45 d8     MOV        RAX,qword ptr [RBP + local_1b0]
       1402282f8 eb 0e           JMP        LAB_140228308
                             LAB_1402282fa                                   XREF[1]:     140228262(j)  
       1402282fa 48 85 c0        TEST       RAX,RAX
       1402282fd 74 83           JZ         LAB_140228282
       1402282ff 48 8b 18        MOV        RBX,qword ptr [RAX]
       140228302 eb 81           JMP        LAB_140228285
                             LAB_140228304                                   XREF[1]:     1402282a1(j)  
       140228304 48 89 45 d8     MOV        qword ptr [RBP + local_1b0],RAX
                             LAB_140228308                                   XREF[2]:     1402282b4(j), 1402282f8(j)  
       140228308 45 85 f6        TEST       R14D,R14D
       14022830b 0f 84 94        JZ         LAB_1402283a5
                 00 00 00
       140228311 48 85 c0        TEST       RAX,RAX
       140228314 74 41           JZ         LAB_140228357
       140228316 48 85 db        TEST       RBX,RBX
       140228319 74 3c           JZ         LAB_140228357
       14022831b 48 8b cb        MOV        this,RBX
       14022831e e8 4d b0        CALL       FUN_140223370                                                                                undefined FUN_140223370()
                 ff ff
       140228323 8b b5 b0        MOV        ESI,dword ptr [RBP + p3]
                 01 00 00
       140228329 48 85 c0        TEST       RAX,RAX
       14022832c 74 2f           JZ         LAB_14022835d
       14022832e 3b 73 10        CMP        ESI,dword ptr [RBX + 0x10]
       140228331 7c 2a           JL         LAB_14022835d
       140228333 48 8b 85        MOV        RAX,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022833a 80 78 1a 29     CMP        byte ptr [RAX + 0x1a],0x29
       14022833e 75 1d           JNZ        LAB_14022835d
       140228340 ba 01 00        MOV        p0,0x1
                 00 00
       140228345 48 8b 4d d8     MOV        this,qword ptr [RBP + local_1b0]
       140228349 48 8b 89        MOV        this,qword ptr [this->entryList + 0xf8]
                 f8 00 00 00
       140228350 e8 6b 97        CALL       FUN_140711ac0                                                                                undefined FUN_140711ac0()
                 4e 00
       140228355 eb 06           JMP        LAB_14022835d
                             LAB_140228357                                   XREF[2]:     140228314(j), 140228319(j)  
       140228357 8b b5 b0        MOV        ESI,dword ptr [RBP + p3]
                 01 00 00
                             LAB_14022835d                                   XREF[4]:     14022832c(j), 140228331(j), 
                                                                                          14022833e(j), 140228355(j)  
       14022835d 48 8b 85        MOV        RAX,qword ptr [RBP + p5]
                 c0 01 00 00
       140228364 48 85 c0        TEST       RAX,RAX
       140228367 0f 84 e5        JZ         LAB_140228452
                 00 00 00
       14022836d ba 49 00        MOV        p0,0x49
                 00 00
       140228372 48 8b c8        MOV        this,RAX
       140228375 e8 d6 0e        CALL       ExtraDataList::GetExtraData                                                                  undefined ExtraDataList::GetExtraData()
                 f5 ff
       14022837a 48 85 c0        TEST       RAX,RAX
       14022837d 74 26           JZ         LAB_1402283a5
       14022837f 48 8b 8d        MOV        this,qword ptr [RBP + p5]
                 c0 01 00 00
       140228386 e8 d5 6f        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       14022838b 0f bf c8        MOVSX      this,AX
       14022838e 3b f1           CMP        ESI,this
       140228390 48 8b b5        MOV        RSI,qword ptr [RBP + p5]
                 c0 01 00 00
       140228397 75 13           JNZ        LAB_1402283ac
       140228399 b2 ff           MOV        p0,0xff
       14022839b 48 8b ce        MOV        this,RSI
       14022839e e8 0d 5f        CALL       FUN_14015e2b0                                                                                undefined FUN_14015e2b0()
                 f3 ff
       1402283a3 eb 07           JMP        LAB_1402283ac
                             LAB_1402283a5                                   XREF[3]:     1402282b9(j), 14022830b(j), 
                                                                                          14022837d(j)  
       1402283a5 48 8b b5        MOV        RSI,qword ptr [RBP + p5]
                 c0 01 00 00
                             LAB_1402283ac                                   XREF[2]:     140228397(j), 1402283a3(j)  
       1402283ac 48 85 f6        TEST       RSI,RSI
       1402283af 0f 84 9d        JZ         LAB_140228452
                 00 00 00
       1402283b5 48 8b ce        MOV        this,RSI
       1402283b8 e8 93 14        CALL       FUN_140179850                                                                                undefined FUN_140179850()
                 f5 ff
       1402283bd 85 c0           TEST       EAX,EAX
       1402283bf 0f 85 8d        JNZ        LAB_140228452
                 00 00 00
       1402283c5 48 85 db        TEST       RBX,RBX
       1402283c8 74 6c           JZ         LAB_140228436
       1402283ca 48 8b 53 08     MOV        p0,qword ptr [RBX + 0x8]
       1402283ce 48 85 d2        TEST       p0,p0
       1402283d1 74 63           JZ         LAB_140228436
       1402283d3 4c 8b 42 08     MOV        p1,qword ptr [RDX + p0->sourceFiles.array]
       1402283d7 4d 85 c0        TEST       p1,p1
       1402283da 75 05           JNZ        LAB_1402283e1
       1402283dc 4c 39 3a        CMP        qword ptr [p0->__vftable],R15
       1402283df 74 55           JZ         LAB_140228436
                             LAB_1402283e1                                   XREF[1]:     1402283da(j)  
       1402283e1 48 8b ca        MOV        this,p0
       1402283e4 4c 8b ca        MOV        p2,p0
                             LAB_1402283e7                                   XREF[1]:     1402283f6(j)  
       1402283e7 48 39 31        CMP        qword ptr [this->entryList],RSI
       1402283ea 74 0e           JZ         LAB_1402283fa
       1402283ec 4c 8b c9        MOV        p2,this
       1402283ef 48 8b 49 08     MOV        this,qword ptr [RCX + this->owner]
       1402283f3 48 85 c9        TEST       this,this
       1402283f6 75 ef           JNZ        LAB_1402283e7
       1402283f8 eb 3c           JMP        LAB_140228436
                             LAB_1402283fa                                   XREF[1]:     1402283ea(j)  
       1402283fa 48 3b ca        CMP        this,p0
       1402283fd 75 21           JNZ        LAB_140228420
       1402283ff 4d 85 c0        TEST       p1,p1
       140228402 74 17           JZ         LAB_14022841b
       140228404 49 8b 40 08     MOV        RAX,qword ptr [R8 + p1->sourceFiles.array]
       140228408 48 89 42 08     MOV        qword ptr [RDX + p0->sourceFiles.array],RAX
       14022840c 49 8b 00        MOV        RAX,qword ptr [p1->__vftable]
       14022840f 48 89 02        MOV        qword ptr [p0->__vftable],RAX
       140228412 4d 89 68 08     MOV        qword ptr [R8 + p1->sourceFiles.array],R13
       140228416 49 8b c8        MOV        this,p1
       140228419 eb 11           JMP        LAB_14022842c
                             LAB_14022841b                                   XREF[1]:     140228402(j)  
       14022841b 4c 89 2a        MOV        qword ptr [p0->__vftable],R13
       14022841e eb 16           JMP        LAB_140228436
                             LAB_140228420                                   XREF[1]:     1402283fd(j)  
       140228420 48 8b 41 08     MOV        RAX,qword ptr [RCX + this->owner]
       140228424 49 89 41 08     MOV        qword ptr [p2 + 0x8],RAX
       140228428 4c 89 69 08     MOV        qword ptr [RCX + this->owner],R13
                             LAB_14022842c                                   XREF[1]:     140228419(j)  
       14022842c ba 01 00        MOV        p0,0x1
                 00 00
       140228431 e8 3a 94        CALL       FUN_1401c1870                                                                                undefined FUN_1401c1870()
                 f9 ff
                             LAB_140228436                                   XREF[5]:     1402283c8(j), 1402283d1(j), 
                                                                                          1402283df(j), 1402283f8(j), 
                                                                                          14022841e(j)  
       140228436 48 8b ce        MOV        this,RSI
       140228439 e8 a2 9a        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       14022843e ba 20 00        MOV        p0,0x20
                 00 00
       140228443 48 8b ce        MOV        this,RSI
       140228446 e8 41 27        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       14022844b 4c 89 ad        MOV        qword ptr [RBP + p5],R13
                 c0 01 00 00
                             LAB_140228452                                   XREF[3]:     140228367(j), 1402283af(j), 
                                                                                          1402283bf(j)  
       140228452 41 8b c5        MOV        EAX,R13D
       140228455 4d 85 e4        TEST       R12,R12
       140228458 74 19           JZ         LAB_140228473
       14022845a 48 85 ff        TEST       RDI,RDI
       14022845d 74 11           JZ         LAB_140228470
       14022845f 48 8b 95        MOV        p0,qword ptr [RBP + local_res20]
                 a8 01 00 00
       140228466 48 8b cf        MOV        this,RDI
       140228469 e8 e2 2f        CALL       FUN_1401db450                                                                                undefined FUN_1401db450()
                 fb ff
       14022846e eb 03           JMP        LAB_140228473
                             LAB_140228470                                   XREF[1]:     14022845d(j)  
       140228470 41 8b c5        MOV        EAX,R13D
                             LAB_140228473                                   XREF[2]:     140228458(j), 14022846e(j)  
       140228473 8b c8           MOV        this,EAX
       140228475 85 c0           TEST       EAX,EAX
       140228477 41 0f 49 cd     CMOVNS     this,R13D
       14022847b 89 4d 14        MOV        dword ptr [RBP + local_174],this
       14022847e 99              CDQ
       14022847f 44 8b c0        MOV        p1,EAX
       140228482 44 33 c2        XOR        p1,p0
       140228485 44 2b c2        SUB        p1,p0
       140228488 44 89 45 b0     MOV        dword ptr [RBP + local_1d8],p1
       14022848c 79 4c           JNS        LAB_1402284da
       14022848e 48 8b 8d        MOV        this,qword ptr [RBP + p6]
                 c8 01 00 00
       140228495 48 3b 0d        CMP        this,qword ptr [DAT_1431874f8]
                 5c f0 f5 02
       14022849c 74 3c           JZ         LAB_1402284da
       14022849e 8b 05 f8        MOV        EAX,dword ptr [gNullHandle]
                 e4 ec 01
       1402284a4 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       1402284ab 89 03           MOV        dword ptr [RBX],EAX
       1402284ad 48 8b 44        MOV        RAX,qword ptr [RSP + local_228]
                 24 60
       1402284b2 48 85 c0        TEST       RAX,RAX
       1402284b5 74 1e           JZ         LAB_1402284d5
       1402284b7 48 8d 48 20     LEA        this,[RAX + 0x20]
       1402284bb b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       1402284c0 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       1402284c5 ff c8           DEC        EAX
       1402284c7 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       1402284cc 75 07           JNZ        LAB_1402284d5
       1402284ce 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       1402284d1 ff 50 08        CALL       qword ptr [RAX + 0x8]
       1402284d4 90              NOP
                             LAB_1402284d5                                   XREF[2]:     1402284b5(j), 1402284cc(j)  
       1402284d5 e9 d3 2d        JMP        LAB_14022b2ad
                 00 00
                             LAB_1402284da                                   XREF[2]:     14022848c(j), 14022849c(j)  
       1402284da 48 85 db        TEST       RBX,RBX
       1402284dd 0f 84 bb        JZ         LAB_14022859e
                 00 00 00
       1402284e3 8b 43 10        MOV        EAX,dword ptr [RBX + 0x10]
       1402284e6 85 c0           TEST       EAX,EAX
       1402284e8 74 09           JZ         LAB_1402284f3
       1402284ea 41 03 c0        ADD        EAX,p1
       1402284ed 0f 84 b4        JZ         LAB_1402285a7
                 00 00 00
                             LAB_1402284f3                                   XREF[2]:     1402284e8(j), 1402285a1(j)  
       1402284f3 4c 89 6d 50     MOV        qword ptr [RBP + local_138],R13
       1402284f7 32 c0           XOR        AL,AL
       1402284f9 88 45 80        MOV        byte ptr [RBP + local_208],AL
       1402284fc 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140228501 48 85 db        TEST       RBX,RBX
       140228504 0f 84 67        JZ         LAB_14022ad71
                 28 00 00
       14022850a 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
       14022850f 90              NOP
                             LAB_140228510                                   XREF[1]:     14022a7c2(j)  
       140228510 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
       140228516 85 db           TEST       EBX,EBX
       140228518 0f 8e 28        JLE        LAB_14022ad46
                 28 00 00
       14022851e 48 8b 75 88     MOV        RSI,qword ptr [RBP + local_200]
       140228522 48 89 75 98     MOV        qword ptr [RBP + local_1f0],RSI
       140228526 8b 56 10        MOV        p0,dword ptr [RSI + 0x10]
       140228529 41 03 d0        ADD        p0,p1
       14022852c 85 d2           TEST       p0,p0
       14022852e 0f 8e 12        JLE        LAB_14022ad46
                 28 00 00
       140228534 4d 85 ff        TEST       R15,R15
       140228537 74 15           JZ         LAB_14022854e
       140228539 49 8b cf        MOV        this,R15
       14022853c e8 df a2        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       140228541 ba 18 00        MOV        p0,0x18
                 00 00
       140228546 49 8b cf        MOV        this,R15
       140228549 e8 3e 26        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
                             LAB_14022854e                                   XREF[1]:     140228537(j)  
       14022854e 83 3d 7b        CMP        dword ptr [gMemoryManagerState],0x2
                 8c 3c 03 02
       140228555 74 13           JZ         LAB_14022856a
       140228557 48 8d 15        LEA        p0,[gMemoryManagerState]
                 72 8c 3c 03
       14022855e 48 8d 0d        LEA        this,[gMemoryManager]
                 7b 8c 3c 03
       140228565 e8 16 c1        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_14022856a                                   XREF[1]:     140228555(j)  
       14022856a 45 33 c9        XOR        p2,p2
       14022856d 45 33 c0        XOR        p1,p1
       140228570 41 8d 51 18     LEA        p0,[p2 + 0x18]
       140228574 48 8d 0d        LEA        this,[gMemoryManager]
                 65 8c 3c 03
       14022857b e8 40 bb        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       140228580 4c 8b f8        MOV        R15,RAX
       140228583 48 89 44        MOV        qword ptr [RSP + local_210],RAX
                 24 78
       140228588 48 89 45 b8     MOV        qword ptr [RBP + local_1d0],RAX
       14022858c 48 85 c0        TEST       RAX,RAX
       14022858f 74 52           JZ         LAB_1402285e3
       140228591 4c 89 28        MOV        qword ptr [RAX],R13
       140228594 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       140228598 44 89 68 10     MOV        dword ptr [RAX + 0x10],R13D
       14022859c eb 4d           JMP        LAB_1402285eb
                             LAB_14022859e                                   XREF[1]:     1402284dd(j)  
       14022859e 45 85 c0        TEST       p1,p1
       1402285a1 0f 85 4c        JNZ        LAB_1402284f3
                 ff ff ff
                             LAB_1402285a7                                   XREF[1]:     1402284ed(j)  
       1402285a7 8b 05 ef        MOV        EAX,dword ptr [gNullHandle]
                 e3 ec 01
       1402285ad 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       1402285b4 89 03           MOV        dword ptr [RBX],EAX
       1402285b6 48 8b 44        MOV        RAX,qword ptr [RSP + local_228]
                 24 60
       1402285bb 48 85 c0        TEST       RAX,RAX
       1402285be 74 1e           JZ         LAB_1402285de
       1402285c0 48 8d 48 20     LEA        this,[RAX + 0x20]
       1402285c4 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       1402285c9 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       1402285ce ff c8           DEC        EAX
       1402285d0 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       1402285d5 75 07           JNZ        LAB_1402285de
       1402285d7 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       1402285da ff 50 08        CALL       qword ptr [RAX + 0x8]
       1402285dd 90              NOP
                             LAB_1402285de                                   XREF[2]:     1402285be(j), 1402285d5(j)  
       1402285de e9 ca 2c        JMP        LAB_14022b2ad
                 00 00
                             LAB_1402285e3                                   XREF[1]:     14022858f(j)  
       1402285e3 4d 8b fd        MOV        R15,R13
       1402285e6 4c 89 6c        MOV        qword ptr [RSP + local_210],R13
                 24 78
                             LAB_1402285eb                                   XREF[1]:     14022859c(j)  
       1402285eb 48 8b 55 88     MOV        p0,qword ptr [RBP + local_200]
       1402285ef 48 89 55 a0     MOV        qword ptr [RBP + local_1e8],p0
       1402285f3 48 8b 02        MOV        RAX,qword ptr [p0->__vftable]
       1402285f6 49 89 07        MOV        qword ptr [R15],RAX
       1402285f9 48 8b 42 08     MOV        RAX,qword ptr [RDX + p0->sourceFiles.array]
       1402285fd 48 89 45 a8     MOV        qword ptr [RBP + local_1e0],RAX
       140228601 41 b4 01        MOV        R12B,0x1
       140228604 4c 8b b5        MOV        R14,qword ptr [RBP + p5]
                 c0 01 00 00
       14022860b 4d 85 f6        TEST       R14,R14
       14022860e 0f 84 b2        JZ         LAB_1402292c6
                 0c 00 00
       140228614 49 8d 5e 18     LEA        RBX,[R14 + 0x18]
       140228618 48 89 9d        MOV        qword ptr [RBP + local_a8],RBX
                 e0 00 00 00
       14022861f 48 8b cb        MOV        this,RBX
       140228622 e8 99 0a        CALL       BSReadWriteLock::LockForRead                                                                 void BSReadWriteLock::LockForRead(BSReadWriteLock * this)
                 aa 00
       140228627 90              NOP
       140228628 49 8b ce        MOV        this,R14
       14022862b e8 f0 97        CALL       FUN_140151e20                                                                                undefined FUN_140151e20()
                 f2 ff
       140228630 8b f0           MOV        ESI,EAX
       140228632 48 85 db        TEST       RBX,RBX
       140228635 74 09           JZ         LAB_140228640
       140228637 48 8b cb        MOV        this,RBX
       14022863a e8 41 0d        CALL       BSReadWriteLock::UnlockForRead                                                               undefined BSReadWriteLock::UnlockForRead()
                 aa 00
       14022863f 90              NOP
                             LAB_140228640                                   XREF[1]:     140228635(j)  
       140228640 85 f6           TEST       ESI,ESI
       140228642 0f 84 76        JZ         LAB_1402292be
                 0c 00 00
       140228648 48 8b 45 a8     MOV        RAX,qword ptr [RBP + local_1e0]
       14022864c 48 85 c0        TEST       RAX,RAX
       14022864f 0f 84 69        JZ         LAB_1402292be
                 0c 00 00
       140228655 48 83 38 00     CMP        qword ptr [RAX],0x0
       140228659 0f 84 5f        JZ         LAB_1402292be
                 0c 00 00
       14022865f 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
       140228665 48 8b 8d        MOV        this,qword ptr [RBP + p5]
                 c0 01 00 00
       14022866c 0f 1f 40 00     NOP        dword ptr [RAX]
                             LAB_140228670                                   XREF[2]:     14022929e(j), 1402292b9(j)  
       140228670 4c 8b 30        MOV        R14,qword ptr [RAX]
       140228673 4d 85 f6        TEST       R14,R14
       140228676 0f 84 1d        JZ         LAB_14022a799
                 21 00 00
       14022867c 45 84 e4        TEST       R12B,R12B
       14022867f 0f 84 14        JZ         LAB_14022a799
                 21 00 00
       140228685 49 3b ce        CMP        this,R14
       140228688 74 0d           JZ         LAB_140228697
       14022868a 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
       14022868e 48 89 45 a8     MOV        qword ptr [RBP + local_1e0],RAX
       140228692 e9 f6 0b        JMP        LAB_14022928d
                 00 00
                             LAB_140228697                                   XREF[1]:     140228688(j)  
       140228697 4c 89 ad        MOV        qword ptr [RBP + p5],R13
                 c0 01 00 00
       14022869e c6 44 24        MOV        byte ptr [RSP + local_220],0x0
                 68 00
       1402286a3 49 8b ce        MOV        this,R14
       1402286a6 e8 b5 6c        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       1402286ab 44 0f bf e0     MOVSX      R12D,AX
       1402286af 44 89 65 c0     MOV        dword ptr [RBP + local_1c8],R12D
       1402286b3 45 33 c0        XOR        p1,p1
       1402286b6 b2 01           MOV        p0,0x1
       1402286b8 49 8b ce        MOV        this,R14
       1402286bb e8 e0 69        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       1402286c0 84 c0           TEST       AL,AL
       1402286c2 74 13           JZ         LAB_1402286d7
       1402286c4 49 8b ce        MOV        this,R14
       1402286c7 e8 94 6c        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       1402286cc 0f bf c8        MOVSX      this,AX
       1402286cf 3b cb           CMP        this,EBX
       1402286d1 0f 8e 75        JLE        LAB_14022a84c
                 21 00 00
                             LAB_1402286d7                                   XREF[1]:     1402286c2(j)  
       1402286d7 44 3b e3        CMP        R12D,EBX
       1402286da 0f 8f 05        JG         LAB_1402287e5
                 01 00 00
       1402286e0 49 8b ce        MOV        this,R14
       1402286e3 e8 b8 6b        CALL       FUN_14015f2a0                                                                                undefined FUN_14015f2a0()
                 f3 ff
       1402286e8 48 85 c0        TEST       RAX,RAX
       1402286eb 0f 85 f4        JNZ        LAB_1402287e5
                 00 00 00
       1402286f1 48 8b 45 98     MOV        RAX,qword ptr [RBP + local_1f0]
       1402286f5 44 29 60 10     SUB        dword ptr [RAX + 0x10],R12D
       1402286f9 45 01 67 10     ADD        dword ptr [R15 + 0x10],R12D
       1402286fd 49 8b f6        MOV        RSI,R14
       140228700 41 2b dc        SUB        EBX,R12D
       140228703 89 9d b0        MOV        dword ptr [RBP + p3],EBX
                 01 00 00
       140228709 48 8b 5d a0     MOV        RBX,qword ptr [RBP + local_1e8]
       14022870d 48 8b 53 08     MOV        p0,qword ptr [RBX + 0x8]
       140228711 4d 85 f6        TEST       R14,R14
       140228714 0f 84 a1        JZ         LAB_1402287bb
                 00 00 00
       14022871a 4c 8b 4a 08     MOV        p2,qword ptr [RDX + p0->sourceFiles.array]
       14022871e 4d 85 c9        TEST       p2,p2
       140228721 75 05           JNZ        LAB_140228728
       140228723 4c 39 0a        CMP        qword ptr [p0->__vftable],p2
       140228726 74 57           JZ         LAB_14022877f
                             LAB_140228728                                   XREF[1]:     140228721(j)  
       140228728 48 8b ca        MOV        this,p0
       14022872b 4c 8b c2        MOV        p1,p0
       14022872e 66 90           NOP
                             LAB_140228730                                   XREF[1]:     14022873f(j)  
       140228730 4c 39 31        CMP        qword ptr [this->entryList],R14
       140228733 74 0e           JZ         LAB_140228743
       140228735 4c 8b c1        MOV        p1,this
       140228738 48 8b 49 08     MOV        this,qword ptr [RCX + this->owner]
       14022873c 48 85 c9        TEST       this,this
       14022873f 75 ef           JNZ        LAB_140228730
       140228741 eb 3c           JMP        LAB_14022877f
                             LAB_140228743                                   XREF[1]:     140228733(j)  
       140228743 48 3b ca        CMP        this,p0
       140228746 75 21           JNZ        LAB_140228769
       140228748 4d 85 c9        TEST       p2,p2
       14022874b 74 17           JZ         LAB_140228764
       14022874d 49 8b 41 08     MOV        RAX,qword ptr [p2 + 0x8]
       140228751 48 89 42 08     MOV        qword ptr [RDX + p0->sourceFiles.array],RAX
       140228755 49 8b 01        MOV        RAX,qword ptr [p2]
       140228758 48 89 02        MOV        qword ptr [p0->__vftable],RAX
       14022875b 4d 89 69 08     MOV        qword ptr [p2 + 0x8],R13
       14022875f 49 8b c9        MOV        this,p2
       140228762 eb 11           JMP        LAB_140228775
                             LAB_140228764                                   XREF[1]:     14022874b(j)  
       140228764 4c 89 2a        MOV        qword ptr [p0->__vftable],R13
       140228767 eb 16           JMP        LAB_14022877f
                             LAB_140228769                                   XREF[1]:     140228746(j)  
       140228769 48 8b 41 08     MOV        RAX,qword ptr [RCX + this->owner]
       14022876d 49 89 40 08     MOV        qword ptr [R8 + p1->sourceFiles.array],RAX
       140228771 4c 89 69 08     MOV        qword ptr [RCX + this->owner],R13
                             LAB_140228775                                   XREF[1]:     140228762(j)  
       140228775 ba 01 00        MOV        p0,0x1
                 00 00
       14022877a e8 f1 90        CALL       FUN_1401c1870                                                                                undefined FUN_1401c1870()
                 f9 ff
                             LAB_14022877f                                   XREF[3]:     140228726(j), 140228741(j), 
                                                                                          140228767(j)  
       14022877f 49 8b ce        MOV        this,R14
       140228782 e8 29 5c        CALL       FUN_14015e3b0                                                                                undefined FUN_14015e3b0()
                 f3 ff
       140228787 84 c0           TEST       AL,AL
       140228789 74 30           JZ         LAB_1402287bb
       14022878b 4c 8b 45 98     MOV        p1,qword ptr [RBP + local_1f0]
       14022878f 8b 4d b0        MOV        this,dword ptr [RBP + local_1d8]
       140228792 41 03 48 10     ADD        this,dword ptr [R8 + p1->formFlags]
       140228796 85 c9           TEST       this,this
       140228798 7e 21           JLE        LAB_1402287bb
       14022879a 48 8b 43 08     MOV        RAX,qword ptr [RBX + 0x8]
       14022879e 48 85 c0        TEST       RAX,RAX
       1402287a1 74 05           JZ         LAB_1402287a8
       1402287a3 4c 8b 00        MOV        p1,qword ptr [RAX]
       1402287a6 eb 03           JMP        LAB_1402287ab
                             LAB_1402287a8                                   XREF[1]:     1402287a1(j)  
       1402287a8 4d 8b c5        MOV        p1,R13
                             LAB_1402287ab                                   XREF[1]:     1402287a6(j)  
       1402287ab 48 8b 55 88     MOV        p0,qword ptr [RBP + local_200]
       1402287af 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       1402287b6 e8 a5 94        CALL       InventoryChanges::SetFavorite                                                                void InventoryChanges::SetFavorite(InventoryChanges * this, InventoryEntryD
                 00 00
                             LAB_1402287bb                                   XREF[3]:     140228714(j), 140228789(j), 
                                                                                          140228798(j)  
       1402287bb 4d 8b f5        MOV        R14,R13
       1402287be 4c 39 6e 08     CMP        qword ptr [RSI + 0x8],R13
       1402287c2 0f 85 6d        JNZ        LAB_140228935
                 01 00 00
       1402287c8 48 8b ce        MOV        this,RSI
       1402287cb e8 10 97        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       1402287d0 ba 20 00        MOV        p0,0x20
                 00 00
       1402287d5 48 8b ce        MOV        this,RSI
       1402287d8 e8 af 23        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       1402287dd 49 8b f5        MOV        RSI,R13
       1402287e0 e9 50 01        JMP        LAB_140228935
                 00 00
                             LAB_1402287e5                                   XREF[2]:     1402286da(j), 1402286eb(j)  
       1402287e5 49 8b ce        MOV        this,R14
       1402287e8 e8 b3 6a        CALL       FUN_14015f2a0                                                                                undefined FUN_14015f2a0()
                 f3 ff
       1402287ed 48 89 45 50     MOV        qword ptr [RBP + local_138],RAX
       1402287f1 49 8b ce        MOV        this,R14
       1402287f4 e8 b7 6a        CALL       FUN_14015f2b0                                                                                undefined FUN_14015f2b0()
                 f3 ff
       1402287f9 49 8b ce        MOV        this,R14
       1402287fc 84 c0           TEST       AL,AL
       1402287fe 74 18           JZ         LAB_140228818
       140228800 48 8b 75 98     MOV        RSI,qword ptr [RBP + local_1f0]
       140228804 41 3b dc        CMP        EBX,R12D
       140228807 75 0a           JNZ        LAB_140228813
       140228809 44 29 66 10     SUB        dword ptr [RSI + 0x10],R12D
       14022880d 66 41 f7 dc     NEG        R12W
       140228811 eb 10           JMP        LAB_140228823
                             LAB_140228813                                   XREF[1]:     140228807(j)  
       140228813 29 5e 10        SUB        dword ptr [RSI + 0x10],EBX
       140228816 eb 07           JMP        LAB_14022881f
                             LAB_140228818                                   XREF[1]:     1402287fe(j)  
       140228818 48 8b 45 98     MOV        RAX,qword ptr [RBP + local_1f0]
       14022881c 29 58 10        SUB        dword ptr [RAX + 0x10],EBX
                             LAB_14022881f                                   XREF[1]:     140228816(j)  
       14022881f 66 44 2b e3     SUB        R12W,BX
                             LAB_140228823                                   XREF[1]:     140228811(j)  
       140228823 41 0f b7 d4     MOVZX      p0,R12W
       140228827 e8 a4 29        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       14022882c 83 3d 9d        CMP        dword ptr [gMemoryManagerState],0x2
                 89 3c 03 02
       140228833 74 13           JZ         LAB_140228848
       140228835 48 8d 15        LEA        p0,[gMemoryManagerState]
                 94 89 3c 03
       14022883c 48 8d 0d        LEA        this,[gMemoryManager]
                 9d 89 3c 03
       140228843 e8 38 be        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140228848                                   XREF[1]:     140228833(j)  
       140228848 45 33 c9        XOR        p2,p2
       14022884b 45 33 c0        XOR        p1,p1
       14022884e 41 8d 51 20     LEA        p0,[p2 + 0x20]
       140228852 48 8d 0d        LEA        this,[gMemoryManager]
                 87 89 3c 03
       140228859 e8 62 b8        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       14022885e 48 89 85        MOV        qword ptr [RBP + local_a0],RAX
                 e8 00 00 00
       140228865 48 85 c0        TEST       RAX,RAX
       140228868 74 0d           JZ         LAB_140228877
       14022886a 48 8b c8        MOV        this,RAX
       14022886d e8 1e 96        CALL       ExtraDataList::ctor                                                                          undefined ExtraDataList::ctor()
                 f2 ff
       140228872 48 8b f0        MOV        RSI,RAX
       140228875 eb 03           JMP        LAB_14022887a
                             LAB_140228877                                   XREF[1]:     140228868(j)  
       140228877 49 8b f5        MOV        RSI,R13
                             LAB_14022887a                                   XREF[1]:     140228875(j)  
       14022887a 45 33 c0        XOR        p1,p1
       14022887d 49 8b d6        MOV        p0,R14
       140228880 48 8b ce        MOV        this,RSI
       140228883 e8 d8 c4        CALL       FUN_140154d60                                                                                undefined FUN_140154d60()
                 f2 ff
       140228888 48 8b ce        MOV        this,RSI
       14022888b e8 80 0e        CALL       FUN_140169710                                                                                undefined FUN_140169710()
                 f4 ff
       140228890 0f b7 d3        MOVZX      p0,BX
       140228893 48 8b ce        MOV        this,RSI
       140228896 e8 35 29        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       14022889b 48 8d 5e 18     LEA        RBX,[RSI + 0x18]
       14022889f 48 89 9d        MOV        qword ptr [RBP + local_98],RBX
                 f0 00 00 00
       1402288a6 48 8b cb        MOV        this,RBX
       1402288a9 e8 12 08        CALL       BSReadWriteLock::LockForRead                                                                 void BSReadWriteLock::LockForRead(BSReadWriteLock * this)
                 aa 00
       1402288ae 90              NOP
       1402288af 48 8b ce        MOV        this,RSI
       1402288b2 e8 69 95        CALL       FUN_140151e20                                                                                undefined FUN_140151e20()
                 f2 ff
       1402288b7 44 8b f8        MOV        R15D,EAX
       1402288ba 48 85 db        TEST       RBX,RBX
       1402288bd 74 09           JZ         LAB_1402288c8
       1402288bf 48 8b cb        MOV        this,RBX
       1402288c2 e8 b9 0a        CALL       BSReadWriteLock::UnlockForRead                                                               undefined BSReadWriteLock::UnlockForRead()
                 aa 00
       1402288c7 90              NOP
                             LAB_1402288c8                                   XREF[1]:     1402288bd(j)  
       1402288c8 41 83 ff 01     CMP        R15D,0x1
       1402288cc 75 0e           JNZ        LAB_1402288dc
       1402288ce 48 8b ce        MOV        this,RSI
       1402288d1 e8 8a 6a        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       1402288d6 66 41 3b c7     CMP        AX,R15W
       1402288da 7f 2e           JG         LAB_14022890a
                             LAB_1402288dc                                   XREF[1]:     1402288cc(j)  
       1402288dc 48 89 9d        MOV        qword ptr [RBP + local_58],RBX
                 30 01 00 00
       1402288e3 48 8b cb        MOV        this,RBX
       1402288e6 e8 d5 07        CALL       BSReadWriteLock::LockForRead                                                                 void BSReadWriteLock::LockForRead(BSReadWriteLock * this)
                 aa 00
       1402288eb 90              NOP
       1402288ec 48 8b ce        MOV        this,RSI
       1402288ef e8 2c 95        CALL       FUN_140151e20                                                                                undefined FUN_140151e20()
                 f2 ff
       1402288f4 44 8b f8        MOV        R15D,EAX
       1402288f7 48 85 db        TEST       RBX,RBX
       1402288fa 74 09           JZ         LAB_140228905
       1402288fc 48 8b cb        MOV        this,RBX
       1402288ff e8 7c 0a        CALL       BSReadWriteLock::UnlockForRead                                                               undefined BSReadWriteLock::UnlockForRead()
                 aa 00
       140228904 90              NOP
                             LAB_140228905                                   XREF[1]:     1402288fa(j)  
       140228905 45 85 ff        TEST       R15D,R15D
       140228908 75 1d           JNZ        LAB_140228927
                             LAB_14022890a                                   XREF[1]:     1402288da(j)  
       14022890a 48 85 f6        TEST       RSI,RSI
       14022890d 74 15           JZ         LAB_140228924
       14022890f 48 8b ce        MOV        this,RSI
       140228912 e8 c9 95        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       140228917 ba 20 00        MOV        p0,0x20
                 00 00
       14022891c 48 8b ce        MOV        this,RSI
       14022891f e8 68 22        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
                             LAB_140228924                                   XREF[1]:     14022890d(j)  
       140228924 49 8b f5        MOV        RSI,R13
                             LAB_140228927                                   XREF[1]:     140228908(j)  
       140228927 44 8b a5        MOV        R12D,dword ptr [RBP + p3]
                 b0 01 00 00
       14022892e 44 89 ad        MOV        dword ptr [RBP + p3],R13D
                 b0 01 00 00
                             LAB_140228935                                   XREF[2]:     1402287c2(j), 1402287e0(j)  
       140228935 48 85 f6        TEST       RSI,RSI
       140228938 74 3a           JZ         LAB_140228974
       14022893a 45 33 c0        XOR        p1,p1
       14022893d b2 01           MOV        p0,0x1
       14022893f 48 8b ce        MOV        this,RSI
       140228942 e8 59 67        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       140228947 84 c0           TEST       AL,AL
       140228949 74 5a           JZ         LAB_1402289a5
       14022894b 33 d2           XOR        p0,p0
       14022894d 48 8b ce        MOV        this,RSI
       140228950 e8 4b 09        CALL       FUN_1401692a0                                                                                undefined FUN_1401692a0()
                 f4 ff
       140228955 48 83 7e        CMP        qword ptr [RSI + 0x8],0x0
                 08 00
       14022895a 75 49           JNZ        LAB_1402289a5
       14022895c 48 8b ce        MOV        this,RSI
       14022895f e8 7c 95        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       140228964 ba 20 00        MOV        p0,0x20
                 00 00
       140228969 48 8b ce        MOV        this,RSI
       14022896c e8 1b 22        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       140228971 49 8b f5        MOV        RSI,R13
                             LAB_140228974                                   XREF[2]:     140228938(j), 1402289d5(j)  
       140228974 4c 8b 7c        MOV        R15,qword ptr [RSP + local_210]
                 24 78
                             LAB_140228979                                   XREF[2]:     140228a90(j), 140228aa7(j)  
       140228979 83 bd b8        CMP        dword ptr [RBP + p4],0x3
                 01 00 00 03
       140228980 0f 85 80        JNZ        LAB_140228f06
                 05 00 00
       140228986 48 85 f6        TEST       RSI,RSI
       140228989 0f 84 1d        JZ         LAB_140228aac
                 01 00 00
       14022898f 48 8d 95        LEA        p0=>local_f0,[RBP + 0x98]
                 98 00 00 00
       140228996 48 8b ce        MOV        this,RSI
       140228999 e8 52 6d        CALL       ExtraDataList::GetReferenceHandle                                                            undefined ExtraDataList::GetReferenceHandle()
                 f3 ff
       14022899e 8b 08           MOV        this,dword ptr [RAX]
       1402289a0 e9 0d 01        JMP        LAB_140228ab2
                 00 00
                             LAB_1402289a5                                   XREF[2]:     140228949(j), 14022895a(j)  
       1402289a5 48 8d 5e 18     LEA        RBX,[RSI + 0x18]
       1402289a9 48 89 9d        MOV        qword ptr [RBP + local_90],RBX
                 f8 00 00 00
       1402289b0 48 8b cb        MOV        this,RBX
       1402289b3 e8 08 07        CALL       BSReadWriteLock::LockForRead                                                                 void BSReadWriteLock::LockForRead(BSReadWriteLock * this)
                 aa 00
       1402289b8 90              NOP
       1402289b9 48 8b ce        MOV        this,RSI
       1402289bc e8 5f 94        CALL       FUN_140151e20                                                                                undefined FUN_140151e20()
                 f2 ff
       1402289c1 44 8b f8        MOV        R15D,EAX
       1402289c4 48 85 db        TEST       RBX,RBX
       1402289c7 74 09           JZ         LAB_1402289d2
       1402289c9 48 8b cb        MOV        this,RBX
       1402289cc e8 af 09        CALL       BSReadWriteLock::UnlockForRead                                                               undefined BSReadWriteLock::UnlockForRead()
                 aa 00
       1402289d1 90              NOP
                             LAB_1402289d2                                   XREF[1]:     1402289c7(j)  
       1402289d2 45 85 ff        TEST       R15D,R15D
       1402289d5 74 9d           JZ         LAB_140228974
       1402289d7 4c 8b 7c        MOV        R15,qword ptr [RSP + local_210]
                 24 78
       1402289dc 49 8b 5f 08     MOV        RBX,qword ptr [R15 + 0x8]
       1402289e0 48 85 db        TEST       RBX,RBX
       1402289e3 75 4e           JNZ        LAB_140228a33
       1402289e5 83 3d e4        CMP        dword ptr [gMemoryManagerState],0x2
                 87 3c 03 02
       1402289ec 74 13           JZ         LAB_140228a01
       1402289ee 48 8d 15        LEA        p0,[gMemoryManagerState]
                 db 87 3c 03
       1402289f5 48 8d 0d        LEA        this,[gMemoryManager]
                 e4 87 3c 03
       1402289fc e8 7f bc        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140228a01                                   XREF[1]:     1402289ec(j)  
       140228a01 45 33 c9        XOR        p2,p2
       140228a04 45 33 c0        XOR        p1,p1
       140228a07 41 8d 51 10     LEA        p0,[p2 + 0x10]
       140228a0b 48 8d 0d        LEA        this,[gMemoryManager]
                 ce 87 3c 03
       140228a12 e8 a9 b6        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       140228a17 48 8b d8        MOV        RBX,RAX
       140228a1a 48 89 45 b8     MOV        qword ptr [RBP + local_1d0],RAX
       140228a1e 48 85 c0        TEST       RAX,RAX
       140228a21 74 09           JZ         LAB_140228a2c
       140228a23 4c 89 28        MOV        qword ptr [RAX],R13
       140228a26 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       140228a2a eb 03           JMP        LAB_140228a2f
                             LAB_140228a2c                                   XREF[1]:     140228a21(j)  
       140228a2c 49 8b dd        MOV        RBX,R13
                             LAB_140228a2f                                   XREF[1]:     140228a2a(j)  
       140228a2f 49 89 5f 08     MOV        qword ptr [R15 + 0x8],RBX
                             LAB_140228a33                                   XREF[1]:     1402289e3(j)  
       140228a33 48 83 3b 00     CMP        qword ptr [RBX],0x0
       140228a37 74 6b           JZ         LAB_140228aa4
       140228a39 83 3d 90        CMP        dword ptr [gMemoryManagerState],0x2
                 87 3c 03 02
       140228a40 74 13           JZ         LAB_140228a55
       140228a42 48 8d 15        LEA        p0,[gMemoryManagerState]
                 87 87 3c 03
       140228a49 48 8d 0d        LEA        this,[gMemoryManager]
                 90 87 3c 03
       140228a50 e8 2b bc        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140228a55                                   XREF[1]:     140228a40(j)  
       140228a55 45 33 c9        XOR        p2,p2
       140228a58 45 33 c0        XOR        p1,p1
       140228a5b 41 8d 51 10     LEA        p0,[p2 + 0x10]
       140228a5f 48 8d 0d        LEA        this,[gMemoryManager]
                 7a 87 3c 03
       140228a66 e8 55 b6        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       140228a6b 48 8b d0        MOV        p0,RAX
       140228a6e 48 89 45 b8     MOV        qword ptr [RBP + local_1d0],RAX
       140228a72 48 85 c0        TEST       RAX,RAX
       140228a75 74 1e           JZ         LAB_140228a95
       140228a77 48 8b 0b        MOV        this,qword ptr [RBX]
       140228a7a 48 89 08        MOV        qword ptr [RAX],this
       140228a7d 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       140228a81 48 8b 43 08     MOV        RAX,qword ptr [RBX + 0x8]
       140228a85 48 89 42 08     MOV        qword ptr [RDX + p0->sourceFiles.array],RAX
       140228a89 48 89 53 08     MOV        qword ptr [RBX + 0x8],p0
       140228a8d 48 89 33        MOV        qword ptr [RBX],RSI
       140228a90 e9 e4 fe        JMP        LAB_140228979
                 ff ff
                             LAB_140228a95                                   XREF[1]:     140228a75(j)  
       140228a95 49 8b d5        MOV        p0,R13
       140228a98 48 8b 43 08     MOV        RAX,qword ptr [RBX + 0x8]
       140228a9c 48 89 42 08     MOV        qword ptr [RDX + p0->sourceFiles.array],RAX
       140228aa0 48 89 53 08     MOV        qword ptr [RBX + 0x8],p0
                             LAB_140228aa4                                   XREF[1]:     140228a37(j)  
       140228aa4 48 89 33        MOV        qword ptr [RBX],RSI
       140228aa7 e9 cd fe        JMP        LAB_140228979
                 ff ff
                             LAB_140228aac                                   XREF[1]:     140228989(j)  
       140228aac 8b 0d ea        MOV        this,dword ptr [gNullHandle]
                 de ec 01
                             LAB_140228ab2                                   XREF[1]:     1402289a0(j)  
       140228ab2 89 4d 0c        MOV        dword ptr [RBP + local_17c],this
       140228ab5 4c 89 6d 58     MOV        qword ptr [RBP + local_130],R13
       140228ab9 48 8d 55 58     LEA        p0=>local_130,[RBP + 0x58]
       140228abd 48 8d 4d 0c     LEA        this=>local_17c,[RBP + 0xc]
       140228ac1 e8 4a 0c        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f5 ff
       140228ac6 90              NOP
       140228ac7 48 85 f6        TEST       RSI,RSI
       140228aca 0f 84 31        JZ         LAB_140228d01
                 02 00 00
       140228ad0 48 83 7d        CMP        qword ptr [RBP + local_130],0x0
                 58 00
       140228ad5 0f 84 26        JZ         LAB_140228d01
                 02 00 00
       140228adb 48 8d 95        LEA        p0=>local_ec,[RBP + 0x9c]
                 9c 00 00 00
       140228ae2 48 8b ce        MOV        this,RSI
       140228ae5 e8 06 6c        CALL       ExtraDataList::GetReferenceHandle                                                            undefined ExtraDataList::GetReferenceHandle()
                 f3 ff
       140228aea 48 8b c8        MOV        this,RAX
       140228aed 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       140228af2 e8 19 0c        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f5 ff
       140228af7 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140228afc 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
       140228b01 48 85 ff        TEST       RDI,RDI
       140228b04 0f 84 b5        JZ         LAB_140228ebf
                 03 00 00
       140228b0a c6 44 24        MOV        byte ptr [RSP + local_260],0x0
                 28 00
       140228b0f 45 8b cc        MOV        p2,R12D
       140228b12 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       140228b19 4d 85 f6        TEST       R14,R14
       140228b1c 74 1c           JZ         LAB_140228b3a
       140228b1e 48 89 7d 60     MOV        qword ptr [RBP + local_128],RDI
       140228b22 f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       140228b26 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140228b2b 48 89 7d 60     MOV        qword ptr [RBP + local_128],RDI
       140228b2f 4c 89 74        MOV        qword ptr [RSP + local_268],R14
                 24 20
       140228b34 48 8d 55 60     LEA        p0=>local_128,[RBP + 0x60]
       140228b38 eb 1a           JMP        LAB_140228b54
                             LAB_140228b3a                                   XREF[1]:     140228b1c(j)  
       140228b3a 48 89 7d 68     MOV        qword ptr [RBP + local_120],RDI
       140228b3e f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       140228b42 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140228b47 48 89 7d 68     MOV        qword ptr [RBP + local_120],RDI
       140228b4b 48 89 74        MOV        qword ptr [RSP + local_268],RSI
                 24 20
       140228b50 48 8d 55 68     LEA        p0=>local_120,[RBP + 0x68]
                             LAB_140228b54                                   XREF[1]:     140228b38(j)  
       140228b54 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
       140228b59 4c 8b 47 40     MOV        p1,qword ptr [RDI + 0x40]
       140228b5d e8 7e 2c        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       140228b62 48 8b 07        MOV        RAX,qword ptr [RDI]
       140228b65 33 d2           XOR        p0,p0
       140228b67 48 8b cf        MOV        this,RDI
       140228b6a ff 90 18        CALL       qword ptr [RAX + 0x118]
                 01 00 00
       140228b70 48 8b ce        MOV        this,RSI
       140228b73 e8 58 08        CALL       FUN_1401693d0                                                                                undefined FUN_1401693d0()
                 f4 ff
       140228b78 48 8b ce        MOV        this,RSI
       140228b7b e8 00 69        CALL       FUN_14015f480                                                                                undefined FUN_14015f480()
                 f3 ff
       140228b80 0f 28 c8        MOVAPS     XMM1,XMM0
       140228b83 48 8b cf        MOV        this,RDI
       140228b86 e8 85 7e        CALL       TESObjectREFR::SetScale                                                                      void TESObjectREFR::SetScale(TESObjectREFR * this, float p0)
                 0b 00
       140228b8b 4d 85 f6        TEST       R14,R14
       140228b8e 41 0f 94 c0     SETZ       p1
       140228b92 48 8b d6        MOV        p0,RSI
       140228b95 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140228b99 e8 c2 c1        CALL       FUN_140154d60                                                                                undefined FUN_140154d60()
                 f2 ff
       140228b9e 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140228ba2 e8 e9 07        CALL       FUN_140169390                                                                                undefined FUN_140169390()
                 f4 ff
       140228ba7 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140228bab e8 20 08        CALL       FUN_1401693d0                                                                                undefined FUN_1401693d0()
                 f4 ff
       140228bb0 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140228bb4 e8 87 27        CALL       FUN_14016b340                                                                                undefined FUN_14016b340()
                 f4 ff
       140228bb9 48 85 c0        TEST       RAX,RAX
       140228bbc 75 1a           JNZ        LAB_140228bd8
       140228bbe 48 8b d7        MOV        p0,RDI
       140228bc1 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140228bc5 e8 e6 26        CALL       FUN_14016b2b0                                                                                undefined FUN_14016b2b0()
                 f4 ff
       140228bca 48 8b 07        MOV        RAX,qword ptr [RDI]
       140228bcd ba 00 04        MOV        p0,0x400
                 00 00
       140228bd2 48 8b cf        MOV        this,RDI
       140228bd5 ff 50 50        CALL       qword ptr [RAX + 0x50]
                             LAB_140228bd8                                   XREF[1]:     140228bbc(j)  
       140228bd8 48 8b 85        MOV        RAX,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       140228bdf 48 89 44        MOV        qword ptr [RSP + local_250],RAX
                 24 38
       140228be4 48 8b 85        MOV        RAX,qword ptr [RBP + p7]
                 d0 01 00 00
       140228beb 48 89 44        MOV        qword ptr [RSP + local_258],RAX
                 24 30
       140228bf0 48 89 7c        MOV        qword ptr [RSP + local_260],RDI
                 24 28
       140228bf5 44 89 64        MOV        dword ptr [RSP + local_268],R12D
                 24 20
       140228bfa 4c 8b 4d 88     MOV        p2,qword ptr [RBP + local_200]
       140228bfe 4d 8b 09        MOV        p2,qword ptr [p2]
       140228c01 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       140228c08 4d 8b c6        MOV        p1,R14
       140228c0b 48 8d 95        LEA        p0=>local_e8,[RBP + 0xa0]
                 a0 00 00 00
       140228c12 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       140228c19 e8 e2 28        CALL       FUN_14022b500                                                                                undefined FUN_14022b500()
                 00 00
       140228c1e 4d 85 ff        TEST       R15,R15
       140228c21 74 15           JZ         LAB_140228c38
       140228c23 49 8b cf        MOV        this,R15
       140228c26 e8 f5 9b        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       140228c2b ba 18 00        MOV        p0,0x18
                 00 00
       140228c30 49 8b cf        MOV        this,R15
       140228c33 e8 54 1f        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
                             LAB_140228c38                                   XREF[1]:     140228c21(j)  
       140228c38 4d 8b fd        MOV        R15,R13
       140228c3b 4c 89 6c        MOV        qword ptr [RSP + local_210],R13
                 24 78
       140228c40 48 8b ce        MOV        this,RSI
       140228c43 e8 98 92        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       140228c48 ba 20 00        MOV        p0,0x20
                 00 00
       140228c4d 48 8b ce        MOV        this,RSI
       140228c50 e8 37 1f        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       140228c55 49 8b 5e 60     MOV        RBX,qword ptr [R14 + 0x60]
       140228c59 48 8b cf        MOV        this,RDI
       140228c5c e8 cf 14        CALL       FUN_1402fa130                                                                                undefined FUN_1402fa130()
                 0d 00
       140228c61 48 85 c0        TEST       RAX,RAX
       140228c64 75 21           JNZ        LAB_140228c87
       140228c66 48 85 db        TEST       RBX,RBX
       140228c69 74 1c           JZ         LAB_140228c87
       140228c6b 48 8b cb        MOV        this,RBX
       140228c6e e8 3d fc        CALL       TESObjectCELL::GetOwner                                                                      undefined TESObjectCELL::GetOwner()
                 08 00
       140228c73 48 85 c0        TEST       RAX,RAX
       140228c76 74 0f           JZ         LAB_140228c87
       140228c78 49 8b d6        MOV        p0,R14
       140228c7b 48 8b cb        MOV        this,RBX
       140228c7e e8 3d cd        CALL       TESObjectCELL::sub                                                                           undefined TESObjectCELL::sub()
                 08 00
       140228c83 84 c0           TEST       AL,AL
       140228c85 74 69           JZ         LAB_140228cf0
                             LAB_140228c87                                   XREF[3]:     140228c64(j), 140228c69(j), 
                                                                                          140228c76(j)  
       140228c87 49 8b 4e 40     MOV        this,qword ptr [R14 + 0x40]
       140228c8b 80 79 1a 2b     CMP        byte ptr [RCX + this->unk1A],0x2b
       140228c8f 0f 85 2f        JNZ        LAB_140228ec4
                 02 00 00
       140228c95 e8 56 01        CALL       FUN_1403a8df0                                                                                undefined FUN_1403a8df0()
                 18 00
       140228c9a 83 f8 01        CMP        EAX,0x1
       140228c9d 0f 85 21        JNZ        LAB_140228ec4
                 02 00 00
       140228ca3 44 89 6c        MOV        dword ptr [RSP + local_268],R13D
                 24 20
       140228ca8 4c 8d 0d        LEA        p2,[RTTI_TESBipedModelForm]                                                                  = 141aca908
                 c9 27 e1 01
       140228caf 4c 8d 05        LEA        p1,[RTTI_TESBoundObject]                                                                     = 141aca908
                 3a f5 e0 01
       140228cb6 33 d2           XOR        p0,p0
       140228cb8 48 8b 4f 40     MOV        this,qword ptr [RDI + 0x40]
       140228cbc e8 69 42        CALL       RTDynamicCast                                                                                undefined RTDynamicCast()
                 31 01
       140228cc1 48 8b f0        MOV        RSI,RAX
       140228cc4 48 85 c0        TEST       RAX,RAX
       140228cc7 0f 84 f7        JZ         LAB_140228ec4
                 01 00 00
       140228ccd ba 01 00        MOV        p0,0x1
                 00 00
       140228cd2 48 8b c8        MOV        this,RAX
       140228cd5 e8 36 15        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fb ff
       140228cda 48 8b d8        MOV        RBX,RAX
       140228cdd 33 d2           XOR        p0,p0
       140228cdf 48 8b ce        MOV        this,RSI
       140228ce2 e8 29 15        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fb ff
       140228ce7 48 3b d8        CMP        RBX,RAX
       140228cea 0f 84 d4        JZ         LAB_140228ec4
                 01 00 00
                             LAB_140228cf0                                   XREF[1]:     140228c85(j)  
       140228cf0 49 8b 56 40     MOV        p0,qword ptr [R14 + 0x40]
       140228cf4 48 8b cf        MOV        this,RDI
       140228cf7 e8 44 14        CALL       TESObjectREFR::SetOwner                                                                      void TESObjectREFR::SetOwner(TESObjectREFR * this, TESForm * p0)
                 0d 00
       140228cfc e9 c3 01        JMP        LAB_140228ec4
                 00 00
                             LAB_140228d01                                   XREF[2]:     140228aca(j), 140228ad5(j)  
       140228d01 48 8b 85        MOV        RAX,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       140228d08 48 89 44        MOV        qword ptr [RSP + local_250],RAX
                 24 38
       140228d0d 48 8b 85        MOV        RAX,qword ptr [RBP + p7]
                 d0 01 00 00
       140228d14 48 89 44        MOV        qword ptr [RSP + local_258],RAX
                 24 30
       140228d19 4c 89 6c        MOV        qword ptr [RSP + local_260],R13
                 24 28
       140228d1e 44 89 64        MOV        dword ptr [RSP + local_268],R12D
                 24 20
       140228d23 4c 8b 4d 88     MOV        p2,qword ptr [RBP + local_200]
       140228d27 4d 8b 09        MOV        p2,qword ptr [p2]
       140228d2a 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       140228d31 4d 8b c6        MOV        p1,R14
       140228d34 48 8d 95        LEA        p0=>local_e4,[RBP + 0xa4]
                 a4 00 00 00
       140228d3b 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       140228d42 e8 b9 27        CALL       FUN_14022b500                                                                                undefined FUN_14022b500()
                 00 00
       140228d47 48 8b c8        MOV        this,RAX
       140228d4a 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       140228d4f e8 bc 09        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f5 ff
       140228d54 48 8b 5c        MOV        RBX,qword ptr [RSP + local_228]
                 24 60
       140228d59 48 8b 03        MOV        RAX,qword ptr [RBX]
       140228d5c ba 00 04        MOV        p0,0x400
                 00 00
       140228d61 48 8b cb        MOV        this,RBX
       140228d64 ff 50 50        CALL       qword ptr [RAX + 0x50]
       140228d67 48 89 5d 70     MOV        qword ptr [RBP + local_118],RBX
       140228d6b f0 ff 43 28     INC.LOCK   dword ptr [RBX + 0x28]
       140228d6f 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140228d74 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
       140228d79 48 89 7d 70     MOV        qword ptr [RBP + local_118],RDI
       140228d7d c6 44 24        MOV        byte ptr [RSP + local_260],0x0
                 28 00
       140228d82 48 89 74        MOV        qword ptr [RSP + local_268],RSI
                 24 20
       140228d87 45 8b cc        MOV        p2,R12D
       140228d8a 4c 8b 47 40     MOV        p1,qword ptr [RDI + 0x40]
       140228d8e 48 8d 55 70     LEA        p0=>local_118,[RBP + 0x70]
       140228d92 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       140228d99 e8 42 2a        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       140228d9e 48 85 f6        TEST       RSI,RSI
       140228da1 74 37           JZ         LAB_140228dda
       140228da3 48 8b ce        MOV        this,RSI
       140228da6 e8 a5 0a        CALL       FUN_140179850                                                                                undefined FUN_140179850()
                 f5 ff
       140228dab 85 c0           TEST       EAX,EAX
       140228dad 74 2b           JZ         LAB_140228dda
       140228daf 48 8b ce        MOV        this,RSI
       140228db2 e8 c9 66        CALL       FUN_14015f480                                                                                undefined FUN_14015f480()
                 f3 ff
       140228db7 0f 28 c8        MOVAPS     XMM1,XMM0
       140228dba 48 8b cf        MOV        this,RDI
       140228dbd e8 4e 7c        CALL       TESObjectREFR::SetScale                                                                      void TESObjectREFR::SetScale(TESObjectREFR * this, float p0)
                 0b 00
       140228dc2 41 b0 01        MOV        p1,0x1
       140228dc5 48 8b d6        MOV        p0,RSI
       140228dc8 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140228dcc e8 8f bf        CALL       FUN_140154d60                                                                                undefined FUN_140154d60()
                 f2 ff
       140228dd1 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140228dd5 e8 b6 05        CALL       FUN_140169390                                                                                undefined FUN_140169390()
                 f4 ff
                             LAB_140228dda                                   XREF[2]:     140228da1(j), 140228dad(j)  
       140228dda 49 8b 5e 60     MOV        RBX,qword ptr [R14 + 0x60]
       140228dde 48 8b cf        MOV        this,RDI
       140228de1 e8 4a 13        CALL       FUN_1402fa130                                                                                undefined FUN_1402fa130()
                 0d 00
       140228de6 48 85 c0        TEST       RAX,RAX
       140228de9 75 2a           JNZ        LAB_140228e15
       140228deb 48 85 db        TEST       RBX,RBX
       140228dee 74 25           JZ         LAB_140228e15
       140228df0 48 8b cb        MOV        this,RBX
       140228df3 e8 b8 fa        CALL       TESObjectCELL::GetOwner                                                                      undefined TESObjectCELL::GetOwner()
                 08 00
       140228df8 48 85 c0        TEST       RAX,RAX
       140228dfb 74 18           JZ         LAB_140228e15
       140228dfd 4c 3b 35        CMP        R14,qword ptr [gPlayerCharacter3]
                 94 e8 f0 02
       140228e04 74 6f           JZ         LAB_140228e75
       140228e06 49 8b d6        MOV        p0,R14
       140228e09 48 8b cb        MOV        this,RBX
       140228e0c e8 af cb        CALL       TESObjectCELL::sub                                                                           undefined TESObjectCELL::sub()
                 08 00
       140228e11 84 c0           TEST       AL,AL
       140228e13 74 60           JZ         LAB_140228e75
                             LAB_140228e15                                   XREF[3]:     140228de9(j), 140228dee(j), 
                                                                                          140228dfb(j)  
       140228e15 49 8b 4e 40     MOV        this,qword ptr [R14 + 0x40]
       140228e19 80 79 1a 2b     CMP        byte ptr [RCX + this->unk1A],0x2b
       140228e1d 75 62           JNZ        LAB_140228e81
       140228e1f e8 cc ff        CALL       FUN_1403a8df0                                                                                undefined FUN_1403a8df0()
                 17 00
       140228e24 83 f8 01        CMP        EAX,0x1
       140228e27 75 58           JNZ        LAB_140228e81
       140228e29 44 89 6c        MOV        dword ptr [RSP + local_268],R13D
                 24 20
       140228e2e 4c 8d 0d        LEA        p2,[RTTI_TESBipedModelForm]                                                                  = 141aca908
                 43 26 e1 01
       140228e35 4c 8d 05        LEA        p1,[RTTI_TESBoundObject]                                                                     = 141aca908
                 b4 f3 e0 01
       140228e3c 33 d2           XOR        p0,p0
       140228e3e 48 8b 4f 40     MOV        this,qword ptr [RDI + 0x40]
       140228e42 e8 e3 40        CALL       RTDynamicCast                                                                                undefined RTDynamicCast()
                 31 01
       140228e47 4c 8b f0        MOV        R14,RAX
       140228e4a 48 85 c0        TEST       RAX,RAX
       140228e4d 74 32           JZ         LAB_140228e81
       140228e4f ba 01 00        MOV        p0,0x1
                 00 00
       140228e54 48 8b c8        MOV        this,RAX
       140228e57 e8 b4 13        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fb ff
       140228e5c 48 8b d8        MOV        RBX,RAX
       140228e5f 33 d2           XOR        p0,p0
       140228e61 49 8b ce        MOV        this,R14
       140228e64 e8 a7 13        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fb ff
       140228e69 48 3b d8        CMP        RBX,RAX
       140228e6c 74 13           JZ         LAB_140228e81
       140228e6e 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
                             LAB_140228e75                                   XREF[2]:     140228e04(j), 140228e13(j)  
       140228e75 49 8b 56 40     MOV        p0,qword ptr [R14 + 0x40]
       140228e79 48 8b cf        MOV        this,RDI
       140228e7c e8 bf 12        CALL       TESObjectREFR::SetOwner                                                                      void TESObjectREFR::SetOwner(TESObjectREFR * this, TESForm * p0)
                 0d 00
                             LAB_140228e81                                   XREF[4]:     140228e1d(j), 140228e27(j), 
                                                                                          140228e4d(j), 140228e6c(j)  
       140228e81 4d 85 ff        TEST       R15,R15
       140228e84 74 15           JZ         LAB_140228e9b
       140228e86 49 8b cf        MOV        this,R15
       140228e89 e8 92 99        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       140228e8e ba 18 00        MOV        p0,0x18
                 00 00
       140228e93 49 8b cf        MOV        this,R15
       140228e96 e8 f1 1c        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
                             LAB_140228e9b                                   XREF[1]:     140228e84(j)  
       140228e9b 4d 8b fd        MOV        R15,R13
       140228e9e 4c 89 6c        MOV        qword ptr [RSP + local_210],R13
                 24 78
       140228ea3 48 85 f6        TEST       RSI,RSI
       140228ea6 74 1c           JZ         LAB_140228ec4
       140228ea8 48 8b ce        MOV        this,RSI
       140228eab e8 30 90        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       140228eb0 ba 20 00        MOV        p0,0x20
                 00 00
       140228eb5 48 8b ce        MOV        this,RSI
       140228eb8 e8 cf 1c        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       140228ebd eb 05           JMP        LAB_140228ec4
                             LAB_140228ebf                                   XREF[1]:     140228b04(j)  
       140228ebf 4c 8b 7c        MOV        R15,qword ptr [RSP + local_210]
                 24 78
                             LAB_140228ec4                                   XREF[7]:     140228c8f(j), 140228c9d(j), 
                                                                                          140228cc7(j), 140228cea(j), 
                                                                                          140228cfc(j), 140228ea6(j), 
                                                                                          140228ebd(j)  
       140228ec4 48 8b 45 58     MOV        RAX,qword ptr [RBP + local_130]
       140228ec8 48 85 c0        TEST       RAX,RAX
       140228ecb 74 27           JZ         LAB_140228ef4
       140228ecd 48 8d 48 20     LEA        this,[RAX + 0x20]
       140228ed1 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       140228ed6 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       140228edb ff c8           DEC        EAX
       140228edd a9 ff 03        TEST       EAX,0x3ff
                 00 00
       140228ee2 75 06           JNZ        LAB_140228eea
       140228ee4 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       140228ee7 ff 50 08        CALL       qword ptr [RAX + 0x8]
                             LAB_140228eea                                   XREF[1]:     140228ee2(j)  
       140228eea 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140228eef 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_140228ef4                                   XREF[1]:     140228ecb(j)  
       140228ef4 44 0f b6        MOVZX      R12D,byte ptr [RSP + local_220]
                 64 24 68
       140228efa 48 8b 8d        MOV        this,qword ptr [RBP + p5]
                 c0 01 00 00
       140228f01 e9 7d 03        JMP        LAB_140229283
                 00 00
                             LAB_140228f06                                   XREF[1]:     140228980(j)  
       140228f06 48 8b b5        MOV        RSI,qword ptr [RBP + p6]
                 c8 01 00 00
       140228f0d 48 85 f6        TEST       RSI,RSI
       140228f10 0f 84 71        JZ         LAB_140229187
                 02 00 00
       140228f16 49 8b dd        MOV        RBX,R13
       140228f19 4d 8b 77 08     MOV        R14,qword ptr [R15 + 0x8]
       140228f1d 4d 85 f6        TEST       R14,R14
       140228f20 0f 84 88        JZ         LAB_1402290ae
                 01 00 00
       140228f26 48 8b bd        MOV        RDI,qword ptr [RBP + local_res18]
                 a0 01 00 00
       140228f2d 0f 1f 00        NOP        dword ptr [RAX]
                             LAB_140228f30                                   XREF[1]:     140228fd5(j)  
       140228f30 49 8b 1e        MOV        RBX,qword ptr [R14]
       140228f33 48 85 db        TEST       RBX,RBX
       140228f36 0f 84 9f        JZ         LAB_140228fdb
                 00 00 00
       140228f3c 48 8b cb        MOV        this,RBX
       140228f3f e8 9c 60        CALL       ExtraDataList::GetOwner                                                                      undefined ExtraDataList::GetOwner()
                 f3 ff
       140228f44 48 85 c0        TEST       RAX,RAX
       140228f47 0f 85 b3        JNZ        LAB_140229000
                 00 00 00
       140228f4d 49 8b c5        MOV        RAX,R13
       140228f50 80 7f 1a 3e     CMP        byte ptr [RDI + 0x1a],0x3e
       140228f54 48 0f 44 c7     CMOVZ      RAX,RDI
       140228f58 48 85 c0        TEST       RAX,RAX
       140228f5b 74 17           JZ         LAB_140228f74
       140228f5d 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140228f61 e8 7a b1        CALL       ExtraDataList::GetLeveledNPC                                                                 undefined ExtraDataList::GetLeveledNPC()
                 f3 ff
       140228f66 48 8b f0        MOV        RSI,RAX
       140228f69 48 85 c0        TEST       RAX,RAX
       140228f6c 75 11           JNZ        LAB_140228f7f
       140228f6e 48 8b 77 40     MOV        RSI,qword ptr [RDI + 0x40]
       140228f72 eb 0b           JMP        LAB_140228f7f
                             LAB_140228f74                                   XREF[1]:     140228f5b(j)  
       140228f74 48 8b cf        MOV        this,RDI
       140228f77 e8 c4 0e        CALL       TESObjectREFR::GetOwner                                                                      TESForm * TESObjectREFR::GetOwner(TESObjectREFR * this)
                 0d 00
       140228f7c 48 8b f0        MOV        RSI,RAX
                             LAB_140228f7f                                   XREF[2]:     140228f6c(j), 140228f72(j)  
       140228f7f 8b 85 b8        MOV        EAX,dword ptr [RBP + p4]
                 01 00 00
       140228f85 83 f8 01        CMP        EAX,0x1
       140228f88 75 7e           JNZ        LAB_140229008
       140228f8a 49 8b 0f        MOV        this,qword ptr [R15]
       140228f8d e8 ae 26        CALL       FUN_1401db640                                                                                undefined FUN_1401db640()
                 fb ff
       140228f92 84 c0           TEST       AL,AL
       140228f94 75 0b           JNZ        LAB_140228fa1
       140228f96 48 8b d6        MOV        p0,RSI
       140228f99 48 8b cb        MOV        this,RBX
       140228f9c e8 6f 18        CALL       ExtraDataList::SetOwnerForm                                                                  undefined ExtraDataList::SetOwnerForm()
                 f3 ff
                             LAB_140228fa1                                   XREF[1]:     140228f94(j)  
       140228fa1 48 8b b5        MOV        RSI,qword ptr [RBP + p6]
                 c8 01 00 00
                             LAB_140228fa8                                   XREF[4]:     140229012(j), 140229024(j), 
                                                                                          14022902d(j), 1402290a9(j)  
       140228fa8 4c 8b 16        MOV        R10,qword ptr [RSI]
       140228fab 48 8b 85        MOV        RAX,qword ptr [RBP + local_res8]
                 90 01 00 00
       140228fb2 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
       140228fb6 48 89 44        MOV        qword ptr [RSP + local_268],RAX
                 24 20
       140228fbb 45 8b cc        MOV        p2,R12D
       140228fbe 4c 8b c3        MOV        p1,RBX
       140228fc1 49 8b 17        MOV        p0,qword ptr [R15]
       140228fc4 48 8b ce        MOV        this,RSI
       140228fc7 41 ff 92        CALL       qword ptr [R10 + 0x2d0]
                 d0 02 00 00
       140228fce 4d 8b 76 08     MOV        R14,qword ptr [R14 + 0x8]
       140228fd2 4d 85 f6        TEST       R14,R14
       140228fd5 0f 85 55        JNZ        LAB_140228f30
                 ff ff ff
                             LAB_140228fdb                                   XREF[1]:     140228f36(j)  
       140228fdb 49 8b cf        MOV        this,R15
       140228fde e8 3d 98        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       140228fe3 ba 18 00        MOV        p0,0x18
                 00 00
       140228fe8 49 8b cf        MOV        this,R15
       140228feb e8 9c 1b        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       140228ff0 48 8b 7c        MOV        RDI,qword ptr [RSP + local_218]
                 24 70
       140228ff5 45 32 e4        XOR        R12B,R12B
       140228ff8 4d 8b fd        MOV        R15,R13
       140228ffb e9 7b 02        JMP        LAB_14022927b
                 00 00
                             LAB_140229000                                   XREF[1]:     140228f47(j)  
       140229000 8b 85 b8        MOV        EAX,dword ptr [RBP + p4]
                 01 00 00
       140229006 eb 07           JMP        LAB_14022900f
                             LAB_140229008                                   XREF[1]:     140228f88(j)  
       140229008 48 8b b5        MOV        RSI,qword ptr [RBP + p6]
                 c8 01 00 00
                             LAB_14022900f                                   XREF[1]:     140229006(j)  
       14022900f 83 f8 05        CMP        EAX,0x5
       140229012 75 94           JNZ        LAB_140228fa8
       140229014 48 85 db        TEST       RBX,RBX
       140229017 74 0d           JZ         LAB_140229026
       140229019 48 8b cb        MOV        this,RBX
       14022901c e8 bf 5f        CALL       ExtraDataList::GetOwner                                                                      undefined ExtraDataList::GetOwner()
                 f3 ff
       140229021 48 85 c0        TEST       RAX,RAX
       140229024 75 82           JNZ        LAB_140228fa8
                             LAB_140229026                                   XREF[1]:     140229017(j)  
       140229026 48 3b 3d        CMP        RDI,qword ptr [gPlayerCharacter3]
                 6b e6 f0 02
       14022902d 0f 85 75        JNZ        LAB_140228fa8
                 ff ff ff
       140229033 48 85 db        TEST       RBX,RBX
       140229036 75 4e           JNZ        LAB_140229086
       140229038 83 3d 91        CMP        dword ptr [gMemoryManagerState],0x2
                 81 3c 03 02
       14022903f 74 13           JZ         LAB_140229054
       140229041 48 8d 15        LEA        p0,[gMemoryManagerState]
                 88 81 3c 03
       140229048 48 8d 0d        LEA        this,[gMemoryManager]
                 91 81 3c 03
       14022904f e8 2c b6        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140229054                                   XREF[1]:     14022903f(j)  
       140229054 45 33 c9        XOR        p2,p2
       140229057 45 33 c0        XOR        p1,p1
       14022905a 41 8d 51 20     LEA        p0,[p2 + 0x20]
       14022905e 48 8d 0d        LEA        this,[gMemoryManager]
                 7b 81 3c 03
       140229065 e8 56 b0        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       14022906a 48 89 85        MOV        qword ptr [RBP + local_88],RAX
                 00 01 00 00
       140229071 48 85 c0        TEST       RAX,RAX
       140229074 74 0d           JZ         LAB_140229083
       140229076 48 8b c8        MOV        this,RAX
       140229079 e8 12 8e        CALL       ExtraDataList::ctor                                                                          undefined ExtraDataList::ctor()
                 f2 ff
       14022907e 48 8b d8        MOV        RBX,RAX
       140229081 eb 03           JMP        LAB_140229086
                             LAB_140229083                                   XREF[1]:     140229074(j)  
       140229083 49 8b dd        MOV        RBX,R13
                             LAB_140229086                                   XREF[2]:     140229036(j), 140229081(j)  
       140229086 48 8b 0d        MOV        this,qword ptr [DAT_1431874f8]
                 6b e4 f5 02
       14022908d e8 1e 21        CALL       FUN_14068b1b0                                                                                undefined FUN_14068b1b0()
                 46 00
       140229092 48 8b d0        MOV        p0,RAX
       140229095 48 8b cb        MOV        this,RBX
       140229098 e8 73 17        CALL       ExtraDataList::SetOwnerForm                                                                  undefined ExtraDataList::SetOwnerForm()
                 f3 ff
       14022909d 41 0f b7 d4     MOVZX      p0,R12W
       1402290a1 48 8b cb        MOV        this,RBX
       1402290a4 e8 27 21        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       1402290a9 e9 fa fe        JMP        LAB_140228fa8
                 ff ff
                             LAB_1402290ae                                   XREF[1]:     140228f20(j)  
       1402290ae 49 8b c5        MOV        RAX,R13
       1402290b1 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       1402290b8 41 80 7e        CMP        byte ptr [R14 + 0x1a],0x3e
                 1a 3e
       1402290bd 49 0f 44 c6     CMOVZ      RAX,R14
       1402290c1 48 85 c0        TEST       RAX,RAX
       1402290c4 74 17           JZ         LAB_1402290dd
       1402290c6 49 8d 4e 70     LEA        this,[R14 + 0x70]
       1402290ca e8 11 b0        CALL       ExtraDataList::GetLeveledNPC                                                                 undefined ExtraDataList::GetLeveledNPC()
                 f3 ff
       1402290cf 48 8b f0        MOV        RSI,RAX
       1402290d2 48 85 c0        TEST       RAX,RAX
       1402290d5 75 11           JNZ        LAB_1402290e8
       1402290d7 49 8b 76 40     MOV        RSI,qword ptr [R14 + 0x40]
       1402290db eb 0b           JMP        LAB_1402290e8
                             LAB_1402290dd                                   XREF[1]:     1402290c4(j)  
       1402290dd 49 8b ce        MOV        this,R14
       1402290e0 e8 5b 0d        CALL       TESObjectREFR::GetOwner                                                                      TESForm * TESObjectREFR::GetOwner(TESObjectREFR * this)
                 0d 00
       1402290e5 48 8b f0        MOV        RSI,RAX
                             LAB_1402290e8                                   XREF[2]:     1402290d5(j), 1402290db(j)  
       1402290e8 83 bd b8        CMP        dword ptr [RBP + p4],0x1
                 01 00 00 01
       1402290ef 75 4c           JNZ        LAB_14022913d
       1402290f1 49 8b 0f        MOV        this,qword ptr [R15]
       1402290f4 e8 47 25        CALL       FUN_1401db640                                                                                undefined FUN_1401db640()
                 fb ff
       1402290f9 84 c0           TEST       AL,AL
       1402290fb 75 40           JNZ        LAB_14022913d
       1402290fd b9 20 00        MOV        this,0x20
                 00 00
       140229102 e8 f9 2b        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       140229107 48 89 85        MOV        qword ptr [RBP + local_80],RAX
                 08 01 00 00
       14022910e 48 85 c0        TEST       RAX,RAX
       140229111 74 0d           JZ         LAB_140229120
       140229113 48 8b c8        MOV        this,RAX
       140229116 e8 75 8d        CALL       ExtraDataList::ctor                                                                          undefined ExtraDataList::ctor()
                 f2 ff
       14022911b 48 8b d8        MOV        RBX,RAX
       14022911e eb 03           JMP        LAB_140229123
                             LAB_140229120                                   XREF[1]:     140229111(j)  
       140229120 49 8b dd        MOV        RBX,R13
                             LAB_140229123                                   XREF[1]:     14022911e(j)  
       140229123 48 8b d6        MOV        p0,RSI
       140229126 48 8b cb        MOV        this,RBX
       140229129 e8 e2 16        CALL       ExtraDataList::SetOwnerForm                                                                  undefined ExtraDataList::SetOwnerForm()
                 f3 ff
       14022912e 0f b7 95        MOVZX      p0,word ptr [RBP + p3]
                 b0 01 00 00
       140229135 48 8b cb        MOV        this,RBX
       140229138 e8 93 20        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
                             LAB_14022913d                                   XREF[2]:     1402290ef(j), 1402290fb(j)  
       14022913d 48 8b 8d        MOV        this,qword ptr [RBP + p6]
                 c8 01 00 00
       140229144 4c 8b 11        MOV        R10,qword ptr [this->entryList]
       140229147 48 8b 85        MOV        RAX,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022914e 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
       140229152 48 89 44        MOV        qword ptr [RSP + local_268],RAX
                 24 20
       140229157 45 8b cc        MOV        p2,R12D
       14022915a 4c 8b c3        MOV        p1,RBX
       14022915d 49 8b 17        MOV        p0,qword ptr [R15]
       140229160 41 ff 92        CALL       qword ptr [R10 + 0x2d0]
                 d0 02 00 00
       140229167 49 8b cf        MOV        this,R15
       14022916a e8 b1 96        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022916f ba 18 00        MOV        p0,0x18
                 00 00
       140229174 49 8b cf        MOV        this,R15
       140229177 e8 10 1a        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       14022917c 45 32 e4        XOR        R12B,R12B
       14022917f 4d 8b fd        MOV        R15,R13
       140229182 e9 f4 00        JMP        LAB_14022927b
                 00 00
                             LAB_140229187                                   XREF[1]:     140228f10(j)  
       140229187 49 8b 47 08     MOV        RAX,qword ptr [R15 + 0x8]
       14022918b 48 85 c0        TEST       RAX,RAX
       14022918e 74 05           JZ         LAB_140229195
       140229190 48 8b 08        MOV        this,qword ptr [RAX]
       140229193 eb 03           JMP        LAB_140229198
                             LAB_140229195                                   XREF[1]:     14022918e(j)  
       140229195 49 8b cd        MOV        this,R13
                             LAB_140229198                                   XREF[1]:     140229193(j)  
       140229198 48 89 7d 20     MOV        qword ptr [RBP + local_168],RDI
       14022919c 48 85 ff        TEST       RDI,RDI
       14022919f 74 0e           JZ         LAB_1402291af
       1402291a1 f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       1402291a5 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       1402291aa 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_1402291af                                   XREF[1]:     14022919f(j)  
       1402291af 48 89 7d 20     MOV        qword ptr [RBP + local_168],RDI
       1402291b3 c6 44 24        MOV        byte ptr [RSP + local_260],0x1
                 28 01
       1402291b8 48 89 4c        MOV        qword ptr [RSP + local_268],this
                 24 20
       1402291bd 45 8b cc        MOV        p2,R12D
       1402291c0 4d 8b 07        MOV        p1,qword ptr [R15]
       1402291c3 48 8d 55 20     LEA        p0=>local_168,[RBP + 0x20]
       1402291c7 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       1402291ce e8 0d 26        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       1402291d3 49 8b 4f 08     MOV        this,qword ptr [R15 + 0x8]
       1402291d7 48 85 c9        TEST       this,this
       1402291da 74 72           JZ         LAB_14022924e
       1402291dc 48 8b 09        MOV        this,qword ptr [this->entryList]
       1402291df 48 85 c9        TEST       this,this
       1402291e2 74 10           JZ         LAB_1402291f4
       1402291e4 48 8d 95        LEA        p0=>local_e0,[RBP + 0xa8]
                 a8 00 00 00
       1402291eb e8 00 65        CALL       ExtraDataList::GetReferenceHandle                                                            undefined ExtraDataList::GetReferenceHandle()
                 f3 ff
       1402291f0 8b 08           MOV        this,dword ptr [RAX]
       1402291f2 eb 06           JMP        LAB_1402291fa
                             LAB_1402291f4                                   XREF[1]:     1402291e2(j)  
       1402291f4 8b 0d a2        MOV        this,dword ptr [gNullHandle]
                 d7 ec 01
                             LAB_1402291fa                                   XREF[1]:     1402291f2(j)  
       1402291fa 89 4d 10        MOV        dword ptr [RBP + local_178],this
       1402291fd 4c 89 6d 78     MOV        qword ptr [RBP + local_110],R13
       140229201 48 8d 55 78     LEA        p0=>local_110,[RBP + 0x78]
       140229205 48 8d 4d 10     LEA        this=>local_178,[RBP + 0x10]
       140229209 e8 02 05        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f5 ff
       14022920e 90              NOP
       14022920f 48 8b 5d 78     MOV        RBX,qword ptr [RBP + local_110]
       140229213 48 85 db        TEST       RBX,RBX
       140229216 74 0a           JZ         LAB_140229222
       140229218 48 8d 4b 70     LEA        this,[RBX + 0x70]
       14022921c e8 af 01        CALL       FUN_1401693d0                                                                                undefined FUN_1401693d0()
                 f4 ff
       140229221 90              NOP
                             LAB_140229222                                   XREF[1]:     140229216(j)  
       140229222 48 85 db        TEST       RBX,RBX
       140229225 74 27           JZ         LAB_14022924e
       140229227 48 8d 4b 20     LEA        this,[RBX + 0x20]
       14022922b b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       140229230 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       140229235 ff c8           DEC        EAX
       140229237 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022923c 75 06           JNZ        LAB_140229244
       14022923e 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       140229241 ff 50 08        CALL       qword ptr [RAX + 0x8]
                             LAB_140229244                                   XREF[1]:     14022923c(j)  
       140229244 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140229249 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_14022924e                                   XREF[2]:     1402291da(j), 140229225(j)  
       14022924e 83 bd b8        CMP        dword ptr [RBP + p4],0x2
                 01 00 00 02
       140229255 74 08           JZ         LAB_14022925f
       140229257 49 8b cf        MOV        this,R15
       14022925a e8 b1 96        CALL       FUN_140222910                                                                                undefined FUN_140222910()
                 ff ff
                             LAB_14022925f                                   XREF[1]:     140229255(j)  
       14022925f 49 8b cf        MOV        this,R15
       140229262 e8 b9 95        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       140229267 ba 18 00        MOV        p0,0x18
                 00 00
       14022926c 49 8b cf        MOV        this,R15
       14022926f e8 18 19        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       140229274 4d 8b fd        MOV        R15,R13
       140229277 45 0f b6 e7     MOVZX      R12D,R15B
                             LAB_14022927b                                   XREF[2]:     140228ffb(j), 140229182(j)  
       14022927b 49 8b cf        MOV        this,R15
       14022927e 4c 89 6c        MOV        qword ptr [RSP + local_210],R13
                 24 78
                             LAB_140229283                                   XREF[1]:     140228f01(j)  
       140229283 48 8b 45 a8     MOV        RAX,qword ptr [RBP + local_1e0]
       140229287 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
                             LAB_14022928d                                   XREF[1]:     140228692(j)  
       14022928d 83 fb 01        CMP        EBX,0x1
       140229290 7c 1e           JL         LAB_1402292b0
       140229292 48 85 ff        TEST       RDI,RDI
       140229295 0f 85 2f        JNZ        LAB_14022abca
                 19 00 00
       14022929b 48 85 c0        TEST       RAX,RAX
       14022929e 0f 85 cc        JNZ        LAB_140228670
                 f3 ff ff
       1402292a4 4c 89 ad        MOV        qword ptr [RBP + p5],R13
                 c0 01 00 00
       1402292ab e9 e9 14        JMP        LAB_14022a799
                 00 00
                             LAB_1402292b0                                   XREF[1]:     140229290(j)  
       1402292b0 48 85 c0        TEST       RAX,RAX
       1402292b3 0f 84 e0        JZ         LAB_14022a799
                 14 00 00
       1402292b9 e9 b2 f3        JMP        LAB_140228670
                 ff ff
                             LAB_1402292be                                   XREF[3]:     140228642(j), 14022864f(j), 
                                                                                          140228659(j)  
       1402292be 48 8b 75 98     MOV        RSI,qword ptr [RBP + local_1f0]
       1402292c2 48 8b 55 a0     MOV        p0,qword ptr [RBP + local_1e8]
                             LAB_1402292c6                                   XREF[1]:     14022860e(j)  
       1402292c6 8b 4d b0        MOV        this,dword ptr [RBP + local_1d8]
       1402292c9 44 8b 7e 10     MOV        R15D,dword ptr [RSI + 0x10]
       1402292cd 85 c9           TEST       this,this
       1402292cf 79 05           JNS        LAB_1402292d6
       1402292d1 44 2b f9        SUB        R15D,this
       1402292d4 eb 03           JMP        LAB_1402292d9
                             LAB_1402292d6                                   XREF[1]:     1402292cf(j)  
       1402292d6 44 03 f9        ADD        R15D,this
                             LAB_1402292d9                                   XREF[1]:     1402292d4(j)  
       1402292d9 45 85 ff        TEST       R15D,R15D
       1402292dc 79 08           JNS        LAB_1402292e6
       1402292de 85 c9           TEST       this,this
       1402292e0 0f 89 1a        JNS        LAB_14022ac00
                 19 00 00
                             LAB_1402292e6                                   XREF[1]:     1402292dc(j)  
       1402292e6 41 8b c5        MOV        EAX,R13D
       1402292e9 48 8b 5a 08     MOV        RBX,qword ptr [RDX + p0->sourceFiles.array]
       1402292ed 48 85 db        TEST       RBX,RBX
       1402292f0 74 40           JZ         LAB_140229332
       1402292f2 45 8b f5        MOV        R14D,R13D
                             LAB_1402292f5                                   XREF[1]:     140229320(j)  
       1402292f5 48 8b 33        MOV        RSI,qword ptr [RBX]
       1402292f8 48 85 f6        TEST       RSI,RSI
       1402292fb 74 25           JZ         LAB_140229322
       1402292fd b2 01           MOV        p0,0x1
       1402292ff 48 8b ce        MOV        this,RSI
       140229302 e8 19 08        CALL       ExtraDataList::sub                                                                           undefined ExtraDataList::sub()
                 f3 ff
       140229307 84 c0           TEST       AL,AL
       140229309 75 0e           JNZ        LAB_140229319
       14022930b 48 8b ce        MOV        this,RSI
       14022930e e8 4d 60        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       140229313 0f bf c8        MOVSX      this,AX
       140229316 44 03 f1        ADD        R14D,this
                             LAB_140229319                                   XREF[1]:     140229309(j)  
       140229319 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14022931d 48 85 db        TEST       RBX,RBX
       140229320 75 d3           JNZ        LAB_1402292f5
                             LAB_140229322                                   XREF[1]:     1402292fb(j)  
       140229322 48 8b 4d 88     MOV        this,qword ptr [RBP + local_200]
       140229326 e8 25 c3        CALL       FUN_140225650                                                                                undefined FUN_140225650()
                 ff ff
       14022932b 41 03 c6        ADD        EAX,R14D
       14022932e 48 8b 55 a0     MOV        p0,qword ptr [RBP + local_1e8]
                             LAB_140229332                                   XREF[1]:     1402292f0(j)  
       140229332 44 2b f8        SUB        R15D,EAX
       140229335 45 8b e5        MOV        R12D,R13D
       140229338 45 0f 49 e7     CMOVNS     R12D,R15D
       14022933c 45 85 e4        TEST       R12D,R12D
       14022933f 0f 8e e0        JLE        LAB_140229925
                 05 00 00
       140229345 48 8b 5a 08     MOV        RBX,qword ptr [RDX + p0->sourceFiles.array]
       140229349 48 85 db        TEST       RBX,RBX
       14022934c 74 25           JZ         LAB_140229373
       14022934e 66 90           NOP
                             LAB_140229350                                   XREF[1]:     14022936d(j)  
       140229350 48 8b 0b        MOV        this,qword ptr [RBX]
       140229353 48 85 c9        TEST       this,this
       140229356 74 17           JZ         LAB_14022936f
       140229358 45 33 c0        XOR        p1,p1
       14022935b b2 01           MOV        p0,0x1
       14022935d e8 3e 5d        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       140229362 84 c0           TEST       AL,AL
       140229364 75 36           JNZ        LAB_14022939c
       140229366 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14022936a 48 85 db        TEST       RBX,RBX
       14022936d 75 e1           JNZ        LAB_140229350
                             LAB_14022936f                                   XREF[1]:     140229356(j)  
       14022936f 48 8b 55 a0     MOV        p0,qword ptr [RBP + local_1e8]
                             LAB_140229373                                   XREF[1]:     14022934c(j)  
       140229373 32 c0           XOR        AL,AL
       140229375 48 8b 5a 08     MOV        RBX,qword ptr [RDX + p0->sourceFiles.array]
       140229379 0f 1f 80        NOP        dword ptr [RAX]
                 00 00 00 00
                             LAB_140229380                                   XREF[1]:     140229398(j)  
       140229380 48 85 db        TEST       RBX,RBX
       140229383 74 76           JZ         LAB_1402293fb
       140229385 48 8b 0b        MOV        this,qword ptr [RBX]
       140229388 48 85 c9        TEST       this,this
       14022938b 74 6e           JZ         LAB_1402293fb
       14022938d e8 1e 5f        CALL       FUN_14015f2b0                                                                                undefined FUN_14015f2b0()
                 f3 ff
       140229392 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       140229396 84 c0           TEST       AL,AL
       140229398 74 e6           JZ         LAB_140229380
       14022939a eb 63           JMP        LAB_1402293ff
                             LAB_14022939c                                   XREF[1]:     140229364(j)  
       14022939c 4c 8b 75 a0     MOV        R14,qword ptr [RBP + local_1e8]
       1402293a0 4d 8b 76 08     MOV        R14,qword ptr [R14 + 0x8]
       1402293a4 4d 85 f6        TEST       R14,R14
       1402293a7 0f 84 a6        JZ         LAB_140229453
                 00 00 00
       1402293ad 0f 1f 00        NOP        dword ptr [RAX]
                             LAB_1402293b0                                   XREF[1]:     1402293f7(j)  
       1402293b0 49 8b 36        MOV        RSI,qword ptr [R14]
       1402293b3 48 85 f6        TEST       RSI,RSI
       1402293b6 0f 84 97        JZ         LAB_140229453
                 00 00 00
       1402293bc 48 8b ce        MOV        this,RSI
       1402293bf e8 9c 5f        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       1402293c4 0f b7 d8        MOVZX      EBX,AX
       1402293c7 45 33 c0        XOR        p1,p1
       1402293ca b2 01           MOV        p0,0x1
       1402293cc 48 8b ce        MOV        this,RSI
       1402293cf e8 cc 5c        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       1402293d4 84 c0           TEST       AL,AL
       1402293d6 74 18           JZ         LAB_1402293f0
       1402293d8 66 83 fb 01     CMP        BX,0x1
       1402293dc 7e 12           JLE        LAB_1402293f0
       1402293de 66 2b 9d        SUB        BX,word ptr [RBP + p3]
                 b0 01 00 00
       1402293e5 0f b7 d3        MOVZX      p0,BX
       1402293e8 48 8b ce        MOV        this,RSI
       1402293eb e8 e0 1d        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
                             LAB_1402293f0                                   XREF[2]:     1402293d6(j), 1402293dc(j)  
       1402293f0 4d 8b 76 08     MOV        R14,qword ptr [R14 + 0x8]
       1402293f4 4d 85 f6        TEST       R14,R14
       1402293f7 75 b7           JNZ        LAB_1402293b0
       1402293f9 eb 58           JMP        LAB_140229453
                             LAB_1402293fb                                   XREF[2]:     140229383(j), 14022938b(j)  
       1402293fb 84 c0           TEST       AL,AL
       1402293fd 74 54           JZ         LAB_140229453
                             LAB_1402293ff                                   XREF[1]:     14022939a(j)  
       1402293ff 4c 8b 75 a0     MOV        R14,qword ptr [RBP + local_1e8]
       140229403 4d 8b 76 08     MOV        R14,qword ptr [R14 + 0x8]
       140229407 4d 85 f6        TEST       R14,R14
       14022940a 74 47           JZ         LAB_140229453
       14022940c 8b bd b0        MOV        EDI,dword ptr [RBP + p3]
                 01 00 00
                             LAB_140229412                                   XREF[1]:     14022944c(j)  
       140229412 49 8b 36        MOV        RSI,qword ptr [R14]
       140229415 48 85 f6        TEST       RSI,RSI
       140229418 74 34           JZ         LAB_14022944e
       14022941a 48 8b ce        MOV        this,RSI
       14022941d e8 3e 5f        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       140229422 0f b7 d8        MOVZX      EBX,AX
       140229425 48 8b ce        MOV        this,RSI
       140229428 e8 83 5e        CALL       FUN_14015f2b0                                                                                undefined FUN_14015f2b0()
                 f3 ff
       14022942d 84 c0           TEST       AL,AL
       14022942f 74 14           JZ         LAB_140229445
       140229431 66 83 fb 01     CMP        BX,0x1
       140229435 7e 0e           JLE        LAB_140229445
       140229437 66 2b df        SUB        BX,DI
       14022943a 0f b7 d3        MOVZX      p0,BX
       14022943d 48 8b ce        MOV        this,RSI
       140229440 e8 8b 1d        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
                             LAB_140229445                                   XREF[2]:     14022942f(j), 140229435(j)  
       140229445 4d 8b 76 08     MOV        R14,qword ptr [R14 + 0x8]
       140229449 4d 85 f6        TEST       R14,R14
       14022944c 75 c4           JNZ        LAB_140229412
                             LAB_14022944e                                   XREF[1]:     140229418(j)  
       14022944e 48 8b 7c        MOV        RDI,qword ptr [RSP + local_218]
                 24 70
                             LAB_140229453                                   XREF[5]:     1402293a7(j), 1402293b6(j), 
                                                                                          1402293f9(j), 1402293fd(j), 
                                                                                          14022940a(j)  
       140229453 8b 95 b0        MOV        p0,dword ptr [RBP + p3]
                 01 00 00
       140229459 44 3b e2        CMP        R12D,p0
       14022945c 7c 1a           JL         LAB_140229478
       14022945e 83 7d 14 00     CMP        dword ptr [RBP + local_174],0x0
       140229462 75 08           JNZ        LAB_14022946c
       140229464 4c 8b 45 98     MOV        p1,qword ptr [RBP + local_1f0]
       140229468 41 29 50 10     SUB        dword ptr [R8 + p1->formFlags],p0
                             LAB_14022946c                                   XREF[1]:     140229462(j)  
       14022946c 44 8b e2        MOV        R12D,p0
       14022946f 44 89 ad        MOV        dword ptr [RBP + p3],R13D
                 b0 01 00 00
       140229476 eb 36           JMP        LAB_1402294ae
                             LAB_140229478                                   XREF[1]:     14022945c(j)  
       140229478 41 2b d4        SUB        p0,R12D
       14022947b 89 95 b0        MOV        dword ptr [RBP + p3],p0
                 01 00 00
       140229481 4c 8b 45 98     MOV        p1,qword ptr [RBP + local_1f0]
       140229485 41 8b 48 10     MOV        this,dword ptr [R8 + p1->formFlags]
       140229489 8b 55 b0        MOV        p0,dword ptr [RBP + local_1d8]
       14022948c 8d 04 0a        LEA        EAX,[p0->__vftable + this->entryList*0x1]
       14022948f 85 c0           TEST       EAX,EAX
       140229491 79 14           JNS        LAB_1402294a7
       140229493 85 d2           TEST       p0,p0
       140229495 74 0a           JZ         LAB_1402294a1
       140229497 8b c2           MOV        EAX,p0
       140229499 f7 d8           NEG        EAX
       14022949b 41 89 40 10     MOV        dword ptr [R8 + p1->formFlags],EAX
       14022949f eb 0d           JMP        LAB_1402294ae
                             LAB_1402294a1                                   XREF[1]:     140229495(j)  
       1402294a1 45 89 68 10     MOV        dword ptr [R8 + p1->formFlags],R13D
       1402294a5 eb 07           JMP        LAB_1402294ae
                             LAB_1402294a7                                   XREF[1]:     140229491(j)  
       1402294a7 41 2b cc        SUB        this,R12D
       1402294aa 41 89 48 10     MOV        dword ptr [R8 + p1->formFlags],this
                             LAB_1402294ae                                   XREF[3]:     140229476(j), 14022949f(j), 
                                                                                          1402294a5(j)  
       1402294ae 8b b5 b8        MOV        ESI,dword ptr [RBP + p4]
                 01 00 00
       1402294b4 83 fe 03        CMP        ESI,0x3
       1402294b7 0f 85 22        JNZ        LAB_1402296df
                 02 00 00
       1402294bd 48 8b 85        MOV        RAX,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       1402294c4 48 89 44        MOV        qword ptr [RSP + local_250],RAX
                 24 38
       1402294c9 48 8b 85        MOV        RAX,qword ptr [RBP + p7]
                 d0 01 00 00
       1402294d0 48 89 44        MOV        qword ptr [RSP + local_258],RAX
                 24 30
       1402294d5 4c 89 6c        MOV        qword ptr [RSP + local_260],R13
                 24 28
       1402294da 44 89 64        MOV        dword ptr [RSP + local_268],R12D
                 24 20
       1402294df 4c 8b 8d        MOV        p2,qword ptr [RBP + local_res20]
                 a8 01 00 00
       1402294e6 4c 8b 85        MOV        p1,qword ptr [RBP + local_res18]
                 a0 01 00 00
       1402294ed 48 8d 95        LEA        p0=>local_dc,[RBP + 0xac]
                 ac 00 00 00
       1402294f4 4c 8b bd        MOV        R15,qword ptr [RBP + local_res8]
                 90 01 00 00
       1402294fb 49 8b cf        MOV        this,R15
       1402294fe e8 fd 1f        CALL       FUN_14022b500                                                                                undefined FUN_14022b500()
                 00 00
       140229503 8b 30           MOV        ESI,dword ptr [RAX]
       140229505 85 f6           TEST       ESI,ESI
       140229507 0f 84 96        JZ         LAB_1402295a3
                 00 00 00
       14022950d 44 8b f6        MOV        R14D,ESI
       140229510 41 81 e6        AND        R14D,0xfffff
                 ff ff 0f 00
       140229517 81 e6 00        AND        ESI,0x3f00000
                 00 f0 03
       14022951d 41 8b de        MOV        EBX,R14D
       140229520 48 c1 e3 04     SHL        RBX,0x4
       140229524 48 8d 05        LEA        RAX,[DAT_1420fc600]
                 d5 30 ed 01
       14022952b 48 03 d8        ADD        RBX,RAX
       14022952e 48 8b 43 08     MOV        RAX,qword ptr [RBX + 0x8]=>DAT_1420fc608
       140229532 48 8d 48 e0     LEA        this,[RAX + -0x20]
       140229536 48 85 c0        TEST       RAX,RAX
       140229539 49 0f 44 cd     CMOVZ      this,R13
       14022953d 48 3b f9        CMP        RDI,this
       140229540 74 45           JZ         LAB_140229587
       140229542 48 8b c7        MOV        RAX,RDI
       140229545 48 85 c9        TEST       this,this
       140229548 74 04           JZ         LAB_14022954e
       14022954a f0 ff 41 28     INC.LOCK   dword ptr [this->entryList + 0x28]
                             LAB_14022954e                                   XREF[1]:     140229548(j)  
       14022954e 48 8b f9        MOV        RDI,this
       140229551 48 89 4c        MOV        qword ptr [RSP + local_218],this
                 24 70
       140229556 48 89 4c        MOV        qword ptr [RSP + local_228],this
                 24 60
       14022955b 48 85 c0        TEST       RAX,RAX
       14022955e 74 27           JZ         LAB_140229587
       140229560 48 8d 48 20     LEA        this,[RAX + 0x20]
       140229564 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       140229569 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022956e ff c8           DEC        EAX
       140229570 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       140229575 75 06           JNZ        LAB_14022957d
       140229577 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022957a ff 50 08        CALL       qword ptr [RAX + 0x8]
                             LAB_14022957d                                   XREF[1]:     140229575(j)  
       14022957d 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140229582 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_140229587                                   XREF[2]:     140229540(j), 14022955e(j)  
       140229587 8b 03           MOV        EAX,dword ptr [RBX]=>DAT_1420fc600
       140229589 0f ba e0 1a     BT         EAX,0x1a
       14022958d 73 14           JNC        LAB_1402295a3
       14022958f 25 00 00        AND        EAX,0x3f00000
                 f0 03
       140229594 3b c6           CMP        EAX,ESI
       140229596 75 0b           JNZ        LAB_1402295a3
       140229598 8b 47 28        MOV        EAX,dword ptr [RDI + 0x28]
       14022959b c1 e8 0b        SHR        EAX,0xb
       14022959e 41 3b c6        CMP        EAX,R14D
       1402295a1 74 41           JZ         LAB_1402295e4
                             LAB_1402295a3                                   XREF[3]:     140229507(j), 14022958d(j), 
                                                                                          140229596(j)  
       1402295a3 48 85 ff        TEST       RDI,RDI
       1402295a6 74 3c           JZ         LAB_1402295e4
       1402295a8 48 8b cf        MOV        this,RDI
       1402295ab 48 85 c9        TEST       this,this
       1402295ae 4c 89 6c        MOV        qword ptr [RSP + local_228],R13
                 24 60
       1402295b3 4c 89 6c        MOV        qword ptr [RSP + local_218],R13
                 24 70
       1402295b8 49 8b fd        MOV        RDI,R13
       1402295bb 74 27           JZ         LAB_1402295e4
       1402295bd 48 83 c1 20     ADD        this,0x20
       1402295c1 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       1402295c6 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       1402295cb ff c8           DEC        EAX
       1402295cd a9 ff 03        TEST       EAX,0x3ff
                 00 00
       1402295d2 75 06           JNZ        LAB_1402295da
       1402295d4 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       1402295d7 ff 50 08        CALL       qword ptr [RAX + 0x8]
                             LAB_1402295da                                   XREF[1]:     1402295d2(j)  
       1402295da 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       1402295df 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_1402295e4                                   XREF[3]:     1402295a1(j), 1402295a6(j), 
                                                                                          1402295bb(j)  
       1402295e4 48 89 7d 28     MOV        qword ptr [RBP + local_160],RDI
       1402295e8 48 85 ff        TEST       RDI,RDI
       1402295eb 74 0e           JZ         LAB_1402295fb
       1402295ed f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       1402295f1 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       1402295f6 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_1402295fb                                   XREF[1]:     1402295eb(j)  
       1402295fb 48 89 7d 28     MOV        qword ptr [RBP + local_160],RDI
       1402295ff 48 8d 47 70     LEA        RAX,[RDI + 0x70]
       140229603 c6 44 24        MOV        byte ptr [RSP + local_260],0x0
                 28 00
       140229608 48 89 44        MOV        qword ptr [RSP + local_268],RAX
                 24 20
       14022960d 45 8b cc        MOV        p2,R12D
       140229610 4c 8b 85        MOV        p1,qword ptr [RBP + local_res20]
                 a8 01 00 00
       140229617 48 8d 55 28     LEA        p0=>local_160,[RBP + 0x28]
       14022961b 49 8b cf        MOV        this,R15
       14022961e e8 bd 21        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       140229623 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       14022962a 49 8b 5e 60     MOV        RBX,qword ptr [R14 + 0x60]
       14022962e 48 8b cf        MOV        this,RDI
       140229631 e8 fa 0a        CALL       FUN_1402fa130                                                                                undefined FUN_1402fa130()
                 0d 00
       140229636 48 85 c0        TEST       RAX,RAX
       140229639 75 2a           JNZ        LAB_140229665
       14022963b 48 85 db        TEST       RBX,RBX
       14022963e 74 25           JZ         LAB_140229665
       140229640 48 8b cb        MOV        this,RBX
       140229643 e8 68 f2        CALL       TESObjectCELL::GetOwner                                                                      undefined TESObjectCELL::GetOwner()
                 08 00
       140229648 48 85 c0        TEST       RAX,RAX
       14022964b 74 18           JZ         LAB_140229665
       14022964d 4c 3b 35        CMP        R14,qword ptr [gPlayerCharacter3]
                 44 e0 f0 02
       140229654 74 78           JZ         LAB_1402296ce
       140229656 49 8b d6        MOV        p0,R14
       140229659 48 8b cb        MOV        this,RBX
       14022965c e8 5f c3        CALL       TESObjectCELL::sub                                                                           undefined TESObjectCELL::sub()
                 08 00
       140229661 84 c0           TEST       AL,AL
       140229663 74 69           JZ         LAB_1402296ce
                             LAB_140229665                                   XREF[3]:     140229639(j), 14022963e(j), 
                                                                                          14022964b(j)  
       140229665 49 8b 4e 40     MOV        this,qword ptr [R14 + 0x40]
       140229669 80 79 1a 2b     CMP        byte ptr [RCX + this->unk1A],0x2b
       14022966d 0f 85 18        JNZ        LAB_14022988b
                 02 00 00
       140229673 e8 78 f7        CALL       FUN_1403a8df0                                                                                undefined FUN_1403a8df0()
                 17 00
       140229678 83 f8 01        CMP        EAX,0x1
       14022967b 0f 85 0a        JNZ        LAB_14022988b
                 02 00 00
       140229681 44 89 6c        MOV        dword ptr [RSP + local_268],R13D
                 24 20
       140229686 4c 8d 0d        LEA        p2,[RTTI_TESBipedModelForm]                                                                  = 141aca908
                 eb 1d e1 01
       14022968d 4c 8d 05        LEA        p1,[RTTI_TESBoundObject]                                                                     = 141aca908
                 5c eb e0 01
       140229694 33 d2           XOR        p0,p0
       140229696 48 8b 4f 40     MOV        this,qword ptr [RDI + 0x40]
       14022969a e8 8b 38        CALL       RTDynamicCast                                                                                undefined RTDynamicCast()
                 31 01
       14022969f 48 8b f0        MOV        RSI,RAX
       1402296a2 48 85 c0        TEST       RAX,RAX
       1402296a5 0f 84 e0        JZ         LAB_14022988b
                 01 00 00
       1402296ab ba 01 00        MOV        p0,0x1
                 00 00
       1402296b0 48 8b c8        MOV        this,RAX
       1402296b3 e8 58 0b        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fb ff
       1402296b8 48 8b d8        MOV        RBX,RAX
       1402296bb 33 d2           XOR        p0,p0
       1402296bd 48 8b ce        MOV        this,RSI
       1402296c0 e8 4b 0b        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fb ff
       1402296c5 48 3b d8        CMP        RBX,RAX
       1402296c8 0f 84 bd        JZ         LAB_14022988b
                 01 00 00
                             LAB_1402296ce                                   XREF[2]:     140229654(j), 140229663(j)  
       1402296ce 49 8b 56 40     MOV        p0,qword ptr [R14 + 0x40]
       1402296d2 48 8b cf        MOV        this,RDI
       1402296d5 e8 66 0a        CALL       TESObjectREFR::SetOwner                                                                      void TESObjectREFR::SetOwner(TESObjectREFR * this, TESForm * p0)
                 0d 00
       1402296da e9 ac 01        JMP        LAB_14022988b
                 00 00
                             LAB_1402296df                                   XREF[1]:     1402294b7(j)  
       1402296df 4c 8b bd        MOV        R15,qword ptr [RBP + p6]
                 c8 01 00 00
       1402296e6 4d 85 ff        TEST       R15,R15
       1402296e9 0f 84 c2        JZ         LAB_1402298b1
                 01 00 00
       1402296ef 49 8b c5        MOV        RAX,R13
       1402296f2 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       1402296f9 41 80 7e        CMP        byte ptr [R14 + 0x1a],0x3e
                 1a 3e
       1402296fe 49 0f 44 c6     CMOVZ      RAX,R14
       140229702 48 85 c0        TEST       RAX,RAX
       140229705 74 17           JZ         LAB_14022971e
       140229707 49 8d 4e 70     LEA        this,[R14 + 0x70]
       14022970b e8 d0 a9        CALL       ExtraDataList::GetLeveledNPC                                                                 undefined ExtraDataList::GetLeveledNPC()
                 f3 ff
       140229710 48 8b d8        MOV        RBX,RAX
       140229713 48 85 c0        TEST       RAX,RAX
       140229716 75 11           JNZ        LAB_140229729
       140229718 49 8b 5e 40     MOV        RBX,qword ptr [R14 + 0x40]
       14022971c eb 0b           JMP        LAB_140229729
                             LAB_14022971e                                   XREF[1]:     140229705(j)  
       14022971e 49 8b ce        MOV        this,R14
       140229721 e8 1a 07        CALL       TESObjectREFR::GetOwner                                                                      TESForm * TESObjectREFR::GetOwner(TESObjectREFR * this)
                 0d 00
       140229726 48 8b d8        MOV        RBX,RAX
                             LAB_140229729                                   XREF[2]:     140229716(j), 14022971c(j)  
       140229729 83 fe 01        CMP        ESI,0x1
       14022972c 0f 85 89        JNZ        LAB_1402297bb
                 00 00 00
       140229732 48 8b 8d        MOV        this,qword ptr [RBP + local_res20]
                 a8 01 00 00
       140229739 e8 02 1f        CALL       FUN_1401db640                                                                                undefined FUN_1401db640()
                 fb ff
       14022973e 84 c0           TEST       AL,AL
       140229740 48 8b 85        MOV        RAX,qword ptr [RBP + local_res20]
                 a8 01 00 00
       140229747 0f 85 7e        JNZ        LAB_1402297cb
                 00 00 00
       14022974d 80 78 1a 2a     CMP        byte ptr [RAX + 0x1a],0x2a
       140229751 75 09           JNZ        LAB_14022975c
       140229753 4c 3b 3d        CMP        R15,qword ptr [DAT_1431874f8]
                 9e dd f5 02
       14022975a 74 6f           JZ         LAB_1402297cb
                             LAB_14022975c                                   XREF[1]:     140229751(j)  
       14022975c 48 83 bd        CMP        qword ptr [RBP + p5],0x0
                 c0 01 00 
                 00 00
       140229764 75 2e           JNZ        LAB_140229794
       140229766 b9 20 00        MOV        this,0x20
                 00 00
       14022976b e8 90 25        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       140229770 48 89 85        MOV        qword ptr [RBP + local_78],RAX
                 10 01 00 00
       140229777 48 85 c0        TEST       RAX,RAX
       14022977a 74 11           JZ         LAB_14022978d
       14022977c 48 8b c8        MOV        this,RAX
       14022977f e8 0c 87        CALL       ExtraDataList::ctor                                                                          undefined ExtraDataList::ctor()
                 f2 ff
       140229784 48 89 85        MOV        qword ptr [RBP + p5],RAX
                 c0 01 00 00
       14022978b eb 07           JMP        LAB_140229794
                             LAB_14022978d                                   XREF[1]:     14022977a(j)  
       14022978d 4c 89 ad        MOV        qword ptr [RBP + p5],R13
                 c0 01 00 00
                             LAB_140229794                                   XREF[2]:     140229764(j), 14022978b(j)  
       140229794 48 8b d3        MOV        p0,RBX
       140229797 48 8b 9d        MOV        RBX,qword ptr [RBP + p5]
                 c0 01 00 00
       14022979e 48 8b cb        MOV        this,RBX
       1402297a1 e8 6a 10        CALL       ExtraDataList::SetOwnerForm                                                                  undefined ExtraDataList::SetOwnerForm()
                 f3 ff
       1402297a6 41 0f b7 d4     MOVZX      p0,R12W
       1402297aa 48 8b cb        MOV        this,RBX
       1402297ad e8 1e 1a        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       1402297b2 48 8b 85        MOV        RAX,qword ptr [RBP + local_res20]
                 a8 01 00 00
       1402297b9 eb 17           JMP        LAB_1402297d2
                             LAB_1402297bb                                   XREF[1]:     14022972c(j)  
       1402297bb 48 8b 9d        MOV        RBX,qword ptr [RBP + p5]
                 c0 01 00 00
       1402297c2 48 8b 85        MOV        RAX,qword ptr [RBP + local_res20]
                 a8 01 00 00
       1402297c9 eb 07           JMP        LAB_1402297d2
                             LAB_1402297cb                                   XREF[2]:     140229747(j), 14022975a(j)  
       1402297cb 48 8b 9d        MOV        RBX,qword ptr [RBP + p5]
                 c0 01 00 00
                             LAB_1402297d2                                   XREF[2]:     1402297b9(j), 1402297c9(j)  
       1402297d2 48 85 db        TEST       RBX,RBX
       1402297d5 74 17           JZ         LAB_1402297ee
       1402297d7 4c 3b 3d        CMP        R15,qword ptr [DAT_1431874f8]
                 1a dd f5 02
       1402297de 75 0e           JNZ        LAB_1402297ee
       1402297e0 80 78 1a 2a     CMP        byte ptr [RAX + 0x1a],0x2a
       1402297e4 75 08           JNZ        LAB_1402297ee
       1402297e6 48 8b cb        MOV        this,RBX
       1402297e9 e8 82 fa        CALL       FUN_140169270                                                                                undefined FUN_140169270()
                 f3 ff
                             LAB_1402297ee                                   XREF[3]:     1402297d5(j), 1402297de(j), 
                                                                                          1402297e4(j)  
       1402297ee 83 fe 05        CMP        ESI,0x5
       1402297f1 75 6e           JNZ        LAB_140229861
       1402297f3 48 85 db        TEST       RBX,RBX
       1402297f6 74 0d           JZ         LAB_140229805
       1402297f8 48 8b cb        MOV        this,RBX
       1402297fb e8 e0 57        CALL       ExtraDataList::GetOwner                                                                      undefined ExtraDataList::GetOwner()
                 f3 ff
       140229800 48 85 c0        TEST       RAX,RAX
       140229803 75 5c           JNZ        LAB_140229861
                             LAB_140229805                                   XREF[1]:     1402297f6(j)  
       140229805 4c 3b 35        CMP        R14,qword ptr [gPlayerCharacter3]
                 8c de f0 02
       14022980c 75 53           JNZ        LAB_140229861
       14022980e 48 85 db        TEST       RBX,RBX
       140229811 75 2b           JNZ        LAB_14022983e
       140229813 8d 4b 20        LEA        this,[RBX + 0x20]
       140229816 e8 e5 24        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       14022981b 48 89 85        MOV        qword ptr [RBP + local_70],RAX
                 18 01 00 00
       140229822 48 85 c0        TEST       RAX,RAX
       140229825 74 0d           JZ         LAB_140229834
       140229827 48 8b c8        MOV        this,RAX
       14022982a e8 61 86        CALL       ExtraDataList::ctor                                                                          undefined ExtraDataList::ctor()
                 f2 ff
       14022982f 48 8b d8        MOV        RBX,RAX
       140229832 eb 03           JMP        LAB_140229837
                             LAB_140229834                                   XREF[1]:     140229825(j)  
       140229834 49 8b dd        MOV        RBX,R13
                             LAB_140229837                                   XREF[1]:     140229832(j)  
       140229837 48 89 9d        MOV        qword ptr [RBP + p5],RBX
                 c0 01 00 00
                             LAB_14022983e                                   XREF[1]:     140229811(j)  
       14022983e 48 8b 0d        MOV        this,qword ptr [DAT_1431874f8]
                 b3 dc f5 02
       140229845 e8 66 19        CALL       FUN_14068b1b0                                                                                undefined FUN_14068b1b0()
                 46 00
       14022984a 48 8b d0        MOV        p0,RAX
       14022984d 48 8b cb        MOV        this,RBX
       140229850 e8 bb 0f        CALL       ExtraDataList::SetOwnerForm                                                                  undefined ExtraDataList::SetOwnerForm()
                 f3 ff
       140229855 41 0f b7 d4     MOVZX      p0,R12W
       140229859 48 8b cb        MOV        this,RBX
       14022985c e8 6f 19        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
                             LAB_140229861                                   XREF[3]:     1402297f1(j), 140229803(j), 
                                                                                          14022980c(j)  
       140229861 4d 8b 17        MOV        R10,qword ptr [R15]
       140229864 48 8b 85        MOV        RAX,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022986b 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
       14022986f 48 89 44        MOV        qword ptr [RSP + local_268],RAX
                 24 20
       140229874 45 8b cc        MOV        p2,R12D
       140229877 4c 8b c3        MOV        p1,RBX
       14022987a 48 8b 95        MOV        p0,qword ptr [RBP + local_res20]
                 a8 01 00 00
       140229881 49 8b cf        MOV        this,R15
       140229884 41 ff 92        CALL       qword ptr [R10 + 0x2d0]
                 d0 02 00 00
                             LAB_14022988b                                   XREF[5]:     14022966d(j), 14022967b(j), 
                                                                                          1402296a5(j), 1402296c8(j), 
                                                                                          1402296da(j)  
       14022988b 48 8b 4c        MOV        this,qword ptr [RSP + local_210]
                 24 78
       140229890 e8 8b 8f        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       140229895 ba 18 00        MOV        p0,0x18
                 00 00
       14022989a 48 8b 4c        MOV        this,qword ptr [RSP + local_210]
                 24 78
       14022989f e8 e8 12        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       1402298a4 4d 8b e5        MOV        R12,R13
       1402298a7 4c 89 6c        MOV        qword ptr [RSP + local_210],R13
                 24 78
       1402298ac e9 80 00        JMP        LAB_140229931
                 00 00
                             LAB_1402298b1                                   XREF[1]:     1402296e9(j)  
       1402298b1 4c 8b 7c        MOV        R15,qword ptr [RSP + local_210]
                 24 78
       1402298b6 49 8b 47 08     MOV        RAX,qword ptr [R15 + 0x8]
       1402298ba 48 85 c0        TEST       RAX,RAX
       1402298bd 74 05           JZ         LAB_1402298c4
       1402298bf 48 8b 08        MOV        this,qword ptr [RAX]
       1402298c2 eb 03           JMP        LAB_1402298c7
                             LAB_1402298c4                                   XREF[1]:     1402298bd(j)  
       1402298c4 49 8b cd        MOV        this,R13
                             LAB_1402298c7                                   XREF[1]:     1402298c2(j)  
       1402298c7 48 89 7d 30     MOV        qword ptr [RBP + local_158],RDI
       1402298cb 48 85 ff        TEST       RDI,RDI
       1402298ce 74 0e           JZ         LAB_1402298de
       1402298d0 f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       1402298d4 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       1402298d9 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_1402298de                                   XREF[1]:     1402298ce(j)  
       1402298de 48 89 7d 30     MOV        qword ptr [RBP + local_158],RDI
       1402298e2 c6 44 24        MOV        byte ptr [RSP + local_260],0x1
                 28 01
       1402298e7 48 89 4c        MOV        qword ptr [RSP + local_268],this
                 24 20
       1402298ec 45 8b cc        MOV        p2,R12D
       1402298ef 4c 8b 85        MOV        p1,qword ptr [RBP + local_res20]
                 a8 01 00 00
       1402298f6 48 8d 55 30     LEA        p0=>local_158,[RBP + 0x30]
       1402298fa 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       140229901 e8 da 1e        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       140229906 49 8b cf        MOV        this,R15
       140229909 e8 12 8f        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022990e ba 18 00        MOV        p0,0x18
                 00 00
       140229913 49 8b cf        MOV        this,R15
       140229916 e8 71 12        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       14022991b 4d 8b e5        MOV        R12,R13
       14022991e 4c 89 6c        MOV        qword ptr [RSP + local_210],R13
                 24 78
       140229923 eb 05           JMP        LAB_14022992a
                             LAB_140229925                                   XREF[1]:     14022933f(j)  
       140229925 4c 8b 64        MOV        R12,qword ptr [RSP + local_210]
                 24 78
                             LAB_14022992a                                   XREF[1]:     140229923(j)  
       14022992a 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
                             LAB_140229931                                   XREF[1]:     1402298ac(j)  
       140229931 8b 85 b0        MOV        EAX,dword ptr [RBP + p3]
                 01 00 00
       140229937 85 c0           TEST       EAX,EAX
       140229939 0f 8e 5a        JLE        LAB_14022a799
                 0e 00 00
       14022993f 48 8b 4d a0     MOV        this,qword ptr [RBP + local_1e8]
       140229943 48 8b 59 08     MOV        RBX,qword ptr [RCX + this->owner]
       140229947 48 89 5d a8     MOV        qword ptr [RBP + local_1e0],RBX
       14022994b 48 85 db        TEST       RBX,RBX
       14022994e 0f 84 45        JZ         LAB_14022a799
                 0e 00 00
       140229954 48 83 7b        CMP        qword ptr [RBX + 0x8],0x0
                 08 00
       140229959 75 0a           JNZ        LAB_140229965
       14022995b 48 83 3b 00     CMP        qword ptr [RBX],0x0
       14022995f 0f 84 34        JZ         LAB_14022a799
                 0e 00 00
                             LAB_140229965                                   XREF[1]:     140229959(j)  
       140229965 40 32 f6        XOR        SIL,SIL
       140229968 40 88 74        MOV        byte ptr [RSP + local_220],SIL
                 24 68
       14022996d 4c 3b 35        CMP        R14,qword ptr [gPlayerCharacter3]
                 24 dd f0 02
       140229974 0f 85 99        JNZ        LAB_140229a13
                 00 00 00
       14022997a 45 8b fd        MOV        R15D,R13D
       14022997d 0f 1f 00        NOP        dword ptr [RAX]
                             LAB_140229980                                   XREF[1]:     14022999d(j)  
       140229980 48 8b 0b        MOV        this,qword ptr [RBX]
       140229983 48 85 c9        TEST       this,this
       140229986 74 17           JZ         LAB_14022999f
       140229988 33 d2           XOR        p0,p0
       14022998a e8 91 01        CALL       ExtraDataList::sub                                                                           undefined ExtraDataList::sub()
                 f3 ff
       14022998f 84 c0           TEST       AL,AL
       140229991 74 03           JZ         LAB_140229996
       140229993 41 ff c7        INC        R15D
                             LAB_140229996                                   XREF[1]:     140229991(j)  
       140229996 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14022999a 48 85 db        TEST       RBX,RBX
       14022999d 75 e1           JNZ        LAB_140229980
                             LAB_14022999f                                   XREF[1]:     140229986(j)  
       14022999f 48 8b 4d a0     MOV        this,qword ptr [RBP + local_1e8]
       1402299a3 48 8b 71 08     MOV        RSI,qword ptr [RCX + this->owner]
       1402299a7 45 8b f5        MOV        R14D,R13D
       1402299aa 48 85 f6        TEST       RSI,RSI
       1402299ad 74 43           JZ         LAB_1402299f2
       1402299af 90              NOP
                             LAB_1402299b0                                   XREF[1]:     1402299ec(j)  
       1402299b0 48 8b 1e        MOV        RBX,qword ptr [RSI]
       1402299b3 48 85 db        TEST       RBX,RBX
       1402299b6 74 36           JZ         LAB_1402299ee
       1402299b8 b2 01           MOV        p0,0x1
       1402299ba 48 8b cb        MOV        this,RBX
       1402299bd e8 5e 01        CALL       ExtraDataList::sub                                                                           undefined ExtraDataList::sub()
                 f3 ff
       1402299c2 84 c0           TEST       AL,AL
       1402299c4 75 1f           JNZ        LAB_1402299e5
       1402299c6 45 33 c0        XOR        p1,p1
       1402299c9 b2 01           MOV        p0,0x1
       1402299cb 48 8b cb        MOV        this,RBX
       1402299ce e8 cd 56        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       1402299d3 84 c0           TEST       AL,AL
       1402299d5 75 0e           JNZ        LAB_1402299e5
       1402299d7 48 8b cb        MOV        this,RBX
       1402299da e8 81 59        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       1402299df 0f bf c8        MOVSX      this,AX
       1402299e2 44 03 f1        ADD        R14D,this
                             LAB_1402299e5                                   XREF[2]:     1402299c4(j), 1402299d5(j)  
       1402299e5 48 8b 76 08     MOV        RSI,qword ptr [RSI + 0x8]
       1402299e9 48 85 f6        TEST       RSI,RSI
       1402299ec 75 c2           JNZ        LAB_1402299b0
                             LAB_1402299ee                                   XREF[1]:     1402299b6(j)  
       1402299ee 48 8b 4d a0     MOV        this,qword ptr [RBP + local_1e8]
                             LAB_1402299f2                                   XREF[1]:     1402299ad(j)  
       1402299f2 43 8d 04 3e     LEA        EAX,[R14 + R15*0x1]
       1402299f6 3b 85 b0        CMP        EAX,dword ptr [RBP + p3]
                 01 00 00
       1402299fc 40 0f 9d c6     SETGE      SIL
       140229a00 40 88 74        MOV        byte ptr [RSP + local_220],SIL
                 24 68
       140229a05 48 8b 59 08     MOV        RBX,qword ptr [RCX + this->owner]
       140229a09 48 89 5d a8     MOV        qword ptr [RBP + local_1e0],RBX
       140229a0d 8b 85 b0        MOV        EAX,dword ptr [RBP + p3]
                 01 00 00
                             LAB_140229a13                                   XREF[1]:     140229974(j)  
       140229a13 48 85 db        TEST       RBX,RBX
       140229a16 0f 84 7d        JZ         LAB_14022a799
                 0d 00 00
       140229a1c 0f 1f 40 00     NOP        dword ptr [RAX]
                             LAB_140229a20                                   XREF[1]:     14022a793(j)  
       140229a20 4c 8b 33        MOV        R14,qword ptr [RBX]
       140229a23 4c 89 75 b8     MOV        qword ptr [RBP + local_1d0],R14
       140229a27 4d 85 f6        TEST       R14,R14
       140229a2a 0f 84 69        JZ         LAB_14022a799
                 0d 00 00
       140229a30 85 c0           TEST       EAX,EAX
       140229a32 0f 8e 61        JLE        LAB_14022a799
                 0d 00 00
       140229a38 4d 85 e4        TEST       R12,R12
       140229a3b 74 15           JZ         LAB_140229a52
       140229a3d 49 8b cc        MOV        this,R12
       140229a40 e8 db 8d        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       140229a45 ba 18 00        MOV        p0,0x18
                 00 00
       140229a4a 49 8b cc        MOV        this,R12
       140229a4d e8 3a 11        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
                             LAB_140229a52                                   XREF[1]:     140229a3b(j)  
       140229a52 83 3d 77        CMP        dword ptr [gMemoryManagerState],0x2
                 77 3c 03 02
       140229a59 74 13           JZ         LAB_140229a6e
       140229a5b 48 8d 15        LEA        p0,[gMemoryManagerState]
                 6e 77 3c 03
       140229a62 48 8d 0d        LEA        this,[gMemoryManager]
                 77 77 3c 03
       140229a69 e8 12 ac        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140229a6e                                   XREF[1]:     140229a59(j)  
       140229a6e 45 33 c9        XOR        p2,p2
       140229a71 45 33 c0        XOR        p1,p1
       140229a74 41 8d 51 18     LEA        p0,[p2 + 0x18]
       140229a78 48 8d 0d        LEA        this,[gMemoryManager]
                 61 77 3c 03
       140229a7f e8 3c a6        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       140229a84 4c 8b f8        MOV        R15,RAX
       140229a87 48 89 44        MOV        qword ptr [RSP + local_210],RAX
                 24 78
       140229a8c 48 85 c0        TEST       RAX,RAX
       140229a8f 74 0d           JZ         LAB_140229a9e
       140229a91 4c 89 28        MOV        qword ptr [RAX],R13
       140229a94 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       140229a98 44 89 68 10     MOV        dword ptr [RAX + 0x10],R13D
       140229a9c eb 03           JMP        LAB_140229aa1
                             LAB_140229a9e                                   XREF[1]:     140229a8f(j)  
       140229a9e 4d 8b fd        MOV        R15,R13
                             LAB_140229aa1                                   XREF[1]:     140229a9c(j)  
       140229aa1 48 8b 45 88     MOV        RAX,qword ptr [RBP + local_200]
       140229aa5 48 8b 08        MOV        this,qword ptr [RAX]
       140229aa8 49 89 0f        MOV        qword ptr [R15],this
       140229aab 49 8b ce        MOV        this,R14
       140229aae e8 ad 58        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       140229ab3 66 85 c0        TEST       AX,AX
       140229ab6 0f 88 a4        JS         LAB_14022a760
                 0c 00 00
       140229abc 40 84 f6        TEST       SIL,SIL
       140229abf 74 15           JZ         LAB_140229ad6
       140229ac1 45 33 c0        XOR        p1,p1
       140229ac4 b2 01           MOV        p0,0x1
       140229ac6 49 8b ce        MOV        this,R14
       140229ac9 e8 d2 55        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       140229ace 84 c0           TEST       AL,AL
       140229ad0 0f 85 8a        JNZ        LAB_14022a760
                 0c 00 00
                             LAB_140229ad6                                   XREF[1]:     140229abf(j)  
       140229ad6 45 33 c0        XOR        p1,p1
       140229ad9 b2 01           MOV        p0,0x1
       140229adb 49 8b ce        MOV        this,R14
       140229ade e8 bd 55        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       140229ae3 84 c0           TEST       AL,AL
       140229ae5 0f 84 36        JZ         LAB_140229c21
                 01 00 00
       140229aeb 49 8b ce        MOV        this,R14
       140229aee e8 6d 58        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       140229af3 66 83 f8 01     CMP        AX,0x1
       140229af7 7e 19           JLE        LAB_140229b12
       140229af9 49 8b ce        MOV        this,R14
       140229afc e8 5f 58        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       140229b01 0f bf c8        MOVSX      this,AX
       140229b04 8b b5 b0        MOV        ESI,dword ptr [RBP + p3]
                 01 00 00
       140229b0a 3b ce           CMP        this,ESI
       140229b0c 0f 85 15        JNZ        LAB_140229c27
                 01 00 00
                             LAB_140229b12                                   XREF[1]:     140229af7(j)  
       140229b12 49 8b ce        MOV        this,R14
       140229b15 e8 46 58        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       140229b1a 0f b7 d8        MOVZX      EBX,AX
       140229b1d 49 8b ce        MOV        this,R14
       140229b20 e8 2b fd        CALL       FUN_140179850                                                                                undefined FUN_140179850()
                 f4 ff
       140229b25 83 f8 01        CMP        EAX,0x1
       140229b28 76 30           JBE        LAB_140229b5a
       140229b2a 49 8b ce        MOV        this,R14
       140229b2d e8 1e fd        CALL       FUN_140179850                                                                                undefined FUN_140179850()
                 f4 ff
       140229b32 83 f8 02        CMP        EAX,0x2
       140229b35 75 2a           JNZ        LAB_140229b61
       140229b37 66 83 fb 01     CMP        BX,0x1
       140229b3b 7f 1d           JG         LAB_140229b5a
       140229b3d 49 8b ce        MOV        this,R14
       140229b40 e8 6b 57        CALL       FUN_14015f2b0                                                                                undefined FUN_14015f2b0()
                 f3 ff
       140229b45 84 c0           TEST       AL,AL
       140229b47 75 11           JNZ        LAB_140229b5a
       140229b49 ba 8e 00        MOV        p0,0x8e
                 00 00
       140229b4e 49 8b ce        MOV        this,R14
       140229b51 e8 9a 1d        CALL       ExtraDataList::HasExtraData                                                                  undefined ExtraDataList::HasExtraData()
                 01 00
       140229b56 84 c0           TEST       AL,AL
       140229b58 74 07           JZ         LAB_140229b61
                             LAB_140229b5a                                   XREF[3]:     140229b28(j), 140229b3b(j), 
                                                                                          140229b47(j)  
       140229b5a 4c 89 ad        MOV        qword ptr [RBP + p5],R13
                 c0 01 00 00
                             LAB_140229b61                                   XREF[2]:     140229b35(j), 140229b58(j)  
       140229b61 48 8b 45 88     MOV        RAX,qword ptr [RBP + local_200]
       140229b65 0f bf f3        MOVSX      ESI,BX
       140229b68 4d 8b ce        MOV        p2,R14
       140229b6b 44 8b c6        MOV        p1,ESI
       140229b6e 48 8b 10        MOV        p0,qword ptr [RAX]
       140229b71 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       140229b78 49 8b ce        MOV        this,R14
       140229b7b e8 10 82        CALL       TESObjectREFR::sub                                                                           undefined TESObjectREFR::sub()
                 0b 00
       140229b80 84 c0           TEST       AL,AL
       140229b82 0f 84 4f        JZ         LAB_14022acd7
                 11 00 00
       140229b88 48 85 ff        TEST       RDI,RDI
       140229b8b 0f 84 c9        JZ         LAB_14022ac5a
                 10 00 00
       140229b91 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140229b95 e8 c6 57        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       140229b9a 8d 14 03        LEA        p0,[RBX + RAX*0x1]
       140229b9d 48 8d 4f 70     LEA        this,[RDI + 0x70]
       140229ba1 e8 2a 16        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       140229ba6 48 8b 85        MOV        RAX,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       140229bad 48 89 44        MOV        qword ptr [RSP + local_240],RAX
                 24 48
       140229bb2 48 8b 85        MOV        RAX,qword ptr [RBP + p7]
                 d0 01 00 00
       140229bb9 48 89 44        MOV        qword ptr [RSP + local_248],RAX
                 24 40
       140229bbe 4c 8b a5        MOV        R12,qword ptr [RBP + p6]
                 c8 01 00 00
       140229bc5 4c 89 64        MOV        qword ptr [RSP + local_250],R12
                 24 38
       140229bca 48 8b 85        MOV        RAX,qword ptr [RBP + p5]
                 c0 01 00 00
       140229bd1 48 89 44        MOV        qword ptr [RSP + local_258],RAX
                 24 30
       140229bd6 44 89 6c        MOV        dword ptr [RSP + local_260],R13D
                 24 28
       140229bdb 89 74 24 20     MOV        dword ptr [RSP + local_268],ESI
       140229bdf 4c 8b ad        MOV        R13,qword ptr [RBP + local_res20]
                 a8 01 00 00
       140229be6 4d 8b cd        MOV        p2,R13
       140229be9 4d 8b c6        MOV        p1,R14
       140229bec 48 8d 95        LEA        p0=>local_c0,[RBP + 0xc8]
                 c8 00 00 00
       140229bf3 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res8]
                 90 01 00 00
       140229bfa 48 8b cb        MOV        this,RBX
       140229bfd e8 7e e5        CALL       InventoryChanges::RemoveItem                                                                 BSPointerHandle<RE::TESObjectREFR> InventoryChanges::RemoveItem(InventoryCh
                 ff ff
       140229c02 48 8b c8        MOV        this,RAX
       140229c05 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       140229c0a e8 01 fb        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       140229c0f 8b 85 b0        MOV        EAX,dword ptr [RBP + p3]
                 01 00 00
       140229c15 2b c6           SUB        EAX,ESI
       140229c17 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140229c1c e9 54 10        JMP        LAB_14022ac75
                 00 00
                             LAB_140229c21                                   XREF[1]:     140229ae5(j)  
       140229c21 8b b5 b0        MOV        ESI,dword ptr [RBP + p3]
                 01 00 00
                             LAB_140229c27                                   XREF[1]:     140229b0c(j)  
       140229c27 49 8b ce        MOV        this,R14
       140229c2a e8 31 57        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       140229c2f 44 0f bf e0     MOVSX      R12D,AX
       140229c33 44 89 65 c0     MOV        dword ptr [RBP + local_1c8],R12D
       140229c37 44 3b e6        CMP        R12D,ESI
       140229c3a 0f 8f 19        JG         LAB_140229d59
                 01 00 00
       140229c40 49 8b ce        MOV        this,R14
       140229c43 e8 58 56        CALL       FUN_14015f2a0                                                                                undefined FUN_14015f2a0()
                 f3 ff
       140229c48 48 85 c0        TEST       RAX,RAX
       140229c4b 0f 85 08        JNZ        LAB_140229d59
                 01 00 00
       140229c51 48 8b 45 98     MOV        RAX,qword ptr [RBP + local_1f0]
       140229c55 44 29 60 10     SUB        dword ptr [RAX + 0x10],R12D
       140229c59 45 01 67 10     ADD        dword ptr [R15 + 0x10],R12D
       140229c5d 49 8b f6        MOV        RSI,R14
       140229c60 44 29 a5        SUB        dword ptr [RBP + p3],R12D
                 b0 01 00 00
       140229c67 48 8b 45 a0     MOV        RAX,qword ptr [RBP + local_1e8]
       140229c6b 4c 39 33        CMP        qword ptr [RBX],R14
       140229c6e 75 0e           JNZ        LAB_140229c7e
       140229c70 48 3b 58 08     CMP        RBX,qword ptr [RAX + 0x8]
       140229c74 74 08           JZ         LAB_140229c7e
       140229c76 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       140229c7a 48 89 5d a8     MOV        qword ptr [RBP + local_1e0],RBX
                             LAB_140229c7e                                   XREF[2]:     140229c6e(j), 140229c74(j)  
       140229c7e 48 8b 50 08     MOV        p0,qword ptr [RAX + 0x8]
       140229c82 4d 85 f6        TEST       R14,R14
       140229c85 74 68           JZ         LAB_140229cef
       140229c87 4c 8b 4a 08     MOV        p2,qword ptr [RDX + p0->sourceFiles.array]
       140229c8b 4d 85 c9        TEST       p2,p2
       140229c8e 75 05           JNZ        LAB_140229c95
       140229c90 4c 39 0a        CMP        qword ptr [p0->__vftable],p2
       140229c93 74 5a           JZ         LAB_140229cef
                             LAB_140229c95                                   XREF[1]:     140229c8e(j)  
       140229c95 48 8b ca        MOV        this,p0
       140229c98 4c 8b c2        MOV        p1,p0
       140229c9b 0f 1f 44        NOP        dword ptr [RAX + RAX*0x1]
                 00 00
                             LAB_140229ca0                                   XREF[1]:     140229caf(j)  
       140229ca0 4c 39 31        CMP        qword ptr [this->entryList],R14
       140229ca3 74 0e           JZ         LAB_140229cb3
       140229ca5 4c 8b c1        MOV        p1,this
       140229ca8 48 8b 49 08     MOV        this,qword ptr [RCX + this->owner]
       140229cac 48 85 c9        TEST       this,this
       140229caf 75 ef           JNZ        LAB_140229ca0
       140229cb1 eb 3c           JMP        LAB_140229cef
                             LAB_140229cb3                                   XREF[1]:     140229ca3(j)  
       140229cb3 48 3b ca        CMP        this,p0
       140229cb6 75 21           JNZ        LAB_140229cd9
       140229cb8 4d 85 c9        TEST       p2,p2
       140229cbb 74 17           JZ         LAB_140229cd4
       140229cbd 49 8b 41 08     MOV        RAX,qword ptr [p2 + 0x8]
       140229cc1 48 89 42 08     MOV        qword ptr [RDX + p0->sourceFiles.array],RAX
       140229cc5 49 8b 01        MOV        RAX,qword ptr [p2]
       140229cc8 48 89 02        MOV        qword ptr [p0->__vftable],RAX
       140229ccb 4d 89 69 08     MOV        qword ptr [p2 + 0x8],R13
       140229ccf 49 8b c9        MOV        this,p2
       140229cd2 eb 11           JMP        LAB_140229ce5
                             LAB_140229cd4                                   XREF[1]:     140229cbb(j)  
       140229cd4 4c 89 2a        MOV        qword ptr [p0->__vftable],R13
       140229cd7 eb 16           JMP        LAB_140229cef
                             LAB_140229cd9                                   XREF[1]:     140229cb6(j)  
       140229cd9 48 8b 41 08     MOV        RAX,qword ptr [RCX + this->owner]
       140229cdd 49 89 40 08     MOV        qword ptr [R8 + p1->sourceFiles.array],RAX
       140229ce1 4c 89 69 08     MOV        qword ptr [RCX + this->owner],R13
                             LAB_140229ce5                                   XREF[1]:     140229cd2(j)  
       140229ce5 ba 01 00        MOV        p0,0x1
                 00 00
       140229cea e8 81 7b        CALL       FUN_1401c1870                                                                                undefined FUN_1401c1870()
                 f9 ff
                             LAB_140229cef                                   XREF[4]:     140229c85(j), 140229c93(j), 
                                                                                          140229cb1(j), 140229cd7(j)  
       140229cef 4d 8b f5        MOV        R14,R13
       140229cf2 4c 89 6d b8     MOV        qword ptr [RBP + local_1d0],R13
       140229cf6 4c 39 6e 08     CMP        qword ptr [RSI + 0x8],R13
       140229cfa 75 1d           JNZ        LAB_140229d19
                             LAB_140229cfc                                   XREF[1]:     140229e3b(j)  
       140229cfc 48 8b ce        MOV        this,RSI
       140229cff e8 dc 81        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       140229d04 ba 20 00        MOV        p0,0x20
                 00 00
       140229d09 48 8b ce        MOV        this,RSI
       140229d0c e8 7b 0e        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       140229d11 49 8b f5        MOV        RSI,R13
       140229d14 e9 e3 01        JMP        LAB_140229efc
                 00 00
                             LAB_140229d19                                   XREF[1]:     140229cfa(j)  
       140229d19 49 8b 5f 08     MOV        RBX,qword ptr [R15 + 0x8]
       140229d1d 48 85 db        TEST       RBX,RBX
       140229d20 75 2f           JNZ        LAB_140229d51
       140229d22 8d 4b 10        LEA        this,[RBX + 0x10]
       140229d25 e8 d6 1f        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       140229d2a 48 8b d8        MOV        RBX,RAX
       140229d2d 48 89 44        MOV        qword ptr [RSP + local_210],RAX
                 24 78
       140229d32 48 85 c0        TEST       RAX,RAX
       140229d35 74 13           JZ         LAB_140229d4a
       140229d37 4c 89 28        MOV        qword ptr [RAX],R13
       140229d3a 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       140229d3e 49 89 47 08     MOV        qword ptr [R15 + 0x8],RAX
       140229d42 4c 39 30        CMP        qword ptr [RAX],R14
       140229d45 e9 53 01        JMP        LAB_140229e9d
                 00 00
                             LAB_140229d4a                                   XREF[1]:     140229d35(j)  
       140229d4a 49 8b dd        MOV        RBX,R13
       140229d4d 49 89 5f 08     MOV        qword ptr [R15 + 0x8],RBX
                             LAB_140229d51                                   XREF[1]:     140229d20(j)  
       140229d51 4c 39 33        CMP        qword ptr [RBX],R14
       140229d54 e9 44 01        JMP        LAB_140229e9d
                 00 00
                             LAB_140229d59                                   XREF[2]:     140229c3a(j), 140229c4b(j)  
       140229d59 49 8b ce        MOV        this,R14
       140229d5c e8 3f 55        CALL       FUN_14015f2a0                                                                                undefined FUN_14015f2a0()
                 f3 ff
       140229d61 48 89 45 50     MOV        qword ptr [RBP + local_138],RAX
       140229d65 48 85 c0        TEST       RAX,RAX
       140229d68 74 18           JZ         LAB_140229d82
       140229d6a 41 3b f4        CMP        ESI,R12D
       140229d6d 74 02           JZ         LAB_140229d71
       140229d6f 7e 11           JLE        LAB_140229d82
                             LAB_140229d71                                   XREF[1]:     140229d6d(j)  
       140229d71 48 8b 45 98     MOV        RAX,qword ptr [RBP + local_1f0]
       140229d75 44 29 60 10     SUB        dword ptr [RAX + 0x10],R12D
       140229d79 41 0f b7 d4     MOVZX      p0,R12W
       140229d7d 66 f7 da        NEG        p0
       140229d80 eb 0e           JMP        LAB_140229d90
                             LAB_140229d82                                   XREF[2]:     140229d68(j), 140229d6f(j)  
       140229d82 48 8b 45 98     MOV        RAX,qword ptr [RBP + local_1f0]
       140229d86 41 0f b7 d4     MOVZX      p0,R12W
       140229d8a 29 70 10        SUB        dword ptr [RAX + 0x10],ESI
       140229d8d 66 2b d6        SUB        p0,SI
                             LAB_140229d90                                   XREF[1]:     140229d80(j)  
       140229d90 41 0f b7 dc     MOVZX      EBX,R12W
       140229d94 49 8b ce        MOV        this,R14
       140229d97 e8 34 14        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       140229d9c 83 3d 2d        CMP        dword ptr [gMemoryManagerState],0x2
                 74 3c 03 02
       140229da3 74 13           JZ         LAB_140229db8
       140229da5 48 8d 15        LEA        p0,[gMemoryManagerState]
                 24 74 3c 03
       140229dac 48 8d 0d        LEA        this,[gMemoryManager]
                 2d 74 3c 03
       140229db3 e8 c8 a8        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140229db8                                   XREF[1]:     140229da3(j)  
       140229db8 45 33 c9        XOR        p2,p2
       140229dbb 45 33 c0        XOR        p1,p1
       140229dbe 41 8d 51 20     LEA        p0,[p2 + 0x20]
       140229dc2 48 8d 0d        LEA        this,[gMemoryManager]
                 17 74 3c 03
       140229dc9 e8 f2 a2        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       140229dce 48 89 85        MOV        qword ptr [RBP + local_68],RAX
                 20 01 00 00
       140229dd5 48 85 c0        TEST       RAX,RAX
       140229dd8 74 0d           JZ         LAB_140229de7
       140229dda 48 8b c8        MOV        this,RAX
       140229ddd e8 ae 80        CALL       ExtraDataList::ctor                                                                          undefined ExtraDataList::ctor()
                 f2 ff
       140229de2 48 8b f0        MOV        RSI,RAX
       140229de5 eb 03           JMP        LAB_140229dea
                             LAB_140229de7                                   XREF[1]:     140229dd8(j)  
       140229de7 49 8b f5        MOV        RSI,R13
                             LAB_140229dea                                   XREF[1]:     140229de5(j)  
       140229dea 45 33 c0        XOR        p1,p1
       140229ded 49 8b d6        MOV        p0,R14
       140229df0 48 8b ce        MOV        this,RSI
       140229df3 e8 68 af        CALL       FUN_140154d60                                                                                undefined FUN_140154d60()
                 f2 ff
       140229df8 48 8b ce        MOV        this,RSI
       140229dfb e8 10 f9        CALL       FUN_140169710                                                                                undefined FUN_140169710()
                 f3 ff
       140229e00 8b 85 b0        MOV        EAX,dword ptr [RBP + p3]
                 01 00 00
       140229e06 48 8b ce        MOV        this,RSI
       140229e09 44 3b e0        CMP        R12D,EAX
       140229e0c 0f b7 d3        MOVZX      p0,BX
       140229e0f 7c 03           JL         LAB_140229e14
       140229e11 0f b7 d0        MOVZX      p0,AX
                             LAB_140229e14                                   XREF[1]:     140229e0f(j)  
       140229e14 e8 b7 13        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       140229e19 8b 8d b0        MOV        this,dword ptr [RBP + p3]
                 01 00 00
       140229e1f 8b c1           MOV        EAX,this
       140229e21 41 3b cc        CMP        this,R12D
       140229e24 41 0f 4d c4     CMOVGE     EAX,R12D
       140229e28 44 8b e0        MOV        R12D,EAX
       140229e2b 89 45 c0        MOV        dword ptr [RBP + local_1c8],EAX
       140229e2e 2b c8           SUB        this,EAX
       140229e30 89 8d b0        MOV        dword ptr [RBP + p3],this
                 01 00 00
       140229e36 48 83 7e        CMP        qword ptr [RSI + 0x8],0x0
                 08 00
       140229e3b 0f 84 bb        JZ         LAB_140229cfc
                 fe ff ff
       140229e41 49 8b 5f 08     MOV        RBX,qword ptr [R15 + 0x8]
       140229e45 48 85 db        TEST       RBX,RBX
       140229e48 75 4f           JNZ        LAB_140229e99
       140229e4a 83 3d 7f        CMP        dword ptr [gMemoryManagerState],0x2
                 73 3c 03 02
       140229e51 74 13           JZ         LAB_140229e66
       140229e53 48 8d 15        LEA        p0,[gMemoryManagerState]
                 76 73 3c 03
       140229e5a 48 8d 0d        LEA        this,[gMemoryManager]
                 7f 73 3c 03
       140229e61 e8 1a a8        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140229e66                                   XREF[1]:     140229e51(j)  
       140229e66 45 33 c9        XOR        p2,p2
       140229e69 45 33 c0        XOR        p1,p1
       140229e6c 41 8d 51 10     LEA        p0,[p2 + 0x10]
       140229e70 48 8d 0d        LEA        this,[gMemoryManager]
                 69 73 3c 03
       140229e77 e8 44 a2        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       140229e7c 48 8b d8        MOV        RBX,RAX
       140229e7f 48 89 44        MOV        qword ptr [RSP + local_210],RAX
                 24 78
       140229e84 48 85 c0        TEST       RAX,RAX
       140229e87 74 09           JZ         LAB_140229e92
       140229e89 4c 89 28        MOV        qword ptr [RAX],R13
       140229e8c 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       140229e90 eb 03           JMP        LAB_140229e95
                             LAB_140229e92                                   XREF[1]:     140229e87(j)  
       140229e92 49 8b dd        MOV        RBX,R13
                             LAB_140229e95                                   XREF[1]:     140229e90(j)  
       140229e95 49 89 5f 08     MOV        qword ptr [R15 + 0x8],RBX
                             LAB_140229e99                                   XREF[1]:     140229e48(j)  
       140229e99 48 83 3b 00     CMP        qword ptr [RBX],0x0
                             LAB_140229e9d                                   XREF[2]:     140229d45(j), 140229d54(j)  
       140229e9d 74 5a           JZ         LAB_140229ef9
       140229e9f 83 3d 2a        CMP        dword ptr [gMemoryManagerState],0x2
                 73 3c 03 02
       140229ea6 74 13           JZ         LAB_140229ebb
       140229ea8 48 8d 15        LEA        p0,[gMemoryManagerState]
                 21 73 3c 03
       140229eaf 48 8d 0d        LEA        this,[gMemoryManager]
                 2a 73 3c 03
       140229eb6 e8 c5 a7        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_140229ebb                                   XREF[1]:     140229ea6(j)  
       140229ebb 45 33 c9        XOR        p2,p2
       140229ebe 45 33 c0        XOR        p1,p1
       140229ec1 41 8d 51 10     LEA        p0,[p2 + 0x10]
       140229ec5 48 8d 0d        LEA        this,[gMemoryManager]
                 14 73 3c 03
       140229ecc e8 ef a1        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       140229ed1 48 8b d0        MOV        p0,RAX
       140229ed4 48 89 44        MOV        qword ptr [RSP + local_210],RAX
                 24 78
       140229ed9 48 85 c0        TEST       RAX,RAX
       140229edc 74 0c           JZ         LAB_140229eea
       140229ede 48 8b 0b        MOV        this,qword ptr [RBX]
       140229ee1 48 89 08        MOV        qword ptr [RAX],this
       140229ee4 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       140229ee8 eb 03           JMP        LAB_140229eed
                             LAB_140229eea                                   XREF[1]:     140229edc(j)  
       140229eea 49 8b d5        MOV        p0,R13
                             LAB_140229eed                                   XREF[1]:     140229ee8(j)  
       140229eed 48 8b 43 08     MOV        RAX,qword ptr [RBX + 0x8]
       140229ef1 48 89 42 08     MOV        qword ptr [RDX + p0->sourceFiles.array],RAX
       140229ef5 48 89 53 08     MOV        qword ptr [RBX + 0x8],p0
                             LAB_140229ef9                                   XREF[1]:     140229e9d(j)  
       140229ef9 48 89 33        MOV        qword ptr [RBX],RSI
                             LAB_140229efc                                   XREF[1]:     140229d14(j)  
       140229efc 83 bd b8        CMP        dword ptr [RBP + p4],0x3
                 01 00 00 03
       140229f03 0f 85 54        JNZ        LAB_14022a35d
                 04 00 00
       140229f09 48 85 f6        TEST       RSI,RSI
       140229f0c 74 13           JZ         LAB_140229f21
       140229f0e 48 8d 95        LEA        p0=>local_d8,[RBP + 0xb0]
                 b0 00 00 00
       140229f15 48 8b ce        MOV        this,RSI
       140229f18 e8 d3 57        CALL       ExtraDataList::GetReferenceHandle                                                            undefined ExtraDataList::GetReferenceHandle()
                 f3 ff
       140229f1d 8b 08           MOV        this,dword ptr [RAX]
       140229f1f eb 06           JMP        LAB_140229f27
                             LAB_140229f21                                   XREF[1]:     140229f0c(j)  
       140229f21 8b 0d 75        MOV        this,dword ptr [gNullHandle]
                 ca ec 01
                             LAB_140229f27                                   XREF[1]:     140229f1f(j)  
       140229f27 89 4d 18        MOV        dword ptr [RBP + local_170],this
       140229f2a 4c 89 6d 38     MOV        qword ptr [RBP + local_150],R13
       140229f2e 48 8d 55 38     LEA        p0=>local_150,[RBP + 0x38]
       140229f32 48 8d 4d 18     LEA        this=>local_170,[RBP + 0x18]
       140229f36 e8 d5 f7        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       140229f3b 90              NOP
       140229f3c 48 85 f6        TEST       RSI,RSI
       140229f3f 0f 84 39        JZ         LAB_14022a17e
                 02 00 00
       140229f45 48 83 7d        CMP        qword ptr [RBP + local_150],0x0
                 38 00
       140229f4a 0f 84 2e        JZ         LAB_14022a17e
                 02 00 00
       140229f50 48 8d 95        LEA        p0=>local_b4,[RBP + 0xd4]
                 d4 00 00 00
       140229f57 48 8b ce        MOV        this,RSI
       140229f5a e8 91 57        CALL       ExtraDataList::GetReferenceHandle                                                            undefined ExtraDataList::GetReferenceHandle()
                 f3 ff
       140229f5f 48 8b c8        MOV        this,RAX
       140229f62 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       140229f67 e8 a4 f7        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       140229f6c 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       140229f71 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
       140229f76 48 85 ff        TEST       RDI,RDI
       140229f79 0f 84 ea        JZ         LAB_14022a169
                 01 00 00
       140229f7f 48 89 7d 00     MOV        qword ptr [RBP]=>local_188,RDI
       140229f83 f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       140229f87 48 8b 5c        MOV        RBX,qword ptr [RSP + local_228]
                 24 60
       140229f8c 48 89 5d 00     MOV        qword ptr [RBP]=>local_188,RBX
       140229f90 48 8d 7b 70     LEA        RDI,[RBX + 0x70]
       140229f94 c6 44 24        MOV        byte ptr [RSP + local_260],0x0
                 28 00
       140229f99 48 89 7c        MOV        qword ptr [RSP + local_268],RDI
                 24 20
       140229f9e 45 8b cc        MOV        p2,R12D
       140229fa1 4c 8b 85        MOV        p1,qword ptr [RBP + local_res20]
                 a8 01 00 00
       140229fa8 48 8d 55 00     LEA        p0=>local_188,[RBP]
       140229fac 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       140229fb3 e8 28 18        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       140229fb8 48 8b 03        MOV        RAX,qword ptr [RBX]
       140229fbb 33 d2           XOR        p0,p0
       140229fbd 48 8b cb        MOV        this,RBX
       140229fc0 ff 90 18        CALL       qword ptr [RAX + 0x118]
                 01 00 00
       140229fc6 48 8b ce        MOV        this,RSI
       140229fc9 e8 02 f4        CALL       FUN_1401693d0                                                                                undefined FUN_1401693d0()
                 f3 ff
       140229fce 48 8b ce        MOV        this,RSI
       140229fd1 e8 aa 54        CALL       FUN_14015f480                                                                                undefined FUN_14015f480()
                 f3 ff
       140229fd6 0f 28 c8        MOVAPS     XMM1,XMM0
       140229fd9 48 8b cb        MOV        this,RBX
       140229fdc e8 2f 6a        CALL       TESObjectREFR::SetScale                                                                      void TESObjectREFR::SetScale(TESObjectREFR * this, float p0)
                 0b 00
       140229fe1 4d 85 f6        TEST       R14,R14
       140229fe4 41 0f 94 c0     SETZ       p1
       140229fe8 48 8b d6        MOV        p0,RSI
       140229feb 48 8b cf        MOV        this,RDI
       140229fee e8 6d ad        CALL       FUN_140154d60                                                                                undefined FUN_140154d60()
                 f2 ff
       140229ff3 48 8b cf        MOV        this,RDI
       140229ff6 e8 95 f3        CALL       FUN_140169390                                                                                undefined FUN_140169390()
                 f3 ff
       140229ffb 48 8b cf        MOV        this,RDI
       140229ffe e8 cd f3        CALL       FUN_1401693d0                                                                                undefined FUN_1401693d0()
                 f3 ff
       14022a003 33 d2           XOR        p0,p0
       14022a005 45 33 c0        XOR        p1,p1
       14022a008 48 8b cf        MOV        this,RDI
       14022a00b e8 40 29        CALL       FUN_14016c950                                                                                undefined FUN_14016c950()
                 f4 ff
       14022a010 48 8b cf        MOV        this,RDI
       14022a013 e8 28 13        CALL       FUN_14016b340                                                                                undefined FUN_14016b340()
                 f4 ff
       14022a018 48 85 c0        TEST       RAX,RAX
       14022a01b 75 19           JNZ        LAB_14022a036
       14022a01d 48 8b d3        MOV        p0,RBX
       14022a020 48 8b cf        MOV        this,RDI
       14022a023 e8 88 12        CALL       FUN_14016b2b0                                                                                undefined FUN_14016b2b0()
                 f4 ff
       14022a028 48 8b 03        MOV        RAX,qword ptr [RBX]
       14022a02b ba 00 04        MOV        p0,0x400
                 00 00
       14022a030 48 8b cb        MOV        this,RBX
       14022a033 ff 50 50        CALL       qword ptr [RAX + 0x50]
                             LAB_14022a036                                   XREF[1]:     14022a01b(j)  
       14022a036 48 8b 85        MOV        RAX,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       14022a03d 48 89 44        MOV        qword ptr [RSP + local_250],RAX
                 24 38
       14022a042 48 8b 85        MOV        RAX,qword ptr [RBP + p7]
                 d0 01 00 00
       14022a049 48 89 44        MOV        qword ptr [RSP + local_258],RAX
                 24 30
       14022a04e 48 89 5c        MOV        qword ptr [RSP + local_260],RBX
                 24 28
       14022a053 44 89 64        MOV        dword ptr [RSP + local_268],R12D
                 24 20
       14022a058 4c 8b 4d 88     MOV        p2,qword ptr [RBP + local_200]
       14022a05c 4d 8b 09        MOV        p2,qword ptr [p2]
       14022a05f 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       14022a066 4d 8b c6        MOV        p1,R14
       14022a069 48 8d 95        LEA        p0=>local_c4,[RBP + 0xc4]
                 c4 00 00 00
       14022a070 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022a077 e8 84 14        CALL       FUN_14022b500                                                                                undefined FUN_14022b500()
                 00 00
       14022a07c 48 8b c8        MOV        this,RAX
       14022a07f 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       14022a084 e8 87 f6        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       14022a089 49 8b cf        MOV        this,R15
       14022a08c e8 8f 87        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022a091 ba 18 00        MOV        p0,0x18
                 00 00
       14022a096 49 8b cf        MOV        this,R15
       14022a099 e8 ee 0a        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       14022a09e 48 8b ce        MOV        this,RSI
       14022a0a1 e8 3a 7e        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       14022a0a6 ba 20 00        MOV        p0,0x20
                 00 00
       14022a0ab 48 8b ce        MOV        this,RSI
       14022a0ae e8 d9 0a        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       14022a0b3 49 8b 5e 60     MOV        RBX,qword ptr [R14 + 0x60]
       14022a0b7 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a0bc 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
       14022a0c1 48 8b cf        MOV        this,RDI
       14022a0c4 e8 67 00        CALL       FUN_1402fa130                                                                                undefined FUN_1402fa130()
                 0d 00
       14022a0c9 48 85 c0        TEST       RAX,RAX
       14022a0cc 75 21           JNZ        LAB_14022a0ef
       14022a0ce 48 85 db        TEST       RBX,RBX
       14022a0d1 74 1c           JZ         LAB_14022a0ef
       14022a0d3 48 8b cb        MOV        this,RBX
       14022a0d6 e8 d5 e7        CALL       TESObjectCELL::GetOwner                                                                      undefined TESObjectCELL::GetOwner()
                 08 00
       14022a0db 48 85 c0        TEST       RAX,RAX
       14022a0de 74 0f           JZ         LAB_14022a0ef
       14022a0e0 49 8b d6        MOV        p0,R14
       14022a0e3 48 8b cb        MOV        this,RBX
       14022a0e6 e8 d5 b8        CALL       TESObjectCELL::sub                                                                           undefined TESObjectCELL::sub()
                 08 00
       14022a0eb 84 c0           TEST       AL,AL
       14022a0ed 74 69           JZ         LAB_14022a158
                             LAB_14022a0ef                                   XREF[3]:     14022a0cc(j), 14022a0d1(j), 
                                                                                          14022a0de(j)  
       14022a0ef 49 8b 4e 40     MOV        this,qword ptr [R14 + 0x40]
       14022a0f3 80 79 1a 2b     CMP        byte ptr [RCX + this->unk1A],0x2b
       14022a0f7 0f 85 2b        JNZ        LAB_14022a328
                 02 00 00
       14022a0fd e8 ee ec        CALL       FUN_1403a8df0                                                                                undefined FUN_1403a8df0()
                 17 00
       14022a102 83 f8 01        CMP        EAX,0x1
       14022a105 0f 85 1d        JNZ        LAB_14022a328
                 02 00 00
       14022a10b 44 89 6c        MOV        dword ptr [RSP + local_268],R13D
                 24 20
       14022a110 4c 8d 0d        LEA        p2,[RTTI_TESBipedModelForm]                                                                  = 141aca908
                 61 13 e1 01
       14022a117 4c 8d 05        LEA        p1,[RTTI_TESBoundObject]                                                                     = 141aca908
                 d2 e0 e0 01
       14022a11e 33 d2           XOR        p0,p0
       14022a120 48 8b 4f 40     MOV        this,qword ptr [RDI + 0x40]
       14022a124 e8 01 2e        CALL       RTDynamicCast                                                                                undefined RTDynamicCast()
                 31 01
       14022a129 48 8b f0        MOV        RSI,RAX
       14022a12c 48 85 c0        TEST       RAX,RAX
       14022a12f 0f 84 f3        JZ         LAB_14022a328
                 01 00 00
       14022a135 ba 01 00        MOV        p0,0x1
                 00 00
       14022a13a 48 8b c8        MOV        this,RAX
       14022a13d e8 ce 00        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fb ff
       14022a142 48 8b d8        MOV        RBX,RAX
       14022a145 33 d2           XOR        p0,p0
       14022a147 48 8b ce        MOV        this,RSI
       14022a14a e8 c1 00        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fb ff
       14022a14f 48 3b d8        CMP        RBX,RAX
       14022a152 0f 84 d0        JZ         LAB_14022a328
                 01 00 00
                             LAB_14022a158                                   XREF[1]:     14022a0ed(j)  
       14022a158 49 8b 56 40     MOV        p0,qword ptr [R14 + 0x40]
       14022a15c 48 8b cf        MOV        this,RDI
       14022a15f e8 dc ff        CALL       TESObjectREFR::SetOwner                                                                      void TESObjectREFR::SetOwner(TESObjectREFR * this, TESForm * p0)
                 0c 00
       14022a164 e9 bf 01        JMP        LAB_14022a328
                 00 00
                             LAB_14022a169                                   XREF[1]:     140229f79(j)  
       14022a169 49 8b cf        MOV        this,R15
       14022a16c e8 af 86        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022a171 ba 18 00        MOV        p0,0x18
                 00 00
       14022a176 49 8b cf        MOV        this,R15
       14022a179 e9 a4 01        JMP        LAB_14022a322
                 00 00
                             LAB_14022a17e                                   XREF[2]:     140229f3f(j), 140229f4a(j)  
       14022a17e 48 8b 85        MOV        RAX,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       14022a185 48 89 44        MOV        qword ptr [RSP + local_250],RAX
                 24 38
       14022a18a 48 8b 85        MOV        RAX,qword ptr [RBP + p7]
                 d0 01 00 00
       14022a191 48 89 44        MOV        qword ptr [RSP + local_258],RAX
                 24 30
       14022a196 4c 89 6c        MOV        qword ptr [RSP + local_260],R13
                 24 28
       14022a19b 44 89 64        MOV        dword ptr [RSP + local_268],R12D
                 24 20
       14022a1a0 4c 8b 4d 88     MOV        p2,qword ptr [RBP + local_200]
       14022a1a4 4d 8b 09        MOV        p2,qword ptr [p2]
       14022a1a7 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       14022a1ae 4d 8b c6        MOV        p1,R14
       14022a1b1 48 8d 95        LEA        p0=>local_cc,[RBP + 0xbc]
                 bc 00 00 00
       14022a1b8 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022a1bf e8 3c 13        CALL       FUN_14022b500                                                                                undefined FUN_14022b500()
                 00 00
       14022a1c4 48 8b c8        MOV        this,RAX
       14022a1c7 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       14022a1cc e8 3f f5        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       14022a1d1 49 8b 5e 60     MOV        RBX,qword ptr [R14 + 0x60]
       14022a1d5 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a1da 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
       14022a1df 48 8b cf        MOV        this,RDI
       14022a1e2 e8 49 ff        CALL       FUN_1402fa130                                                                                undefined FUN_1402fa130()
                 0c 00
       14022a1e7 48 85 c0        TEST       RAX,RAX
       14022a1ea 75 21           JNZ        LAB_14022a20d
       14022a1ec 48 85 db        TEST       RBX,RBX
       14022a1ef 74 1c           JZ         LAB_14022a20d
       14022a1f1 48 8b cb        MOV        this,RBX
       14022a1f4 e8 b7 e6        CALL       TESObjectCELL::GetOwner                                                                      undefined TESObjectCELL::GetOwner()
                 08 00
       14022a1f9 48 85 c0        TEST       RAX,RAX
       14022a1fc 74 0f           JZ         LAB_14022a20d
       14022a1fe 49 8b d6        MOV        p0,R14
       14022a201 48 8b cb        MOV        this,RBX
       14022a204 e8 b7 b7        CALL       TESObjectCELL::sub                                                                           undefined TESObjectCELL::sub()
                 08 00
       14022a209 84 c0           TEST       AL,AL
       14022a20b 74 60           JZ         LAB_14022a26d
                             LAB_14022a20d                                   XREF[3]:     14022a1ea(j), 14022a1ef(j), 
                                                                                          14022a1fc(j)  
       14022a20d 49 8b 4e 40     MOV        this,qword ptr [R14 + 0x40]
       14022a211 80 79 1a 2b     CMP        byte ptr [RCX + this->unk1A],0x2b
       14022a215 75 62           JNZ        LAB_14022a279
       14022a217 e8 d4 eb        CALL       FUN_1403a8df0                                                                                undefined FUN_1403a8df0()
                 17 00
       14022a21c 83 f8 01        CMP        EAX,0x1
       14022a21f 75 58           JNZ        LAB_14022a279
       14022a221 44 89 6c        MOV        dword ptr [RSP + local_268],R13D
                 24 20
       14022a226 4c 8d 0d        LEA        p2,[RTTI_TESBipedModelForm]                                                                  = 141aca908
                 4b 12 e1 01
       14022a22d 4c 8d 05        LEA        p1,[RTTI_TESBoundObject]                                                                     = 141aca908
                 bc df e0 01
       14022a234 33 d2           XOR        p0,p0
       14022a236 48 8b 4f 40     MOV        this,qword ptr [RDI + 0x40]
       14022a23a e8 eb 2c        CALL       RTDynamicCast                                                                                undefined RTDynamicCast()
                 31 01
       14022a23f 4c 8b f0        MOV        R14,RAX
       14022a242 48 85 c0        TEST       RAX,RAX
       14022a245 74 32           JZ         LAB_14022a279
       14022a247 ba 01 00        MOV        p0,0x1
                 00 00
       14022a24c 48 8b c8        MOV        this,RAX
       14022a24f e8 bc ff        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fa ff
       14022a254 48 8b d8        MOV        RBX,RAX
       14022a257 33 d2           XOR        p0,p0
       14022a259 49 8b ce        MOV        this,R14
       14022a25c e8 af ff        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fa ff
       14022a261 48 3b d8        CMP        RBX,RAX
       14022a264 74 13           JZ         LAB_14022a279
       14022a266 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
                             LAB_14022a26d                                   XREF[1]:     14022a20b(j)  
       14022a26d 49 8b 56 40     MOV        p0,qword ptr [R14 + 0x40]
       14022a271 48 8b cf        MOV        this,RDI
       14022a274 e8 c7 fe        CALL       TESObjectREFR::SetOwner                                                                      void TESObjectREFR::SetOwner(TESObjectREFR * this, TESForm * p0)
                 0c 00
                             LAB_14022a279                                   XREF[4]:     14022a215(j), 14022a21f(j), 
                                                                                          14022a245(j), 14022a264(j)  
       14022a279 48 85 f6        TEST       RSI,RSI
       14022a27c 74 37           JZ         LAB_14022a2b5
       14022a27e 48 8b ce        MOV        this,RSI
       14022a281 e8 ca f5        CALL       FUN_140179850                                                                                undefined FUN_140179850()
                 f4 ff
       14022a286 85 c0           TEST       EAX,EAX
       14022a288 74 2b           JZ         LAB_14022a2b5
       14022a28a 48 8b ce        MOV        this,RSI
       14022a28d e8 ee 51        CALL       FUN_14015f480                                                                                undefined FUN_14015f480()
                 f3 ff
       14022a292 0f 28 c8        MOVAPS     XMM1,XMM0
       14022a295 48 8b cf        MOV        this,RDI
       14022a298 e8 73 67        CALL       TESObjectREFR::SetScale                                                                      void TESObjectREFR::SetScale(TESObjectREFR * this, float p0)
                 0b 00
       14022a29d 41 b0 01        MOV        p1,offset s_?AVIFormFactory@@_142038100+1                                                    = "?AVIFormFactory@@"
       14022a2a0 48 8b d6        MOV        p0,RSI
       14022a2a3 48 8d 4f 70     LEA        this,[RDI + 0x70]
       14022a2a7 e8 b4 aa        CALL       FUN_140154d60                                                                                undefined FUN_140154d60()
                 f2 ff
       14022a2ac 48 8d 4f 70     LEA        this,[RDI + 0x70]
       14022a2b0 e8 db f0        CALL       FUN_140169390                                                                                undefined FUN_140169390()
                 f3 ff
                             LAB_14022a2b5                                   XREF[2]:     14022a27c(j), 14022a288(j)  
       14022a2b5 48 89 7d f8     MOV        qword ptr [RBP + local_190],RDI
       14022a2b9 48 85 ff        TEST       RDI,RDI
       14022a2bc 74 0e           JZ         LAB_14022a2cc
       14022a2be f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       14022a2c2 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a2c7 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_14022a2cc                                   XREF[1]:     14022a2bc(j)  
       14022a2cc 48 89 7d f8     MOV        qword ptr [RBP + local_190],RDI
       14022a2d0 48 8d 47 70     LEA        RAX,[RDI + 0x70]
       14022a2d4 c6 44 24        MOV        byte ptr [RSP + local_260],0x0
                 28 00
       14022a2d9 48 89 44        MOV        qword ptr [RSP + local_268],RAX
                 24 20
       14022a2de 45 8b cc        MOV        p2,R12D
       14022a2e1 4c 8b 85        MOV        p1,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022a2e8 48 8d 55 f8     LEA        p0=>local_190,[RBP + -0x8]
       14022a2ec 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022a2f3 e8 e8 14        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       14022a2f8 49 8b cf        MOV        this,R15
       14022a2fb e8 20 85        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022a300 ba 18 00        MOV        p0,0x18
                 00 00
       14022a305 49 8b cf        MOV        this,R15
       14022a308 e8 7f 08        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       14022a30d 48 85 f6        TEST       RSI,RSI
       14022a310 74 16           JZ         LAB_14022a328
       14022a312 48 8b ce        MOV        this,RSI
       14022a315 e8 c6 7b        CALL       thunk_FUN_1401513d0                                                                          undefined thunk_FUN_1401513d0()
                 f2 ff
       14022a31a ba 20 00        MOV        p0,0x20
                 00 00
       14022a31f 48 8b ce        MOV        this,RSI
                             LAB_14022a322                                   XREF[1]:     14022a179(j)  
       14022a322 e8 65 08        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       14022a327 90              NOP
                             LAB_14022a328                                   XREF[6]:     14022a0f7(j), 14022a105(j), 
                                                                                          14022a12f(j), 14022a152(j), 
                                                                                          14022a164(j), 14022a310(j)  
       14022a328 48 8b 45 38     MOV        RAX,qword ptr [RBP + local_150]
       14022a32c 48 85 c0        TEST       RAX,RAX
       14022a32f 74 27           JZ         LAB_14022a358
       14022a331 48 8d 48 20     LEA        this,[RAX + 0x20]
       14022a335 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022a33a f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022a33f ff c8           DEC        EAX
       14022a341 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022a346 75 06           JNZ        LAB_14022a34e
       14022a348 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022a34b ff 50 08        CALL       qword ptr [RAX + 0x8]
                             LAB_14022a34e                                   XREF[1]:     14022a346(j)  
       14022a34e 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a353 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_14022a358                                   XREF[1]:     14022a32f(j)  
       14022a358 e9 e0 03        JMP        LAB_14022a73d
                 00 00
                             LAB_14022a35d                                   XREF[1]:     140229f03(j)  
       14022a35d 48 83 bd        CMP        qword ptr [RBP + p6],0x0
                 c8 01 00 
                 00 00
       14022a365 0f 84 e5        JZ         LAB_14022a650
                 02 00 00
       14022a36b 49 8b 77 08     MOV        RSI,qword ptr [R15 + 0x8]
       14022a36f 48 85 f6        TEST       RSI,RSI
       14022a372 74 08           JZ         LAB_14022a37c
       14022a374 48 8b 36        MOV        RSI,qword ptr [RSI]
       14022a377 e9 b5 00        JMP        LAB_14022a431
                 00 00
                             LAB_14022a37c                                   XREF[1]:     14022a372(j)  
       14022a37c b9 20 00        MOV        this,0x20
                 00 00
       14022a381 e8 7a 19        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       14022a386 48 89 85        MOV        qword ptr [RBP + local_60],RAX
                 28 01 00 00
       14022a38d 48 85 c0        TEST       RAX,RAX
       14022a390 74 0d           JZ         LAB_14022a39f
       14022a392 48 8b c8        MOV        this,RAX
       14022a395 e8 f6 7a        CALL       ExtraDataList::ctor                                                                          undefined ExtraDataList::ctor()
                 f2 ff
       14022a39a 48 8b f0        MOV        RSI,RAX
       14022a39d eb 03           JMP        LAB_14022a3a2
                             LAB_14022a39f                                   XREF[1]:     14022a390(j)  
       14022a39f 49 8b f5        MOV        RSI,R13
                             LAB_14022a3a2                                   XREF[1]:     14022a39d(j)  
       14022a3a2 b9 10 00        MOV        this,0x10
                 00 00
       14022a3a7 e8 54 19        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       14022a3ac 48 8b d8        MOV        RBX,RAX
       14022a3af 48 89 44        MOV        qword ptr [RSP + local_210],RAX
                 24 78
       14022a3b4 48 85 c0        TEST       RAX,RAX
       14022a3b7 74 09           JZ         LAB_14022a3c2
       14022a3b9 4c 89 28        MOV        qword ptr [RAX],R13
       14022a3bc 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       14022a3c0 eb 03           JMP        LAB_14022a3c5
                             LAB_14022a3c2                                   XREF[1]:     14022a3b7(j)  
       14022a3c2 49 8b dd        MOV        RBX,R13
                             LAB_14022a3c5                                   XREF[1]:     14022a3c0(j)  
       14022a3c5 49 89 5f 08     MOV        qword ptr [R15 + 0x8],RBX
       14022a3c9 48 85 f6        TEST       RSI,RSI
       14022a3cc 74 63           JZ         LAB_14022a431
       14022a3ce 48 83 3b 00     CMP        qword ptr [RBX],0x0
       14022a3d2 74 5a           JZ         LAB_14022a42e
       14022a3d4 83 3d f5        CMP        dword ptr [gMemoryManagerState],0x2
                 6d 3c 03 02
       14022a3db 74 13           JZ         LAB_14022a3f0
       14022a3dd 48 8d 15        LEA        p0,[gMemoryManagerState]
                 ec 6d 3c 03
       14022a3e4 48 8d 0d        LEA        this,[gMemoryManager]
                 f5 6d 3c 03
       14022a3eb e8 90 a2        CALL       Memory::static_ctor                                                                          undefined Memory::static_ctor()
                 a9 00
                             LAB_14022a3f0                                   XREF[1]:     14022a3db(j)  
       14022a3f0 45 33 c9        XOR        p2,p2
       14022a3f3 45 33 c0        XOR        p1,p1
       14022a3f6 41 8d 51 10     LEA        p0,[p2 + 0x10]
       14022a3fa 48 8d 0d        LEA        this,[gMemoryManager]
                 df 6d 3c 03
       14022a401 e8 ba 9c        CALL       MemoryManager::Allocate                                                                      void * MemoryManager::Allocate(MemoryManager * this, ulonglong p0, int p1, 
                 a9 00
       14022a406 48 8b d0        MOV        p0,RAX
       14022a409 48 89 44        MOV        qword ptr [RSP + local_210],RAX
                 24 78
       14022a40e 48 85 c0        TEST       RAX,RAX
       14022a411 74 0c           JZ         LAB_14022a41f
       14022a413 48 8b 0b        MOV        this,qword ptr [RBX]
       14022a416 48 89 08        MOV        qword ptr [RAX],this
       14022a419 4c 89 68 08     MOV        qword ptr [RAX + 0x8],R13
       14022a41d eb 03           JMP        LAB_14022a422
                             LAB_14022a41f                                   XREF[1]:     14022a411(j)  
       14022a41f 49 8b d5        MOV        p0,R13
                             LAB_14022a422                                   XREF[1]:     14022a41d(j)  
       14022a422 48 8b 43 08     MOV        RAX,qword ptr [RBX + 0x8]
       14022a426 48 89 42 08     MOV        qword ptr [RDX + p0->sourceFiles.array],RAX
       14022a42a 48 89 53 08     MOV        qword ptr [RBX + 0x8],p0
                             LAB_14022a42e                                   XREF[1]:     14022a3d2(j)  
       14022a42e 48 89 33        MOV        qword ptr [RBX],RSI
                             LAB_14022a431                                   XREF[2]:     14022a377(j), 14022a3cc(j)  
       14022a431 49 8b c5        MOV        RAX,R13
       14022a434 4c 8b b5        MOV        R14,qword ptr [RBP + local_res18]
                 a0 01 00 00
       14022a43b 41 80 7e        CMP        byte ptr [R14 + 0x1a],0x3e
                 1a 3e
       14022a440 49 0f 44 c6     CMOVZ      RAX,R14
       14022a444 48 85 c0        TEST       RAX,RAX
       14022a447 74 17           JZ         LAB_14022a460
       14022a449 49 8d 4e 70     LEA        this,[R14 + 0x70]
       14022a44d e8 8e 9c        CALL       ExtraDataList::GetLeveledNPC                                                                 undefined ExtraDataList::GetLeveledNPC()
                 f3 ff
       14022a452 48 8b d8        MOV        RBX,RAX
       14022a455 48 85 c0        TEST       RAX,RAX
       14022a458 75 11           JNZ        LAB_14022a46b
       14022a45a 49 8b 5e 40     MOV        RBX,qword ptr [R14 + 0x40]
       14022a45e eb 0b           JMP        LAB_14022a46b
                             LAB_14022a460                                   XREF[1]:     14022a447(j)  
       14022a460 49 8b ce        MOV        this,R14
       14022a463 e8 d8 f9        CALL       TESObjectREFR::GetOwner                                                                      TESForm * TESObjectREFR::GetOwner(TESObjectREFR * this)
                 0c 00
       14022a468 48 8b d8        MOV        RBX,RAX
                             LAB_14022a46b                                   XREF[2]:     14022a458(j), 14022a45e(j)  
       14022a46b 8b 85 b8        MOV        EAX,dword ptr [RBP + p4]
                 01 00 00
       14022a471 83 f8 01        CMP        EAX,0x1
       14022a474 75 46           JNZ        LAB_14022a4bc
       14022a476 49 8b 0f        MOV        this,qword ptr [R15]
       14022a479 e8 c2 11        CALL       FUN_1401db640                                                                                undefined FUN_1401db640()
                 fb ff
       14022a47e 84 c0           TEST       AL,AL
       14022a480 0f 85 9b        JNZ        LAB_14022a621
                 01 00 00
       14022a486 48 85 db        TEST       RBX,RBX
       14022a489 0f 84 92        JZ         LAB_14022a621
                 01 00 00
       14022a48f 48 8b ce        MOV        this,RSI
       14022a492 e8 49 4b        CALL       ExtraDataList::GetOwner                                                                      undefined ExtraDataList::GetOwner()
                 f3 ff
       14022a497 48 85 c0        TEST       RAX,RAX
       14022a49a 0f 85 81        JNZ        LAB_14022a621
                 01 00 00
       14022a4a0 48 8b d3        MOV        p0,RBX
       14022a4a3 48 8b ce        MOV        this,RSI
       14022a4a6 e8 65 03        CALL       ExtraDataList::SetOwnerForm                                                                  undefined ExtraDataList::SetOwnerForm()
                 f3 ff
       14022a4ab 41 0f b7 d4     MOVZX      p0,R12W
       14022a4af 48 8b ce        MOV        this,RSI
       14022a4b2 e8 19 0d        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       14022a4b7 e9 65 01        JMP        LAB_14022a621
                 00 00
                             LAB_14022a4bc                                   XREF[1]:     14022a474(j)  
       14022a4bc 83 f8 05        CMP        EAX,0x5
       14022a4bf 75 46           JNZ        LAB_14022a507
       14022a4c1 48 8b ce        MOV        this,RSI
       14022a4c4 e8 17 4b        CALL       ExtraDataList::GetOwner                                                                      undefined ExtraDataList::GetOwner()
                 f3 ff
       14022a4c9 48 85 c0        TEST       RAX,RAX
       14022a4cc 0f 85 4f        JNZ        LAB_14022a621
                 01 00 00
       14022a4d2 4c 3b 35        CMP        R14,qword ptr [gPlayerCharacter3]
                 bf d1 f0 02
       14022a4d9 0f 85 42        JNZ        LAB_14022a621
                 01 00 00
       14022a4df 48 8b 0d        MOV        this,qword ptr [DAT_1431874f8]
                 12 d0 f5 02
       14022a4e6 e8 c5 0c        CALL       FUN_14068b1b0                                                                                undefined FUN_14068b1b0()
                 46 00
       14022a4eb 48 8b d0        MOV        p0,RAX
       14022a4ee 48 8b ce        MOV        this,RSI
       14022a4f1 e8 1a 03        CALL       ExtraDataList::SetOwnerForm                                                                  undefined ExtraDataList::SetOwnerForm()
                 f3 ff
       14022a4f6 41 0f b7 d4     MOVZX      p0,R12W
       14022a4fa 48 8b ce        MOV        this,RSI
       14022a4fd e8 ce 0c        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       14022a502 e9 1a 01        JMP        LAB_14022a621
                 00 00
                             LAB_14022a507                                   XREF[1]:     14022a4bf(j)  
       14022a507 83 f8 02        CMP        EAX,0x2
       14022a50a 0f 85 11        JNZ        LAB_14022a621
                 01 00 00
       14022a510 48 8b ce        MOV        this,RSI
       14022a513 e8 58 ed        CALL       FUN_140169270                                                                                undefined FUN_140169270()
                 f3 ff
       14022a518 44 89 6d e0     MOV        dword ptr [RBP + local_1a8],R13D
       14022a51c 66 44 89        MOV        word ptr [RBP + local_1f4],R13W
                 6d 94
       14022a521 4c 8d 45 e0     LEA        p1=>local_1a8,[RBP + -0x20]
       14022a525 48 8d 55 94     LEA        p0=>local_1f4,[RBP + -0x6c]
       14022a529 48 8b ce        MOV        this,RSI
       14022a52c e8 cf 23        CALL       ExtraDataList::GetUniqueIDs                                                                  undefined ExtraDataList::GetUniqueIDs()
                 f4 ff
       14022a531 66 83 7d        CMP        word ptr [RBP + local_1f4],0x0
                 94 00
       14022a536 0f 84 e5        JZ         LAB_14022a621
                 00 00 00
       14022a53c 48 8d 95        LEA        p0=>local_d0,[RBP + 0xb8]
                 b8 00 00 00
       14022a543 48 8b 0d        MOV        this,qword ptr [DAT_1431874f8]
                 ae cf f5 02
       14022a54a e8 71 55        CALL       BSPointerHandleManagerInterface::GetHandleSafe                                               undefined BSPointerHandleManagerInterface::GetHandleSafe()
                 0c 00
       14022a54f 4c 89 6d e8     MOV        qword ptr [RBP + local_1a0],R13
       14022a553 48 8d 55 e8     LEA        p0=>local_1a0,[RBP + -0x18]
       14022a557 48 8b c8        MOV        this,RAX
       14022a55a e8 b1 f1        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       14022a55f 90              NOP
       14022a560 44 0f b7        MOVZX      R14D,word ptr [RBP + local_1f4]
                 75 94
       14022a565 44 8b 65 e0     MOV        R12D,dword ptr [RBP + local_1a8]
       14022a569 e8 c2 ac        CALL       ScriptEventSourceHolder::GetSingleton                                                        ScriptEventSourceHolder * ScriptEventSourceHolder::GetSingleton(void)
                 fa ff
       14022a56e 48 8b 5d e8     MOV        RBX,qword ptr [RBP + local_1a0]
       14022a572 48 89 9d        MOV        qword ptr [RBP + local_100],RBX
                 88 00 00 00
       14022a579 48 85 db        TEST       RBX,RBX
       14022a57c 74 12           JZ         LAB_14022a590
       14022a57e f0 ff 43 28     INC.LOCK   dword ptr [RBX + 0x28]
       14022a582 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a587 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
       14022a58c 48 8b 5d e8     MOV        RBX,qword ptr [RBP + local_1a0]
                             LAB_14022a590                                   XREF[1]:     14022a57c(j)  
       14022a590 48 89 9d        MOV        qword ptr [RBP + local_100],RBX
                 88 00 00 00
       14022a597 44 89 a5        MOV        dword ptr [RBP + local_f8],R12D
                 90 00 00 00
       14022a59e 66 44 89        MOV        word ptr [RBP + local_f4],R14W
                 b5 94 00 
                 00 00
       14022a5a6 48 8d 88        LEA        this,[RAX + 0xd10]
                 10 0d 00 00
       14022a5ad 48 8d 95        LEA        p0=>local_100,[RBP + 0x88]
                 88 00 00 00
       14022a5b4 e8 97 18        CALL       FUN_14023be50                                                                                undefined FUN_14023be50()
                 01 00
       14022a5b9 90              NOP
       14022a5ba 48 8b 8d        MOV        this,qword ptr [RBP + local_100]
                 88 00 00 00
       14022a5c1 48 85 c9        TEST       this,this
       14022a5c4 74 2b           JZ         LAB_14022a5f1
       14022a5c6 48 83 c1 20     ADD        this,0x20
       14022a5ca b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022a5cf f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022a5d4 ff c8           DEC        EAX
       14022a5d6 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022a5db 75 06           JNZ        LAB_14022a5e3
       14022a5dd 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022a5e0 ff 50 08        CALL       qword ptr [RAX + 0x8]
                             LAB_14022a5e3                                   XREF[1]:     14022a5db(j)  
       14022a5e3 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a5e8 48 8b 5d e8     MOV        RBX,qword ptr [RBP + local_1a0]
       14022a5ec 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_14022a5f1                                   XREF[1]:     14022a5c4(j)  
       14022a5f1 48 85 db        TEST       RBX,RBX
       14022a5f4 74 27           JZ         LAB_14022a61d
       14022a5f6 48 8d 4b 20     LEA        this,[RBX + 0x20]
       14022a5fa b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022a5ff f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022a604 ff c8           DEC        EAX
       14022a606 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022a60b 75 06           JNZ        LAB_14022a613
       14022a60d 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022a610 ff 50 08        CALL       qword ptr [RAX + 0x8]
                             LAB_14022a613                                   XREF[1]:     14022a60b(j)  
       14022a613 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a618 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_14022a61d                                   XREF[1]:     14022a5f4(j)  
       14022a61d 44 8b 65 c0     MOV        R12D,dword ptr [RBP + local_1c8]
                             LAB_14022a621                                   XREF[9]:     14022a480(j), 14022a489(j), 
                                                                                          14022a49a(j), 14022a4b7(j), 
                                                                                          14022a4cc(j), 14022a4d9(j), 
                                                                                          14022a502(j), 14022a50a(j), 
                                                                                          14022a536(j)  
       14022a621 48 8b 8d        MOV        this,qword ptr [RBP + p6]
                 c8 01 00 00
       14022a628 4c 8b 11        MOV        R10,qword ptr [this->entryList]
       14022a62b 48 8b 85        MOV        RAX,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022a632 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
       14022a636 48 89 44        MOV        qword ptr [RSP + local_268],RAX
                 24 20
       14022a63b 45 8b cc        MOV        p2,R12D
       14022a63e 4c 8b c6        MOV        p1,RSI
       14022a641 49 8b 17        MOV        p0,qword ptr [R15]
       14022a644 41 ff 92        CALL       qword ptr [R10 + 0x2d0]
                 d0 02 00 00
       14022a64b e9 d8 00        JMP        LAB_14022a728
                 00 00
                             LAB_14022a650                                   XREF[1]:     14022a365(j)  
       14022a650 49 8b 47 08     MOV        RAX,qword ptr [R15 + 0x8]
       14022a654 48 85 c0        TEST       RAX,RAX
       14022a657 74 05           JZ         LAB_14022a65e
       14022a659 48 8b 08        MOV        this,qword ptr [RAX]
       14022a65c eb 03           JMP        LAB_14022a661
                             LAB_14022a65e                                   XREF[1]:     14022a657(j)  
       14022a65e 49 8b cd        MOV        this,R13
                             LAB_14022a661                                   XREF[1]:     14022a65c(j)  
       14022a661 48 89 7d f0     MOV        qword ptr [RBP + local_198],RDI
       14022a665 48 85 ff        TEST       RDI,RDI
       14022a668 74 0e           JZ         LAB_14022a678
       14022a66a f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       14022a66e 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a673 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_14022a678                                   XREF[1]:     14022a668(j)  
       14022a678 48 89 7d f0     MOV        qword ptr [RBP + local_198],RDI
       14022a67c c6 44 24        MOV        byte ptr [RSP + local_260],0x1
                 28 01
       14022a681 48 89 4c        MOV        qword ptr [RSP + local_268],this
                 24 20
       14022a686 45 8b cc        MOV        p2,R12D
       14022a689 4d 8b 07        MOV        p1,qword ptr [R15]
       14022a68c 48 8d 55 f0     LEA        p0=>local_198,[RBP + -0x10]
       14022a690 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022a697 e8 44 11        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       14022a69c 49 8b 4f 08     MOV        this,qword ptr [R15 + 0x8]
       14022a6a0 48 85 c9        TEST       this,this
       14022a6a3 74 7b           JZ         LAB_14022a720
       14022a6a5 48 8b 09        MOV        this,qword ptr [this->entryList]
       14022a6a8 48 85 c9        TEST       this,this
       14022a6ab 74 10           JZ         LAB_14022a6bd
       14022a6ad 48 8d 95        LEA        p0=>local_bc,[RBP + 0xcc]
                 cc 00 00 00
       14022a6b4 e8 37 50        CALL       ExtraDataList::GetReferenceHandle                                                            undefined ExtraDataList::GetReferenceHandle()
                 f3 ff
       14022a6b9 8b 08           MOV        this,dword ptr [RAX]
       14022a6bb eb 06           JMP        LAB_14022a6c3
                             LAB_14022a6bd                                   XREF[1]:     14022a6ab(j)  
       14022a6bd 8b 0d d9        MOV        this,dword ptr [gNullHandle]
                 c2 ec 01
                             LAB_14022a6c3                                   XREF[1]:     14022a6bb(j)  
       14022a6c3 89 4d 1c        MOV        dword ptr [RBP + local_16c],this
       14022a6c6 4c 89 ad        MOV        qword ptr [RBP + local_108],R13
                 80 00 00 00
       14022a6cd 48 8d 95        LEA        p0=>local_108,[RBP + 0x80]
                 80 00 00 00
       14022a6d4 48 8d 4d 1c     LEA        this=>local_16c,[RBP + 0x1c]
       14022a6d8 e8 33 f0        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       14022a6dd 90              NOP
       14022a6de 48 8b 9d        MOV        RBX,qword ptr [RBP + local_108]
                 80 00 00 00
       14022a6e5 48 85 db        TEST       RBX,RBX
       14022a6e8 74 0a           JZ         LAB_14022a6f4
       14022a6ea 48 8d 4b 70     LEA        this,[RBX + 0x70]
       14022a6ee e8 dd ec        CALL       FUN_1401693d0                                                                                undefined FUN_1401693d0()
                 f3 ff
       14022a6f3 90              NOP
                             LAB_14022a6f4                                   XREF[1]:     14022a6e8(j)  
       14022a6f4 48 85 db        TEST       RBX,RBX
       14022a6f7 74 27           JZ         LAB_14022a720
       14022a6f9 48 8d 4b 20     LEA        this,[RBX + 0x20]
       14022a6fd b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022a702 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022a707 ff c8           DEC        EAX
       14022a709 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022a70e 75 06           JNZ        LAB_14022a716
       14022a710 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022a713 ff 50 08        CALL       qword ptr [RAX + 0x8]
                             LAB_14022a716                                   XREF[1]:     14022a70e(j)  
       14022a716 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022a71b 48 89 7c        MOV        qword ptr [RSP + local_218],RDI
                 24 70
                             LAB_14022a720                                   XREF[2]:     14022a6a3(j), 14022a6f7(j)  
       14022a720 49 8b cf        MOV        this,R15
       14022a723 e8 e8 81        CALL       FUN_140222910                                                                                undefined FUN_140222910()
                 ff ff
                             LAB_14022a728                                   XREF[1]:     14022a64b(j)  
       14022a728 49 8b cf        MOV        this,R15
       14022a72b e8 f0 80        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022a730 ba 18 00        MOV        p0,0x18
                 00 00
       14022a735 49 8b cf        MOV        this,R15
       14022a738 e8 4f 04        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
                             LAB_14022a73d                                   XREF[1]:     14022a358(j)  
       14022a73d 48 8b 5d a8     MOV        RBX,qword ptr [RBP + local_1e0]
       14022a741 48 83 7d        CMP        qword ptr [RBP + local_1d0],0x0
                 b8 00
       14022a746 74 08           JZ         LAB_14022a750
       14022a748 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14022a74c 48 89 5d a8     MOV        qword ptr [RBP + local_1e0],RBX
                             LAB_14022a750                                   XREF[1]:     14022a746(j)  
       14022a750 8b 85 b0        MOV        EAX,dword ptr [RBP + p3]
                 01 00 00
       14022a756 85 c0           TEST       EAX,EAX
       14022a758 74 29           JZ         LAB_14022a783
       14022a75a c6 45 80 01     MOV        byte ptr [RBP + local_208],0x1
       14022a75e eb 23           JMP        LAB_14022a783
                             LAB_14022a760                                   XREF[2]:     140229ab6(j), 140229ad0(j)  
       14022a760 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14022a764 48 89 5d a8     MOV        qword ptr [RBP + local_1e0],RBX
       14022a768 49 8b cf        MOV        this,R15
       14022a76b e8 b0 80        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022a770 ba 18 00        MOV        p0,0x18
                 00 00
       14022a775 49 8b cf        MOV        this,R15
       14022a778 e8 0f 04        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
       14022a77d 8b 85 b0        MOV        EAX,dword ptr [RBP + p3]
                 01 00 00
                             LAB_14022a783                                   XREF[2]:     14022a758(j), 14022a75e(j)  
       14022a783 4d 8b e5        MOV        R12,R13
       14022a786 4c 89 6c        MOV        qword ptr [RSP + local_210],R13
                 24 78
       14022a78b 48 85 db        TEST       RBX,RBX
       14022a78e 0f b6 74        MOVZX      ESI,byte ptr [RSP + local_220]
                 24 68
       14022a793 0f 85 87        JNZ        LAB_140229a20
                 f2 ff ff
                             LAB_14022a799                                   XREF[10]:    140228676(j), 14022867f(j), 
                                                                                          1402292ab(j), 1402292b3(j), 
                                                                                          140229939(j), 14022994e(j), 
                                                                                          14022995f(j), 140229a16(j), 
                                                                                          140229a2a(j), 140229a32(j)  
       14022a799 45 33 c9        XOR        p2,p2
       14022a79c 41 b0 01        MOV        p1,offset s_?AVIFormFactory@@_142038100+1                                                    = "?AVIFormFactory@@"
       14022a79f 48 8b 95        MOV        p0,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022a7a6 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022a7ad e8 0e 41        CALL       FUN_14022e8c0                                                                                undefined FUN_14022e8c0()
                 00 00
       14022a7b2 48 89 45 88     MOV        qword ptr [RBP + local_200],RAX
       14022a7b6 4c 8b 7c        MOV        R15,qword ptr [RSP + local_210]
                 24 78
       14022a7bb 44 8b 45 b0     MOV        p1,dword ptr [RBP + local_1d8]
       14022a7bf 48 85 c0        TEST       RAX,RAX
       14022a7c2 0f 85 48        JNZ        LAB_140228510
                 dd ff ff
       14022a7c8 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
                             LAB_14022a7ce                                   XREF[2]:     14022ad4b(j), 14022ad58(j)  
       14022a7ce 4c 8b a5        MOV        R12,qword ptr [RBP + local_res18]
                 a0 01 00 00
       14022a7d5 44 8b b5        MOV        R14D,dword ptr [RBP + p4]
                 b8 01 00 00
                             LAB_14022a7dc                                   XREF[1]:     14022ad77(j)  
       14022a7dc 41 8b f0        MOV        ESI,p1
       14022a7df 45 85 c0        TEST       p1,p1
       14022a7e2 0f 84 cd        JZ         LAB_14022b0b5
                 08 00 00
       14022a7e8 48 8b 45 88     MOV        RAX,qword ptr [RBP + local_200]
       14022a7ec 48 85 c0        TEST       RAX,RAX
       14022a7ef 74 06           JZ         LAB_14022a7f7
       14022a7f1 8b 70 10        MOV        ESI,dword ptr [RAX + 0x10]
       14022a7f4 41 03 f0        ADD        ESI,p1
                             LAB_14022a7f7                                   XREF[1]:     14022a7ef(j)  
       14022a7f7 85 f6           TEST       ESI,ESI
       14022a7f9 0f 85 7d        JNZ        LAB_14022ad7c
                 05 00 00
       14022a7ff 48 8b 45 88     MOV        RAX,qword ptr [RBP + local_200]
       14022a803 45 33 c0        XOR        p1,p1
       14022a806 33 d2           XOR        p0,p0
       14022a808 48 8b 48 08     MOV        this,qword ptr [RAX + 0x8]
       14022a80c e8 7f 92        CALL       FUN_1401c3a90                                                                                undefined FUN_1401c3a90()
                 f9 ff
       14022a811 48 8b d7        MOV        p0,RDI
       14022a814 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022a81b 48 8b cb        MOV        this,RBX
       14022a81e e8 5d 0f        CALL       BSPointerHandleManagerInterface::GetHandle                                                   undefined BSPointerHandleManagerInterface::GetHandle()
                 01 00
       14022a823 90              NOP
       14022a824 48 85 ff        TEST       RDI,RDI
       14022a827 74 1e           JZ         LAB_14022a847
       14022a829 48 8d 4f 20     LEA        this,[RDI + 0x20]
       14022a82d b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022a832 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022a837 ff c8           DEC        EAX
       14022a839 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022a83e 75 07           JNZ        LAB_14022a847
       14022a840 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022a843 ff 50 08        CALL       qword ptr [RAX + 0x8]
       14022a846 90              NOP
                             LAB_14022a847                                   XREF[2]:     14022a827(j), 14022a83e(j)  
       14022a847 e9 61 0a        JMP        LAB_14022b2ad
                 00 00
                             LAB_14022a84c                                   XREF[1]:     1402286d1(j)  
       14022a84c c6 85 c0        MOV        byte ptr [RBP + p5],0x0
                 01 00 00 00
       14022a853 49 8b ce        MOV        this,R14
       14022a856 e8 f5 ef        CALL       FUN_140179850                                                                                undefined FUN_140179850()
                 f4 ff
       14022a85b 83 f8 01        CMP        EAX,0x1
       14022a85e 76 30           JBE        LAB_14022a890
       14022a860 83 f8 02        CMP        EAX,0x2
       14022a863 75 32           JNZ        LAB_14022a897
       14022a865 49 8b ce        MOV        this,R14
       14022a868 e8 f3 4a        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       14022a86d 66 83 f8 01     CMP        AX,0x1
       14022a871 7f 1d           JG         LAB_14022a890
       14022a873 49 8b ce        MOV        this,R14
       14022a876 e8 35 4a        CALL       FUN_14015f2b0                                                                                undefined FUN_14015f2b0()
                 f3 ff
       14022a87b 84 c0           TEST       AL,AL
       14022a87d 75 11           JNZ        LAB_14022a890
       14022a87f ba 8e 00        MOV        p0,0x8e
                 00 00
       14022a884 49 8b ce        MOV        this,R14
       14022a887 e8 64 10        CALL       ExtraDataList::HasExtraData                                                                  undefined ExtraDataList::HasExtraData()
                 01 00
       14022a88c 84 c0           TEST       AL,AL
       14022a88e 74 07           JZ         LAB_14022a897
                             LAB_14022a890                                   XREF[3]:     14022a85e(j), 14022a871(j), 
                                                                                          14022a87d(j)  
       14022a890 c6 85 c0        MOV        byte ptr [RBP + p5],0x1
                 01 00 00 01
                             LAB_14022a897                                   XREF[2]:     14022a863(j), 14022a88e(j)  
       14022a897 4c 8b 7d 88     MOV        R15,qword ptr [RBP + local_200]
       14022a89b 49 8b 5f 08     MOV        RBX,qword ptr [R15 + 0x8]
       14022a89f 4d 8b e5        MOV        R12,R13
                             LAB_14022a8a2                                   XREF[1]:     14022a8c9(j)  
       14022a8a2 48 85 db        TEST       RBX,RBX
       14022a8a5 74 24           JZ         LAB_14022a8cb
       14022a8a7 48 8b 33        MOV        RSI,qword ptr [RBX]
       14022a8aa 48 85 f6        TEST       RSI,RSI
       14022a8ad 74 1c           JZ         LAB_14022a8cb
       14022a8af 41 b0 01        MOV        p1,0x1
       14022a8b2 33 d2           XOR        p0,p0
       14022a8b4 48 8b ce        MOV        this,RSI
       14022a8b7 e8 e4 47        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       14022a8bc 84 c0           TEST       AL,AL
       14022a8be 4c 0f 45 e6     CMOVNZ     R12,RSI
       14022a8c2 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14022a8c6 4d 85 e4        TEST       R12,R12
       14022a8c9 74 d7           JZ         LAB_14022a8a2
                             LAB_14022a8cb                                   XREF[2]:     14022a8a5(j), 14022a8ad(j)  
       14022a8cb 49 8b 5f 08     MOV        RBX,qword ptr [R15 + 0x8]
       14022a8cf 90              NOP
                             LAB_14022a8d0                                   XREF[1]:     14022a8f7(j)  
       14022a8d0 48 85 db        TEST       RBX,RBX
       14022a8d3 74 24           JZ         LAB_14022a8f9
       14022a8d5 48 8b 33        MOV        RSI,qword ptr [RBX]
       14022a8d8 48 85 f6        TEST       RSI,RSI
       14022a8db 74 1c           JZ         LAB_14022a8f9
       14022a8dd 45 33 c0        XOR        p1,p1
       14022a8e0 33 d2           XOR        p0,p0
       14022a8e2 48 8b ce        MOV        this,RSI
       14022a8e5 e8 b6 47        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       14022a8ea 84 c0           TEST       AL,AL
       14022a8ec 4c 0f 45 ee     CMOVNZ     R13,RSI
       14022a8f0 48 8b 5b 08     MOV        RBX,qword ptr [RBX + 0x8]
       14022a8f4 4d 85 ed        TEST       R13,R13
       14022a8f7 74 d7           JZ         LAB_14022a8d0
                             LAB_14022a8f9                                   XREF[2]:     14022a8d3(j), 14022a8db(j)  
       14022a8f9 48 8b b5        MOV        RSI,qword ptr [RBP + local_res18]
                 a0 01 00 00
       14022a900 48 85 f6        TEST       RSI,RSI
       14022a903 74 6e           JZ         LAB_14022a973
       14022a905 45 33 ff        XOR        R15D,R15D
       14022a908 80 7e 1a 3e     CMP        byte ptr [RSI + 0x1a],0x3e
       14022a90c 4c 0f 44 fe     CMOVZ      R15,RSI
       14022a910 4d 85 ff        TEST       R15,R15
       14022a913 74 5e           JZ         LAB_14022a973
       14022a915 49 83 bf        CMP        qword ptr [R15 + 0xf8],0x0
                 f8 00 00 
                 00 00
       14022a91d 74 54           JZ         LAB_14022a973
       14022a91f 48 8b 45 88     MOV        RAX,qword ptr [RBP + local_200]
       14022a923 48 8b 18        MOV        RBX,qword ptr [RAX]
       14022a926 48 8b 35        MOV        RSI,qword ptr [DAT_1430fc678]
                 4b 1d ed 02
       14022a92d 49 8b ce        MOV        this,R14
       14022a930 e8 2b 4a        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       14022a935 44 0f bf c8     MOVSX      p2,AX
       14022a939 33 c0           XOR        EAX,EAX
       14022a93b 48 89 44        MOV        qword ptr [RSP + local_238],RAX
                 24 50
       14022a940 88 44 24 48     MOV        byte ptr [RSP + local_240],AL
       14022a944 c6 44 24        MOV        byte ptr [RSP + local_248],0x1
                 40 01
       14022a949 88 44 24 38     MOV        byte ptr [RSP + local_250],AL
       14022a94d 88 44 24 30     MOV        byte ptr [RSP + local_258],AL
       14022a951 48 89 44        MOV        qword ptr [RSP + local_260],RAX
                 24 28
       14022a956 44 89 4c        MOV        dword ptr [RSP + local_268],p2
                 24 20
       14022a95b 4d 8b ce        MOV        p2,R14
       14022a95e 4c 8b c3        MOV        p1,RBX
       14022a961 49 8b d7        MOV        p0,R15
       14022a964 48 8b ce        MOV        this,RSI
       14022a967 e8 a4 f6        CALL       ActorEquipManager::UnequipObject                                                             bool ActorEquipManager::UnequipObject(ActorEquipManager * this, Actor * p0,
                 49 00
       14022a96c 84 c0           TEST       AL,AL
       14022a96e 0f 94 c0        SETZ       AL
       14022a971 eb 21           JMP        LAB_14022a994
                             LAB_14022a973                                   XREF[3]:     14022a903(j), 14022a913(j), 
                                                                                          14022a91d(j)  
       14022a973 48 8b 45 88     MOV        RAX,qword ptr [RBP + local_200]
       14022a977 48 8b 18        MOV        RBX,qword ptr [RAX]
       14022a97a 49 8b ce        MOV        this,R14
       14022a97d e8 de 49        CALL       ExtraDataList::GetCount                                                                      undefined ExtraDataList::GetCount()
                 f3 ff
       14022a982 44 0f bf c0     MOVSX      p1,AX
       14022a986 4d 8b ce        MOV        p2,R14
       14022a989 48 8b d3        MOV        p0,RBX
       14022a98c 48 8b ce        MOV        this,RSI
       14022a98f e8 fc 73        CALL       TESObjectREFR::sub                                                                           undefined TESObjectREFR::sub()
                 0b 00
                             LAB_14022a994                                   XREF[1]:     14022a971(j)  
       14022a994 84 c0           TEST       AL,AL
       14022a996 74 09           JZ         LAB_14022a9a1
       14022a998 80 bd c0        CMP        byte ptr [RBP + p5],0x0
                 01 00 00 00
       14022a99f 74 08           JZ         LAB_14022a9a9
                             LAB_14022a9a1                                   XREF[1]:     14022a996(j)  
       14022a9a1 45 33 c0        XOR        p1,p1
       14022a9a4 45 8b f0        MOV        R14D,p1
       14022a9a7 eb 03           JMP        LAB_14022a9ac
                             LAB_14022a9a9                                   XREF[1]:     14022a99f(j)  
       14022a9a9 45 33 c0        XOR        p1,p1
                             LAB_14022a9ac                                   XREF[1]:     14022a9a7(j)  
       14022a9ac 48 8b 85        MOV        RAX,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022a9b3 48 8b 00        MOV        RAX,qword ptr [RAX]
       14022a9b6 b2 01           MOV        p0,0x1
       14022a9b8 48 85 c0        TEST       RAX,RAX
       14022a9bb 74 25           JZ         LAB_14022a9e2
       14022a9bd 4c 8b 8d        MOV        p2,qword ptr [RBP + local_res20]
                 a8 01 00 00
                             LAB_14022a9c4                                   XREF[1]:     14022a9e0(j)  
       14022a9c4 84 d2           TEST       p0,p0
       14022a9c6 74 22           JZ         LAB_14022a9ea
       14022a9c8 48 8b 08        MOV        this,qword ptr [RAX]
       14022a9cb 48 85 c9        TEST       this,this
       14022a9ce 74 09           JZ         LAB_14022a9d9
       14022a9d0 4c 39 09        CMP        qword ptr [this->entryList],p2
       14022a9d3 75 04           JNZ        LAB_14022a9d9
       14022a9d5 32 d2           XOR        p0,p0
       14022a9d7 eb 04           JMP        LAB_14022a9dd
                             LAB_14022a9d9                                   XREF[2]:     14022a9ce(j), 14022a9d3(j)  
       14022a9d9 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
                             LAB_14022a9dd                                   XREF[1]:     14022a9d7(j)  
       14022a9dd 48 85 c0        TEST       RAX,RAX
       14022a9e0 75 e2           JNZ        LAB_14022a9c4
                             LAB_14022a9e2                                   XREF[2]:     14022a9bb(j), 14022a9ed(j)  
       14022a9e2 4d 8b f8        MOV        R15,p1
       14022a9e5 e9 6b 01        JMP        LAB_14022ab55
                 00 00
                             LAB_14022a9ea                                   XREF[1]:     14022a9c6(j)  
       14022a9ea 48 85 c0        TEST       RAX,RAX
       14022a9ed 74 f3           JZ         LAB_14022a9e2
       14022a9ef 4c 8b 38        MOV        R15,qword ptr [RAX]
       14022a9f2 4c 89 bd        MOV        qword ptr [RBP + p5],R15
                 c0 01 00 00
       14022a9f9 4d 85 ff        TEST       R15,R15
       14022a9fc 0f 84 53        JZ         LAB_14022ab55
                 01 00 00
       14022aa02 49 8b 77 08     MOV        RSI,qword ptr [R15 + 0x8]
       14022aa06 49 8b d8        MOV        RBX,p1
       14022aa09 0f 1f 80        NOP        dword ptr [RAX]
                 00 00 00 00
                             LAB_14022aa10                                   XREF[1]:     14022aa37(j)  
       14022aa10 48 85 f6        TEST       RSI,RSI
       14022aa13 74 24           JZ         LAB_14022aa39
       14022aa15 4c 8b 3e        MOV        R15,qword ptr [RSI]
       14022aa18 4d 85 ff        TEST       R15,R15
       14022aa1b 74 1c           JZ         LAB_14022aa39
       14022aa1d 41 b0 01        MOV        p1,0x1
       14022aa20 33 d2           XOR        p0,p0
       14022aa22 49 8b cf        MOV        this,R15
       14022aa25 e8 76 46        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       14022aa2a 84 c0           TEST       AL,AL
       14022aa2c 49 0f 45 df     CMOVNZ     RBX,R15
       14022aa30 48 8b 76 08     MOV        RSI,qword ptr [RSI + 0x8]
       14022aa34 48 85 db        TEST       RBX,RBX
       14022aa37 74 d7           JZ         LAB_14022aa10
                             LAB_14022aa39                                   XREF[2]:     14022aa13(j), 14022aa1b(j)  
       14022aa39 4c 3b e3        CMP        R12,RBX
       14022aa3c 0f 85 0c        JNZ        LAB_14022ab4e
                 01 00 00
       14022aa42 48 8b b5        MOV        RSI,qword ptr [RBP + p5]
                 c0 01 00 00
       14022aa49 48 8b 76 08     MOV        RSI,qword ptr [RSI + 0x8]
       14022aa4d 33 db           XOR        EBX,EBX
       14022aa4f 90              NOP
                             LAB_14022aa50                                   XREF[1]:     14022aa77(j)  
       14022aa50 48 85 f6        TEST       RSI,RSI
       14022aa53 74 24           JZ         LAB_14022aa79
       14022aa55 4c 8b 3e        MOV        R15,qword ptr [RSI]
       14022aa58 4d 85 ff        TEST       R15,R15
       14022aa5b 74 1c           JZ         LAB_14022aa79
       14022aa5d 45 33 c0        XOR        p1,p1
       14022aa60 33 d2           XOR        p0,p0
       14022aa62 49 8b cf        MOV        this,R15
       14022aa65 e8 36 46        CALL       ExtraDataList::IsWorn                                                                        undefined ExtraDataList::IsWorn()
                 f3 ff
       14022aa6a 84 c0           TEST       AL,AL
       14022aa6c 49 0f 45 df     CMOVNZ     RBX,R15
       14022aa70 48 8b 76 08     MOV        RSI,qword ptr [RSI + 0x8]
       14022aa74 48 85 db        TEST       RBX,RBX
       14022aa77 74 d7           JZ         LAB_14022aa50
                             LAB_14022aa79                                   XREF[2]:     14022aa53(j), 14022aa5b(j)  
       14022aa79 4c 8b bd        MOV        R15,qword ptr [RBP + p5]
                 c0 01 00 00
       14022aa80 4c 3b eb        CMP        R13,RBX
       14022aa83 0f 85 cc        JNZ        LAB_14022ab55
                 00 00 00
       14022aa89 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
                             LAB_14022aa8f                                   XREF[1]:     14022abc5(j)  
       14022aa8f 48 8b 85        MOV        RAX,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022aa96 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
       14022aa9a 48 85 c0        TEST       RAX,RAX
       14022aa9d 74 55           JZ         LAB_14022aaf4
       14022aa9f 33 d2           XOR        p0,p0
       14022aaa1 80 78 1a 3e     CMP        byte ptr [RAX + 0x1a],0x3e
       14022aaa5 48 0f 44 d0     CMOVZ      p0,RAX
       14022aaa9 48 85 d2        TEST       p0,p0
       14022aaac 74 46           JZ         LAB_14022aaf4
       14022aaae 4d 85 ff        TEST       R15,R15
       14022aab1 74 41           JZ         LAB_14022aaf4
       14022aab3 8b 45 c0        MOV        EAX,dword ptr [RBP + local_1c8]
       14022aab6 83 f8 01        CMP        EAX,0x1
       14022aab9 7e 39           JLE        LAB_14022aaf4
       14022aabb 2b c3           SUB        EAX,EBX
       14022aabd 85 c0           TEST       EAX,EAX
       14022aabf 7e 33           JLE        LAB_14022aaf4
       14022aac1 c6 44 24        MOV        byte ptr [RSP + local_240],0x1
                 48 01
       14022aac6 c6 44 24        MOV        byte ptr [RSP + local_248],0x0
                 40 00
       14022aacb c6 44 24        MOV        byte ptr [RSP + local_250],0x0
                 38 00
       14022aad0 c6 44 24        MOV        byte ptr [RSP + local_258],0x0
                 30 00
       14022aad5 48 c7 44        MOV        qword ptr [RSP + local_260],0x0
                 24 28 00 
                 00 00 00
       14022aade 89 44 24 20     MOV        dword ptr [RSP + local_268],EAX
       14022aae2 4d 8b ce        MOV        p2,R14
       14022aae5 4d 8b 07        MOV        p1,qword ptr [R15]
       14022aae8 48 8b 0d        MOV        this,qword ptr [DAT_1430fc678]
                 89 1b ed 02
       14022aaef e8 2c ed        CALL       ActorEquipManager::EquipObject                                                               void ActorEquipManager::EquipObject(ActorEquipManager * this, Actor * p0, T
                 49 00
                             LAB_14022aaf4                                   XREF[5]:     14022aa9d(j), 14022aaac(j), 
                                                                                          14022aab1(j), 14022aab9(j), 
                                                                                          14022aabf(j)  
       14022aaf4 4c 8b 7c        MOV        R15,qword ptr [RSP + local_210]
                 24 78
       14022aaf9 4d 85 ff        TEST       R15,R15
       14022aafc 74 15           JZ         LAB_14022ab13
       14022aafe 49 8b cf        MOV        this,R15
       14022ab01 e8 1a 7d        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022ab06 ba 18 00        MOV        p0,0x18
                 00 00
       14022ab0b 49 8b cf        MOV        this,R15
       14022ab0e e8 79 00        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 31 01
                             LAB_14022ab13                                   XREF[1]:     14022aafc(j)  
       14022ab13 48 8b d7        MOV        p0,RDI
       14022ab16 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022ab1d 48 8b cb        MOV        this,RBX
       14022ab20 e8 5b 0c        CALL       BSPointerHandleManagerInterface::GetHandle                                                   undefined BSPointerHandleManagerInterface::GetHandle()
                 01 00
       14022ab25 90              NOP
       14022ab26 48 85 ff        TEST       RDI,RDI
       14022ab29 74 1e           JZ         LAB_14022ab49
       14022ab2b 48 8d 4f 20     LEA        this,[RDI + 0x20]
       14022ab2f b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022ab34 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022ab39 ff c8           DEC        EAX
       14022ab3b a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022ab40 75 07           JNZ        LAB_14022ab49
       14022ab42 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022ab45 ff 50 08        CALL       qword ptr [RAX + 0x8]
       14022ab48 90              NOP
                             LAB_14022ab49                                   XREF[2]:     14022ab29(j), 14022ab40(j)  
       14022ab49 e9 5f 07        JMP        LAB_14022b2ad
                 00 00
                             LAB_14022ab4e                                   XREF[1]:     14022aa3c(j)  
       14022ab4e 4c 8b bd        MOV        R15,qword ptr [RBP + p5]
                 c0 01 00 00
                             LAB_14022ab55                                   XREF[3]:     14022a9e5(j), 14022a9fc(j), 
                                                                                          14022aa83(j)  
       14022ab55 48 8b 85        MOV        RAX,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       14022ab5c 48 89 44        MOV        qword ptr [RSP + local_240],RAX
                 24 48
       14022ab61 48 8b 85        MOV        RAX,qword ptr [RBP + p7]
                 d0 01 00 00
       14022ab68 48 89 44        MOV        qword ptr [RSP + local_248],RAX
                 24 40
       14022ab6d 48 8b 85        MOV        RAX,qword ptr [RBP + p6]
                 c8 01 00 00
       14022ab74 48 89 44        MOV        qword ptr [RSP + local_250],RAX
                 24 38
       14022ab79 4c 89 74        MOV        qword ptr [RSP + local_258],R14
                 24 30
       14022ab7e 8b 85 b8        MOV        EAX,dword ptr [RBP + p4]
                 01 00 00
       14022ab84 89 44 24 28     MOV        dword ptr [RSP + local_260],EAX
       14022ab88 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
       14022ab8e 89 5c 24 20     MOV        dword ptr [RSP + local_268],EBX
       14022ab92 4c 8b 8d        MOV        p2,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022ab99 4c 8b 85        MOV        p1,qword ptr [RBP + local_res18]
                 a0 01 00 00
       14022aba0 48 8d 95        LEA        p0=>local_c8,[RBP + 0xc0]
                 c0 00 00 00
       14022aba7 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022abae e8 cd d5        CALL       InventoryChanges::RemoveItem                                                                 BSPointerHandle<RE::TESObjectREFR> InventoryChanges::RemoveItem(InventoryCh
                 ff ff
       14022abb3 48 8b c8        MOV        this,RAX
       14022abb6 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       14022abbb e8 50 eb        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       14022abc0 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022abc5 e9 c5 fe        JMP        LAB_14022aa8f
                 ff ff
                             LAB_14022abca                                   XREF[1]:     140229295(j)  
       14022abca 48 8b d7        MOV        p0,RDI
       14022abcd 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022abd4 48 8b cb        MOV        this,RBX
       14022abd7 e8 a4 0b        CALL       BSPointerHandleManagerInterface::GetHandle                                                   undefined BSPointerHandleManagerInterface::GetHandle()
                 01 00
       14022abdc 90              NOP
       14022abdd 48 8d 4f 20     LEA        this,[RDI + 0x20]
       14022abe1 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022abe6 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022abeb ff c8           DEC        EAX
       14022abed a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022abf2 75 07           JNZ        LAB_14022abfb
       14022abf4 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022abf7 ff 50 08        CALL       qword ptr [RAX + 0x8]
       14022abfa 90              NOP
                             LAB_14022abfb                                   XREF[1]:     14022abf2(j)  
       14022abfb e9 ad 06        JMP        LAB_14022b2ad
                 00 00
                             LAB_14022ac00                                   XREF[1]:     1402292e0(j)  
       14022ac00 48 85 ff        TEST       RDI,RDI
       14022ac03 74 1a           JZ         LAB_14022ac1f
       14022ac05 f7 47 28        TEST       dword ptr [RDI + 0x28],0x3ff
                 ff 03 00 00
       14022ac0c 75 11           JNZ        LAB_14022ac1f
       14022ac0e 8b 05 88        MOV        EAX,dword ptr [gNullHandle]
                 bd ec 01
       14022ac14 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022ac1b 89 03           MOV        dword ptr [RBX],EAX
       14022ac1d eb 13           JMP        LAB_14022ac32
                             LAB_14022ac1f                                   XREF[2]:     14022ac03(j), 14022ac0c(j)  
       14022ac1f 48 8b d7        MOV        p0,RDI
       14022ac22 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022ac29 48 8b cb        MOV        this,RBX
       14022ac2c e8 1f e4        CALL       CreateRefHandle                                                                              undefined CreateRefHandle()
                 f4 ff
       14022ac31 90              NOP
                             LAB_14022ac32                                   XREF[1]:     14022ac1d(j)  
       14022ac32 48 85 ff        TEST       RDI,RDI
       14022ac35 74 1e           JZ         LAB_14022ac55
       14022ac37 48 8d 4f 20     LEA        this,[RDI + 0x20]
       14022ac3b b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022ac40 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022ac45 ff c8           DEC        EAX
       14022ac47 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022ac4c 75 07           JNZ        LAB_14022ac55
       14022ac4e 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022ac51 ff 50 08        CALL       qword ptr [RAX + 0x8]
       14022ac54 90              NOP
                             LAB_14022ac55                                   XREF[2]:     14022ac35(j), 14022ac4c(j)  
       14022ac55 e9 53 06        JMP        LAB_14022b2ad
                 00 00
                             LAB_14022ac5a                                   XREF[1]:     140229b8b(j)  
       14022ac5a 8b 85 b0        MOV        EAX,dword ptr [RBP + p3]
                 01 00 00
       14022ac60 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022ac67 4c 8b a5        MOV        R12,qword ptr [RBP + p6]
                 c8 01 00 00
       14022ac6e 4c 8b ad        MOV        R13,qword ptr [RBP + local_res20]
                 a8 01 00 00
                             LAB_14022ac75                                   XREF[1]:     140229c1c(j)  
       14022ac75 85 c0           TEST       EAX,EAX
       14022ac77 7e 5e           JLE        LAB_14022acd7
       14022ac79 48 8b 8d        MOV        this,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       14022ac80 48 89 4c        MOV        qword ptr [RSP + local_240],this
                 24 48
       14022ac85 48 8b 8d        MOV        this,qword ptr [RBP + p7]
                 d0 01 00 00
       14022ac8c 48 89 4c        MOV        qword ptr [RSP + local_248],this
                 24 40
       14022ac91 4c 89 64        MOV        qword ptr [RSP + local_250],R12
                 24 38
       14022ac96 48 8b 8d        MOV        this,qword ptr [RBP + p5]
                 c0 01 00 00
       14022ac9d 48 89 4c        MOV        qword ptr [RSP + local_258],this
                 24 30
       14022aca2 8b 8d b8        MOV        this,dword ptr [RBP + p4]
                 01 00 00
       14022aca8 89 4c 24 28     MOV        dword ptr [RSP + local_260],this
       14022acac 89 44 24 20     MOV        dword ptr [RSP + local_268],EAX
       14022acb0 4d 8b cd        MOV        p2,R13
       14022acb3 4d 8b c6        MOV        p1,R14
       14022acb6 48 8d 95        LEA        p0=>local_d4,[RBP + 0xb4]
                 b4 00 00 00
       14022acbd 48 8b cb        MOV        this,RBX
       14022acc0 e8 bb d4        CALL       InventoryChanges::RemoveItem                                                                 BSPointerHandle<RE::TESObjectREFR> InventoryChanges::RemoveItem(InventoryCh
                 ff ff
       14022acc5 48 8b c8        MOV        this,RAX
       14022acc8 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       14022accd e8 3e ea        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       14022acd2 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
                             LAB_14022acd7                                   XREF[2]:     140229b82(j), 14022ac77(j)  
       14022acd7 49 8b cf        MOV        this,R15
       14022acda e8 41 7b        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022acdf ba 18 00        MOV        p0,0x18
                 00 00
       14022ace4 49 8b cf        MOV        this,R15
       14022ace7 e8 a0 fe        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 30 01
       14022acec 48 85 ff        TEST       RDI,RDI
       14022acef 74 1a           JZ         LAB_14022ad0b
       14022acf1 f7 47 28        TEST       dword ptr [RDI + 0x28],0x3ff
                 ff 03 00 00
       14022acf8 75 11           JNZ        LAB_14022ad0b
       14022acfa 8b 05 9c        MOV        EAX,dword ptr [gNullHandle]
                 bc ec 01
       14022ad00 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022ad07 89 03           MOV        dword ptr [RBX],EAX
       14022ad09 eb 13           JMP        LAB_14022ad1e
                             LAB_14022ad0b                                   XREF[2]:     14022acef(j), 14022acf8(j)  
       14022ad0b 48 8b d7        MOV        p0,RDI
       14022ad0e 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022ad15 48 8b cb        MOV        this,RBX
       14022ad18 e8 33 e3        CALL       CreateRefHandle                                                                              undefined CreateRefHandle()
                 f4 ff
       14022ad1d 90              NOP
                             LAB_14022ad1e                                   XREF[1]:     14022ad09(j)  
       14022ad1e 48 85 ff        TEST       RDI,RDI
       14022ad21 74 1e           JZ         LAB_14022ad41
       14022ad23 48 8d 4f 20     LEA        this,[RDI + 0x20]
       14022ad27 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022ad2c f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022ad31 ff c8           DEC        EAX
       14022ad33 a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022ad38 75 07           JNZ        LAB_14022ad41
       14022ad3a 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022ad3d ff 50 08        CALL       qword ptr [RAX + 0x8]
       14022ad40 90              NOP
                             LAB_14022ad41                                   XREF[2]:     14022ad21(j), 14022ad38(j)  
       14022ad41 e9 67 05        JMP        LAB_14022b2ad
                 00 00
                             LAB_14022ad46                                   XREF[2]:     140228518(j), 14022852e(j)  
       14022ad46 48 83 7d        CMP        qword ptr [RBP + local_200],0x0
                 88 00
       14022ad4b 0f 84 7d        JZ         LAB_14022a7ce
                 fa ff ff
       14022ad51 41 8b f0        MOV        ESI,p1
       14022ad54 80 7d 80 00     CMP        byte ptr [RBP + local_208],0x0
       14022ad58 0f 85 70        JNZ        LAB_14022a7ce
                 fa ff ff
       14022ad5e 4c 8b a5        MOV        R12,qword ptr [RBP + local_res18]
                 a0 01 00 00
       14022ad65 44 8b b5        MOV        R14D,dword ptr [RBP + p4]
                 b8 01 00 00
       14022ad6c e9 44 03        JMP        LAB_14022b0b5
                 00 00
                             LAB_14022ad71                                   XREF[1]:     140228504(j)  
       14022ad71 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
       14022ad77 e9 60 fa        JMP        LAB_14022a7dc
                 ff ff
                             LAB_14022ad7c                                   XREF[1]:     14022a7f9(j)  
       14022ad7c 41 83 fe 03     CMP        R14D,0x3
       14022ad80 0f 85 8c        JNZ        LAB_14022af12
                 01 00 00
       14022ad86 48 8b 85        MOV        RAX,qword ptr [RBP + Stack[0x50]]
                 d8 01 00 00
       14022ad8d 48 89 44        MOV        qword ptr [RSP + local_250],RAX
                 24 38
       14022ad92 48 8b 85        MOV        RAX,qword ptr [RBP + p7]
                 d0 01 00 00
       14022ad99 48 89 44        MOV        qword ptr [RSP + local_258],RAX
                 24 30
       14022ad9e 4c 89 6c        MOV        qword ptr [RSP + local_260],R13
                 24 28
       14022ada3 89 5c 24 20     MOV        dword ptr [RSP + local_268],EBX
       14022ada7 4c 8b 8d        MOV        p2,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022adae 4d 8b c4        MOV        p1,R12
       14022adb1 48 8d 95        LEA        p0=>local_b8,[RBP + 0xd0]
                 d0 00 00 00
       14022adb8 4c 8b b5        MOV        R14,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022adbf 49 8b ce        MOV        this,R14
       14022adc2 e8 39 07        CALL       FUN_14022b500                                                                                undefined FUN_14022b500()
                 00 00
       14022adc7 48 8b c8        MOV        this,RAX
       14022adca 48 8d 54        LEA        p0=>local_228,[RSP + 0x60]
                 24 60
       14022adcf e8 3c e9        CALL       BSPointerHandleManagerInterface::GetSmartPointer_1                                           undefined BSPointerHandleManagerInterface::GetSmartPointer_1()
                 f4 ff
       14022add4 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
       14022add9 48 89 7d 40     MOV        qword ptr [RBP + local_148],RDI
       14022addd 48 85 ff        TEST       RDI,RDI
       14022ade0 74 09           JZ         LAB_14022adeb
       14022ade2 f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       14022ade6 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
                             LAB_14022adeb                                   XREF[1]:     14022ade0(j)  
       14022adeb 48 89 7d 40     MOV        qword ptr [RBP + local_148],RDI
       14022adef 48 8d 47 70     LEA        RAX,[RDI + 0x70]
       14022adf3 c6 44 24        MOV        byte ptr [RSP + local_260],0x0
                 28 00
       14022adf8 48 89 44        MOV        qword ptr [RSP + local_268],RAX
                 24 20
       14022adfd 44 8b cb        MOV        p2,EBX
       14022ae00 4c 8b 85        MOV        p1,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022ae07 48 8d 55 40     LEA        p0=>local_148,[RBP + 0x40]
       14022ae0b 49 8b ce        MOV        this,R14
       14022ae0e e8 cd 09        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       14022ae13 49 8b 5c        MOV        RBX,qword ptr [R12 + 0x60]
                 24 60
       14022ae18 48 8b cf        MOV        this,RDI
       14022ae1b e8 10 f3        CALL       FUN_1402fa130                                                                                undefined FUN_1402fa130()
                 0c 00
       14022ae20 48 85 c0        TEST       RAX,RAX
       14022ae23 75 21           JNZ        LAB_14022ae46
       14022ae25 48 85 db        TEST       RBX,RBX
       14022ae28 74 1c           JZ         LAB_14022ae46
       14022ae2a 48 8b cb        MOV        this,RBX
       14022ae2d e8 7e da        CALL       TESObjectCELL::GetOwner                                                                      undefined TESObjectCELL::GetOwner()
                 08 00
       14022ae32 48 85 c0        TEST       RAX,RAX
       14022ae35 74 0f           JZ         LAB_14022ae46
       14022ae37 49 8b d4        MOV        p0,R12
       14022ae3a 48 8b cb        MOV        this,RBX
       14022ae3d e8 7e ab        CALL       TESObjectCELL::sub                                                                           undefined TESObjectCELL::sub()
                 08 00
       14022ae42 84 c0           TEST       AL,AL
       14022ae44 74 5a           JZ         LAB_14022aea0
                             LAB_14022ae46                                   XREF[3]:     14022ae23(j), 14022ae28(j), 
                                                                                          14022ae35(j)  
       14022ae46 49 8b 4c        MOV        this,qword ptr [R12 + 0x40]
                 24 40
       14022ae4b 80 79 1a 2b     CMP        byte ptr [RCX + this->unk1A],0x2b
       14022ae4f 75 5c           JNZ        LAB_14022aead
       14022ae51 e8 9a df        CALL       FUN_1403a8df0                                                                                undefined FUN_1403a8df0()
                 17 00
       14022ae56 83 f8 01        CMP        EAX,0x1
       14022ae59 75 52           JNZ        LAB_14022aead
       14022ae5b 44 89 6c        MOV        dword ptr [RSP + local_268],R13D
                 24 20
       14022ae60 4c 8d 0d        LEA        p2,[RTTI_TESBipedModelForm]                                                                  = 141aca908
                 11 06 e1 01
       14022ae67 4c 8d 05        LEA        p1,[RTTI_TESBoundObject]                                                                     = 141aca908
                 82 d3 e0 01
       14022ae6e 33 d2           XOR        p0,p0
       14022ae70 48 8b 4f 40     MOV        this,qword ptr [RDI + 0x40]
       14022ae74 e8 b1 20        CALL       RTDynamicCast                                                                                undefined RTDynamicCast()
                 31 01
       14022ae79 4c 8b f0        MOV        R14,RAX
       14022ae7c 48 85 c0        TEST       RAX,RAX
       14022ae7f 74 2c           JZ         LAB_14022aead
       14022ae81 ba 01 00        MOV        p0,0x1
                 00 00
       14022ae86 48 8b c8        MOV        this,RAX
       14022ae89 e8 82 f3        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fa ff
       14022ae8e 48 8b d8        MOV        RBX,RAX
       14022ae91 33 d2           XOR        p0,p0
       14022ae93 49 8b ce        MOV        this,R14
       14022ae96 e8 75 f3        CALL       TESBipedModelForm::sub                                                                       undefined TESBipedModelForm::sub()
                 fa ff
       14022ae9b 48 3b d8        CMP        RBX,RAX
       14022ae9e 74 0d           JZ         LAB_14022aead
                             LAB_14022aea0                                   XREF[1]:     14022ae44(j)  
       14022aea0 49 8b 54        MOV        p0,qword ptr [R12 + 0x40]
                 24 40
       14022aea5 48 8b cf        MOV        this,RDI
       14022aea8 e8 93 f2        CALL       TESObjectREFR::SetOwner                                                                      void TESObjectREFR::SetOwner(TESObjectREFR * this, TESForm * p0)
                 0c 00
                             LAB_14022aead                                   XREF[4]:     14022ae4f(j), 14022ae59(j), 
                                                                                          14022ae7f(j), 14022ae9e(j)  
       14022aead 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
                             LAB_14022aeb3                                   XREF[4]:     14022afd7(j), 14022b002(j), 
                                                                                          14022b02e(j), 14022b087(j)  
       14022aeb3 4d 85 ff        TEST       R15,R15
       14022aeb6 74 15           JZ         LAB_14022aecd
       14022aeb8 49 8b cf        MOV        this,R15
       14022aebb e8 60 79        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022aec0 ba 18 00        MOV        p0,0x18
                 00 00
       14022aec5 49 8b cf        MOV        this,R15
       14022aec8 e8 bf fc        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 30 01
                             LAB_14022aecd                                   XREF[1]:     14022aeb6(j)  
       14022aecd 44 8b b5        MOV        R14D,dword ptr [RBP + p4]
                 b8 01 00 00
                             LAB_14022aed4                                   XREF[1]:     14022b036(j)  
       14022aed4 48 83 7d        CMP        qword ptr [RBP + local_200],0x0
                 88 00
       14022aed9 0f 85 cf        JNZ        LAB_14022b0ae
                 01 00 00
       14022aedf b9 18 00        MOV        this,0x18
                 00 00
       14022aee4 e8 17 0e        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       14022aee9 48 89 85        MOV        qword ptr [RBP + p5],RAX
                 c0 01 00 00
       14022aef0 48 85 c0        TEST       RAX,RAX
       14022aef3 0f 84 93        JZ         LAB_14022b08c
                 01 00 00
       14022aef9 f7 db           NEG        EBX
       14022aefb 44 8b c3        MOV        p1,EBX
       14022aefe 48 8b 95        MOV        p0,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022af05 48 8b c8        MOV        this,RAX
       14022af08 e8 f3 76        CALL       InventoryEntryData::Allocate                                                                 undefined InventoryEntryData::Allocate()
                 ff ff
       14022af0d e9 7d 01        JMP        LAB_14022b08f
                 00 00
                             LAB_14022af12                                   XREF[1]:     14022ad80(j)  
       14022af12 48 83 bd        CMP        qword ptr [RBP + p6],0x0
                 c8 01 00 
                 00 00
       14022af1a 0f 84 13        JZ         LAB_14022b033
                 01 00 00
       14022af20 49 8b c5        MOV        RAX,R13
       14022af23 41 80 7c        CMP        byte ptr [R12 + 0x1a],0x3e
                 24 1a 3e
       14022af29 49 0f 44 c4     CMOVZ      RAX,R12
       14022af2d 48 85 c0        TEST       RAX,RAX
       14022af30 74 19           JZ         LAB_14022af4b
       14022af32 49 8d 4c        LEA        this,[R12 + 0x70]
                 24 70
       14022af37 e8 a4 91        CALL       ExtraDataList::GetLeveledNPC                                                                 undefined ExtraDataList::GetLeveledNPC()
                 f3 ff
       14022af3c 48 8b d8        MOV        RBX,RAX
       14022af3f 48 85 c0        TEST       RAX,RAX
       14022af42 75 12           JNZ        LAB_14022af56
       14022af44 49 8b 5c        MOV        RBX,qword ptr [R12 + 0x40]
                 24 40
       14022af49 eb 0b           JMP        LAB_14022af56
                             LAB_14022af4b                                   XREF[1]:     14022af30(j)  
       14022af4b 49 8b cc        MOV        this,R12
       14022af4e e8 ed ee        CALL       TESObjectREFR::GetOwner                                                                      TESForm * TESObjectREFR::GetOwner(TESObjectREFR * this)
                 0c 00
       14022af53 48 8b d8        MOV        RBX,RAX
                             LAB_14022af56                                   XREF[2]:     14022af42(j), 14022af49(j)  
       14022af56 41 83 fe 01     CMP        R14D,0x1
       14022af5a 75 5f           JNZ        LAB_14022afbb
       14022af5c 48 8b 8d        MOV        this,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022af63 e8 d8 06        CALL       FUN_1401db640                                                                                undefined FUN_1401db640()
                 fb ff
       14022af68 84 c0           TEST       AL,AL
       14022af6a 75 4f           JNZ        LAB_14022afbb
       14022af6c 4c 8b b5        MOV        R14,qword ptr [RBP + p5]
                 c0 01 00 00
       14022af73 4d 85 f6        TEST       R14,R14
       14022af76 75 25           JNZ        LAB_14022af9d
       14022af78 41 8d 4e 20     LEA        this,[R14 + 0x20]
       14022af7c e8 7f 0d        CALL       NiMemoryAllocate                                                                             undefined NiMemoryAllocate()
                 ef ff
       14022af81 48 89 85        MOV        qword ptr [RBP + p5],RAX
                 c0 01 00 00
       14022af88 48 85 c0        TEST       RAX,RAX
       14022af8b 74 0d           JZ         LAB_14022af9a
       14022af8d 48 8b c8        MOV        this,RAX
       14022af90 e8 fb 6e        CALL       ExtraDataList::ctor                                                                          undefined ExtraDataList::ctor()
                 f2 ff
       14022af95 4c 8b f0        MOV        R14,RAX
       14022af98 eb 03           JMP        LAB_14022af9d
                             LAB_14022af9a                                   XREF[1]:     14022af8b(j)  
       14022af9a 4d 8b f5        MOV        R14,R13
                             LAB_14022af9d                                   XREF[2]:     14022af76(j), 14022af98(j)  
       14022af9d 48 8b d3        MOV        p0,RBX
       14022afa0 49 8b ce        MOV        this,R14
       14022afa3 e8 68 f8        CALL       ExtraDataList::SetOwnerForm                                                                  undefined ExtraDataList::SetOwnerForm()
                 f2 ff
       14022afa8 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
       14022afae 0f b7 d3        MOVZX      p0,BX
       14022afb1 49 8b ce        MOV        this,R14
       14022afb4 e8 17 02        CALL       ExtraDataList::SetCount                                                                      void ExtraDataList::SetCount(ExtraDataList * this, ushort p0)
                 f3 ff
       14022afb9 eb 1a           JMP        LAB_14022afd5
                             LAB_14022afbb                                   XREF[2]:     14022af5a(j), 14022af6a(j)  
       14022afbb 4c 8b b5        MOV        R14,qword ptr [RBP + p5]
                 c0 01 00 00
       14022afc2 4d 85 f6        TEST       R14,R14
       14022afc5 74 08           JZ         LAB_14022afcf
       14022afc7 49 8b ce        MOV        this,R14
       14022afca e8 a1 e2        CALL       FUN_140169270                                                                                undefined FUN_140169270()
                 f3 ff
                             LAB_14022afcf                                   XREF[1]:     14022afc5(j)  
       14022afcf 8b 9d b0        MOV        EBX,dword ptr [RBP + p3]
                 01 00 00
                             LAB_14022afd5                                   XREF[1]:     14022afb9(j)  
       14022afd5 85 db           TEST       EBX,EBX
       14022afd7 0f 8e d6        JLE        LAB_14022aeb3
                 fe ff ff
       14022afdd 48 8b 95        MOV        p0,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022afe4 80 7a 1a 30     CMP        byte ptr [RDX + p0->formType],0x30
       14022afe8 75 1d           JNZ        LAB_14022b007
       14022afea 48 8b 0d        MOV        this,qword ptr [DAT_1431874f8]
                 07 c5 f5 02
       14022aff1 48 39 8d        CMP        qword ptr [RBP + p6],this
                 c8 01 00 00
       14022aff8 75 0d           JNZ        LAB_14022b007
       14022affa 41 b0 01        MOV        p1,0x1
       14022affd e8 4e 98        CALL       FUN_140744850                                                                                undefined FUN_140744850()
                 51 00
       14022b002 e9 ac fe        JMP        LAB_14022aeb3
                 ff ff
                             LAB_14022b007                                   XREF[2]:     14022afe8(j), 14022aff8(j)  
       14022b007 48 8b 8d        MOV        this,qword ptr [RBP + p6]
                 c8 01 00 00
       14022b00e 4c 8b 11        MOV        R10,qword ptr [this->entryList]
       14022b011 48 8b 85        MOV        RAX,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022b018 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
       14022b01c 48 89 44        MOV        qword ptr [RSP + local_268],RAX
                 24 20
       14022b021 44 8b cb        MOV        p2,EBX
       14022b024 4d 8b c6        MOV        p1,R14
       14022b027 41 ff 92        CALL       qword ptr [R10 + 0x2d0]
                 d0 02 00 00
       14022b02e e9 80 fe        JMP        LAB_14022aeb3
                 ff ff
                             LAB_14022b033                                   XREF[1]:     14022af1a(j)  
       14022b033 4d 85 ff        TEST       R15,R15
       14022b036 0f 84 98        JZ         LAB_14022aed4
                 fe ff ff
       14022b03c 49 8b 47 08     MOV        RAX,qword ptr [R15 + 0x8]
       14022b040 48 85 c0        TEST       RAX,RAX
       14022b043 74 05           JZ         LAB_14022b04a
       14022b045 48 8b 08        MOV        this,qword ptr [RAX]
       14022b048 eb 03           JMP        LAB_14022b04d
                             LAB_14022b04a                                   XREF[1]:     14022b043(j)  
       14022b04a 49 8b cd        MOV        this,R13
                             LAB_14022b04d                                   XREF[1]:     14022b048(j)  
       14022b04d 48 89 7d 48     MOV        qword ptr [RBP + local_140],RDI
       14022b051 48 85 ff        TEST       RDI,RDI
       14022b054 74 09           JZ         LAB_14022b05f
       14022b056 f0 ff 47 28     INC.LOCK   dword ptr [RDI + 0x28]
       14022b05a 48 8b 7c        MOV        RDI,qword ptr [RSP + local_228]
                 24 60
                             LAB_14022b05f                                   XREF[1]:     14022b054(j)  
       14022b05f 48 89 7d 48     MOV        qword ptr [RBP + local_140],RDI
       14022b063 c6 44 24        MOV        byte ptr [RSP + local_260],0x1
                 28 01
       14022b068 48 89 4c        MOV        qword ptr [RSP + local_268],this
                 24 20
       14022b06d 44 8b cb        MOV        p2,EBX
       14022b070 4c 8b 85        MOV        p1,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022b077 48 8d 55 48     LEA        p0=>local_140,[RBP + 0x48]
       14022b07b 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022b082 e8 59 07        CALL       FUN_14022b7e0                                                                                undefined FUN_14022b7e0()
                 00 00
       14022b087 e9 27 fe        JMP        LAB_14022aeb3
                 ff ff
                             LAB_14022b08c                                   XREF[1]:     14022aef3(j)  
       14022b08c 49 8b c5        MOV        RAX,R13
                             LAB_14022b08f                                   XREF[1]:     14022af0d(j)  
       14022b08f 48 89 45 88     MOV        qword ptr [RBP + local_200],RAX
       14022b093 45 33 c9        XOR        p2,p2
       14022b096 45 33 c0        XOR        p1,p1
       14022b099 48 8d 55 88     LEA        p0=>local_200,[RBP + -0x78]
       14022b09d 48 8b 85        MOV        RAX,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022b0a4 48 8b 08        MOV        this,qword ptr [RAX]
       14022b0a7 e8 f4 02        CALL       FUN_14023b3a0                                                                                undefined FUN_14023b3a0()
                 01 00
       14022b0ac eb 07           JMP        LAB_14022b0b5
                             LAB_14022b0ae                                   XREF[1]:     14022aed9(j)  
       14022b0ae 48 8b 45 88     MOV        RAX,qword ptr [RBP + local_200]
       14022b0b2 29 58 10        SUB        dword ptr [RAX + 0x10],EBX
                             LAB_14022b0b5                                   XREF[3]:     14022a7e2(j), 14022ad6c(j), 
                                                                                          14022b0ac(j)  
       14022b0b5 45 33 c9        XOR        p2,p2
       14022b0b8 41 b0 01        MOV        p1,offset s_?AVIFormFactory@@_142038100+1                                                    = "?AVIFormFactory@@"
       14022b0bb 48 8b 95        MOV        p0,qword ptr [RBP + local_res20]
                 a8 01 00 00
       14022b0c2 48 8b 8d        MOV        this,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022b0c9 e8 f2 37        CALL       FUN_14022e8c0                                                                                undefined FUN_14022e8c0()
                 00 00
       14022b0ce 48 8b d8        MOV        RBX,RAX
       14022b0d1 48 89 45 88     MOV        qword ptr [RBP + local_200],RAX
       14022b0d5 48 85 c0        TEST       RAX,RAX
       14022b0d8 0f 84 13        JZ         LAB_14022b1f1
                 01 00 00
       14022b0de 4c 8b 7d 50     MOV        R15,qword ptr [RBP + local_138]
       14022b0e2 4d 85 ff        TEST       R15,R15
       14022b0e5 74 16           JZ         LAB_14022b0fd
       14022b0e7 49 8b cd        MOV        this,R13
       14022b0ea 41 80 7c        CMP        byte ptr [R12 + 0x1a],0x3e
                 24 1a 3e
       14022b0f0 49 0f 44 cc     CMOVZ      this,R12
       14022b0f4 48 85 c9        TEST       this,this
       14022b0f7 0f 84 c9        JZ         LAB_14022b1c6
                 00 00 00
                             LAB_14022b0fd                                   XREF[1]:     14022b0e5(j)  
       14022b0fd 8b 48 10        MOV        this,dword ptr [RAX + 0x10]
       14022b100 85 c9           TEST       this,this
       14022b102 75 04           JNZ        LAB_14022b108
       14022b104 85 f6           TEST       ESI,ESI
       14022b106 74 2a           JZ         LAB_14022b132
                             LAB_14022b108                                   XREF[1]:     14022b102(j)  
       14022b108 48 8b 40 08     MOV        RAX,qword ptr [RAX + 0x8]
       14022b10c 48 85 c0        TEST       RAX,RAX
       14022b10f 0f 84 b1        JZ         LAB_14022b1c6
                 00 00 00
       14022b115 48 83 78        CMP        qword ptr [RAX + 0x8],0x0
                 08 00
       14022b11a 0f 85 a6        JNZ        LAB_14022b1c6
                 00 00 00
       14022b120 48 83 38 00     CMP        qword ptr [RAX],0x0
       14022b124 0f 85 9c        JNZ        LAB_14022b1c6
                 00 00 00
       14022b12a 85 c9           TEST       this,this
       14022b12c 0f 85 94        JNZ        LAB_14022b1c6
                 00 00 00
                             LAB_14022b132                                   XREF[1]:     14022b106(j)  
       14022b132 41 83 fe 02     CMP        R14D,0x2
       14022b136 74 08           JZ         LAB_14022b140
       14022b138 48 8b cb        MOV        this,RBX
       14022b13b e8 d0 77        CALL       FUN_140222910                                                                                undefined FUN_140222910()
                 ff ff
                             LAB_14022b140                                   XREF[1]:     14022b136(j)  
       14022b140 48 8b b5        MOV        RSI,qword ptr [RBP + local_res8]
                 90 01 00 00
       14022b147 48 8b 16        MOV        p0,qword ptr [RSI]
       14022b14a 4c 8b 42 08     MOV        p1,qword ptr [RDX + p0->sourceFiles.array]
       14022b14e 4d 85 c0        TEST       p1,p1
       14022b151 75 05           JNZ        LAB_14022b158
       14022b153 4c 39 02        CMP        qword ptr [p0->__vftable],p1
       14022b156 74 57           JZ         LAB_14022b1af
                             LAB_14022b158                                   XREF[1]:     14022b151(j)  
       14022b158 48 8b ca        MOV        this,p0
       14022b15b 4c 8b ca        MOV        p2,p0
       14022b15e 66 90           NOP
                             LAB_14022b160                                   XREF[1]:     14022b16f(j)  
       14022b160 48 39 19        CMP        qword ptr [this->entryList],RBX
       14022b163 74 0e           JZ         LAB_14022b173
       14022b165 4c 8b c9        MOV        p2,this
       14022b168 48 8b 49 08     MOV        this,qword ptr [RCX + this->owner]
       14022b16c 48 85 c9        TEST       this,this
       14022b16f 75 ef           JNZ        LAB_14022b160
       14022b171 eb 3c           JMP        LAB_14022b1af
                             LAB_14022b173                                   XREF[1]:     14022b163(j)  
       14022b173 48 3b ca        CMP        this,p0
       14022b176 75 21           JNZ        LAB_14022b199
       14022b178 4d 85 c0        TEST       p1,p1
       14022b17b 74 17           JZ         LAB_14022b194
       14022b17d 49 8b 40 08     MOV        RAX,qword ptr [R8 + p1->sourceFiles.array]
       14022b181 48 89 42 08     MOV        qword ptr [RDX + p0->sourceFiles.array],RAX
       14022b185 49 8b 00        MOV        RAX,qword ptr [p1->__vftable]
       14022b188 48 89 02        MOV        qword ptr [p0->__vftable],RAX
       14022b18b 4d 89 68 08     MOV        qword ptr [R8 + p1->sourceFiles.array],R13
       14022b18f 49 8b c8        MOV        this,p1
       14022b192 eb 11           JMP        LAB_14022b1a5
                             LAB_14022b194                                   XREF[1]:     14022b17b(j)  
       14022b194 4c 89 2a        MOV        qword ptr [p0->__vftable],R13
       14022b197 eb 16           JMP        LAB_14022b1af
                             LAB_14022b199                                   XREF[1]:     14022b176(j)  
       14022b199 48 8b 41 08     MOV        RAX,qword ptr [RCX + this->owner]
       14022b19d 49 89 41 08     MOV        qword ptr [p2 + 0x8],RAX
       14022b1a1 4c 89 69 08     MOV        qword ptr [RCX + this->owner],R13
                             LAB_14022b1a5                                   XREF[1]:     14022b192(j)  
       14022b1a5 ba 01 00        MOV        p0,0x1
                 00 00
       14022b1aa e8 01 fb        CALL       FUN_14023acb0                                                                                undefined FUN_14023acb0()
                 00 00
                             LAB_14022b1af                                   XREF[3]:     14022b156(j), 14022b171(j), 
                                                                                          14022b197(j)  
       14022b1af 48 8b cb        MOV        this,RBX
       14022b1b2 e8 69 76        CALL       InventoryEntryData::Free                                                                     undefined InventoryEntryData::Free()
                 ff ff
       14022b1b7 ba 18 00        MOV        p0,0x18
                 00 00
       14022b1bc 48 8b cb        MOV        this,RBX
       14022b1bf e8 c8 f9        CALL       thunk_FUN_14011bd80                                                                          undefined thunk_FUN_14011bd80()
                 30 01
       14022b1c4 eb 32           JMP        LAB_14022b1f8
                             LAB_14022b1c6                                   XREF[5]:     14022b0f7(j), 14022b10f(j), 
                                                                                          14022b11a(j), 14022b124(j), 
                                                                                          14022b12c(j)  
       14022b1c6 8b 4b 10        MOV        this,dword ptr [RBX + 0x10]
       14022b1c9 03 ce           ADD        this,ESI
       14022b1cb 79 24           JNS        LAB_14022b1f1
       14022b1cd 48 8b cb        MOV        this,RBX
       14022b1d0 e8 6b 82        CALL       FUN_140223440                                                                                undefined FUN_140223440()
                 ff ff
       14022b1d5 84 c0           TEST       AL,AL
       14022b1d7 75 18           JNZ        LAB_14022b1f1
       14022b1d9 48 8b 4b 08     MOV        this,qword ptr [RBX + 0x8]
       14022b1dd 48 85 c9        TEST       this,this
       14022b1e0 74 0f           JZ         LAB_14022b1f1
       14022b1e2 4d 85 ff        TEST       R15,R15
       14022b1e5 75 0a           JNZ        LAB_14022b1f1
       14022b1e7 45 33 c0        XOR        p1,p1
       14022b1ea 33 d2           XOR        p0,p0
       14022b1ec e8 9f 88        CALL       FUN_1401c3a90                                                                                undefined FUN_1401c3a90()
                 f9 ff
                             LAB_14022b1f1                                   XREF[5]:     14022b0d8(j), 14022b1cb(j), 
                                                                                          14022b1d7(j), 14022b1e0(j), 
                                                                                          14022b1e5(j)  
       14022b1f1 48 8b b5        MOV        RSI,qword ptr [RBP + local_res8]
                 90 01 00 00
                             LAB_14022b1f8                                   XREF[1]:     14022b1c4(j)  
       14022b1f8 80 7d d0 00     CMP        byte ptr [RBP + local_1b8],0x0
       14022b1fc 74 2c           JZ         LAB_14022b22a
       14022b1fe 33 d2           XOR        p0,p0
       14022b200 4c 8b 75 d8     MOV        R14,qword ptr [RBP + local_1b0]
       14022b204 49 8b ce        MOV        this,R14
       14022b207 e8 b4 c4        CALL       Actor::GetEquippedWeapon                                                                     undefined Actor::GetEquippedWeapon()
                 48 00
       14022b20c 48 85 c0        TEST       RAX,RAX
       14022b20f 74 19           JZ         LAB_14022b22a
       14022b211 49 8b 1e        MOV        RBX,qword ptr [R14]
       14022b214 33 d2           XOR        p0,p0
       14022b216 49 8b ce        MOV        this,R14
       14022b219 e8 a2 c4        CALL       Actor::GetEquippedWeapon                                                                     undefined Actor::GetEquippedWeapon()
                 48 00
       14022b21e 48 8b d0        MOV        p0,RAX
       14022b221 49 8b ce        MOV        this,R14
       14022b224 ff 93 88        CALL       qword ptr [RBX + 0x688]
                 06 00 00
                             LAB_14022b22a                                   XREF[2]:     14022b1fc(j), 14022b20f(j)  
       14022b22a 8b 46 10        MOV        EAX,dword ptr [RSI + 0x10]
       14022b22d 89 46 14        MOV        dword ptr [RSI + 0x14],EAX
       14022b230 c7 46 10        MOV        dword ptr [RSI + 0x10],0xbf800000
                 00 00 80 bf
       14022b237 48 8b 46 08     MOV        RAX,qword ptr [RSI + 0x8]
       14022b23b 48 85 c0        TEST       RAX,RAX
       14022b23e 74 18           JZ         LAB_14022b258
       14022b240 80 78 1a 3e     CMP        byte ptr [RAX + 0x1a],0x3e
       14022b244 4c 0f 44 e8     CMOVZ      R13,RAX
       14022b248 4d 85 ed        TEST       R13,R13
       14022b24b 74 0b           JZ         LAB_14022b258
       14022b24d 41 c7 85        MOV        dword ptr [R13 + 0x200],0xbf800000
                 00 02 00 
                 00 00 00 
                             LAB_14022b258                                   XREF[2]:     14022b23e(j), 14022b24b(j)  
       14022b258 48 85 ff        TEST       RDI,RDI
       14022b25b 74 1a           JZ         LAB_14022b277
       14022b25d f7 47 28        TEST       dword ptr [RDI + 0x28],0x3ff
                 ff 03 00 00
       14022b264 75 11           JNZ        LAB_14022b277
       14022b266 8b 05 30        MOV        EAX,dword ptr [gNullHandle]
                 b7 ec 01
       14022b26c 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022b273 89 03           MOV        dword ptr [RBX],EAX
       14022b275 eb 13           JMP        LAB_14022b28a
                             LAB_14022b277                                   XREF[2]:     14022b25b(j), 14022b264(j)  
       14022b277 48 8b d7        MOV        p0,RDI
       14022b27a 48 8b 9d        MOV        RBX,qword ptr [RBP + local_res10]
                 98 01 00 00
       14022b281 48 8b cb        MOV        this,RBX
       14022b284 e8 c7 dd        CALL       CreateRefHandle                                                                              undefined CreateRefHandle()
                 f4 ff
       14022b289 90              NOP
                             LAB_14022b28a                                   XREF[1]:     14022b275(j)  
       14022b28a 48 85 ff        TEST       RDI,RDI
       14022b28d 74 1e           JZ         LAB_14022b2ad
       14022b28f 48 8d 4f 20     LEA        this,[RDI + 0x20]
       14022b293 b8 ff ff        MOV        EAX,0xffffffff
                 ff ff
       14022b298 f0 0f c1        XADD.LOCK  dword ptr [RCX + this->owner],EAX
                 41 08
       14022b29d ff c8           DEC        EAX
       14022b29f a9 ff 03        TEST       EAX,0x3ff
                 00 00
       14022b2a4 75 07           JNZ        LAB_14022b2ad
       14022b2a6 48 8b 01        MOV        RAX,qword ptr [this->entryList]
       14022b2a9 ff 50 08        CALL       qword ptr [RAX + 0x8]
       14022b2ac 90              NOP
                             LAB_14022b2ad                                   XREF[9]:     1402284d5(j), 1402285de(j), 
                                                                                          14022a847(j), 14022ab49(j), 
                                                                                          14022abfb(j), 14022ac55(j), 
                                                                                          14022ad41(j), 14022b28d(j), 
                                                                                          14022b2a4(j)  
       14022b2ad ba 68 07        MOV        p0,0x768
                 00 00
       14022b2b2 48 8b 4d c8     MOV        this,qword ptr [RBP + local_1c0]
       14022b2b6 8b 45 90        MOV        EAX,dword ptr [RBP + local_1f8]
       14022b2b9 89 04 11        MOV        dword ptr [this->entryList + p0->__vftable*0x1],EAX
       14022b2bc 48 8b c3        MOV        RAX,RBX
       14022b2bf 48 81 c4        ADD        RSP,0x248
                 48 02 00 00
       14022b2c6 41 5f           POP        R15
       14022b2c8 41 5e           POP        R14
       14022b2ca 41 5d           POP        R13
       14022b2cc 41 5c           POP        R12
       14022b2ce 5f              POP        RDI
       14022b2cf 5e              POP        RSI
       14022b2d0 5b              POP        RBX
       14022b2d1 5d              POP        RBP
       14022b2d2 c3              RET
       14022b2d3 cc              ??         CCh
       14022b2d4 cc              ??         CCh
       14022b2d5 cc              ??         CCh
       14022b2d6 cc              ??         CCh
       14022b2d7 cc              ??         CCh
       14022b2d8 cc              ??         CCh
       14022b2d9 cc              ??         CCh
       14022b2da cc              ??         CCh
       14022b2db cc              ??         CCh
       14022b2dc cc              ??         CCh
       14022b2dd cc              ??         CCh
       14022b2de cc              ??         CCh
       14022b2df cc              ??         CCh



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

BSPointerHandle<>
InventoryChanges::RemoveItem
          (InventoryChanges *this,TESObjectREFR *p0,TESBoundObject *p1,int p2,ITEM_REMOVE_REASON p3,
          ExtraDataList *p4,TESObjectREFR *p5,NiPoint3 *p6,TESObjectREFR *p7)

{
  InGameFormFlag *pIVar1;
  BSReadWriteLock *this_00;
  code *pcVar2;
  uint uVar3;
  Node *pNVar4;
  InventoryEntryData *pIVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  BSExtraData_vtbl *pBVar8;
  BSExtraData_vtbl *pBVar9;
  BSExtraData_vtbl *pBVar10;
  BSExtraData_vtbl *pBVar11;
  TESBoundObject *p1_00;
  TESBoundObject_vtbl *pTVar12;
  TESFileArray *pTVar13;
  InventoryEntryData *pIVar14;
  InventoryEntryData *pIVar15;
  InventoryEntryData *pIVar16;
  BaseExtraList_vtbl *pBVar17;
  ActorEquipManager *this_01;
  TESFileContainer TVar18;
  TESObjectREFR_SetAltered_t *pTVar19;
  bool bVar20;
  char cVar21;
  short sVar22;
  short sVar23;
  int iVar24;
  uint uVar25;
  BSPointerHandle<> BVar26;
  int iVar27;
  TESObjectREFR *pTVar28;
  longlong lVar29;
  longlong *plVar30;
  undefined4 *puVar31;
  ExtraDataList *pEVar32;
  TESObjectREFR *pTVar33;
  uint *puVar34;
  TESObjectREFR *pTVar35;
  TESObjectREFR *pTVar36;
  ScriptEventSourceHolder *pSVar37;
  undefined8 uVar38;
  longlong lVar39;
  TESObjectREFR *pTVar40;
  TESForm *pTVar41;
  undefined4 uVar42;
  BSExtraData_vtbl *pBVar43;
  InventoryEntryData *pIVar44;
  ushort p0_00;
  TESObjectREFR **ppTVar45;
  TESObjectREFR *pTVar46;
  Actor *p0_01;
  BSExtraData *pBVar47;
  ITEM_REMOVE_REASON IVar48;
  BSExtraData_vtbl *pBVar49;
  undefined4 in_register_0000008c;
  TESBoundObject *pTVar50;
  InventoryEntryData *pIVar51;
  ushort uVar52;
  ITEM_REMOVE_REASON IVar53;
  ITEM_REMOVE_REASON IVar54;
  TESObjectREFR *pTVar55;
  int iVar56;
  uint uVar57;
  Actor *pAVar58;
  longlong unaff_GS_OFFSET;
  bool bVar59;
  float fVar60;
  undefined8 in_stack_00000050;
  TESObjectREFR *in_stack_fffffffffffffd98;
  ExtraDataList *pEVar61;
  TESObjectREFR *in_stack_fffffffffffffda0;
  ulonglong uVar62;
  ulonglong uVar63;
  TESObjectREFR *local_228;
  char local_220;
  TESObjectREFR *local_218;
  TESObjectREFR *local_210;
  char local_208;
  TESObjectREFR *local_200;
  undefined4 local_1f8;
  short local_1f4 [2];
  TESObjectREFR *local_1f0;
  TESObjectREFR *local_1e8;
  BSExtraData *local_1e0;
  int local_1d8;
  TESObjectREFR *local_1d0;
  ITEM_REMOVE_REASON local_1c8;
  longlong local_1c0;
  uint local_1b8;
  TESObjectREFR *local_1b0;
  undefined4 local_1a8 [2];
  TESObjectREFR *local_1a0;
  TESObjectREFR *local_198;
  TESObjectREFR *local_190;
  TESObjectREFR *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  TESObjectREFR *local_168;
  TESObjectREFR *local_160;
  TESObjectREFR *local_158;
  TESObjectREFR *local_150;
  TESObjectREFR *local_148;
  TESObjectREFR *local_140;
  longlong local_138;
  TESObjectREFR *local_130;
  TESObjectREFR *local_128;
  TESObjectREFR *local_120;
  TESObjectREFR *local_118;
  TESFileContainer local_110;
  TESObjectREFR_SetAltered_t *local_108;
  TESObjectREFR *local_100;
  undefined4 local_f8;
  short local_f4;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined1 local_d8 [8];
  undefined1 local_d0 [4];
  undefined1 local_cc [8];
  undefined1 local_c4 [8];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined8 local_b0;
  InGameFormFlag *local_a8;
  void *local_a0;
  InGameFormFlag *local_98;
  BSReadWriteLock *local_90;
  void *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  void *local_68;
  longlong local_60;
  InGameFormFlag *local_58;
  
  pTVar50 = (TESBoundObject *)CONCAT44(in_register_0000008c,p2);
  local_b0 = 0xfffffffffffffffe;
  local_1c0 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  local_1f8 = *(undefined4 *)(local_1c0 + 0x768);
  *(undefined4 *)(local_1c0 + 0x768) = 0x62;
  this->changed = true;
  local_180 = gNullHandle;
  pTVar55 = (TESObjectREFR *)0x0;
  uVar25 = 0;
  local_228 = (TESObjectREFR *)0x0;
  BSPointerHandleManagerInterface::GetSmartPointer_1(&local_180,&local_228);
  pTVar28 = this->owner;
  if (pTVar28 != (TESObjectREFR *)0x0) {
    (*pTVar28->__vftable->AddChange)(pTVar28,0x20);
  }
  if (p6 != (NiPoint3 *)0x0) {
    (**(code **)(*(longlong *)p6 + 0x50))(p6,0x20);
  }
  pTVar28 = pTVar55;
  if (this->owner != (TESObjectREFR *)0x0) {
    pTVar28 = (TESObjectREFR *)FUN_1402e20f0();
  }
  pNVar4 = &this->entryList->_listHead;
  bVar59 = true;
  while (pTVar40 = pTVar55, pNVar4 != (Node *)0x0) {
    if (!bVar59) {
      if (pNVar4 != (Node *)0x0) {
        pTVar40 = (TESObjectREFR *)pNVar4->item;
      }
      break;
    }
    pIVar5 = ((Node *)&pNVar4->item)->item;
    if ((pIVar5 == (InventoryEntryData *)0x0) || (pIVar5->object != pTVar50)) {
      pNVar4 = pNVar4->next;
    }
    else {
      bVar59 = false;
    }
  }
  local_1b8 = local_1b8 & 0xffffff00;
  local_200 = pTVar40;
  if (p1 == DAT_1431874f8) {
    local_1b0 = pTVar55;
    if (p1->formType == ActorCharacter) {
      local_1b0 = (TESObjectREFR *)p1;
    }
    if (local_1b0 == (TESObjectREFR *)0x0) goto LAB_140228308;
    if ((int)p4 != 0) {
      uVar38._0_4_ = local_1b0[1].data.location.y;
      uVar38._4_4_ = local_1b0[1].data.location.z;
      lVar29 = FUN_14070db60(uVar38);
      if (lVar29 != 0) {
        uVar6._0_4_ = local_1b0[1].data.location.y;
        uVar6._4_4_ = local_1b0[1].data.location.z;
        plVar30 = (longlong *)FUN_14070db60(uVar6);
        local_1b8 = local_1b8 & 0xff;
        if ((TESBoundObject *)*plVar30 == pTVar50) {
          local_1b8 = 1;
        }
      }
      goto LAB_140228308;
    }
LAB_1402283ac:
    if ((p5 != (TESObjectREFR *)0x0) && (iVar24 = FUN_140179850(p5), iVar24 == 0)) {
      if ((pTVar40 != (TESObjectREFR *)0x0) &&
         (pBVar8 = (BSExtraData_vtbl *)(pTVar40->sourceFiles).array,
         pBVar8 != (BSExtraData_vtbl *)0x0)) {
        pBVar9 = (BSExtraData_vtbl *)pBVar8->GetType;
        pBVar43 = pBVar8;
        pBVar49 = pBVar8;
        if (pBVar9 != (BSExtraData_vtbl *)0x0) goto LAB_1402283e7;
        pBVar11 = pBVar8;
        pBVar10 = (BSExtraData_vtbl *)pBVar8->_dtor_BSExtraData;
        while (pBVar43 = pBVar11, pBVar10 != (BSExtraData_vtbl *)0x0) {
LAB_1402283e7:
          if ((TESObjectREFR *)pBVar43->_dtor_BSExtraData == p5) {
            if (pBVar43 == pBVar8) {
              if (pBVar9 == (BSExtraData_vtbl *)0x0) {
                pBVar8->_dtor_BSExtraData = (BSExtraData__dtor_BSExtraData_t *)0x0;
                break;
              }
              pBVar8->GetType = (BSExtraData_GetType_t *)pBVar9->GetType;
              pBVar8->_dtor_BSExtraData =
                   (BSExtraData__dtor_BSExtraData_t *)pBVar9->_dtor_BSExtraData;
              pBVar9->GetType = (BSExtraData_GetType_t *)0x0;
              pBVar43 = pBVar9;
            }
            else {
              pBVar49->GetType = (BSExtraData_GetType_t *)pBVar43->GetType;
              pBVar43->GetType = (BSExtraData_GetType_t *)0x0;
            }
            FUN_1401c1870(pBVar43,1);
            break;
          }
          pBVar11 = (BSExtraData_vtbl *)pBVar43->GetType;
          pBVar49 = pBVar43;
          pBVar10 = pBVar11;
        }
      }
      thunk_FUN_1401513d0(p5);
      thunk_FUN_14011bd80(p5,0x20);
      p5 = (TESObjectREFR *)0x0;
    }
  }
  else {
    local_1b0 = (TESObjectREFR *)0x0;
LAB_140228308:
    if ((int)p4 == 0) goto LAB_1402283ac;
    if ((((local_1b0 != (TESObjectREFR *)0x0) && (pTVar40 != (TESObjectREFR *)0x0)) &&
        (lVar29 = FUN_140223370(pTVar40), lVar29 != 0)) &&
       (((int)pTVar40->formFlags <= (int)p3 && (pTVar50->formType == Weapon)))) {
      uVar7._0_4_ = local_1b0[1].data.location.y;
      uVar7._4_4_ = local_1b0[1].data.location.z;
      FUN_140711ac0(uVar7,1);
    }
    if (p5 != (TESObjectREFR *)0x0) {
      lVar29 = ExtraDataList::GetExtraData(p5,0x49);
      if ((lVar29 != 0) && (sVar22 = ExtraDataList::GetCount(p5), p3 == (int)sVar22)) {
        FUN_14015e2b0(p5,0xff);
      }
      goto LAB_1402283ac;
    }
  }
  if (p1 != (TESBoundObject *)0x0) {
    if (pTVar28 == (TESObjectREFR *)0x0) {
      uVar25 = 0;
    }
    else {
      uVar25 = FUN_1401db450(pTVar28,pTVar50);
    }
  }
  uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
  local_174 = uVar25;
  if (-1 < (int)uVar25) {
    local_174 = 0;
  }
  local_1d8 = (uVar25 ^ (int)uVar25 >> 0x1f) - ((int)uVar25 >> 0x1f);
  if ((local_1d8 < 0) && ((TESBoundObject *)p6 != DAT_1431874f8)) {
    *(undefined4 *)&p0->__vftable = gNullHandle;
    if (local_228 != (TESObjectREFR *)0x0) {
      LOCK();
      puVar34 = &local_228->_refCount;
      uVar25 = *puVar34;
      *puVar34 = *puVar34 - 1;
      UNLOCK();
      if ((uVar25 - 1 & 0x3ff) == 0) {
        (*(code *)local_228->__vftable_BSHandleRefObject->DeleteThis)();
      }
    }
    goto LAB_14022b2ad;
  }
  iVar24 = local_1d8;
  if (pTVar40 == (TESObjectREFR *)0x0) {
joined_r0x0001402285a1:
    if (iVar24 == 0) {
      *(undefined4 *)&p0->__vftable = gNullHandle;
      if (local_228 != (TESObjectREFR *)0x0) {
        LOCK();
        puVar34 = &local_228->_refCount;
        uVar25 = *puVar34;
        *puVar34 = *puVar34 - 1;
        UNLOCK();
        if ((uVar25 - 1 & 0x3ff) == 0) {
          (*(code *)local_228->__vftable_BSHandleRefObject->DeleteThis)();
        }
      }
      goto LAB_14022b2ad;
    }
  }
  else if (pTVar40->formFlags != 0) {
    iVar24 = pTVar40->formFlags + local_1d8;
    goto joined_r0x0001402285a1;
  }
  local_138 = 0;
  local_208 = '\0';
  pTVar28 = local_228;
  pTVar33 = pTVar55;
  if (pTVar40 != (TESObjectREFR *)0x0) {
    local_218 = local_228;
    do {
      pTVar40 = local_200;
      IVar48 = p3;
      uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
      if (((int)p3 < 1) || (local_1f0 = local_200, (int)(local_200->formFlags + local_1d8) < 1)) {
        if ((local_200 != (TESObjectREFR *)0x0) && (iVar24 = local_1d8, local_208 == '\0'))
        goto LAB_14022b0b5;
        break;
      }
      if (pTVar33 != (TESObjectREFR *)0x0) {
        InventoryEntryData::Free(pTVar33);
        thunk_FUN_14011bd80(pTVar33,0x18);
      }
      if (gMemoryManagerState != 2) {
        Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
      }
      local_1d0 = MemoryManager::Allocate((MemoryManager *)&gMemoryManager,0x18,0,false);
      if (local_1d0 == (TESObjectREFR *)0x0) {
        local_210 = (TESObjectREFR *)0x0;
      }
      else {
        ((BaseExtraList *)&local_1d0->__vftable)->__vftable = (BaseExtraList_vtbl *)0x0;
        (local_1d0->sourceFiles).array = (TESFileArray *)0x0;
        local_1d0->formFlags = 0;
        local_210 = local_1d0;
      }
      pTVar33 = local_210;
      local_1e8 = local_200;
      ((BaseExtraList *)&local_210->__vftable)->__vftable =
           ((BaseExtraList *)&local_200->__vftable)->__vftable;
      local_1e0 = (BSExtraData *)(local_200->sourceFiles).array;
      cVar21 = '\x01';
      if (p5 == (TESObjectREFR *)0x0) {
LAB_1402292c6:
        iVar24 = local_1d8;
        if (local_1d8 < 0) {
          iVar24 = -local_1d8;
        }
        iVar24 = pTVar40->formFlags + iVar24;
        if ((iVar24 < 0) && (-1 < local_1d8)) {
          if ((pTVar28 == (TESObjectREFR *)0x0) || ((pTVar28->_refCount & 0x3ff) != 0)) {
            CreateRefHandle(p0,pTVar28);
          }
          else {
            *(undefined4 *)&p0->__vftable = gNullHandle;
          }
          if (pTVar28 != (TESObjectREFR *)0x0) {
            LOCK();
            puVar34 = &pTVar28->_refCount;
            uVar25 = *puVar34;
            *puVar34 = *puVar34 - 1;
            UNLOCK();
            if ((uVar25 - 1 & 0x3ff) == 0) {
              (*(code *)pTVar28->__vftable_BSHandleRefObject->DeleteThis)();
            }
          }
          goto LAB_14022b2ad;
        }
        pBVar47 = (BSExtraData *)(local_1e8->sourceFiles).array;
        pTVar40 = pTVar55;
        iVar27 = 0;
        if (pBVar47 != (BSExtraData *)0x0) {
          do {
            iVar56 = (int)pTVar40;
            pBVar8 = pBVar47->__vftable;
            if (pBVar8 == (BSExtraData_vtbl *)0x0) break;
            cVar21 = ExtraDataList::sub(pBVar8,1);
            if (cVar21 == '\0') {
              sVar22 = ExtraDataList::GetCount(pBVar8);
              pTVar40 = (TESObjectREFR *)(ulonglong)(uint)(iVar56 + sVar22);
            }
            iVar56 = (int)pTVar40;
            pBVar47 = pBVar47->next;
          } while (pBVar47 != (BSExtraData *)0x0);
          iVar27 = FUN_140225650(local_200);
          iVar27 = iVar27 + iVar56;
        }
        IVar53 = iVar24 - iVar27;
        IVar54 = kRemove;
        if (-1 < (int)IVar53) {
          IVar54 = IVar53;
        }
        if (0 < (int)IVar54) {
          pBVar47 = (BSExtraData *)(local_1e8->sourceFiles).array;
joined_r0x00014022934c:
          if ((pBVar47 != (BSExtraData *)0x0) && (pBVar47->__vftable != (BSExtraData_vtbl *)0x0)) {
            cVar21 = ExtraDataList::IsWorn(pBVar47->__vftable,1,0);
            if (cVar21 == '\0') goto code_r0x000140229366;
            for (pBVar47 = (BSExtraData *)(local_1e8->sourceFiles).array;
                (pBVar47 != (BSExtraData *)0x0 &&
                (pEVar32 = (ExtraDataList *)pBVar47->__vftable, pEVar32 != (ExtraDataList *)0x0));
                pBVar47 = pBVar47->next) {
              sVar22 = ExtraDataList::GetCount(pEVar32);
              cVar21 = ExtraDataList::IsWorn(pEVar32,1,0);
              if ((cVar21 != '\0') && (1 < sVar22)) {
                ExtraDataList::SetCount(pEVar32,sVar22 - (short)p3);
              }
            }
            goto LAB_140229453;
          }
          pBVar47 = (BSExtraData *)(local_1e8->sourceFiles).array;
          do {
            if ((pBVar47 == (BSExtraData *)0x0) || (pBVar47->__vftable == (BSExtraData_vtbl *)0x0))
            goto LAB_140229453;
            cVar21 = FUN_14015f2b0();
            pBVar47 = pBVar47->next;
          } while (cVar21 == '\0');
          for (pBVar47 = (BSExtraData *)(local_1e8->sourceFiles).array;
              (pBVar47 != (BSExtraData *)0x0 &&
              (pEVar32 = (ExtraDataList *)pBVar47->__vftable, pTVar28 = local_218,
              pEVar32 != (ExtraDataList *)0x0)); pBVar47 = pBVar47->next) {
            sVar22 = ExtraDataList::GetCount(pEVar32);
            cVar21 = FUN_14015f2b0(pEVar32);
            if ((cVar21 != '\0') && (1 < sVar22)) {
              ExtraDataList::SetCount(pEVar32,sVar22 - (short)p3);
            }
            pTVar28 = local_218;
          }
LAB_140229453:
          pTVar40 = local_210;
          if ((int)IVar54 < (int)p3) {
            p3 = p3 - IVar54;
            if ((int)(local_1d8 + local_1f0->formFlags) < 0) {
              if (local_1d8 == 0) {
                local_1f0->formFlags = 0;
              }
              else {
                local_1f0->formFlags = -local_1d8;
              }
            }
            else {
              local_1f0->formFlags = local_1f0->formFlags - IVar54;
            }
          }
          else {
            if (local_174 == 0) {
              local_1f0->formFlags = local_1f0->formFlags - p3;
            }
            p3 = kRemove;
            IVar54 = IVar48;
          }
          if ((int)p4 == 3) {
            uVar63 = 0;
            puVar34 = (uint *)FUN_14022b500(this,local_dc,p1,pTVar50,IVar54,0,p7,in_stack_00000050);
            uVar25 = *puVar34;
            pTVar40 = pTVar28;
            if (uVar25 == 0) {
LAB_1402295a3:
              pTVar28 = pTVar40;
              if (pTVar40 != (TESObjectREFR *)0x0) {
                local_228 = (TESObjectREFR *)0x0;
                local_218 = (TESObjectREFR *)0x0;
                pTVar28 = pTVar55;
                if (pTVar40 != (TESObjectREFR *)0x0) {
                  LOCK();
                  puVar34 = &pTVar40->_refCount;
                  uVar25 = *puVar34;
                  *puVar34 = *puVar34 - 1;
                  UNLOCK();
                  if ((uVar25 - 1 & 0x3ff) == 0) {
                    (*(code *)pTVar40->__vftable_BSHandleRefObject->DeleteThis)();
                  }
                  local_218 = local_228;
                  pTVar28 = local_228;
                }
              }
            }
            else {
              uVar57 = uVar25 & 0xfffff;
              pTVar33 = (TESObjectREFR *)((&DAT_1420fc608)[(ulonglong)uVar57 * 2] + -0x20);
              if ((&DAT_1420fc608)[(ulonglong)uVar57 * 2] == 0) {
                pTVar33 = pTVar55;
              }
              if (pTVar28 != pTVar33) {
                if (pTVar33 != (TESObjectREFR *)0x0) {
                  LOCK();
                  pTVar33->_refCount = pTVar33->_refCount + 1;
                  UNLOCK();
                }
                pTVar40 = pTVar33;
                local_228 = pTVar33;
                local_218 = pTVar33;
                if (pTVar28 != (TESObjectREFR *)0x0) {
                  LOCK();
                  puVar34 = &pTVar28->_refCount;
                  uVar3 = *puVar34;
                  *puVar34 = *puVar34 - 1;
                  UNLOCK();
                  if ((uVar3 - 1 & 0x3ff) == 0) {
                    (*(code *)pTVar28->__vftable_BSHandleRefObject->DeleteThis)();
                  }
                  local_218 = local_228;
                  pTVar40 = local_228;
                }
              }
              if (((((uint)(&DAT_1420fc600)[(ulonglong)uVar57 * 4] >> 0x1a & 1) == 0) ||
                  (((&DAT_1420fc600)[(ulonglong)uVar57 * 4] & 0x3f00000) != (uVar25 & 0x3f00000)))
                 || (pTVar28 = pTVar40, pTVar40->_refCount >> 0xb != uVar57)) goto LAB_1402295a3;
            }
            if (pTVar28 != (TESObjectREFR *)0x0) {
              LOCK();
              pTVar28->_refCount = pTVar28->_refCount + 1;
              UNLOCK();
              local_218 = local_228;
              pTVar28 = local_228;
            }
            in_stack_fffffffffffffd98 = (TESObjectREFR *)&pTVar28->extraList;
            in_stack_fffffffffffffda0 = (TESObjectREFR *)(uVar63 & 0xffffffffffffff00);
            local_160 = pTVar28;
            FUN_14022b7e0(this,&local_160,pTVar50,IVar54,in_stack_fffffffffffffd98,
                          in_stack_fffffffffffffda0);
            pTVar12 = p1[2].__vftable;
            lVar29 = FUN_1402fa130(pTVar28);
            if (((lVar29 == 0) && (pTVar12 != (TESBoundObject_vtbl *)0x0)) &&
               ((lVar29 = TESObjectCELL::GetOwner(pTVar12), lVar29 != 0 &&
                ((p1 == gPlayerCharacter3 ||
                 (cVar21 = TESObjectCELL::sub(pTVar12,p1), cVar21 == '\0')))))) {
LAB_1402296ce:
              TESObjectREFR::SetOwner(pTVar28,*(TESForm **)&p1[1].formFlags);
            }
            else if ((*(char *)(*(longlong *)&p1[1].formFlags + 0x1a) == '+') &&
                    (iVar24 = FUN_1403a8df0(), iVar24 == 1)) {
              in_stack_fffffffffffffd98 =
                   (TESObjectREFR *)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffff00000000);
              lVar29 = RTDynamicCast((pTVar28->data).objectReference,0,&RTTI_TESBoundObject,
                                     &RTTI_TESBipedModelForm,in_stack_fffffffffffffd98);
              if (lVar29 != 0) {
                lVar39 = TESBipedModelForm::sub(lVar29,1);
                lVar29 = TESBipedModelForm::sub(lVar29,0);
                if (lVar39 != lVar29) goto LAB_1402296ce;
              }
            }
          }
          else {
            if (p6 == (NiPoint3 *)0x0) {
              pBVar47 = (BSExtraData *)(local_210->sourceFiles).array;
              in_stack_fffffffffffffd98 = pTVar55;
              if (pBVar47 != (BSExtraData *)0x0) {
                in_stack_fffffffffffffd98 = (TESObjectREFR *)pBVar47->__vftable;
              }
              if (pTVar28 != (TESObjectREFR *)0x0) {
                LOCK();
                pTVar28->_refCount = pTVar28->_refCount + 1;
                UNLOCK();
                local_218 = local_228;
                pTVar28 = local_228;
              }
              in_stack_fffffffffffffda0 =
                   (TESObjectREFR *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffda0 >> 8),1);
              local_158 = pTVar28;
              FUN_14022b7e0(this,&local_158,pTVar50,IVar54,in_stack_fffffffffffffd98,
                            in_stack_fffffffffffffda0);
              InventoryEntryData::Free(pTVar40);
              thunk_FUN_14011bd80(pTVar40,0x18);
              local_210 = (TESObjectREFR *)0x0;
              goto LAB_140229931;
            }
            pTVar40 = pTVar55;
            if (p1->formType == ActorCharacter) {
              pTVar40 = (TESObjectREFR *)p1;
            }
            if (pTVar40 == (TESObjectREFR *)0x0) {
              pTVar41 = TESObjectREFR::GetOwner((TESObjectREFR *)p1);
            }
            else {
              pTVar41 = (TESForm *)ExtraDataList::GetLeveledNPC(&p1[2].formFlags);
              if (pTVar41 == (TESForm *)0x0) {
                pTVar41 = *(TESForm **)&p1[1].formFlags;
              }
            }
            if ((((int)p4 == 1) && (cVar21 = FUN_1401db640(pTVar50), cVar21 == '\0')) &&
               ((pTVar50->formType != Ammo || ((TESBoundObject *)p6 != DAT_1431874f8)))) {
              if (p5 == (TESObjectREFR *)0x0) {
                local_78 = NiMemoryAllocate(0x20);
                if (local_78 == 0) {
                  p5 = (TESObjectREFR *)0x0;
                }
                else {
                  p5 = (TESObjectREFR *)ExtraDataList::ctor(local_78);
                }
              }
              ExtraDataList::SetOwnerForm(p5,pTVar41);
              ExtraDataList::SetCount((ExtraDataList *)p5,(ushort)IVar54);
            }
            if (((p5 != (TESObjectREFR *)0x0) && ((TESBoundObject *)p6 == DAT_1431874f8)) &&
               (pTVar50->formType == Ammo)) {
              FUN_140169270(p5);
            }
            if ((((int)p4 == 5) &&
                ((p5 == (TESObjectREFR *)0x0 || (lVar29 = ExtraDataList::GetOwner(p5), lVar29 == 0))
                )) && (p1 == gPlayerCharacter3)) {
              if ((p5 == (TESObjectREFR *)0x0) &&
                 (local_70 = NiMemoryAllocate(0x20), p5 = pTVar55, local_70 != 0)) {
                p5 = (TESObjectREFR *)ExtraDataList::ctor(local_70);
              }
              uVar38 = FUN_14068b1b0(DAT_1431874f8);
              ExtraDataList::SetOwnerForm(p5,uVar38);
              ExtraDataList::SetCount((ExtraDataList *)p5,(ushort)IVar54);
            }
            in_stack_fffffffffffffd98 = this->owner;
            (**(code **)(*(longlong *)p6 + 0x2d0))(p6,pTVar50,p5,IVar54,in_stack_fffffffffffffd98);
          }
          InventoryEntryData::Free(local_210);
          thunk_FUN_14011bd80(local_210,0x18);
          local_210 = (TESObjectREFR *)0x0;
        }
LAB_140229931:
        pTVar40 = local_210;
        if (((0 < (int)p3) &&
            (pBVar47 = (BSExtraData *)(local_1e8->sourceFiles).array, local_1e0 = pBVar47,
            pBVar47 != (BSExtraData *)0x0)) &&
           ((pBVar47->next != (BSExtraData *)0x0 || (pBVar47->__vftable != (BSExtraData_vtbl *)0x0))
           )) {
          local_220 = '\0';
          pTVar33 = pTVar55;
          cVar21 = local_220;
          if (p1 == gPlayerCharacter3) {
            do {
              iVar24 = (int)pTVar33;
              if (pBVar47->__vftable == (BSExtraData_vtbl *)0x0) break;
              cVar21 = ExtraDataList::sub(pBVar47->__vftable,0);
              if (cVar21 != '\0') {
                pTVar33 = (TESObjectREFR *)(ulonglong)(iVar24 + 1);
              }
              iVar24 = (int)pTVar33;
              pBVar47 = pBVar47->next;
            } while (pBVar47 != (BSExtraData *)0x0);
            uVar25 = 0;
            pTVar33 = pTVar55;
            for (pBVar47 = (BSExtraData *)(local_1e8->sourceFiles).array;
                pBVar47 != (BSExtraData *)0x0; pBVar47 = pBVar47->next) {
              uVar25 = (uint)pTVar33;
              pBVar8 = pBVar47->__vftable;
              if (pBVar8 == (BSExtraData_vtbl *)0x0) break;
              cVar21 = ExtraDataList::sub(pBVar8,1);
              if ((cVar21 == '\0') && (cVar21 = ExtraDataList::IsWorn(pBVar8,1), cVar21 == '\0')) {
                sVar22 = ExtraDataList::GetCount(pBVar8);
                pTVar33 = (TESObjectREFR *)(ulonglong)(uVar25 + (int)sVar22);
              }
              uVar25 = (uint)pTVar33;
            }
            cVar21 = (int)p3 <= (int)(uVar25 + iVar24);
            pBVar47 = (BSExtraData *)(local_1e8->sourceFiles).array;
            local_1e0 = pBVar47;
          }
          while (((local_220 = cVar21, pBVar47 != (BSExtraData *)0x0 &&
                  (pTVar33 = (TESObjectREFR *)pBVar47->__vftable, local_1d0 = pTVar33,
                  pTVar33 != (TESObjectREFR *)0x0)) && (0 < (int)p3))) {
            if (pTVar40 != (TESObjectREFR *)0x0) {
              InventoryEntryData::Free(pTVar40);
              thunk_FUN_14011bd80(pTVar40,0x18);
            }
            if (gMemoryManagerState != 2) {
              Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
            }
            local_210 = MemoryManager::Allocate((MemoryManager *)&gMemoryManager,0x18,0,false);
            pTVar40 = pTVar55;
            if (local_210 != (TESObjectREFR *)0x0) {
              ((BaseExtraList *)&local_210->__vftable)->__vftable = (BaseExtraList_vtbl *)0x0;
              (local_210->sourceFiles).array = (TESFileArray *)0x0;
              local_210->formFlags = 0;
              pTVar40 = local_210;
            }
            ((BaseExtraList *)&pTVar40->__vftable)->__vftable =
                 ((BaseExtraList *)&local_200->__vftable)->__vftable;
            sVar22 = ExtraDataList::GetCount(pTVar33);
            if ((sVar22 < 0) ||
               ((cVar21 != '\0' && (cVar21 = ExtraDataList::IsWorn(pTVar33,1), cVar21 != '\0')))) {
              pBVar47 = pBVar47->next;
              local_1e0 = pBVar47;
              InventoryEntryData::Free(pTVar40);
              thunk_FUN_14011bd80(pTVar40,0x18);
            }
            else {
              cVar21 = ExtraDataList::IsWorn(pTVar33,1);
              if ((cVar21 != '\0') &&
                 ((sVar22 = ExtraDataList::GetCount(pTVar33), sVar22 < 2 ||
                  (sVar22 = ExtraDataList::GetCount(pTVar33), (int)sVar22 == p3)))) {
                sVar22 = ExtraDataList::GetCount(pTVar33);
                uVar25 = FUN_140179850(pTVar33);
                if ((uVar25 < 2) ||
                   ((iVar24 = FUN_140179850(pTVar33), iVar24 == 2 &&
                    (((1 < sVar22 || (cVar21 = FUN_14015f2b0(pTVar33), cVar21 != '\0')) ||
                     (cVar21 = ExtraDataList::HasExtraData(pTVar33,0x8e), cVar21 != '\0')))))) {
                  p5 = (TESObjectREFR *)0x0;
                }
                IVar48 = (ITEM_REMOVE_REASON)sVar22;
                cVar21 = TESObjectREFR::sub(p1,((BaseExtraList *)&local_200->__vftable)->__vftable,
                                            IVar48,pTVar33);
                uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffda0 >> 0x20);
                if (cVar21 != '\0') {
                  if (pTVar28 != (TESObjectREFR *)0x0) {
                    sVar23 = ExtraDataList::GetCount(&pTVar28->extraList);
                    ExtraDataList::SetCount(&pTVar28->extraList,sVar22 + sVar23);
                    pEVar32 = (ExtraDataList *)
                              ((ulonglong)in_stack_fffffffffffffda0 & 0xffffffff00000000);
                    BVar26 = InventoryChanges::RemoveItem
                                       (this,(TESObjectREFR *)(local_c4 + 4),p1,p2,IVar48,pEVar32,p5
                                        ,p6,p7);
                    uVar42 = (undefined4)((ulonglong)pEVar32 >> 0x20);
                    BSPointerHandleManagerInterface::GetSmartPointer_1
                              (BVar26._handle._handle,&local_228);
                    p3 = p3 - IVar48;
                    pTVar28 = local_228;
                  }
                  if (0 < (int)p3) {
                    BVar26 = InventoryChanges::RemoveItem
                                       (this,(TESObjectREFR *)(local_d8 + 4),p1,p2,p3,
                                        (ExtraDataList *)CONCAT44(uVar42,(int)p4),p5,p6,p7);
                    BSPointerHandleManagerInterface::GetSmartPointer_1
                              (BVar26._handle._handle,&local_228);
                    pTVar28 = local_228;
                  }
                }
                InventoryEntryData::Free(pTVar40);
                thunk_FUN_14011bd80(pTVar40,0x18);
                if ((pTVar28 == (TESObjectREFR *)0x0) || ((pTVar28->_refCount & 0x3ff) != 0)) {
                  CreateRefHandle(p0,pTVar28);
                }
                else {
                  *(undefined4 *)&p0->__vftable = gNullHandle;
                }
                if (pTVar28 != (TESObjectREFR *)0x0) {
                  LOCK();
                  puVar34 = &pTVar28->_refCount;
                  uVar25 = *puVar34;
                  *puVar34 = *puVar34 - 1;
                  UNLOCK();
                  if ((uVar25 - 1 & 0x3ff) == 0) {
                    (*(code *)pTVar28->__vftable_BSHandleRefObject->DeleteThis)();
                  }
                }
                goto LAB_14022b2ad;
              }
              uVar52 = ExtraDataList::GetCount(pTVar33);
              IVar48 = (ITEM_REMOVE_REASON)(short)uVar52;
              local_1c8 = IVar48;
              if (((int)p3 < (int)IVar48) || (lVar29 = FUN_14015f2a0(pTVar33), lVar29 != 0)) {
                local_138 = FUN_14015f2a0(pTVar33);
                if ((local_138 == 0) || ((p3 != IVar48 && ((int)p3 <= (int)IVar48)))) {
                  local_1f0->formFlags = local_1f0->formFlags - p3;
                  p0_00 = uVar52 - (ushort)p3;
                }
                else {
                  local_1f0->formFlags = local_1f0->formFlags - IVar48;
                  p0_00 = -uVar52;
                }
                ExtraDataList::SetCount((ExtraDataList *)pTVar33,p0_00);
                if (gMemoryManagerState != 2) {
                  Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
                }
                local_68 = MemoryManager::Allocate((MemoryManager *)&gMemoryManager,0x20,0,false);
                pTVar36 = pTVar55;
                if (local_68 != (void *)0x0) {
                  pTVar36 = (TESObjectREFR *)ExtraDataList::ctor(local_68);
                }
                FUN_140154d60(pTVar36,pTVar33);
                FUN_140169710(pTVar36);
                if ((int)p3 <= (int)IVar48) {
                  uVar52 = (ushort)p3;
                }
                ExtraDataList::SetCount((ExtraDataList *)pTVar36,uVar52);
                IVar54 = p3;
                if ((int)IVar48 <= (int)p3) {
                  IVar54 = IVar48;
                }
                IVar48 = IVar54;
                p3 = p3 - IVar48;
                pTVar35 = pTVar33;
                local_1c8 = IVar48;
                if ((pTVar36->sourceFiles).array != (TESFileArray *)0x0) {
                  pTVar35 = (TESObjectREFR *)(pTVar40->sourceFiles).array;
                  if (pTVar35 == (TESObjectREFR *)0x0) {
                    if (gMemoryManagerState != 2) {
                      Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
                    }
                    local_210 = MemoryManager::Allocate
                                          ((MemoryManager *)&gMemoryManager,0x10,0,false);
                    pTVar35 = pTVar55;
                    if (local_210 != (TESObjectREFR *)0x0) {
                      ((BaseExtraList *)&local_210->__vftable)->__vftable =
                           (BaseExtraList_vtbl *)0x0;
                      (local_210->sourceFiles).array = (TESFileArray *)0x0;
                      pTVar35 = local_210;
                    }
                    (pTVar40->sourceFiles).array = (TESFileArray *)pTVar35;
                  }
                  bVar59 = (BSExtraData_vtbl *)((BaseExtraList *)&pTVar35->__vftable)->__vftable ==
                           (BSExtraData_vtbl *)0x0;
                  goto LAB_140229e9d;
                }
LAB_140229cfc:
                thunk_FUN_1401513d0(pTVar36);
                thunk_FUN_14011bd80(pTVar36,0x20);
                pTVar36 = pTVar55;
                pTVar33 = pTVar35;
              }
              else {
                local_1f0->formFlags = local_1f0->formFlags - IVar48;
                pTVar40->formFlags = pTVar40->formFlags + IVar48;
                p3 = p3 - IVar48;
                if (((TESObjectREFR *)pBVar47->__vftable == pTVar33) &&
                   (pBVar47 != (BSExtraData *)(local_1e8->sourceFiles).array)) {
                  local_1e0 = pBVar47->next;
                }
                pBVar8 = (BSExtraData_vtbl *)(local_1e8->sourceFiles).array;
                if (pTVar33 != (TESObjectREFR *)0x0) {
                  pBVar9 = (BSExtraData_vtbl *)pBVar8->GetType;
                  pBVar43 = pBVar8;
                  pBVar49 = pBVar8;
                  if (pBVar9 != (BSExtraData_vtbl *)0x0) goto LAB_140229ca0;
                  pBVar11 = pBVar8;
                  pBVar10 = (BSExtraData_vtbl *)pBVar8->_dtor_BSExtraData;
                  while (pBVar43 = pBVar11, pBVar10 != (BSExtraData_vtbl *)0x0) {
LAB_140229ca0:
                    if ((TESObjectREFR *)pBVar43->_dtor_BSExtraData == pTVar33) {
                      if (pBVar43 == pBVar8) {
                        if (pBVar9 == (BSExtraData_vtbl *)0x0) {
                          pBVar8->_dtor_BSExtraData = (BSExtraData__dtor_BSExtraData_t *)0x0;
                          break;
                        }
                        pBVar8->GetType = (BSExtraData_GetType_t *)pBVar9->GetType;
                        pBVar8->_dtor_BSExtraData =
                             (BSExtraData__dtor_BSExtraData_t *)pBVar9->_dtor_BSExtraData;
                        pBVar9->GetType = (BSExtraData_GetType_t *)0x0;
                        pBVar43 = pBVar9;
                      }
                      else {
                        pBVar49->GetType = (BSExtraData_GetType_t *)pBVar43->GetType;
                        pBVar43->GetType = (BSExtraData_GetType_t *)0x0;
                      }
                      FUN_1401c1870(pBVar43,1);
                      break;
                    }
                    pBVar11 = (BSExtraData_vtbl *)pBVar43->GetType;
                    pBVar49 = pBVar43;
                    pBVar10 = pBVar11;
                  }
                }
                local_1d0 = (TESObjectREFR *)0x0;
                pTVar36 = pTVar33;
                pTVar35 = pTVar55;
                if ((BSExtraData *)(pTVar33->sourceFiles).array == (BSExtraData *)0x0)
                goto LAB_140229cfc;
                pTVar35 = (TESObjectREFR *)(pTVar40->sourceFiles).array;
                pTVar33 = pTVar55;
                if (pTVar35 == (TESObjectREFR *)0x0) {
                  pTVar35 = (TESObjectREFR *)NiMemoryAllocate(0x10);
                  local_210 = pTVar35;
                  if (pTVar35 != (TESObjectREFR *)0x0) {
                    ((BaseExtraList *)&pTVar35->__vftable)->__vftable = (BaseExtraList_vtbl *)0x0;
                    (pTVar35->sourceFiles).array = (TESFileArray *)0x0;
                    (pTVar40->sourceFiles).array = (TESFileArray *)pTVar35;
                    bVar59 = (BSExtraData_vtbl *)((BaseExtraList *)&pTVar35->__vftable)->__vftable
                             == (BSExtraData_vtbl *)0x0;
                    goto LAB_140229e9d;
                  }
                  (pTVar40->sourceFiles).array = (TESFileArray *)0x0;
                  pTVar35 = pTVar55;
                }
                bVar59 = (BSExtraData_vtbl *)((BaseExtraList *)&pTVar35->__vftable)->__vftable ==
                         (BSExtraData_vtbl *)0x0;
LAB_140229e9d:
                if (!bVar59) {
                  if (gMemoryManagerState != 2) {
                    Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
                  }
                  local_210 = MemoryManager::Allocate((MemoryManager *)&gMemoryManager,0x10,0,false)
                  ;
                  pTVar46 = pTVar55;
                  if (local_210 != (TESObjectREFR *)0x0) {
                    ((BaseExtraList *)&local_210->__vftable)->__vftable =
                         (BaseExtraList_vtbl *)((BaseExtraList *)&pTVar35->__vftable)->__vftable;
                    (local_210->sourceFiles).array = (TESFileArray *)0x0;
                    pTVar46 = local_210;
                  }
                  (pTVar46->sourceFiles).array = (TESFileArray *)(pTVar35->sourceFiles).array;
                  (pTVar35->sourceFiles).array = (TESFileArray *)pTVar46;
                }
                ((BaseExtraList *)&pTVar35->__vftable)->__vftable = (BaseExtraList_vtbl *)pTVar36;
              }
              if ((int)p4 == 3) {
                uVar42 = gNullHandle;
                if (pTVar36 != (TESObjectREFR *)0x0) {
                  puVar31 = (undefined4 *)ExtraDataList::GetReferenceHandle(pTVar36,local_d8);
                  uVar42 = *puVar31;
                }
                local_150 = (TESObjectREFR *)0x0;
                local_170 = uVar42;
                BSPointerHandleManagerInterface::GetSmartPointer_1(&local_170,&local_150);
                if ((pTVar36 == (TESObjectREFR *)0x0) || (local_150 == (TESObjectREFR *)0x0)) {
                  uVar62 = 0;
                  uVar63 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffd98 >> 0x20),IVar48);
                  uVar38 = FUN_14022b500(this,local_cc,p1,
                                         ((BaseExtraList *)&local_200->__vftable)->__vftable,uVar63,
                                         0,p7,in_stack_00000050);
                  BSPointerHandleManagerInterface::GetSmartPointer_1(uVar38,&local_228);
                  pTVar28 = local_228;
                  pTVar12 = p1[2].__vftable;
                  local_218 = local_228;
                  lVar29 = FUN_1402fa130(local_228);
                  if (((lVar29 == 0) &&
                      ((pTVar12 != (TESBoundObject_vtbl *)0x0 &&
                       (lVar29 = TESObjectCELL::GetOwner(pTVar12), lVar29 != 0)))) &&
                     (cVar21 = TESObjectCELL::sub(pTVar12,p1), cVar21 == '\0')) {
LAB_14022a26d:
                    TESObjectREFR::SetOwner(pTVar28,*(TESForm **)&p1[1].formFlags);
                  }
                  else if (((*(char *)(*(longlong *)&p1[1].formFlags + 0x1a) == '+') &&
                           (iVar24 = FUN_1403a8df0(), iVar24 == 1)) &&
                          (lVar29 = RTDynamicCast((pTVar28->data).objectReference,0,
                                                  &RTTI_TESBoundObject,&RTTI_TESBipedModelForm,
                                                  uVar63 & 0xffffffff00000000), lVar29 != 0)) {
                    lVar39 = TESBipedModelForm::sub(lVar29,1);
                    lVar29 = TESBipedModelForm::sub(lVar29,0);
                    if (lVar39 != lVar29) goto LAB_14022a26d;
                  }
                  if ((pTVar36 != (TESObjectREFR *)0x0) &&
                     (iVar24 = FUN_140179850(pTVar36), iVar24 != 0)) {
                    fVar60 = (float)FUN_14015f480(pTVar36);
                    TESObjectREFR::SetScale(pTVar28,fVar60);
                    FUN_140154d60(&pTVar28->extraList,pTVar36,1);
                    FUN_140169390(&pTVar28->extraList);
                  }
                  if (pTVar28 != (TESObjectREFR *)0x0) {
                    LOCK();
                    pTVar28->_refCount = pTVar28->_refCount + 1;
                    UNLOCK();
                    local_218 = local_228;
                    pTVar28 = local_228;
                  }
                  in_stack_fffffffffffffd98 = (TESObjectREFR *)&pTVar28->extraList;
                  in_stack_fffffffffffffda0 = (TESObjectREFR *)(uVar62 & 0xffffffffffffff00);
                  local_190 = pTVar28;
                  FUN_14022b7e0(this,&local_190,pTVar50,IVar48,in_stack_fffffffffffffd98,
                                in_stack_fffffffffffffda0);
                  InventoryEntryData::Free(pTVar40);
                  thunk_FUN_14011bd80(pTVar40,0x18);
                  if (pTVar36 != (TESObjectREFR *)0x0) {
                    thunk_FUN_1401513d0(pTVar36);
                    uVar38 = 0x20;
                    goto LAB_14022a322;
                  }
                }
                else {
                  uVar38 = ExtraDataList::GetReferenceHandle(pTVar36,local_b4);
                  BSPointerHandleManagerInterface::GetSmartPointer_1(uVar38,&local_228);
                  pTVar28 = local_228;
                  local_218 = local_228;
                  if (local_228 == (TESObjectREFR *)0x0) {
                    InventoryEntryData::Free(pTVar40);
                    uVar38 = 0x18;
                    pTVar36 = pTVar40;
LAB_14022a322:
                    thunk_FUN_14011bd80(pTVar36,uVar38);
                  }
                  else {
                    LOCK();
                    local_228->_refCount = local_228->_refCount + 1;
                    UNLOCK();
                    local_188 = local_228;
                    pEVar32 = &local_228->extraList;
                    pEVar61 = pEVar32;
                    FUN_14022b7e0(this,&local_188,pTVar50,IVar48,pEVar32,
                                  (ulonglong)in_stack_fffffffffffffda0 & 0xffffffffffffff00);
                    uVar42 = (undefined4)((ulonglong)pEVar61 >> 0x20);
                    (*pTVar28->__vftable->SetDelete)(pTVar28,false);
                    FUN_1401693d0(pTVar36);
                    fVar60 = (float)FUN_14015f480(pTVar36);
                    TESObjectREFR::SetScale(pTVar28,fVar60);
                    FUN_140154d60(pEVar32,pTVar36,pTVar33 == (TESObjectREFR *)0x0);
                    FUN_140169390(pEVar32);
                    FUN_1401693d0(pEVar32);
                    FUN_14016c950(pEVar32,0,0);
                    lVar29 = FUN_14016b340(pEVar32);
                    if (lVar29 == 0) {
                      FUN_14016b2b0(pEVar32,pTVar28);
                      (*pTVar28->__vftable->AddChange)(pTVar28,0x400);
                    }
                    in_stack_fffffffffffffd98 = (TESObjectREFR *)CONCAT44(uVar42,IVar48);
                    uVar38 = FUN_14022b500(this,local_c4,p1,
                                           ((BaseExtraList *)&local_200->__vftable)->__vftable,
                                           in_stack_fffffffffffffd98,pTVar28,p7,in_stack_00000050);
                    BSPointerHandleManagerInterface::GetSmartPointer_1(uVar38,&local_228);
                    InventoryEntryData::Free(pTVar40);
                    thunk_FUN_14011bd80(pTVar40,0x18);
                    thunk_FUN_1401513d0(pTVar36);
                    in_stack_fffffffffffffda0 = pTVar28;
                    thunk_FUN_14011bd80(pTVar36,0x20);
                    pTVar28 = local_228;
                    pTVar12 = p1[2].__vftable;
                    local_218 = local_228;
                    lVar29 = FUN_1402fa130(local_228);
                    if (((lVar29 == 0) && (pTVar12 != (TESBoundObject_vtbl *)0x0)) &&
                       ((lVar29 = TESObjectCELL::GetOwner(pTVar12), lVar29 != 0 &&
                        (cVar21 = TESObjectCELL::sub(pTVar12,p1), cVar21 == '\0')))) {
LAB_14022a158:
                      TESObjectREFR::SetOwner(pTVar28,*(TESForm **)&p1[1].formFlags);
                    }
                    else if ((*(char *)(*(longlong *)&p1[1].formFlags + 0x1a) == '+') &&
                            (iVar24 = FUN_1403a8df0(), iVar24 == 1)) {
                      in_stack_fffffffffffffd98 =
                           (TESObjectREFR *)
                           ((ulonglong)in_stack_fffffffffffffd98 & 0xffffffff00000000);
                      lVar29 = RTDynamicCast((pTVar28->data).objectReference,0,&RTTI_TESBoundObject,
                                             &RTTI_TESBipedModelForm,in_stack_fffffffffffffd98);
                      if (lVar29 != 0) {
                        lVar39 = TESBipedModelForm::sub(lVar29,1);
                        lVar29 = TESBipedModelForm::sub(lVar29,0);
                        if (lVar39 != lVar29) goto LAB_14022a158;
                      }
                    }
                  }
                }
                if (local_150 != (TESObjectREFR *)0x0) {
                  LOCK();
                  puVar34 = &local_150->_refCount;
                  uVar25 = *puVar34;
                  *puVar34 = *puVar34 - 1;
                  UNLOCK();
                  if ((uVar25 - 1 & 0x3ff) == 0) {
                    (*(code *)local_150->__vftable_BSHandleRefObject->DeleteThis)();
                  }
                  local_218 = local_228;
                  pTVar28 = local_228;
                }
              }
              else {
                if (p6 == (NiPoint3 *)0x0) {
                  pBVar47 = (BSExtraData *)(pTVar40->sourceFiles).array;
                  in_stack_fffffffffffffd98 = pTVar55;
                  if (pBVar47 != (BSExtraData *)0x0) {
                    in_stack_fffffffffffffd98 = (TESObjectREFR *)pBVar47->__vftable;
                  }
                  if (pTVar28 != (TESObjectREFR *)0x0) {
                    LOCK();
                    pTVar28->_refCount = pTVar28->_refCount + 1;
                    UNLOCK();
                    local_218 = local_228;
                    pTVar28 = local_228;
                  }
                  in_stack_fffffffffffffda0 =
                       (TESObjectREFR *)
                       CONCAT71((int7)((ulonglong)in_stack_fffffffffffffda0 >> 8),1);
                  local_198 = pTVar28;
                  FUN_14022b7e0(this,&local_198,((BaseExtraList *)&pTVar40->__vftable)->__vftable,
                                IVar48,in_stack_fffffffffffffd98,in_stack_fffffffffffffda0);
                  pBVar47 = (BSExtraData *)(pTVar40->sourceFiles).array;
                  if (pBVar47 != (BSExtraData *)0x0) {
                    pBVar8 = pBVar47->__vftable;
                    uVar42 = gNullHandle;
                    if (pBVar8 != (BSExtraData_vtbl *)0x0) {
                      puVar31 = (undefined4 *)ExtraDataList::GetReferenceHandle(pBVar8,local_bc);
                      uVar42 = *puVar31;
                    }
                    local_108 = (TESObjectREFR_SetAltered_t *)0x0;
                    local_16c = uVar42;
                    BSPointerHandleManagerInterface::GetSmartPointer_1(&local_16c,&local_108);
                    pTVar19 = local_108;
                    if (local_108 != (TESObjectREFR_SetAltered_t *)0x0) {
                      FUN_1401693d0(local_108 + 0x70);
                      LOCK();
                      pcVar2 = pTVar19 + 0x28;
                      iVar24 = *(int *)pcVar2;
                      *(int *)pcVar2 = *(int *)pcVar2 + -1;
                      UNLOCK();
                      if ((iVar24 - 1U & 0x3ff) == 0) {
                        (**(code **)(*(longlong *)(pTVar19 + 0x20) + 8))();
                      }
                      local_218 = local_228;
                      pTVar28 = local_228;
                    }
                  }
                  FUN_140222910(pTVar40);
                }
                else {
                  pBVar47 = (BSExtraData *)(pTVar40->sourceFiles).array;
                  if (pBVar47 == (BSExtraData *)0x0) {
                    local_60 = NiMemoryAllocate(0x20);
                    pTVar33 = pTVar55;
                    if (local_60 != 0) {
                      pTVar33 = (TESObjectREFR *)ExtraDataList::ctor(local_60);
                    }
                    local_210 = (TESObjectREFR *)NiMemoryAllocate(0x10);
                    pTVar36 = pTVar55;
                    if (local_210 != (TESObjectREFR *)0x0) {
                      ((BaseExtraList *)&local_210->__vftable)->__vftable =
                           (BaseExtraList_vtbl *)0x0;
                      (local_210->sourceFiles).array = (TESFileArray *)0x0;
                      pTVar36 = local_210;
                    }
                    (pTVar40->sourceFiles).array = (TESFileArray *)pTVar36;
                    if (pTVar33 != (TESObjectREFR *)0x0) {
                      if ((BSExtraData_vtbl *)((BaseExtraList *)&pTVar36->__vftable)->__vftable !=
                          (BSExtraData_vtbl *)0x0) {
                        if (gMemoryManagerState != 2) {
                          Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
                        }
                        local_210 = MemoryManager::Allocate
                                              ((MemoryManager *)&gMemoryManager,0x10,0,false);
                        pTVar35 = pTVar55;
                        if (local_210 != (TESObjectREFR *)0x0) {
                          ((BaseExtraList *)&local_210->__vftable)->__vftable =
                               (BaseExtraList_vtbl *)
                               ((BaseExtraList *)&pTVar36->__vftable)->__vftable;
                          (local_210->sourceFiles).array = (TESFileArray *)0x0;
                          pTVar35 = local_210;
                        }
                        (pTVar35->sourceFiles).array = (TESFileArray *)(pTVar36->sourceFiles).array;
                        (pTVar36->sourceFiles).array = (TESFileArray *)pTVar35;
                      }
                      ((BaseExtraList *)&pTVar36->__vftable)->__vftable =
                           (BaseExtraList_vtbl *)pTVar33;
                    }
                  }
                  else {
                    pTVar33 = (TESObjectREFR *)pBVar47->__vftable;
                  }
                  pTVar36 = pTVar55;
                  if (p1->formType == ActorCharacter) {
                    pTVar36 = (TESObjectREFR *)p1;
                  }
                  if (pTVar36 == (TESObjectREFR *)0x0) {
                    pTVar41 = TESObjectREFR::GetOwner((TESObjectREFR *)p1);
                  }
                  else {
                    pTVar41 = (TESForm *)ExtraDataList::GetLeveledNPC(&p1[2].formFlags);
                    if (pTVar41 == (TESForm *)0x0) {
                      pTVar41 = *(TESForm **)&p1[1].formFlags;
                    }
                  }
                  if ((int)p4 == 1) {
                    cVar21 = FUN_1401db640(((BaseExtraList *)&pTVar40->__vftable)->__vftable);
                    if (((cVar21 == '\0') && (pTVar41 != (TESForm *)0x0)) &&
                       (lVar29 = ExtraDataList::GetOwner(pTVar33), lVar29 == 0)) {
                      ExtraDataList::SetOwnerForm(pTVar33,pTVar41);
                      ExtraDataList::SetCount((ExtraDataList *)pTVar33,(ushort)IVar48);
                    }
                  }
                  else if ((int)p4 == 5) {
                    lVar29 = ExtraDataList::GetOwner(pTVar33);
                    if ((lVar29 == 0) && (p1 == gPlayerCharacter3)) {
                      uVar38 = FUN_14068b1b0(DAT_1431874f8);
                      ExtraDataList::SetOwnerForm(pTVar33,uVar38);
                      ExtraDataList::SetCount((ExtraDataList *)pTVar33,(ushort)IVar48);
                    }
                  }
                  else if ((int)p4 == 2) {
                    FUN_140169270(pTVar33);
                    local_1a8[0] = 0;
                    local_1f4[0] = 0;
                    ExtraDataList::GetUniqueIDs(pTVar33,local_1f4,local_1a8);
                    if (local_1f4[0] != 0) {
                      uVar38 = BSPointerHandleManagerInterface::GetHandleSafe
                                         (DAT_1431874f8,local_d0);
                      local_1a0 = (TESObjectREFR *)0x0;
                      BSPointerHandleManagerInterface::GetSmartPointer_1(uVar38,&local_1a0);
                      uVar42 = local_1a8[0];
                      sVar22 = local_1f4[0];
                      pSVar37 = ScriptEventSourceHolder::GetSingleton();
                      pTVar36 = local_1a0;
                      if (local_1a0 != (TESObjectREFR *)0x0) {
                        LOCK();
                        local_1a0->_refCount = local_1a0->_refCount + 1;
                        UNLOCK();
                        local_218 = local_228;
                        pTVar28 = local_228;
                      }
                      local_100 = local_1a0;
                      local_f8 = uVar42;
                      local_f4 = sVar22;
                      FUN_14023be50(&pSVar37->sinks_38,&local_100);
                      if (local_100 != (TESObjectREFR *)0x0) {
                        LOCK();
                        puVar34 = &local_100->_refCount;
                        uVar25 = *puVar34;
                        *puVar34 = *puVar34 - 1;
                        UNLOCK();
                        if ((uVar25 - 1 & 0x3ff) == 0) {
                          (*(code *)local_100->__vftable_BSHandleRefObject->DeleteThis)();
                        }
                        local_218 = local_228;
                        pTVar36 = local_1a0;
                        pTVar28 = local_228;
                      }
                      IVar48 = local_1c8;
                      if (pTVar36 != (TESObjectREFR *)0x0) {
                        LOCK();
                        puVar34 = &pTVar36->_refCount;
                        uVar25 = *puVar34;
                        *puVar34 = *puVar34 - 1;
                        UNLOCK();
                        if ((uVar25 - 1 & 0x3ff) == 0) {
                          (*(code *)pTVar36->__vftable_BSHandleRefObject->DeleteThis)();
                        }
                        local_218 = local_228;
                        pTVar28 = local_228;
                        IVar48 = local_1c8;
                      }
                    }
                  }
                  in_stack_fffffffffffffd98 = this->owner;
                  (**(code **)(*(longlong *)p6 + 0x2d0))
                            (p6,((BaseExtraList *)&pTVar40->__vftable)->__vftable,pTVar33,IVar48,
                             in_stack_fffffffffffffd98);
                }
                InventoryEntryData::Free(pTVar40);
                thunk_FUN_14011bd80(pTVar40,0x18);
              }
              if (local_1d0 != (TESObjectREFR *)0x0) {
                local_1e0 = local_1e0->next;
              }
              pBVar47 = local_1e0;
              if (p3 != kRemove) {
                local_208 = '\x01';
              }
            }
            local_210 = (TESObjectREFR *)0x0;
            cVar21 = local_220;
            pTVar40 = pTVar55;
          }
        }
      }
      else {
        pIVar1 = &p5->inGameFormFlags;
        local_a8 = pIVar1;
        BSReadWriteLock::LockForRead((BSReadWriteLock *)pIVar1);
        iVar24 = FUN_140151e20(p5);
        if (pIVar1 != (InGameFormFlag *)0x0) {
          BSReadWriteLock::UnlockForRead(pIVar1);
        }
        pTVar40 = local_1f0;
        if (((iVar24 == 0) || (local_1e0 == (BSExtraData *)0x0)) ||
           (pTVar36 = p5, local_1e0->__vftable == (BSExtraData_vtbl *)0x0)) goto LAB_1402292c6;
LAB_140228670:
        do {
          IVar54 = p3;
          pTVar40 = (TESObjectREFR *)local_1e0->__vftable;
          if ((pTVar40 == (TESObjectREFR *)0x0) || (cVar21 == '\0')) break;
          if (pTVar36 == pTVar40) {
            p5 = (TESObjectREFR *)0x0;
            local_220 = '\0';
            sVar22 = ExtraDataList::GetCount(pTVar40);
            IVar53 = (ITEM_REMOVE_REASON)sVar22;
            local_1c8 = IVar53;
            cVar21 = ExtraDataList::IsWorn(pTVar40,1);
            if ((cVar21 != '\0') &&
               (sVar23 = ExtraDataList::GetCount(pTVar40), (int)sVar23 <= (int)IVar48)) {
              bVar59 = false;
              uVar25 = FUN_140179850(pTVar40);
              if ((uVar25 < 2) ||
                 ((uVar25 == 2 &&
                  (((sVar22 = ExtraDataList::GetCount(pTVar40), 1 < sVar22 ||
                    (cVar21 = FUN_14015f2b0(pTVar40), cVar21 != '\0')) ||
                   (cVar21 = ExtraDataList::HasExtraData(pTVar40,0x8e), cVar21 != '\0')))))) {
                bVar59 = true;
              }
              pTVar33 = local_200;
              pBVar47 = (BSExtraData *)(local_200->sourceFiles).array;
              pTVar36 = pTVar55;
              goto LAB_14022a8a2;
            }
            if (((int)IVar48 < (int)IVar53) ||
               (lVar29 = FUN_14015f2a0(pTVar40), pTVar36 = local_1e8, lVar29 != 0)) {
              local_138 = FUN_14015f2a0(pTVar40);
              cVar21 = FUN_14015f2b0(pTVar40);
              if (cVar21 == '\0') {
                local_1f0->formFlags = local_1f0->formFlags - IVar48;
LAB_14022881f:
                uVar52 = sVar22 - (ushort)IVar48;
              }
              else {
                if (IVar48 != IVar53) {
                  local_1f0->formFlags = local_1f0->formFlags - IVar48;
                  goto LAB_14022881f;
                }
                local_1f0->formFlags = local_1f0->formFlags - IVar53;
                uVar52 = -sVar22;
              }
              ExtraDataList::SetCount((ExtraDataList *)pTVar40,uVar52);
              if (gMemoryManagerState != 2) {
                Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
              }
              local_a0 = MemoryManager::Allocate((MemoryManager *)&gMemoryManager,0x20,0,false);
              pTVar33 = pTVar55;
              if (local_a0 != (void *)0x0) {
                pTVar33 = (TESObjectREFR *)ExtraDataList::ctor(local_a0);
              }
              FUN_140154d60(pTVar33,pTVar40);
              FUN_140169710(pTVar33);
              ExtraDataList::SetCount((ExtraDataList *)pTVar33,(ushort)IVar48);
              pIVar1 = &pTVar33->inGameFormFlags;
              local_98 = pIVar1;
              BSReadWriteLock::LockForRead((BSReadWriteLock *)pIVar1);
              iVar24 = FUN_140151e20(pTVar33);
              if (pIVar1 != (InGameFormFlag *)0x0) {
                BSReadWriteLock::UnlockForRead(pIVar1);
              }
              if ((iVar24 == 1) && (sVar22 = ExtraDataList::GetCount(pTVar33), 1 < sVar22)) {
LAB_14022890a:
                pTVar36 = pTVar55;
                if (pTVar33 != (TESObjectREFR *)0x0) {
                  thunk_FUN_1401513d0(pTVar33);
                  thunk_FUN_14011bd80(pTVar33,0x20);
                }
              }
              else {
                local_58 = pIVar1;
                BSReadWriteLock::LockForRead((BSReadWriteLock *)pIVar1);
                iVar24 = FUN_140151e20(pTVar33);
                if (pIVar1 != (InGameFormFlag *)0x0) {
                  BSReadWriteLock::UnlockForRead(pIVar1);
                }
                pTVar36 = pTVar33;
                if (iVar24 == 0) goto LAB_14022890a;
              }
              p3 = kRemove;
              pTVar35 = pTVar40;
            }
            else {
              local_1f0->formFlags = local_1f0->formFlags - IVar53;
              pTVar33->formFlags = pTVar33->formFlags + IVar53;
              p3 = IVar48 - IVar53;
              pBVar8 = (BSExtraData_vtbl *)(local_1e8->sourceFiles).array;
              if (pTVar40 != (TESObjectREFR *)0x0) {
                pBVar9 = (BSExtraData_vtbl *)pBVar8->GetType;
                pBVar43 = pBVar8;
                pBVar49 = pBVar8;
                if (pBVar9 != (BSExtraData_vtbl *)0x0) goto LAB_140228730;
                pBVar11 = pBVar8;
                pBVar10 = (BSExtraData_vtbl *)pBVar8->_dtor_BSExtraData;
                while (pBVar43 = pBVar11, pBVar10 != (BSExtraData_vtbl *)0x0) {
LAB_140228730:
                  if ((TESObjectREFR *)pBVar43->_dtor_BSExtraData == pTVar40) {
                    if (pBVar43 == pBVar8) {
                      if (pBVar9 == (BSExtraData_vtbl *)0x0) {
                        pBVar8->_dtor_BSExtraData = (BSExtraData__dtor_BSExtraData_t *)0x0;
                        break;
                      }
                      pBVar8->GetType = (BSExtraData_GetType_t *)pBVar9->GetType;
                      pBVar8->_dtor_BSExtraData =
                           (BSExtraData__dtor_BSExtraData_t *)pBVar9->_dtor_BSExtraData;
                      pBVar9->GetType = (BSExtraData_GetType_t *)0x0;
                      pBVar43 = pBVar9;
                    }
                    else {
                      pBVar49->GetType = (BSExtraData_GetType_t *)pBVar43->GetType;
                      pBVar43->GetType = (BSExtraData_GetType_t *)0x0;
                    }
                    FUN_1401c1870(pBVar43,1);
                    break;
                  }
                  pBVar11 = (BSExtraData_vtbl *)pBVar43->GetType;
                  pBVar49 = pBVar43;
                  pBVar10 = pBVar11;
                }
                cVar21 = FUN_14015e3b0(pTVar40);
                if ((cVar21 != '\0') && (0 < (int)(local_1d8 + local_1f0->formFlags))) {
                  pBVar47 = (BSExtraData *)(pTVar36->sourceFiles).array;
                  pTVar33 = pTVar55;
                  if (pBVar47 != (BSExtraData *)0x0) {
                    pTVar33 = (TESObjectREFR *)pBVar47->__vftable;
                  }
                  InventoryChanges::SetFavorite
                            (this,(InventoryEntryData *)local_200,(ExtraDataList *)pTVar33);
                }
              }
              pTVar36 = pTVar40;
              pTVar35 = pTVar55;
              IVar54 = IVar53;
              if ((BSExtraData *)(pTVar40->sourceFiles).array == (BSExtraData *)0x0) {
                thunk_FUN_1401513d0(pTVar40);
                thunk_FUN_14011bd80(pTVar40,0x20);
                pTVar36 = pTVar55;
              }
            }
            pTVar40 = local_210;
            if (pTVar36 != (TESObjectREFR *)0x0) {
              cVar21 = ExtraDataList::IsWorn(pTVar36,1);
              if ((cVar21 == '\0') ||
                 (FUN_1401692a0(pTVar36,0),
                 (BSExtraData *)(pTVar36->sourceFiles).array != (BSExtraData *)0x0)) {
                this_00 = (BSReadWriteLock *)&pTVar36->inGameFormFlags;
                local_90 = this_00;
                BSReadWriteLock::LockForRead(this_00);
                iVar24 = FUN_140151e20(pTVar36);
                if (this_00 != (BSReadWriteLock *)0x0) {
                  BSReadWriteLock::UnlockForRead(this_00);
                }
                pTVar40 = local_210;
                if (iVar24 != 0) {
                  pTVar33 = (TESObjectREFR *)(local_210->sourceFiles).array;
                  if (pTVar33 == (TESObjectREFR *)0x0) {
                    if (gMemoryManagerState != 2) {
                      Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
                    }
                    local_1d0 = MemoryManager::Allocate
                                          ((MemoryManager *)&gMemoryManager,0x10,0,false);
                    pTVar33 = pTVar55;
                    if (local_1d0 != (TESObjectREFR *)0x0) {
                      ((BaseExtraList *)&local_1d0->__vftable)->__vftable =
                           (BaseExtraList_vtbl *)0x0;
                      (local_1d0->sourceFiles).array = (TESFileArray *)0x0;
                      pTVar33 = local_1d0;
                    }
                    (pTVar40->sourceFiles).array = (TESFileArray *)pTVar33;
                  }
                  if (((BaseExtraList *)&pTVar33->__vftable)->__vftable != (BaseExtraList_vtbl *)0x0
                     ) {
                    if (gMemoryManagerState != 2) {
                      Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
                    }
                    local_1d0 = MemoryManager::Allocate
                                          ((MemoryManager *)&gMemoryManager,0x10,0,false);
                    if (local_1d0 != (TESObjectREFR *)0x0) {
                      ((BaseExtraList *)&local_1d0->__vftable)->__vftable =
                           ((BaseExtraList *)&pTVar33->__vftable)->__vftable;
                      (local_1d0->sourceFiles).array = (TESFileArray *)0x0;
                      (local_1d0->sourceFiles).array = (TESFileArray *)(pTVar33->sourceFiles).array;
                      (pTVar33->sourceFiles).array = (TESFileArray *)local_1d0;
                      ((BaseExtraList *)&pTVar33->__vftable)->__vftable =
                           (BaseExtraList_vtbl *)pTVar36;
                      goto LAB_140228979;
                    }
                    _DAT_00000008 = (BSExtraData *)(pTVar33->sourceFiles).array;
                    (pTVar33->sourceFiles).array = (TESFileArray *)0x0;
                  }
                  ((BaseExtraList *)&pTVar33->__vftable)->__vftable = (BaseExtraList_vtbl *)pTVar36;
                }
              }
              else {
                thunk_FUN_1401513d0(pTVar36);
                thunk_FUN_14011bd80(pTVar36,0x20);
                pTVar36 = pTVar55;
                pTVar40 = local_210;
              }
            }
LAB_140228979:
            if ((int)p4 == 3) {
              uVar42 = gNullHandle;
              if (pTVar36 != (TESObjectREFR *)0x0) {
                puVar31 = (undefined4 *)ExtraDataList::GetReferenceHandle(pTVar36,local_f0);
                uVar42 = *puVar31;
              }
              local_130 = (TESObjectREFR *)0x0;
              local_17c = uVar42;
              BSPointerHandleManagerInterface::GetSmartPointer_1(&local_17c,&local_130);
              if ((pTVar36 == (TESObjectREFR *)0x0) || (local_130 == (TESObjectREFR *)0x0)) {
                uVar63 = 0;
                uVar38 = FUN_14022b500(this,local_e4,p1,
                                       ((BaseExtraList *)&local_200->__vftable)->__vftable,IVar54,0,
                                       p7,in_stack_00000050);
                BSPointerHandleManagerInterface::GetSmartPointer_1(uVar38,&local_228);
                pTVar33 = local_228;
                (*((BaseExtraList *)&local_228->__vftable)->__vftable[10]._dtor_BaseExtraList)
                          ((BaseExtraList *)local_228);
                pTVar28 = local_228;
                LOCK();
                pTVar33->_refCount = pTVar33->_refCount + 1;
                UNLOCK();
                local_218 = local_228;
                local_118 = local_228;
                in_stack_fffffffffffffda0 = (TESObjectREFR *)(uVar63 & 0xffffffffffffff00);
                in_stack_fffffffffffffd98 = pTVar36;
                FUN_14022b7e0(this,&local_118,(local_228->data).objectReference,IVar54,pTVar36,
                              in_stack_fffffffffffffda0);
                if ((pTVar36 != (TESObjectREFR *)0x0) &&
                   (iVar24 = FUN_140179850(pTVar36), iVar24 != 0)) {
                  fVar60 = (float)FUN_14015f480(pTVar36);
                  TESObjectREFR::SetScale(pTVar28,fVar60);
                  FUN_140154d60(&pTVar28->extraList,pTVar36);
                  FUN_140169390(&pTVar28->extraList);
                }
                pTVar12 = p1[2].__vftable;
                lVar29 = FUN_1402fa130(pTVar28);
                if (((lVar29 == 0) && (pTVar12 != (TESBoundObject_vtbl *)0x0)) &&
                   ((lVar29 = TESObjectCELL::GetOwner(pTVar12), lVar29 != 0 &&
                    ((p1 == gPlayerCharacter3 ||
                     (cVar21 = TESObjectCELL::sub(pTVar12,p1), cVar21 == '\0')))))) {
LAB_140228e75:
                  TESObjectREFR::SetOwner(pTVar28,*(TESForm **)&p1[1].formFlags);
                }
                else if ((*(char *)(*(longlong *)&p1[1].formFlags + 0x1a) == '+') &&
                        (iVar24 = FUN_1403a8df0(), iVar24 == 1)) {
                  in_stack_fffffffffffffd98 =
                       (TESObjectREFR *)((ulonglong)in_stack_fffffffffffffd98 & 0xffffffff00000000);
                  lVar29 = RTDynamicCast((pTVar28->data).objectReference,0,&RTTI_TESBoundObject,
                                         &RTTI_TESBipedModelForm,in_stack_fffffffffffffd98);
                  if (lVar29 != 0) {
                    lVar39 = TESBipedModelForm::sub(lVar29,1);
                    lVar29 = TESBipedModelForm::sub(lVar29,0);
                    if (lVar39 != lVar29) goto LAB_140228e75;
                  }
                }
                if (pTVar40 != (TESObjectREFR *)0x0) {
                  InventoryEntryData::Free(pTVar40);
                  thunk_FUN_14011bd80(pTVar40,0x18);
                }
                local_210 = (TESObjectREFR *)0x0;
                pTVar33 = (TESObjectREFR *)0x0;
                if (pTVar36 != (TESObjectREFR *)0x0) {
                  thunk_FUN_1401513d0(pTVar36);
                  thunk_FUN_14011bd80(pTVar36,0x20);
                }
              }
              else {
                uVar38 = ExtraDataList::GetReferenceHandle(pTVar36,local_ec);
                BSPointerHandleManagerInterface::GetSmartPointer_1(uVar38,&local_228);
                pTVar28 = local_228;
                local_218 = local_228;
                pTVar33 = local_210;
                if (local_228 != (TESObjectREFR *)0x0) {
                  if (pTVar35 == (TESObjectREFR *)0x0) {
                    LOCK();
                    local_228->_refCount = local_228->_refCount + 1;
                    UNLOCK();
                    local_120 = local_228;
                    ppTVar45 = &local_120;
                    pTVar33 = pTVar36;
                  }
                  else {
                    LOCK();
                    local_228->_refCount = local_228->_refCount + 1;
                    UNLOCK();
                    local_128 = local_228;
                    ppTVar45 = &local_128;
                    pTVar33 = pTVar35;
                  }
                  FUN_14022b7e0(this,ppTVar45,(local_228->data).objectReference,IVar54,pTVar33,
                                (ulonglong)in_stack_fffffffffffffda0 & 0xffffffffffffff00);
                  uVar42 = (undefined4)((ulonglong)pTVar33 >> 0x20);
                  (*pTVar28->__vftable->SetDelete)(pTVar28,false);
                  FUN_1401693d0(pTVar36);
                  fVar60 = (float)FUN_14015f480(pTVar36);
                  TESObjectREFR::SetScale(pTVar28,fVar60);
                  FUN_140154d60(&pTVar28->extraList,pTVar36,pTVar35 == (TESObjectREFR *)0x0);
                  FUN_140169390(&pTVar28->extraList);
                  FUN_1401693d0(&pTVar28->extraList);
                  lVar29 = FUN_14016b340(&pTVar28->extraList);
                  if (lVar29 == 0) {
                    FUN_14016b2b0(&pTVar28->extraList,pTVar28);
                    (*pTVar28->__vftable->AddChange)(pTVar28,0x400);
                  }
                  in_stack_fffffffffffffd98 = (TESObjectREFR *)CONCAT44(uVar42,IVar54);
                  in_stack_fffffffffffffda0 = pTVar28;
                  FUN_14022b500(this,local_e8,p1,((BaseExtraList *)&local_200->__vftable)->__vftable
                                ,in_stack_fffffffffffffd98,pTVar28,p7,in_stack_00000050);
                  if (pTVar40 != (TESObjectREFR *)0x0) {
                    InventoryEntryData::Free(pTVar40);
                    thunk_FUN_14011bd80(pTVar40,0x18);
                  }
                  pTVar40 = (TESObjectREFR *)0x0;
                  local_210 = (TESObjectREFR *)0x0;
                  thunk_FUN_1401513d0(pTVar36);
                  thunk_FUN_14011bd80(pTVar36,0x20);
                  pTVar12 = p1[2].__vftable;
                  lVar29 = FUN_1402fa130(pTVar28);
                  if ((((lVar29 == 0) && (pTVar12 != (TESBoundObject_vtbl *)0x0)) &&
                      (lVar29 = TESObjectCELL::GetOwner(pTVar12), lVar29 != 0)) &&
                     (cVar21 = TESObjectCELL::sub(pTVar12,p1), cVar21 == '\0')) {
LAB_140228cf0:
                    TESObjectREFR::SetOwner(pTVar28,*(TESForm **)&p1[1].formFlags);
                    pTVar33 = pTVar40;
                  }
                  else {
                    pTVar33 = pTVar55;
                    if ((*(char *)(*(longlong *)&p1[1].formFlags + 0x1a) == '+') &&
                       (iVar24 = FUN_1403a8df0(), iVar24 == 1)) {
                      in_stack_fffffffffffffd98 =
                           (TESObjectREFR *)
                           ((ulonglong)in_stack_fffffffffffffd98 & 0xffffffff00000000);
                      lVar29 = RTDynamicCast((pTVar28->data).objectReference,0,&RTTI_TESBoundObject,
                                             &RTTI_TESBipedModelForm,in_stack_fffffffffffffd98);
                      pTVar33 = pTVar40;
                      if (lVar29 != 0) {
                        lVar39 = TESBipedModelForm::sub(lVar29,1);
                        lVar29 = TESBipedModelForm::sub(lVar29,0);
                        if (lVar39 != lVar29) goto LAB_140228cf0;
                      }
                    }
                  }
                }
              }
              cVar21 = local_220;
              if (local_130 != (TESObjectREFR *)0x0) {
                LOCK();
                puVar34 = &local_130->_refCount;
                uVar25 = *puVar34;
                *puVar34 = *puVar34 - 1;
                UNLOCK();
                if ((uVar25 - 1 & 0x3ff) == 0) {
                  (*(code *)local_130->__vftable_BSHandleRefObject->DeleteThis)();
                }
                local_218 = local_228;
                pTVar28 = local_228;
                cVar21 = local_220;
              }
            }
            else {
              if (p6 == (NiPoint3 *)0x0) {
                pBVar47 = (BSExtraData *)(pTVar40->sourceFiles).array;
                in_stack_fffffffffffffd98 = pTVar55;
                if (pBVar47 != (BSExtraData *)0x0) {
                  in_stack_fffffffffffffd98 = (TESObjectREFR *)pBVar47->__vftable;
                }
                if (pTVar28 != (TESObjectREFR *)0x0) {
                  LOCK();
                  pTVar28->_refCount = pTVar28->_refCount + 1;
                  UNLOCK();
                  local_218 = local_228;
                  pTVar28 = local_228;
                }
                in_stack_fffffffffffffda0 =
                     (TESObjectREFR *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffda0 >> 8),1);
                local_168 = pTVar28;
                FUN_14022b7e0(this,&local_168,((BaseExtraList *)&pTVar40->__vftable)->__vftable,
                              IVar54,in_stack_fffffffffffffd98,in_stack_fffffffffffffda0);
                pBVar47 = (BSExtraData *)(pTVar40->sourceFiles).array;
                if (pBVar47 != (BSExtraData *)0x0) {
                  pBVar8 = pBVar47->__vftable;
                  uVar42 = gNullHandle;
                  if (pBVar8 != (BSExtraData_vtbl *)0x0) {
                    puVar31 = (undefined4 *)ExtraDataList::GetReferenceHandle(pBVar8,local_e0);
                    uVar42 = *puVar31;
                  }
                  local_110.array = (TESFileArray *)0x0;
                  local_178 = uVar42;
                  BSPointerHandleManagerInterface::GetSmartPointer_1(&local_178,&local_110);
                  TVar18.array = local_110.array;
                  if (local_110.array != (TESFileArray *)0x0) {
                    FUN_1401693d0(local_110.array + 7);
                    LOCK();
                    puVar34 = &TVar18.array[2]._size;
                    uVar25 = *puVar34;
                    *puVar34 = *puVar34 - 1;
                    UNLOCK();
                    if ((uVar25 - 1 & 0x3ff) == 0) {
                      (*(code *)TVar18.array[2]._data[1])();
                    }
                    local_218 = local_228;
                    pTVar28 = local_228;
                  }
                }
                if ((int)p4 != 2) {
                  FUN_140222910(pTVar40);
                }
                InventoryEntryData::Free(pTVar40);
                thunk_FUN_14011bd80(pTVar40,0x18);
              }
              else {
                pBVar47 = (BSExtraData *)(pTVar40->sourceFiles).array;
                if (pBVar47 == (BSExtraData *)0x0) {
                  pTVar33 = pTVar55;
                  if (p1->formType == ActorCharacter) {
                    pTVar33 = (TESObjectREFR *)p1;
                  }
                  if (pTVar33 == (TESObjectREFR *)0x0) {
                    pTVar41 = TESObjectREFR::GetOwner((TESObjectREFR *)p1);
                  }
                  else {
                    pTVar41 = (TESForm *)ExtraDataList::GetLeveledNPC(&p1[2].formFlags);
                    if (pTVar41 == (TESForm *)0x0) {
                      pTVar41 = *(TESForm **)&p1[1].formFlags;
                    }
                  }
                  pTVar33 = pTVar55;
                  if (((int)p4 == 1) &&
                     (cVar21 = FUN_1401db640(((BaseExtraList *)&pTVar40->__vftable)->__vftable),
                     cVar21 == '\0')) {
                    local_80 = NiMemoryAllocate(0x20);
                    if (local_80 != 0) {
                      pTVar33 = (TESObjectREFR *)ExtraDataList::ctor(local_80);
                    }
                    ExtraDataList::SetOwnerForm(pTVar33,pTVar41);
                    ExtraDataList::SetCount((ExtraDataList *)pTVar33,(undefined2)p3);
                  }
                  in_stack_fffffffffffffd98 = this->owner;
                  (**(code **)(*(longlong *)p6 + 0x2d0))
                            (p6,((BaseExtraList *)&pTVar40->__vftable)->__vftable,pTVar33,IVar54,
                             in_stack_fffffffffffffd98);
                  InventoryEntryData::Free(pTVar40);
                  thunk_FUN_14011bd80(pTVar40,0x18);
                }
                else {
                  do {
                    pEVar32 = (ExtraDataList *)pBVar47->__vftable;
                    if (pEVar32 == (ExtraDataList *)0x0) break;
                    lVar29 = ExtraDataList::GetOwner(pEVar32);
                    if (lVar29 == 0) {
                      pTVar28 = pTVar55;
                      if (p1->formType == ActorCharacter) {
                        pTVar28 = (TESObjectREFR *)p1;
                      }
                      if (pTVar28 == (TESObjectREFR *)0x0) {
                        pTVar41 = TESObjectREFR::GetOwner((TESObjectREFR *)p1);
                      }
                      else {
                        pTVar41 = (TESForm *)ExtraDataList::GetLeveledNPC(&p1[2].formFlags);
                        if (pTVar41 == (TESForm *)0x0) {
                          pTVar41 = *(TESForm **)&p1[1].formFlags;
                        }
                      }
                      if ((int)p4 != 1) goto LAB_14022900f;
                      cVar21 = FUN_1401db640(((BaseExtraList *)&pTVar40->__vftable)->__vftable);
                      if (cVar21 == '\0') {
                        ExtraDataList::SetOwnerForm(pEVar32,pTVar41);
                      }
                    }
                    else {
LAB_14022900f:
                      if (((int)p4 == 5) &&
                         (((pEVar32 == (ExtraDataList *)0x0 ||
                           (lVar29 = ExtraDataList::GetOwner(pEVar32), lVar29 == 0)) &&
                          (p1 == gPlayerCharacter3)))) {
                        if (pEVar32 == (ExtraDataList *)0x0) {
                          if (gMemoryManagerState != 2) {
                            Memory::static_ctor(&gMemoryManager,&gMemoryManagerState);
                          }
                          local_88 = MemoryManager::Allocate
                                               ((MemoryManager *)&gMemoryManager,0x20,0,false);
                          if (local_88 == (void *)0x0) {
                            pEVar32 = (ExtraDataList *)0x0;
                          }
                          else {
                            pEVar32 = (ExtraDataList *)ExtraDataList::ctor(local_88);
                          }
                        }
                        uVar38 = FUN_14068b1b0(DAT_1431874f8);
                        ExtraDataList::SetOwnerForm(pEVar32,uVar38);
                        ExtraDataList::SetCount(pEVar32,(ushort)IVar54);
                      }
                    }
                    in_stack_fffffffffffffd98 = this->owner;
                    (**(code **)(*(longlong *)p6 + 0x2d0))
                              (p6,((BaseExtraList *)&pTVar40->__vftable)->__vftable,pEVar32,IVar54,
                               in_stack_fffffffffffffd98);
                    pBVar47 = pBVar47->next;
                  } while (pBVar47 != (BSExtraData *)0x0);
                  InventoryEntryData::Free(pTVar40);
                  thunk_FUN_14011bd80(pTVar40,0x18);
                  pTVar28 = local_218;
                }
              }
              local_210 = (TESObjectREFR *)0x0;
              pTVar33 = pTVar55;
              cVar21 = '\0';
            }
            pTVar36 = (TESObjectREFR *)0x0;
            IVar48 = p3;
          }
          else {
            local_1e0 = local_1e0->next;
          }
          if (0 < (int)IVar48) {
            if (pTVar28 != (TESObjectREFR *)0x0) {
              BSPointerHandleManagerInterface::GetHandle(p0,pTVar28);
              LOCK();
              puVar34 = &pTVar28->_refCount;
              uVar25 = *puVar34;
              *puVar34 = *puVar34 - 1;
              UNLOCK();
              if ((uVar25 - 1 & 0x3ff) == 0) {
                (*(code *)pTVar28->__vftable_BSHandleRefObject->DeleteThis)();
              }
              goto LAB_14022b2ad;
            }
            if (local_1e0 == (BSExtraData *)0x0) {
              p5 = (TESObjectREFR *)0x0;
              break;
            }
            goto LAB_140228670;
          }
        } while (local_1e0 != (BSExtraData *)0x0);
      }
      local_200 = (TESObjectREFR *)FUN_14022e8c0(this,pTVar50,1);
      uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
      pTVar33 = local_210;
    } while (local_200 != (TESObjectREFR *)0x0);
  }
  iVar24 = 0;
  if (local_1d8 != 0) {
    iVar24 = local_1d8;
    if (local_200 != (TESObjectREFR *)0x0) {
      iVar24 = local_200->formFlags + local_1d8;
    }
    if (iVar24 == 0) {
      FUN_1401c3a90((BSExtraData *)(local_200->sourceFiles).array,0,0);
      BSPointerHandleManagerInterface::GetHandle(p0,pTVar28);
      if (pTVar28 != (TESObjectREFR *)0x0) {
        LOCK();
        puVar34 = &pTVar28->_refCount;
        uVar25 = *puVar34;
        *puVar34 = *puVar34 - 1;
        UNLOCK();
        if ((uVar25 - 1 & 0x3ff) == 0) {
          (*(code *)pTVar28->__vftable_BSHandleRefObject->DeleteThis)();
        }
      }
      goto LAB_14022b2ad;
    }
    if ((int)p4 == 3) {
      uVar63 = 0;
      uVar38 = FUN_14022b500(this,local_b8,p1,pTVar50,CONCAT44(uVar42,p3),0,p7,in_stack_00000050);
      BSPointerHandleManagerInterface::GetSmartPointer_1(uVar38,&local_228);
      pTVar28 = local_228;
      if (local_228 != (TESObjectREFR *)0x0) {
        LOCK();
        local_228->_refCount = local_228->_refCount + 1;
        UNLOCK();
      }
      local_148 = local_228;
      pEVar32 = &local_228->extraList;
      FUN_14022b7e0(this,&local_148,pTVar50,p3,pEVar32,uVar63 & 0xffffffffffffff00);
      pTVar12 = p1[2].__vftable;
      lVar29 = FUN_1402fa130(pTVar28);
      if ((((lVar29 == 0) && (pTVar12 != (TESBoundObject_vtbl *)0x0)) &&
          (lVar29 = TESObjectCELL::GetOwner(pTVar12), lVar29 != 0)) &&
         (cVar21 = TESObjectCELL::sub(pTVar12,p1), cVar21 == '\0')) {
LAB_14022aea0:
        TESObjectREFR::SetOwner(pTVar28,*(TESForm **)&p1[1].formFlags);
      }
      else if (((*(char *)(*(longlong *)&p1[1].formFlags + 0x1a) == '+') &&
               (iVar27 = FUN_1403a8df0(), iVar27 == 1)) &&
              (lVar29 = RTDynamicCast((pTVar28->data).objectReference,0,&RTTI_TESBoundObject,
                                      &RTTI_TESBipedModelForm,
                                      (ulonglong)pEVar32 & 0xffffffff00000000), lVar29 != 0)) {
        lVar39 = TESBipedModelForm::sub(lVar29,1);
        lVar29 = TESBipedModelForm::sub(lVar29,0);
        if (lVar39 != lVar29) goto LAB_14022aea0;
      }
LAB_14022aeb3:
      if (pTVar33 != (TESObjectREFR *)0x0) {
        InventoryEntryData::Free(pTVar33);
        thunk_FUN_14011bd80(pTVar33,0x18);
      }
    }
    else {
      if (p6 != (NiPoint3 *)0x0) {
        pTVar40 = pTVar55;
        if (p1->formType == ActorCharacter) {
          pTVar40 = (TESObjectREFR *)p1;
        }
        if (pTVar40 == (TESObjectREFR *)0x0) {
          pTVar41 = TESObjectREFR::GetOwner((TESObjectREFR *)p1);
        }
        else {
          pTVar41 = (TESForm *)ExtraDataList::GetLeveledNPC(&p1[2].formFlags);
          if (pTVar41 == (TESForm *)0x0) {
            pTVar41 = *(TESForm **)&p1[1].formFlags;
          }
        }
        if (((int)p4 == 1) && (cVar21 = FUN_1401db640(pTVar50), cVar21 == '\0')) {
          if (p5 == (TESObjectREFR *)0x0) {
            lVar29 = NiMemoryAllocate(0x20);
            if (lVar29 == 0) {
              p5 = (TESObjectREFR *)0x0;
            }
            else {
              p5 = (TESObjectREFR *)ExtraDataList::ctor(lVar29);
            }
          }
          ExtraDataList::SetOwnerForm(p5,pTVar41);
          ExtraDataList::SetCount((ExtraDataList *)p5,(ushort)p3);
        }
        else if (p5 != (TESObjectREFR *)0x0) {
          FUN_140169270(p5);
        }
        if (0 < (int)p3) {
          if ((pTVar50->formType == Note) && ((TESBoundObject *)p6 == DAT_1431874f8)) {
            FUN_140744850(DAT_1431874f8,pTVar50,1);
          }
          else {
            (**(code **)(*(longlong *)p6 + 0x2d0))(p6,pTVar50,p5,p3,this->owner);
          }
        }
        goto LAB_14022aeb3;
      }
      if (pTVar33 != (TESObjectREFR *)0x0) {
        pBVar47 = (BSExtraData *)(pTVar33->sourceFiles).array;
        pTVar40 = pTVar55;
        if (pBVar47 != (BSExtraData *)0x0) {
          pTVar40 = (TESObjectREFR *)pBVar47->__vftable;
        }
        if (pTVar28 != (TESObjectREFR *)0x0) {
          LOCK();
          pTVar28->_refCount = pTVar28->_refCount + 1;
          UNLOCK();
          pTVar28 = local_228;
        }
        local_140 = pTVar28;
        FUN_14022b7e0(this,&local_140,pTVar50,p3,pTVar40,1);
        goto LAB_14022aeb3;
      }
    }
    if (local_200 == (TESObjectREFR *)0x0) {
      lVar29 = NiMemoryAllocate(0x18);
      pTVar40 = pTVar55;
      if (lVar29 != 0) {
        pTVar40 = (TESObjectREFR *)InventoryEntryData::Allocate(lVar29,pTVar50,-p3);
      }
      local_200 = pTVar40;
      FUN_14023b3a0(this->entryList,&local_200,0,0);
    }
    else {
      local_200->formFlags = local_200->formFlags - p3;
    }
  }
LAB_14022b0b5:
  pTVar40 = (TESObjectREFR *)FUN_14022e8c0(this,pTVar50,1,0);
  lVar29 = local_138;
  local_200 = pTVar40;
  if (pTVar40 != (TESObjectREFR *)0x0) {
    if (local_138 == 0) {
LAB_14022b0fd:
      if (((pTVar40->formFlags == 0) && (iVar24 == 0)) ||
         ((pTVar13 = (pTVar40->sourceFiles).array, pTVar13 != (TESFileArray *)0x0 &&
          (((*(Node **)&pTVar13->_size == (Node *)0x0 &&
            (((Node *)&pTVar13->_data)->item == (ExtraDataList *)0x0)) && (pTVar40->formFlags == 0))
          )))) {
        if ((int)p4 != 2) {
          FUN_140222910(pTVar40);
        }
        pIVar5 = (InventoryEntryData *)this->entryList;
        pIVar14 = (InventoryEntryData *)pIVar5->extraLists;
        pIVar44 = pIVar5;
        pIVar51 = pIVar5;
        if (pIVar14 != (InventoryEntryData *)0x0) goto LAB_14022b160;
        pIVar16 = pIVar5;
        pIVar15 = (InventoryEntryData *)pIVar5->object;
        while (pIVar44 = pIVar16, pIVar15 != (InventoryEntryData *)0x0) {
LAB_14022b160:
          if ((TESObjectREFR *)((Node *)&pIVar44->object)->item == pTVar40) {
            if (pIVar44 == pIVar5) {
              if (pIVar14 == (InventoryEntryData *)0x0) {
                pIVar5->object = (TESBoundObject *)0x0;
                break;
              }
              pIVar5->extraLists = (BSSimpleList<> *)pIVar14->extraLists;
              pIVar5->object = (TESBoundObject *)((Node *)&pIVar14->object)->item;
              pIVar14->extraLists = (BSSimpleList<> *)0x0;
              pIVar44 = pIVar14;
            }
            else {
              pIVar51->extraLists = (BSSimpleList<> *)pIVar44->extraLists;
              pIVar44->extraLists = (BSSimpleList<> *)0x0;
            }
            FUN_14023acb0(pIVar44,1);
            break;
          }
          pIVar16 = (InventoryEntryData *)pIVar44->extraLists;
          pIVar51 = pIVar44;
          pIVar15 = pIVar16;
        }
        InventoryEntryData::Free(pTVar40);
        thunk_FUN_14011bd80(pTVar40,0x18);
        goto LAB_14022b1f8;
      }
    }
    else {
      pTVar33 = pTVar55;
      if (p1->formType == ActorCharacter) {
        pTVar33 = (TESObjectREFR *)p1;
      }
      if (pTVar33 != (TESObjectREFR *)0x0) goto LAB_14022b0fd;
    }
    if ((((int)(pTVar40->formFlags + iVar24) < 0) &&
        (cVar21 = FUN_140223440(pTVar40), cVar21 == '\0')) &&
       ((pTVar13 = (pTVar40->sourceFiles).array, pTVar13 != (TESFileArray *)0x0 && (lVar29 == 0))))
    {
      FUN_1401c3a90(pTVar13,0,0);
    }
  }
LAB_14022b1f8:
  pTVar40 = local_1b0;
  if (((char)local_1b8 != '\0') && (lVar29 = Actor::GetEquippedWeapon(local_1b0,0), lVar29 != 0)) {
    pBVar17 = ((BaseExtraList *)&pTVar40->__vftable)->__vftable;
    Actor::GetEquippedWeapon(pTVar40,0);
    (*pBVar17[0xd1]._dtor_BaseExtraList)((BaseExtraList *)pTVar40);
  }
  this->armorWeight = this->totalWeight;
  this->totalWeight = -1.0;
  pTVar40 = this->owner;
  if (pTVar40 != (TESObjectREFR *)0x0) {
    if (pTVar40->formType == ActorCharacter) {
      pTVar55 = pTVar40;
    }
    if (pTVar55 != (TESObjectREFR *)0x0) {
      *(undefined4 *)&pTVar55[3].__vftable_BSHandleRefObject = 0xbf800000;
    }
  }
  if ((pTVar28 == (TESObjectREFR *)0x0) || ((pTVar28->_refCount & 0x3ff) != 0)) {
    CreateRefHandle(p0,pTVar28);
  }
  else {
    *(undefined4 *)&p0->__vftable = gNullHandle;
  }
  if (pTVar28 != (TESObjectREFR *)0x0) {
    LOCK();
    puVar34 = &pTVar28->_refCount;
    uVar25 = *puVar34;
    *puVar34 = *puVar34 - 1;
    UNLOCK();
    if ((uVar25 - 1 & 0x3ff) == 0) {
      (*(code *)pTVar28->__vftable_BSHandleRefObject->DeleteThis)();
    }
  }
  goto LAB_14022b2ad;
  while( true ) {
    cVar21 = ExtraDataList::IsWorn(pTVar35,0,1);
    if (cVar21 != '\0') {
      pTVar36 = pTVar35;
    }
    pBVar47 = pBVar47->next;
    if (pTVar36 != (TESObjectREFR *)0x0) break;
LAB_14022a8a2:
    if ((pBVar47 == (BSExtraData *)0x0) ||
       (pTVar35 = (TESObjectREFR *)pBVar47->__vftable, pTVar35 == (TESObjectREFR *)0x0)) break;
  }
  pBVar47 = (BSExtraData *)(pTVar33->sourceFiles).array;
  do {
    if ((pBVar47 == (BSExtraData *)0x0) ||
       (pTVar33 = (TESObjectREFR *)pBVar47->__vftable, pTVar33 == (TESObjectREFR *)0x0)) break;
    cVar21 = ExtraDataList::IsWorn(pTVar33,0,0);
    if (cVar21 != '\0') {
      pTVar55 = pTVar33;
    }
    pBVar47 = pBVar47->next;
  } while (pTVar55 == (TESObjectREFR *)0x0);
  this_01 = DAT_1430fc678;
  if (p1 == (TESBoundObject *)0x0) {
LAB_14022a973:
    pBVar17 = ((BaseExtraList *)&local_200->__vftable)->__vftable;
    sVar22 = ExtraDataList::GetCount(pTVar40);
    cVar21 = TESObjectREFR::sub(p1,pBVar17,(int)sVar22,pTVar40);
  }
  else {
    pAVar58 = (Actor *)0x0;
    if (p1->formType == ActorCharacter) {
      pAVar58 = (Actor *)p1;
    }
    if ((pAVar58 == (Actor *)0x0) || (pAVar58->currentProcess == (AIProcess *)0x0))
    goto LAB_14022a973;
    p1_00 = (TESBoundObject *)((BaseExtraList *)&local_200->__vftable)->__vftable;
    sVar22 = ExtraDataList::GetCount(pTVar40);
    in_stack_fffffffffffffda0 = (TESObjectREFR *)0x0;
    bVar20 = ActorEquipManager::UnequipObject
                       (this_01,pAVar58,p1_00,(ExtraDataList *)pTVar40,(int)sVar22,
                        (BGSEquipSlot *)0x0,false,false,true,false,(BGSEquipSlot *)0x0);
    cVar21 = !bVar20;
  }
  uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffda0 >> 0x20);
  if ((cVar21 == '\0') || (bVar59)) {
    pTVar40 = (TESObjectREFR *)0x0;
  }
  pTVar33 = (TESObjectREFR *)0x0;
  pNVar4 = &this->entryList->_listHead;
  bVar59 = true;
  while (pTVar35 = pTVar33, pNVar4 != (Node *)0x0) {
    if (!bVar59) {
      if ((pNVar4 != (Node *)0x0) &&
         (pTVar35 = (TESObjectREFR *)pNVar4->item, pTVar35 != (TESObjectREFR *)0x0)) {
        pBVar47 = (BSExtraData *)(pTVar35->sourceFiles).array;
        goto LAB_14022aa10;
      }
      break;
    }
    pIVar5 = ((Node *)&pNVar4->item)->item;
    if ((pIVar5 == (InventoryEntryData *)0x0) || (pIVar5->object != pTVar50)) {
      pNVar4 = pNVar4->next;
    }
    else {
      bVar59 = false;
    }
  }
LAB_14022ab55:
  BVar26 = InventoryChanges::RemoveItem
                     (this,(TESObjectREFR *)(local_cc + 4),p1,p2,p3,
                      (ExtraDataList *)CONCAT44(uVar42,(int)p4),pTVar40,p6,p7);
  BSPointerHandleManagerInterface::GetSmartPointer_1(BVar26._handle._handle);
  pTVar28 = local_228;
  goto LAB_14022aa8f;
code_r0x000140229366:
  pBVar47 = pBVar47->next;
  goto joined_r0x00014022934c;
  while( true ) {
    cVar21 = ExtraDataList::IsWorn(pTVar46,0,1);
    if (cVar21 != '\0') {
      pTVar33 = pTVar46;
    }
    pBVar47 = pBVar47->next;
    if (pTVar33 != (TESObjectREFR *)0x0) break;
LAB_14022aa10:
    if ((pBVar47 == (BSExtraData *)0x0) ||
       (pTVar46 = (TESObjectREFR *)pBVar47->__vftable, pTVar46 == (TESObjectREFR *)0x0)) break;
  }
  uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffda0 >> 0x20);
  if (pTVar36 != pTVar33) goto LAB_14022ab55;
  pBVar47 = (BSExtraData *)(pTVar35->sourceFiles).array;
  pTVar33 = (TESObjectREFR *)0x0;
  do {
    uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffda0 >> 0x20);
    if ((pBVar47 == (BSExtraData *)0x0) ||
       (pTVar36 = (TESObjectREFR *)pBVar47->__vftable, pTVar36 == (TESObjectREFR *)0x0)) break;
    cVar21 = ExtraDataList::IsWorn(pTVar36,0,0);
    uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffda0 >> 0x20);
    if (cVar21 != '\0') {
      pTVar33 = pTVar36;
    }
    pBVar47 = pBVar47->next;
  } while (pTVar33 == (TESObjectREFR *)0x0);
  if (pTVar55 != pTVar33) goto LAB_14022ab55;
LAB_14022aa8f:
  pAVar58 = (Actor *)this->owner;
  if (pAVar58 != (Actor *)0x0) {
    p0_01 = (Actor *)0x0;
    if (pAVar58->formType == ActorCharacter) {
      p0_01 = pAVar58;
    }
    if ((((p0_01 != (Actor *)0x0) && (pTVar35 != (TESObjectREFR *)0x0)) && (1 < (int)local_1c8)) &&
       (0 < (int)(local_1c8 - p3))) {
      ActorEquipManager::EquipObject
                (DAT_1430fc678,p0_01,
                 (TESBoundObject *)((BaseExtraList *)&pTVar35->__vftable)->__vftable,
                 (ExtraDataList *)pTVar40,local_1c8 - p3,(BGSEquipSlot *)0x0,false,false,false,true)
      ;
    }
  }
  pTVar55 = local_210;
  if (local_210 != (TESObjectREFR *)0x0) {
    InventoryEntryData::Free(local_210);
    thunk_FUN_14011bd80(pTVar55,0x18);
  }
  BSPointerHandleManagerInterface::GetHandle(p0,pTVar28);
  if (pTVar28 != (TESObjectREFR *)0x0) {
    LOCK();
    puVar34 = &pTVar28->_refCount;
    uVar25 = *puVar34;
    *puVar34 = *puVar34 - 1;
    UNLOCK();
    if ((uVar25 - 1 & 0x3ff) == 0) {
      (*(code *)pTVar28->__vftable_BSHandleRefObject->DeleteThis)();
    }
  }
LAB_14022b2ad:
  *(undefined4 *)(local_1c0 + 0x768) = local_1f8;
  return (BSPointerHandle<>)SUB84(p0,0);
}
