/*
 * FUN_1000cf55 at 1000cf55
 * char __thiscall FUN_1000cf55(void * this, int param_1, undefined * param_2, int param_3, int param_4, int param_5, int param_6, int param_7, undefined4 param_8, uint param_9, int param_10, char param_11, char param_12)
 * Address ranges: 1000cf55-1000da3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall
FUN_1000cf55(void *this,int param_1,undefined *param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7,undefined4 param_8,uint param_9,int param_10,char param_11,
            char param_12)

{
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  undefined2 uVar9;
  undefined2 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [14];
  unkbyte10 Var15;
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  uint uVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  bool bVar24;
  float fVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined2 uVar87;
  undefined2 uVar88;
  float fVar33;
  byte bVar67;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar47 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined1 in_XMM6_Ba;
  undefined1 in_XMM6_Bb;
  undefined1 uVar81;
  undefined1 in_XMM6_Bc;
  undefined1 uVar82;
  undefined1 in_XMM6_Bd;
  undefined1 uVar83;
  undefined1 in_XMM6_Be;
  undefined1 in_XMM6_Bf;
  undefined1 uVar84;
  undefined1 in_XMM6_Bg;
  undefined1 uVar85;
  undefined1 in_XMM6_Bh;
  undefined1 uVar86;
  int aiStack_140 [16];
  float local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [16];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [8];
  float fStack_38;
  float fStack_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  void *local_20;
  uint local_1c;
  char local_15;
  uint local_14;
  undefined1 auVar39 [16];
  undefined1 auVar51 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar48 [16];
  undefined1 auVar60 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  undefined1 auVar38 [16];
  undefined1 auVar50 [16];
  
  local_15 = '\x01';
  uVar18 = 0;
  local_20 = this;
  local_1c = 0;
  do {
    if (*(char *)(param_3 + 0x10 + uVar18) != '\0') {
      pbVar7 = (byte *)((int)&local_1c + ((int)uVar18 >> 3));
      *pbVar7 = *pbVar7 | '\x01' << (uVar18 & 7);
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 0x10);
  uVar18 = *(uint *)((int)this + 0x4ec);
  local_24 = uVar18 & 0x3f;
  local_2c = *(uint *)(&DAT_100afa98 + (uVar18 >> 4 & 3) * 4) |
             *(uint *)(&DAT_100afaa8 + (uVar18 & 0xf) * 4) | 0x3f;
  if ((param_11 != '\0') && ((uVar18 & 0x3f) != 0)) {
    local_100 = *(float *)((int)this + 0x22c);
    uStack_fc = *(undefined4 *)((int)this + 0x230);
    uStack_f8 = *(undefined4 *)((int)this + 0x234);
    uStack_f4 = *(undefined4 *)((int)this + 0x238);
    local_f0 = *(undefined4 *)((int)this + 0x23c);
    uStack_ec = *(undefined4 *)((int)this + 0x240);
    uStack_e8 = *(undefined4 *)((int)this + 0x244);
    uStack_e4 = *(undefined4 *)((int)this + 0x248);
    local_e0 = *(undefined4 *)((int)this + 0x24c);
    uStack_dc = *(undefined4 *)((int)this + 0x250);
    uStack_d8 = *(undefined4 *)((int)this + 0x254);
    uStack_d4 = *(undefined4 *)((int)this + 600);
    local_d0 = *(undefined4 *)((int)this + 0x25c);
    uStack_cc = *(undefined4 *)((int)this + 0x260);
    uStack_c8 = *(undefined4 *)((int)this + 0x264);
    uStack_c4 = *(undefined4 *)((int)this + 0x268);
    local_c0 = *(undefined4 *)((int)this + 0x26c);
    uStack_bc = *(undefined4 *)((int)this + 0x270);
    uStack_b8 = *(undefined4 *)((int)this + 0x274);
    uStack_b4 = *(undefined4 *)((int)this + 0x278);
    local_b0 = *(undefined4 *)((int)this + 0x27c);
    uStack_ac = *(undefined4 *)((int)this + 0x280);
    uStack_a8 = *(undefined4 *)((int)this + 0x284);
    uStack_a4 = *(undefined4 *)((int)this + 0x288);
  }
  uVar18 = 0;
  bVar24 = local_1c != 0;
  if (bVar24) {
    for (; (local_1c >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
    }
  }
  local_14 = local_1c;
  while (bVar24) {
    pbVar7 = (byte *)((int)&local_14 + ((int)uVar18 >> 3));
    *pbVar7 = *pbVar7 & ~('\x01' << (uVar18 & 7));
    iVar20 = (uVar18 & 0xff) * 0xc;
    aiStack_140[uVar18 & 0xff] =
         *(int *)(param_4 + 4 + iVar20) * param_10 + *(int *)(param_4 + iVar20);
    uVar18 = 0;
    bVar24 = local_14 != 0;
    if (bVar24) {
      for (; (local_14 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
      }
    }
  }
  uVar2 = *(undefined4 *)((int)this + 0xac0);
  uVar18 = CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba))) ^
           CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba)));
  uVar81 = (undefined1)(uVar18 >> 8);
  uVar82 = (undefined1)(uVar18 >> 0x10);
  uVar83 = (undefined1)(uVar18 >> 0x18);
  uVar21 = CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be))) ^
           CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be)));
  uVar84 = (undefined1)(uVar21 >> 8);
  uVar85 = (undefined1)(uVar21 >> 0x10);
  uVar86 = (undefined1)(uVar21 >> 0x18);
  auVar11 = ZEXT812(0);
  auVar46._12_3_ = 0;
  auVar46._0_12_ = auVar11;
  auVar46[0xf] = uVar86;
  auVar45._14_2_ = auVar46._14_2_;
  auVar45[0xc] = 0;
  auVar45._0_12_ = auVar11;
  auVar45[0xd] = uVar85;
  auVar44._13_3_ = auVar45._13_3_;
  auVar44[0xc] = 0;
  auVar44._0_12_ = auVar11;
  auVar43._12_4_ = auVar44._12_4_;
  auVar43._0_11_ = ZEXT811(0);
  auVar43[0xb] = uVar84;
  auVar42._11_5_ = auVar43._11_5_;
  auVar42._0_11_ = ZEXT811(0);
  auVar41._10_6_ = auVar42._10_6_;
  auVar41._0_9_ = (unkuint9)0;
  auVar41[9] = (char)uVar21;
  auVar40._9_7_ = auVar41._9_7_;
  auVar40._0_9_ = (unkuint9)0;
  Var15 = CONCAT91(CONCAT81(auVar40._8_8_,uVar83),(char)((uint)uVar2 >> 0x18));
  auVar39._6_10_ = Var15;
  auVar39[5] = uVar82;
  auVar39[4] = (char)((uint)uVar2 >> 0x10);
  auVar39._0_4_ = uVar2;
  auVar14._2_12_ = auVar39._4_12_;
  auVar14[1] = uVar81;
  auVar14[0] = (char)((uint)uVar2 >> 8);
  uVar87 = CONCAT11((char)uVar18,(char)uVar2);
  auVar38._2_14_ = auVar14;
  uVar10 = (undefined2)(uVar21 >> 0x10);
  auVar49._0_12_ = auVar38._0_12_;
  auVar49._12_2_ = (short)Var15;
  auVar49._14_2_ = uVar10;
  auVar48._12_4_ = auVar49._12_4_;
  auVar48._0_10_ = auVar38._0_10_;
  auVar48._10_2_ = (short)uVar21;
  auVar47._10_6_ = auVar48._10_6_;
  auVar47._0_8_ = auVar38._0_8_;
  auVar47._8_2_ = auVar39._4_2_;
  uVar9 = (undefined2)(uVar18 >> 0x10);
  auVar11._4_8_ = auVar47._8_8_;
  auVar11._2_2_ = uVar9;
  auVar11._0_2_ = auVar14._0_2_;
  auVar69._0_4_ = (float)CONCAT22((short)uVar18,uVar87);
  auVar69._4_4_ = (float)auVar11._0_4_;
  auVar69._8_4_ = (float)auVar47._8_4_;
  auVar69._12_4_ = (float)auVar48._12_4_;
  uVar2 = *(undefined4 *)((int)this + 0xac4);
  local_70 = divps(auVar69,_DAT_100b5d10);
  auVar11 = ZEXT812(0);
  auVar58._12_3_ = 0;
  auVar58._0_12_ = auVar11;
  auVar58[0xf] = uVar86;
  auVar57._14_2_ = auVar58._14_2_;
  auVar57[0xc] = 0;
  auVar57._0_12_ = auVar11;
  auVar57[0xd] = uVar85;
  auVar56._13_3_ = auVar57._13_3_;
  auVar56[0xc] = 0;
  auVar56._0_12_ = auVar11;
  auVar55._12_4_ = auVar56._12_4_;
  auVar55._0_11_ = ZEXT811(0);
  auVar55[0xb] = uVar84;
  auVar54._11_5_ = auVar55._11_5_;
  auVar54._0_11_ = ZEXT811(0);
  auVar53._10_6_ = auVar54._10_6_;
  auVar53._0_9_ = (unkuint9)0;
  auVar53[9] = (char)uVar21;
  auVar52._9_7_ = auVar53._9_7_;
  auVar52._0_9_ = (unkuint9)0;
  Var15 = CONCAT91(CONCAT81(auVar52._8_8_,uVar83),(char)((uint)uVar2 >> 0x18));
  auVar51._6_10_ = Var15;
  auVar51[5] = uVar82;
  auVar51[4] = (char)((uint)uVar2 >> 0x10);
  auVar51._0_4_ = uVar2;
  auVar16._2_12_ = auVar51._4_12_;
  auVar16[1] = uVar81;
  auVar16[0] = (char)((uint)uVar2 >> 8);
  uVar88 = CONCAT11((char)uVar18,(char)uVar2);
  auVar50._2_14_ = auVar16;
  auVar61._0_12_ = auVar50._0_12_;
  auVar61._12_2_ = (short)Var15;
  auVar61._14_2_ = uVar10;
  auVar60._12_4_ = auVar61._12_4_;
  auVar60._0_10_ = auVar50._0_10_;
  auVar60._10_2_ = (short)uVar21;
  auVar59._10_6_ = auVar60._10_6_;
  auVar59._0_8_ = auVar50._0_8_;
  auVar59._8_2_ = auVar51._4_2_;
  auVar17._4_8_ = auVar59._8_8_;
  auVar17._2_2_ = uVar9;
  auVar17._0_2_ = auVar16._0_2_;
  auVar63._0_4_ = (float)CONCAT22((short)uVar18,uVar88);
  auVar63._4_4_ = (float)auVar17._0_4_;
  auVar63._8_4_ = (float)auVar59._8_4_;
  auVar63._12_4_ = (float)auVar60._12_4_;
  local_80 = divps(auVar63,_DAT_100b5d10);
  fVar33 = *(float *)((int)this + 0x40) - *(float *)((int)this + 0x3c);
  fVar80 = (float)((double)*(int *)((int)this + 0x38) +
                  (double)(&DAT_100b5ce0)[-(*(int *)((int)this + 0x38) >> 0x1f)]);
  local_40._0_4_ =
       (float)((double)*(int *)((int)this + 0x34) +
              (double)(&DAT_100b5ce0)[-(*(int *)((int)this + 0x34) >> 0x1f)]) * 0.5;
  local_40._4_4_ =
       (undefined4)
       (CONCAT17((char)((uint)fVar33 >> 0x18),
                 CONCAT16((char)((uint)fVar33 >> 0x10),
                          CONCAT15((char)((uint)fVar33 >> 8),
                                   CONCAT14(SUB41(fVar33,0),local_40._0_4_)))) >> 0x20);
  fStack_38 = (float)local_40._4_4_;
  local_40._4_4_ = fVar80 * -0.5;
  fStack_34 = 1.0;
  local_60 = *(float *)((int)this + 0x324);
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_90 = *(float *)((int)this + 800);
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_50 = (float)((double)*(int *)((int)this + 0x2c) +
                    (double)(&DAT_100b5ce0)[-(*(int *)((int)this + 0x2c) >> 0x1f)]) +
             (float)local_40._0_4_;
  fStack_4c = fVar80 * 0.5 +
              (float)((double)*(int *)((int)this + 0x30) +
                     (double)(&DAT_100b5ce0)[-(*(int *)((int)this + 0x30) >> 0x1f)]);
  fStack_48 = *(float *)((int)this + 0x3c);
  fStack_44 = 0.0;
  local_a0 = ZEXT416((uint)(*(float *)((int)this + 800) - *(float *)((int)this + 0x31c)));
  local_28 = 0;
  if (param_9 != 0) {
    do {
      if (((param_6 == 0) && ((*(uint *)((int)this + 0x1ec) & local_2c) == local_2c)) &&
         ((*(uint *)((int)this + 0x1f0) & local_2c) == 0)) {
        return local_15;
      }
      uVar18 = 0;
      bVar24 = local_1c != 0;
      if (bVar24) {
        for (; (local_1c >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
        }
      }
      local_14 = local_1c;
      while (bVar24) {
        fVar25 = 1.0;
        fVar33 = 0.0;
        fVar80 = 0.0;
        fVar72 = 0.0;
        uVar21 = uVar18 & 0xff;
        pbVar7 = (byte *)((int)&local_14 + ((int)uVar18 >> 3));
        *pbVar7 = *pbVar7 & ~('\x01' << (uVar18 & 7));
        iVar20 = uVar21 * 0xc;
        if (*(int *)(param_4 + iVar20) != 0) {
          cVar1 = *(char *)(param_4 + 8 + iVar20);
          pfVar19 = (float *)aiStack_140[uVar21];
          if (cVar1 == '\0') {
            fVar72 = *pfVar19;
            fVar80 = 0.0;
            fVar25 = 1.0;
            fVar33 = 0.0;
          }
          else if (cVar1 == '\x01') {
            fVar72 = *pfVar19;
            fVar33 = 0.0;
LAB_1000d279:
            fVar80 = pfVar19[1];
LAB_1000d27e:
            fVar25 = 1.0;
          }
          else if (cVar1 == '\x03') {
            fVar72 = *pfVar19;
            fVar80 = pfVar19[1];
            fVar33 = pfVar19[2];
            fVar25 = pfVar19[3];
          }
          else if (cVar1 == '\x04') {
            fVar33 = *pfVar19;
            bVar67 = (byte)((uint)fVar33 >> 0x18);
            auVar13[0xc] = bVar67;
            auVar13._0_12_ = ZEXT712(0);
            auVar74._0_4_ = (float)((uint)fVar33 & 0xff);
            auVar74._4_4_ = (float)((uint)fVar33 >> 8 & 0xff);
            auVar74._8_4_ =
                 (float)(int)CONCAT32(auVar13._10_3_,(ushort)(byte)((uint)fVar33 >> 0x10));
            auVar74._12_4_ = (float)bVar67;
            auVar69 = divps(auVar74,_DAT_100b5d10);
            fVar33 = auVar69._0_4_;
            fVar80 = auVar69._4_4_;
            fVar72 = auVar69._8_4_;
            fVar25 = auVar69._12_4_;
          }
          else if (cVar1 == '\x05') {
            fVar33 = *pfVar19;
            bVar67 = (byte)((uint)fVar33 >> 0x18);
            auVar12[0xc] = bVar67;
            auVar12._0_12_ = ZEXT712(0);
            fVar72 = (float)((uint)fVar33 & 0xff);
            fVar80 = (float)((uint)fVar33 >> 8 & 0xff);
            fVar33 = (float)(int)CONCAT32(auVar12._10_3_,(ushort)(byte)((uint)fVar33 >> 0x10));
            fVar25 = (float)bVar67;
          }
          else {
            if (cVar1 == '\x06') {
              fVar72 = (float)(int)*(short *)pfVar19;
              fVar33 = 0.0;
              fVar80 = (float)(int)*(short *)((int)pfVar19 + 2);
              goto LAB_1000d27e;
            }
            if (cVar1 != '\a') {
              fVar72 = *pfVar19;
              fVar33 = pfVar19[2];
              goto LAB_1000d279;
            }
            fVar72 = (float)(int)*(short *)pfVar19;
            fVar80 = (float)(int)*(short *)((int)pfVar19 + 2);
            fVar33 = (float)(int)*(short *)(pfVar19 + 1);
            fVar25 = (float)(int)*(short *)((int)pfVar19 + 6);
          }
          aiStack_140[uVar21] = aiStack_140[uVar21] + *(int *)(param_4 + 4 + iVar20);
        }
        uVar18 = 0;
        bVar24 = local_14 != 0;
        if (bVar24) {
          for (; (local_14 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
          }
        }
        pfVar19 = (float *)(param_5 + uVar21 * 0x10);
        *pfVar19 = fVar72;
        pfVar19[1] = fVar80;
        pfVar19[2] = fVar33;
        pfVar19[3] = fVar25;
        this = local_20;
      }
      *(undefined4 *)(param_5 + 0x4350) = local_70._0_4_;
      *(undefined4 *)(param_5 + 0x4354) = local_70._4_4_;
      *(undefined4 *)(param_5 + 0x4358) = local_70._8_4_;
      *(undefined4 *)(param_5 + 0x435c) = local_70._12_4_;
      *(undefined4 *)(param_5 + 0x4320) = 0;
      *(undefined4 *)(param_5 + 0x4324) = 0;
      *(undefined4 *)(param_5 + 0x4328) = 0;
      *(undefined4 *)(param_5 + 0x432c) = 0x3f800000;
      *(undefined4 *)(param_5 + 0x4330) = 0x3f800000;
      *(undefined4 *)(param_5 + 0x4334) = 0;
      *(undefined4 *)(param_5 + 0x4338) = 0;
      *(undefined4 *)(param_5 + 0x433c) = 0;
      *(undefined4 *)(param_5 + 0x4340) = 0x3f800000;
      *(undefined4 *)(param_5 + 0x4344) = 0;
      *(undefined4 *)(param_5 + 0x4348) = 0;
      *(undefined4 *)(param_5 + 0x434c) = 0;
      *(undefined1 (*) [16])(param_5 + 0x4360) = local_80;
      uVar18 = 0;
      do {
        uVar21 = uVar18 + 1;
        puVar22 = (undefined4 *)(param_5 + 0x42a0 + uVar18 * 0x10);
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        puVar22[3] = 0x3f800000;
        uVar18 = uVar21;
      } while (uVar21 < 8);
      if (param_2 == (undefined *)0x0) {
        uVar18 = FUN_100094dc(this,param_5,param_1);
        local_15 = (char)uVar18;
        if ((char)uVar18 == '\0') {
          return '\0';
        }
      }
      else {
        (*(code *)param_2)(param_5,&DAT_100b9220,*(int *)((int)this + 0xacc) + 0xc);
      }
      auVar70 = *(undefined1 (*) [16])(param_5 + 0x4320);
      fVar33 = auVar70._0_4_;
      fVar80 = auVar70._4_4_;
      fVar72 = auVar70._12_4_;
      fVar25 = auVar70._8_4_;
      if (param_6 == 0) {
        pfVar19 = &local_100;
        local_14 = 0;
        if (local_24 == 0) {
          pfVar19 = (float *)0x0;
        }
        if (pfVar19 == (float *)0x0) {
          *(uint *)((int)this + 0x1f0) = *(uint *)((int)this + 0x1f0) & 0xfffff03f;
          uVar18 = 0;
        }
        else {
          uVar18 = *(uint *)((int)this + 0x4ec);
          fVar73 = 0.0;
          fVar77 = 0.0;
          if ((uVar18 & 1) != 0) {
            fVar73 = pfVar19[2] * fVar25 + *pfVar19 * fVar33 +
                     pfVar19[3] * fVar72 + pfVar19[1] * fVar80;
          }
          fVar34 = 0.0;
          if ((uVar18 & 2) != 0) {
            fVar34 = pfVar19[0x1a] * fVar25 + pfVar19[0x18] * fVar33 +
                     pfVar19[0x1b] * fVar72 + pfVar19[0x19] * fVar80;
          }
          fVar35 = 0.0;
          if ((uVar18 & 4) != 0) {
            fVar35 = pfVar19[0x32] * fVar25 + pfVar19[0x30] * fVar33 +
                     pfVar19[0x33] * fVar72 + pfVar19[0x31] * fVar80;
          }
          fVar36 = 0.0;
          if ((uVar18 & 8) != 0) {
            fVar36 = pfVar19[0x4a] * fVar25 + pfVar19[0x48] * fVar33 +
                     pfVar19[0x4b] * fVar72 + pfVar19[0x49] * fVar80;
          }
          if ((uVar18 & 0x10) != 0) {
            fVar77 = pfVar19[0x62] * fVar25 + pfVar19[0x60] * fVar33 +
                     pfVar19[99] * fVar72 + pfVar19[0x61] * fVar80;
          }
          fVar37 = 0.0;
          if ((uVar18 & 0x20) != 0) {
            fVar37 = pfVar19[0x7a] * fVar25 + pfVar19[0x78] * fVar33 +
                     pfVar19[0x7b] * fVar72 + pfVar19[0x79] * fVar80;
          }
          auVar76._4_4_ = -(uint)(fVar34 < 0.0);
          auVar76._0_4_ = -(uint)(fVar73 < 0.0);
          auVar76._8_4_ = -(uint)(fVar35 < 0.0);
          auVar76._12_4_ = -(uint)(fVar36 < 0.0);
          auVar79._4_4_ = -(uint)(fVar37 < 0.0);
          auVar79._0_4_ = -(uint)(fVar77 < 0.0);
          auVar79._8_8_ = 0;
          uVar21 = movmskps(pfVar19,auVar76);
          uVar18 = movmskps(uVar21 & 0xf,auVar79);
          local_14 = *(uint *)(&DAT_100afa98 + (uVar18 & 3) * 4) |
                     *(uint *)(&DAT_100afaa8 + (uVar21 & 0xf) * 4);
          uVar18 = *(uint *)(&DAT_100afa98 + (uVar18 & 3) * 4) | 0x3ff;
          *(uint *)((int)this + 0x1f0) =
               *(uint *)((int)this + 0x1f0) &
               (*(uint *)(&DAT_100afaa8 + (uVar21 & 0xf) * 4) | 0xc3f) & uVar18;
        }
        auVar32._4_4_ = -(uint)(fVar33 * 1.0 + fVar72 < 0.0);
        auVar32._0_4_ = -(uint)(fVar33 * -1.0 + fVar72 < 0.0);
        auVar32._8_4_ = -(uint)(fVar80 * -1.0 + fVar72 < 0.0);
        auVar32._12_4_ = -(uint)(fVar80 * 1.0 + fVar72 < 0.0);
        auVar71._4_4_ = -(uint)(fVar25 * 1.0 < 0.0);
        auVar71._0_4_ = -(uint)(fVar25 * -1.0 + fVar72 < 0.0);
        auVar71._8_4_ = -(uint)(fVar25 * -1.0 < 0.0);
        auVar71._12_4_ = -(uint)(fVar25 * 1.0 < 0.0);
        uVar21 = movmskps(uVar18,auVar32);
        uVar18 = *(uint *)(&DAT_100afa58 + (uVar21 & 0xf) * 4);
        uVar21 = movmskps(uVar21 & 0xf,auVar71);
        uVar21 = *(uint *)(&DAT_100afa44 + (uVar21 & 3) * 4);
        *(uint *)((int)this + 0x1f0) =
             (uVar21 | 0xf) & (uVar18 | 0x30) & *(uint *)((int)this + 0x1f0);
        *(uint *)((int)this + 0x1ec) = *(uint *)((int)this + 0x1ec) | uVar21 | uVar18 | local_14;
      }
      else {
        if (*(int *)(param_7 + 4) == 0) {
          if (param_11 != '\0') {
            pfVar19 = &local_100;
            if (local_24 == 0) {
              pfVar19 = (float *)0x0;
            }
            local_14 = 0;
            if (pfVar19 == (float *)0x0) {
              *(uint *)((int)this + 0x1f0) = *(uint *)((int)this + 0x1f0) & 0xfffff03f;
              uVar18 = 0;
            }
            else {
              uVar18 = *(uint *)((int)this + 0x4ec);
              fVar73 = 0.0;
              fVar77 = 0.0;
              if ((uVar18 & 1) != 0) {
                fVar73 = pfVar19[2] * fVar25 + *pfVar19 * fVar33 +
                         pfVar19[3] * fVar72 + pfVar19[1] * fVar80;
              }
              fVar34 = 0.0;
              if ((uVar18 & 2) != 0) {
                fVar34 = pfVar19[0x1a] * fVar25 + pfVar19[0x18] * fVar33 +
                         pfVar19[0x1b] * fVar72 + pfVar19[0x19] * fVar80;
              }
              fVar35 = 0.0;
              if ((uVar18 & 4) != 0) {
                fVar35 = pfVar19[0x32] * fVar25 + pfVar19[0x30] * fVar33 +
                         pfVar19[0x33] * fVar72 + pfVar19[0x31] * fVar80;
              }
              fVar36 = 0.0;
              if ((uVar18 & 8) != 0) {
                fVar36 = pfVar19[0x4a] * fVar25 + pfVar19[0x48] * fVar33 +
                         pfVar19[0x4b] * fVar72 + pfVar19[0x49] * fVar80;
              }
              if ((uVar18 & 0x10) != 0) {
                fVar77 = pfVar19[0x62] * fVar25 + pfVar19[0x60] * fVar33 +
                         pfVar19[99] * fVar72 + pfVar19[0x61] * fVar80;
              }
              fVar37 = 0.0;
              if ((uVar18 & 0x20) != 0) {
                fVar37 = pfVar19[0x7a] * fVar25 + pfVar19[0x78] * fVar33 +
                         pfVar19[0x7b] * fVar72 + pfVar19[0x79] * fVar80;
              }
              auVar75._4_4_ = -(uint)(fVar34 < 0.0);
              auVar75._0_4_ = -(uint)(fVar73 < 0.0);
              auVar75._8_4_ = -(uint)(fVar35 < 0.0);
              auVar75._12_4_ = -(uint)(fVar36 < 0.0);
              auVar78._4_4_ = -(uint)(fVar37 < 0.0);
              auVar78._0_4_ = -(uint)(fVar77 < 0.0);
              auVar78._8_8_ = 0;
              uVar21 = movmskps(pfVar19,auVar75);
              uVar18 = movmskps(uVar21 & 0xf,auVar78);
              local_14 = *(uint *)(&DAT_100afa98 + (uVar18 & 3) * 4) |
                         *(uint *)(&DAT_100afaa8 + (uVar21 & 0xf) * 4);
              uVar18 = *(uint *)(&DAT_100afa98 + (uVar18 & 3) * 4) | 0x3ff;
              *(uint *)((int)this + 0x1f0) =
                   *(uint *)((int)this + 0x1f0) &
                   (*(uint *)(&DAT_100afaa8 + (uVar21 & 0xf) * 4) | 0xc3f) & uVar18;
            }
            auVar27._4_4_ = -(uint)(fVar33 * 1.0 + fVar72 < 0.0);
            auVar27._0_4_ = -(uint)(fVar33 * -1.0 + fVar72 < 0.0);
            auVar27._8_4_ = -(uint)(fVar80 * -1.0 + fVar72 < 0.0);
            auVar27._12_4_ = -(uint)(fVar80 * 1.0 + fVar72 < 0.0);
            uVar18 = movmskps(uVar18,auVar27);
            auVar28._4_4_ = -(uint)(fVar25 * 1.0 < 0.0);
            auVar28._0_4_ = -(uint)(fVar25 * -1.0 + fVar72 < 0.0);
            auVar28._8_4_ = -(uint)(fVar25 * -1.0 < 0.0);
            auVar28._12_4_ = -(uint)(fVar25 * 1.0 < 0.0);
            uVar21 = movmskps(uVar18 & 0xf,auVar28);
            local_14 = local_14 |
                       *(uint *)(&DAT_100afa44 + (uVar21 & 3) * 4) |
                       *(uint *)(&DAT_100afa58 + (uVar18 & 0xf) * 4);
            *(uint *)((int)this + 0x1f0) =
                 (*(uint *)(&DAT_100afa44 + (uVar21 & 3) * 4) | 0xf) &
                 (*(uint *)(&DAT_100afa58 + (uVar18 & 0xf) * 4) | 0x30) &
                 *(uint *)((int)this + 0x1f0);
            *(uint *)((int)this + 0x1ec) = *(uint *)((int)this + 0x1ec) | local_14;
            if ((local_14 & 0x3f) != 0) goto LAB_1000d630;
          }
          auVar68._0_4_ = fVar33 + 0.0;
          auVar68._4_4_ = fVar80 + 0.0;
          auVar68._8_4_ = fVar25 + 0.0;
          auVar68._12_4_ = 0x3f800000;
          auVar8[4] = auVar70[0xc];
          auVar8._0_4_ = fVar72;
          auVar8[5] = auVar70[0xd];
          auVar8[6] = auVar70[0xe];
          auVar8[7] = auVar70[0xf];
          auVar8._8_4_ = fVar72;
          auVar8._12_4_ = fVar72;
          auVar69 = divps(auVar68,auVar8);
          auVar70._0_4_ = auVar69._0_4_ * (float)local_40._0_4_ + local_50;
          auVar70._4_4_ = auVar69._4_4_ * (float)local_40._4_4_ + fStack_4c;
          auVar70._8_4_ = auVar69._8_4_ * fStack_38 + fStack_48;
          auVar70._12_4_ = auVar69._12_4_ * fStack_34 + fStack_44;
        }
LAB_1000d630:
        auVar69 = _DAT_100b5cb0;
        *(undefined1 (*) [16])(param_6 + (uint)*(byte *)(param_7 + 0x17) * 4) = auVar70;
        if (*(char *)(param_7 + 0x3c) != -1) {
          auVar62._4_4_ = *(undefined4 *)(param_5 + 0x4354);
          auVar62._0_4_ = *(undefined4 *)(param_5 + 0x4358);
          auVar62._8_4_ = *(undefined4 *)(param_5 + 0x4350);
          auVar62._12_4_ = *(undefined4 *)(param_5 + 0x435c);
          auVar63 = minps(auVar62,auVar69);
          auVar63 = maxps(auVar63,ZEXT816(0));
          auVar64._0_8_ = CONCAT44((int)(auVar63._4_4_ * 255.0),(int)(auVar63._0_4_ * 255.0));
          auVar64._8_4_ = (int)(auVar63._8_4_ * 255.0);
          auVar64._12_4_ = (int)(auVar63._12_4_ * 255.0);
          auVar29._8_4_ = auVar64._8_4_;
          auVar29._0_8_ = auVar64._0_8_;
          auVar29._12_4_ = auVar64._12_4_;
          auVar63 = packssdw(auVar29,auVar64);
          sVar3 = auVar63._0_2_;
          sVar4 = auVar63._2_2_;
          sVar5 = auVar63._4_2_;
          sVar6 = auVar63._6_2_;
          *(uint *)(param_6 + (uint)*(byte *)(param_7 + 0x3f) * 4) =
               CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar63[6] - (0xff < sVar6),
                        CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar63[4] - (0xff < sVar5),
                                 CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar63[2] -
                                          (0xff < sVar4),
                                          (0 < sVar3) * (sVar3 < 0x100) * auVar63[0] -
                                          (0xff < sVar3))));
          this = local_20;
        }
        if (*(char *)(param_7 + 0x44) != -1) {
          if (*(char *)(param_3 + 0x442) != '\0') {
            fVar33 = SUB164(*(undefined1 (*) [16])(param_5 + 0x4330),0);
            if (param_12 != '\0') {
              iVar20 = *(int *)((int)this + 0x4bc);
              if (iVar20 == 1) {
                fVar33 = fVar33 * local_60;
              }
              else {
                if (iVar20 != 2) {
                  if (iVar20 == 3) {
                    fVar33 = (local_90 - fVar33) / (float)local_a0._0_4_;
                  }
                  goto LAB_1000d74f;
                }
                fVar33 = fVar33 * local_60 * fVar33 * local_60;
              }
              iVar20 = (int)fVar33;
              iVar26 = (int)((fVar33 - (float)iVar20) * 1024.0);
              if (iVar20 < 0) {
                fVar33 = *(float *)(*(int *)((int)this + 0xa4c) + iVar26 * 4) /
                         *(float *)(*(int *)((int)this + 0xa50) + iVar20 * -4);
              }
              else {
                fVar33 = *(float *)(*(int *)((int)this + 0xa4c) + iVar26 * 4) *
                         *(float *)(*(int *)((int)this + 0xa50) + iVar20 * 4);
              }
            }
LAB_1000d74f:
            auVar30 = auVar69;
            if (fVar33 <= auVar69._0_4_) {
              auVar30._4_12_ = auVar69._4_12_;
              auVar30._0_4_ = fVar33;
            }
            fVar33 = 0.0;
            if (0.0 <= auVar30._0_4_) {
              fVar33 = auVar30._0_4_;
            }
            *(float *)(param_5 + 0x436c) = fVar33;
          }
          auVar65._4_4_ = *(undefined4 *)(param_5 + 0x4364);
          auVar65._0_4_ = *(undefined4 *)(param_5 + 0x4368);
          auVar65._8_4_ = *(undefined4 *)(param_5 + 0x4360);
          auVar65._12_4_ = *(undefined4 *)(param_5 + 0x436c);
          auVar69 = minps(auVar65,auVar69);
          auVar69 = maxps(auVar69,ZEXT816(0));
          auVar66._0_8_ = CONCAT44((int)(auVar69._4_4_ * 255.0),(int)(auVar69._0_4_ * 255.0));
          auVar66._8_4_ = (int)(auVar69._8_4_ * 255.0);
          auVar66._12_4_ = (int)(auVar69._12_4_ * 255.0);
          auVar31._8_4_ = auVar66._8_4_;
          auVar31._0_8_ = auVar66._0_8_;
          auVar31._12_4_ = auVar66._12_4_;
          auVar69 = packssdw(auVar31,auVar66);
          sVar3 = auVar69._0_2_;
          sVar4 = auVar69._2_2_;
          sVar5 = auVar69._4_2_;
          sVar6 = auVar69._6_2_;
          *(uint *)(param_6 + (uint)*(byte *)(param_7 + 0x47) * 4) =
               CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar69[6] - (0xff < sVar6),
                        CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar69[4] - (0xff < sVar5),
                                 CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar69[2] -
                                          (0xff < sVar4),
                                          (0 < sVar3) * (sVar3 < 0x100) * auVar69[0] -
                                          (0xff < sVar3))));
        }
        if (*(char *)(param_7 + 0x34) != -1) {
          *(undefined4 *)(param_6 + (uint)*(byte *)(param_7 + 0x3f) * 4) =
               *(undefined4 *)(param_5 + 0x4340);
        }
        uVar18 = 0;
        do {
          if (*(char *)(param_7 + 0x4c + uVar18 * 8) != -1) {
            puVar22 = (undefined4 *)(param_5 + 0x42a0 + uVar18 * 0x10);
            puVar23 = (undefined4 *)(param_6 + (uint)*(byte *)(param_7 + 0x4f + uVar18 * 8) * 4);
            for (uVar21 = (uint)*(byte *)(param_7 + 0x4d + uVar18 * 8); uVar21 != 0;
                uVar21 = uVar21 - 1) {
              *puVar23 = *puVar22;
              puVar22 = puVar22 + 1;
              puVar23 = puVar23 + 1;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < 8);
        param_6 = param_6 + *(int *)(param_7 + 0xc);
        this = local_20;
      }
      local_28 = local_28 + 1;
    } while (local_28 < param_9);
  }
                    /* WARNING: Read-only address (ram,0x100b5cb0) is written */
                    /* WARNING: Read-only address (ram,0x100b5d10) is written */
  return local_15;
}

