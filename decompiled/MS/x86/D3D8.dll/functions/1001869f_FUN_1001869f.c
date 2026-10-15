/*
 * FUN_1001869f at 1001869f
 * undefined __thiscall FUN_1001869f(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5, uint * param_6, undefined4 * param_7, uint * param_8, int param_9, int param_10, int param_11, int param_12, int param_13, uint * param_14, uint * param_15, int param_16, int param_17, uint param_18)
 * Address ranges: 1001869f-10018fa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1001869f(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,uint *param_6,undefined4 *param_7,uint *param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13,uint *param_14,uint *param_15,
            int param_16,int param_17,uint param_18)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [16];
  int *piVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [14];
  unkbyte10 Var11;
  undefined1 auVar12 [14];
  undefined1 auVar13 [12];
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  SIZE_T SVar16;
  int iVar17;
  float *pfVar18;
  void *this_00;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined2 uVar101;
  undefined2 uVar102;
  undefined2 uVar103;
  float fVar34;
  float fVar73;
  undefined1 auVar43 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined1 auVar68 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [12];
  float fVar79;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 auVar92 [12];
  undefined1 auVar93 [12];
  undefined1 auVar94 [16];
  float fVar97;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  ulonglong local_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined1 local_100 [8];
  float fStack_f8;
  float fStack_f4;
  undefined1 local_f0 [16];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [8];
  float fStack_88;
  float fStack_84;
  undefined1 local_80 [8];
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [16];
  undefined1 local_60 [8];
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [8];
  float fStack_38;
  float fStack_34;
  int local_24;
  void *local_20;
  uint local_1c;
  int local_18;
  uint *local_14;
  undefined1 auVar36 [16];
  undefined1 auVar47 [16];
  undefined1 auVar60 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar44 [16];
  undefined1 auVar56 [16];
  undefined1 auVar69 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar57 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar70 [16];
  undefined1 auVar35 [16];
  undefined1 auVar46 [16];
  undefined1 auVar59 [16];
  
  local_20 = this;
  FUN_10016794((int)this);
  iVar17 = *(int *)((int)this + 0xabc);
  uVar19 = *(uint *)((int)this + 0x178);
  fVar75 = *(float *)(iVar17 + 0x865c) - *(float *)(iVar17 + 0x8658);
  local_d0 = CONCAT44(*(float *)(iVar17 + 0x865c),*(undefined4 *)(iVar17 + 0x864c));
  fStack_c8 = *(float *)(iVar17 + 0x866c);
  fStack_c4 = 1.0;
  uVar84 = 0;
  uVar85 = 0;
  uVar86 = 0;
  uVar87 = 0;
  uVar88 = 0;
  uVar89 = 0;
  uVar90 = 0;
  uVar91 = 0;
  uVar20 = *(uint *)((int)this + 0x4b8);
  auVar8[0xc] = (char)(uVar20 >> 0x18);
  auVar8._0_12_ = ZEXT712(0);
  local_110 = CONCAT44(fVar75,fVar75) ^ 0x8000000080000000;
  fStack_108 = -(*(float *)(iVar17 + 0x866c) - *(float *)(iVar17 + 0x8668));
  uStack_104 = 0x3f800000;
  local_c0 = (float)(uVar20 & 0xff);
  fStack_bc = (float)(uVar20 >> 8 & 0xff);
  fStack_b8 = (float)(int)CONCAT32(auVar8._10_3_,(ushort)(byte)(uVar20 >> 0x10));
  fStack_b4 = (float)(uint3)(auVar8._10_3_ >> 0x10);
  if (*(uint *)((int)this + 0xaa4) < uVar19) {
    thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0xa9c));
    *(undefined4 *)((int)this + 0xaa4) = 0;
    SVar16 = (SIZE_T)((ulonglong)uVar19 * 8);
    if ((int)((ulonglong)uVar19 * 8 >> 0x20) != 0) {
      SVar16 = 0xffffffff;
    }
    iVar17 = FUN_100ad4a9(SVar16);
    uVar20 = CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))) ^
             CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84)));
    uVar84 = (undefined1)uVar20;
    uVar85 = (undefined1)(uVar20 >> 8);
    uVar86 = (undefined1)(uVar20 >> 0x10);
    uVar87 = (undefined1)(uVar20 >> 0x18);
    uVar20 = CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,uVar88))) ^
             CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,uVar88)));
    uVar88 = (undefined1)uVar20;
    uVar89 = (undefined1)(uVar20 >> 8);
    uVar90 = (undefined1)(uVar20 >> 0x10);
    uVar91 = (undefined1)(uVar20 >> 0x18);
    *(int *)((int)this + 0xa9c) = iVar17;
    uVar20 = 0;
    if (iVar17 != 0) {
      uVar20 = uVar19;
    }
    *(uint *)((int)this + 0xaa4) = uVar20;
  }
  local_18 = *(int *)((int)this + 0xa9c);
  uVar19 = 0;
  local_1c = 0;
  fVar75 = local_c0;
  fVar74 = fStack_bc;
  fVar97 = fStack_b8;
  fVar73 = fStack_b4;
  if ((local_18 != 0) && (uVar20 = 0, *(int *)((int)this + 0x178) != 0)) {
    this_00 = (void *)((int)this + 0x158);
    do {
      local_14 = (uint *)(*(int *)((int)this + 0x174) + uVar20 * 4);
      if (*local_14 != 0xffffffff) {
        uVar19 = FUN_10016093(this_00,*local_14,0);
        if (uVar19 == *(uint *)((int)this + 0x160)) {
LAB_10018830:
          local_24 = 0;
        }
        else {
          iVar17 = *(int *)((int)this + 0x15c);
          local_24 = uVar19 * 0xa0;
          this = local_20;
          if ((*(uint *)(local_24 + iVar17) != *local_14) || (*(int *)(local_24 + 4 + iVar17) != 0))
          goto LAB_10018830;
          local_24 = iVar17 + 0x20 + local_24;
        }
        iVar17 = FUN_1000924d((void *)((int)this + 0x148),local_14);
        if ((local_24 != 0) && (iVar17 != 0)) {
          *(int *)(local_18 + local_1c * 8) = local_24;
          *(int *)(local_18 + 4 + local_1c * 8) = iVar17;
          local_1c = local_1c + 1;
          this = local_20;
        }
        this_00 = (void *)((int)this + 0x158);
        uVar19 = local_1c;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(uint *)((int)this + 0x178));
  }
  if (*(int *)((int)this + 0x4c8) == 0) {
    local_70._8_4_ = 0x7f7fffff;
    local_70._0_8_ = 0x7f7fffff7f7fffff;
    local_70._12_4_ = 0x7f7fffff;
  }
  else {
    local_70 = _DAT_100b5cb0;
  }
  local_20 = (void *)0x0;
  if (param_18 != 0) {
    local_a0 = local_b0;
    fStack_9c = fStack_ac;
    fStack_98 = fStack_a8;
    fStack_94 = fStack_a4;
    puVar21 = param_14;
    _local_90 = _DAT_100b5cb0;
    fVar34 = (float)local_d0;
    fVar98 = local_d0._4_4_;
    fVar99 = fStack_c8;
    fVar100 = fStack_c4;
    do {
      local_50 = fVar34;
      fStack_4c = fVar98;
      fStack_48 = fVar99;
      fStack_44 = fVar100;
      if (uVar19 != 0) {
        pfVar18 = (float *)((int)local_20 * 0x20 + param_1);
        local_a0 = *pfVar18;
        fStack_9c = pfVar18[1];
        fStack_98 = pfVar18[2];
        fStack_94 = pfVar18[3];
        pfVar18 = (float *)((int)local_20 * 0x20 + 0x10 + param_1);
        local_50 = *pfVar18;
        fStack_4c = pfVar18[1];
        fStack_48 = pfVar18[2];
        fStack_44 = pfVar18[3];
        local_b0 = local_a0;
        fStack_ac = fStack_9c;
        fStack_a8 = fStack_98;
        fStack_a4 = fStack_94;
        if (*(int *)((int)this + 0x4c8) != 0) {
          fVar34 = local_50 * local_50 + fStack_48 * fStack_48 + fStack_4c * fStack_4c;
          auVar24._4_4_ = fVar34;
          auVar24._0_4_ = fVar34;
          auVar24._8_4_ = fVar34;
          auVar24._12_4_ = fVar34;
          auVar24 = rsqrtss(auVar24,auVar24);
          uVar20 = auVar24._0_4_;
          local_50 = (float)(-(uint)(0.0 < fVar34) & uVar20) * local_50;
          fStack_4c = (float)(-(uint)(0.0 < fVar34) & uVar20) * fStack_4c;
          fStack_48 = (float)(-(uint)(0.0 < fVar34) & uVar20) * fStack_48;
          fStack_44 = (float)(-(uint)(0.0 < fVar34) & uVar20) * 0.0;
        }
      }
      uVar1 = *param_4;
      _local_60 = ZEXT416(0);
      auVar7 = ZEXT812(0);
      auVar26._12_3_ = 0;
      auVar26._0_12_ = auVar7;
      auVar26[0xf] = uVar91;
      auVar42._14_2_ = auVar26._14_2_;
      auVar42[0xc] = 0;
      auVar42._0_12_ = auVar7;
      auVar42[0xd] = uVar90;
      auVar41._13_3_ = auVar42._13_3_;
      auVar41[0xc] = 0;
      auVar41._0_12_ = auVar7;
      auVar40._12_4_ = auVar41._12_4_;
      auVar40._0_11_ = ZEXT811(0);
      auVar40[0xb] = uVar89;
      auVar39._11_5_ = auVar40._11_5_;
      auVar39._0_11_ = ZEXT811(0);
      auVar38._10_6_ = auVar39._10_6_;
      auVar38._0_9_ = (unkuint9)0;
      auVar38[9] = uVar88;
      auVar37._9_7_ = auVar38._9_7_;
      auVar37._0_9_ = (unkuint9)0;
      Var11 = CONCAT91(CONCAT81(auVar37._8_8_,uVar87),(char)((uint)uVar1 >> 0x18));
      auVar36._6_10_ = Var11;
      auVar36[5] = uVar86;
      auVar36[4] = (char)((uint)uVar1 >> 0x10);
      auVar36._0_4_ = uVar1;
      auVar10._2_12_ = auVar36._4_12_;
      auVar10[1] = uVar85;
      auVar10[0] = (char)((uint)uVar1 >> 8);
      uVar101 = CONCAT11(uVar84,(char)uVar1);
      auVar35._2_14_ = auVar10;
      auVar45[0xf] = uVar91;
      auVar45[0xe] = uVar90;
      auVar45._0_12_ = auVar35._0_12_;
      auVar45._12_2_ = (short)Var11;
      auVar44._12_4_ = auVar45._12_4_;
      auVar44._0_10_ = auVar35._0_10_;
      auVar44[0xb] = uVar89;
      auVar44[10] = uVar88;
      auVar43._10_6_ = auVar44._10_6_;
      auVar43._0_8_ = auVar35._0_8_;
      auVar43._8_2_ = auVar36._4_2_;
      auVar7[3] = uVar87;
      auVar7[2] = uVar86;
      auVar7._4_8_ = auVar43._8_8_;
      auVar7._0_2_ = auVar10._0_2_;
      auVar76._0_4_ = (float)CONCAT22(CONCAT11(uVar85,uVar84),uVar101);
      auVar76._4_4_ = (float)auVar7._0_4_;
      auVar76._8_4_ = (float)auVar43._8_4_;
      auVar76._12_4_ = (float)auVar44._12_4_;
      _local_100 = divps(auVar76,_DAT_100b5d10);
      if (puVar21 != (uint *)0x0) {
        uVar1 = *param_5;
        auVar7 = ZEXT812(0);
        auVar54._12_3_ = 0;
        auVar54._0_12_ = auVar7;
        auVar54[0xf] = uVar91;
        auVar53._14_2_ = auVar54._14_2_;
        auVar53[0xc] = 0;
        auVar53._0_12_ = auVar7;
        auVar53[0xd] = uVar90;
        auVar52._13_3_ = auVar53._13_3_;
        auVar52[0xc] = 0;
        auVar52._0_12_ = auVar7;
        auVar51._12_4_ = auVar52._12_4_;
        auVar51._0_11_ = ZEXT811(0);
        auVar51[0xb] = uVar89;
        auVar50._11_5_ = auVar51._11_5_;
        auVar50._0_11_ = ZEXT811(0);
        auVar49._10_6_ = auVar50._10_6_;
        auVar49._0_9_ = (unkuint9)0;
        auVar49[9] = uVar88;
        auVar48._9_7_ = auVar49._9_7_;
        auVar48._0_9_ = (unkuint9)0;
        Var11 = CONCAT91(CONCAT81(auVar48._8_8_,uVar87),(char)((uint)uVar1 >> 0x18));
        auVar47._6_10_ = Var11;
        auVar47[5] = uVar86;
        auVar47[4] = (char)((uint)uVar1 >> 0x10);
        auVar47._0_4_ = uVar1;
        auVar12._2_12_ = auVar47._4_12_;
        auVar12[1] = uVar85;
        auVar12[0] = (char)((uint)uVar1 >> 8);
        uVar102 = CONCAT11(uVar84,(char)uVar1);
        auVar46._2_14_ = auVar12;
        auVar57[0xf] = uVar91;
        auVar57[0xe] = uVar90;
        auVar57._0_12_ = auVar46._0_12_;
        auVar57._12_2_ = (short)Var11;
        auVar56._12_4_ = auVar57._12_4_;
        auVar56._0_10_ = auVar46._0_10_;
        auVar56[0xb] = uVar89;
        auVar56[10] = uVar88;
        auVar55._10_6_ = auVar56._10_6_;
        auVar55._0_8_ = auVar46._0_8_;
        auVar55._8_2_ = auVar47._4_2_;
        auVar13[3] = uVar87;
        auVar13[2] = uVar86;
        auVar13._4_8_ = auVar55._8_8_;
        auVar13._0_2_ = auVar12._0_2_;
        auVar58._0_4_ = local_100._0_4_ * fVar75 + (float)CONCAT22(CONCAT11(uVar85,uVar84),uVar102);
        auVar58._4_4_ = local_100._4_4_ * fVar74 + (float)auVar13._0_4_;
        auVar58._8_4_ = local_100._8_4_ * fVar97 + (float)auVar55._8_4_;
        auVar58._12_4_ = local_100._12_4_ * fVar73 + (float)auVar56._12_4_;
        _local_60 = divps(auVar58,_DAT_100b5d10);
      }
      _local_40 = ZEXT816(0);
      local_14 = (uint *)0x0;
      fVar34 = local_50;
      fVar98 = fStack_4c;
      fVar99 = fStack_48;
      fVar100 = fStack_44;
      if (uVar19 != 0) {
        do {
          fVar75 = 0.0;
          pauVar2 = *(undefined1 (**) [16])(local_18 + (int)local_14 * 8);
          fVar74 = 0.0;
          piVar3 = *(int **)(local_18 + 4 + (int)local_14 * 8);
          auVar24 = *pauVar2;
          auVar92 = auVar24._0_12_;
          uVar84 = auVar24[0];
          uVar85 = auVar24[1];
          uVar86 = auVar24[2];
          uVar87 = auVar24[3];
          uVar88 = auVar24[4];
          uVar89 = auVar24[5];
          uVar90 = auVar24[6];
          uVar91 = auVar24[7];
          if (*piVar3 != 3) {
            auVar92._0_4_ = local_a0 - (float)*(undefined8 *)(piVar3 + 0xd);
            auVar92._4_4_ = fStack_9c - (float)((ulonglong)*(undefined8 *)(piVar3 + 0xd) >> 0x20);
            auVar92._8_4_ = fStack_98 - (float)piVar3[0xf];
            fVar75 = (float)piVar3[0x13];
            fVar74 = SQRT(auVar92._0_4_ * auVar92._0_4_ + auVar92._8_4_ * auVar92._8_4_ +
                          auVar92._4_4_ * auVar92._4_4_);
            fVar97 = (fVar74 * 1.0 + 0.0) * *(float *)(pauVar2[1] + 4);
            auVar25._4_4_ = fVar97;
            auVar25._0_4_ = fVar97;
            auVar25._8_4_ = fVar97;
            auVar25._12_4_ = fVar97;
            auVar95._0_4_ =
                 (fVar74 * fVar74 + 0.0) * *(float *)pauVar2[1] +
                 (fVar74 * 0.0 + 1.0) * *(float *)(pauVar2[1] + 8) + fVar97;
            auVar95._4_4_ = auVar95._0_4_;
            auVar95._8_4_ = auVar95._0_4_;
            auVar95._12_4_ = auVar95._0_4_;
            auVar26 = rcpps(auVar25,auVar95);
            local_90._4_4_ = ~-(uint)(auVar95._0_4_ == 0.0) & auVar26._4_4_;
            local_90._0_4_ = ~-(uint)(auVar95._0_4_ == 0.0) & auVar26._0_4_;
            fStack_88 = (float)(~-(uint)(auVar95._0_4_ == 0.0) & auVar26._8_4_);
            fStack_84 = (float)(~-(uint)(auVar95._0_4_ == 0.0) & auVar26._12_4_);
          }
          if (fVar75 < fVar74) {
LAB_10018e95:
            uVar19 = CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))) ^
                     CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84)));
            uVar84 = (undefined1)uVar19;
            uVar85 = (undefined1)(uVar19 >> 8);
            uVar86 = (undefined1)(uVar19 >> 0x10);
            uVar87 = (undefined1)(uVar19 >> 0x18);
            uVar19 = CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,uVar88))) ^
                     CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,uVar88)));
            uVar88 = (undefined1)uVar19;
            uVar89 = (undefined1)(uVar19 >> 8);
            uVar90 = (undefined1)(uVar19 >> 0x10);
            uVar91 = (undefined1)(uVar19 >> 0x18);
          }
          else {
            local_e0 = auVar92._0_4_;
            fStack_dc = auVar92._4_4_;
            fStack_d8 = auVar92._8_4_;
            auVar93._0_4_ = local_e0 * local_e0;
            auVar93._4_4_ = fStack_dc * fStack_dc;
            auVar93._8_4_ = fStack_d8 * fStack_d8;
            _local_80 = _DAT_100b5cb0;
            auVar94._0_4_ = auVar93._0_4_ + auVar93._8_4_ + auVar93._4_4_;
            auVar94._4_8_ = auVar93._4_8_;
            auVar94._12_4_ = 0;
            auVar26 = rsqrtss(auVar94,auVar94);
            fVar75 = auVar26._0_4_;
            local_e0 = fVar75 * local_e0;
            fStack_dc = fVar75 * fStack_dc;
            fStack_d8 = fVar75 * fStack_d8;
            fStack_d4 = fVar75 * 0.0;
            auVar96._0_4_ = -local_e0 * fVar34 + -fStack_d8 * fVar99 + -fStack_dc * fVar98;
            auVar96._4_4_ = auVar96._0_4_;
            auVar96._8_4_ = auVar96._0_4_;
            auVar96._12_4_ = auVar96._0_4_;
            auVar26 = minps(auVar96,local_70);
            local_f0 = maxps(auVar26,ZEXT816(0));
            auVar77 = _local_80;
            if (*piVar3 == 2) {
              fVar75 = auVar24._0_4_ * local_e0 + auVar24._8_4_ * fStack_d8 +
                       auVar24._4_4_ * fStack_dc;
              uVar84 = SUB41(fVar75,0);
              uVar85 = (undefined1)((uint)fVar75 >> 8);
              uVar86 = (undefined1)((uint)fVar75 >> 0x10);
              uVar87 = (undefined1)((uint)fVar75 >> 0x18);
              auVar27._4_4_ = fVar75;
              auVar27._0_4_ = fVar75;
              auVar27._8_4_ = fVar75;
              auVar27._12_4_ = fVar75;
              auVar28._4_12_ = auVar27._4_12_;
              auVar28._0_4_ = -(uint)(fVar75 <= *(float *)pauVar2[7]);
              uVar19 = movmskps(local_14,auVar28);
              uVar88 = uVar84;
              uVar89 = uVar85;
              uVar90 = uVar86;
              uVar91 = uVar87;
              if ((uVar19 & 1) != 0) {
                auVar81._0_4_ = fVar75 - *(float *)pauVar2[6];
                auVar81._4_4_ = fVar75 - *(float *)(pauVar2[6] + 4);
                auVar81._8_4_ = fVar75 - *(float *)(pauVar2[6] + 8);
                auVar81._12_4_ = fVar75 - *(float *)(pauVar2[6] + 0xc);
                auVar24 = divps(auVar81,pauVar2[5]);
                auVar24 = maxps(auVar24,_DAT_100b5b80);
                _local_80 = minps(auVar24,_DAT_100b5cb0);
                fVar75 = local_80._0_4_;
                auVar29._4_4_ = -(uint)(local_80._4_4_ == 0.0);
                auVar29._0_4_ = -(uint)(fVar75 == 1.0);
                auVar29._8_4_ = -(uint)(local_80._8_4_ == 0.0);
                auVar29._12_4_ = -(uint)(local_80._12_4_ == 0.0);
                iVar17 = movmskps(uVar19,auVar29);
                auVar77 = _local_80;
                if (iVar17 == 0) {
                  fVar74 = (float)piVar3[0x14];
                  uVar84 = SUB41(fVar74,0);
                  uVar85 = (undefined1)((uint)fVar74 >> 8);
                  uVar86 = (undefined1)((uint)fVar74 >> 0x10);
                  uVar87 = (undefined1)((uint)fVar74 >> 0x18);
                  uVar88 = 0;
                  uVar89 = 0;
                  uVar90 = 0;
                  uVar91 = 0;
                  uVar19 = (uint)(fVar75 * 1024.0);
                  auVar77 = _DAT_100b5cb0;
                  if (fVar74 != 0.0) {
                    auVar77 = ZEXT816(0);
                  }
                  if (uVar19 != 0) {
                    if ((0x3ff < uVar19) ||
                       (fVar74 = *(float *)(*(int *)((int)this + 0xa40) + uVar19 * 4) * fVar74,
                       1024.0 <= ABS(fVar74))) {
                      auVar30._0_8_ = (double)fVar75;
                      auVar30._8_8_ = 0;
                      FUN_100acad0();
                      fVar75 = (float)auVar30._0_8_;
                      fVar34 = local_50;
                      fVar98 = fStack_4c;
                      fVar99 = fStack_48;
                      fVar100 = fStack_44;
                    }
                    else {
                      iVar17 = (int)fVar74;
                      iVar22 = (int)((fVar74 - (float)iVar17) * 1024.0);
                      if (iVar17 < 0) {
                        fVar75 = *(float *)(*(int *)((int)this + 0xa44) + iVar22 * 4) /
                                 *(float *)(*(int *)((int)this + 0xa48) + iVar17 * -4);
                      }
                      else {
                        fVar75 = *(float *)(*(int *)((int)this + 0xa44) + iVar22 * 4) *
                                 *(float *)(*(int *)((int)this + 0xa48) + iVar17 * 4);
                      }
                    }
                    auVar77._4_4_ = fVar75;
                    auVar77._0_4_ = fVar75;
                    auVar77._8_4_ = fVar75;
                    auVar77._12_4_ = fVar75;
                  }
                }
              }
            }
            _local_80 = auVar77;
            if (param_14 != (uint *)0x0) {
              uVar19 = *param_6;
              auVar9[0xc] = (char)(uVar19 >> 0x18);
              auVar9._0_12_ = ZEXT712(0);
              auVar78._0_4_ = (float)(uVar19 & 0xff);
              auVar78._4_4_ = (float)(uVar19 >> 8 & 0xff);
              auVar78._8_4_ = (float)(int)CONCAT32(auVar9._10_3_,(ushort)(byte)(uVar19 >> 0x10));
              auVar78._12_4_ = (float)(uint3)(auVar9._10_3_ >> 0x10);
              auVar24 = divps(auVar78,_DAT_100b5d10);
              local_60._0_4_ =
                   (local_80._0_4_ * *(float *)pauVar2[2] * auVar24._0_4_ * local_f0._0_4_ +
                   (float)local_100._0_4_ * *(float *)pauVar2[3]) * (float)local_90._0_4_ +
                   (float)local_60._0_4_;
              local_60._4_4_ =
                   (local_80._4_4_ * *(float *)(pauVar2[2] + 4) * auVar24._4_4_ * local_f0._4_4_ +
                   (float)local_100._4_4_ * *(float *)(pauVar2[3] + 4)) * (float)local_90._4_4_ +
                   (float)local_60._4_4_;
              fStack_58 = (local_80._8_4_ * *(float *)(pauVar2[2] + 8) * auVar24._8_4_ *
                           local_f0._8_4_ + fStack_f8 * *(float *)(pauVar2[3] + 8)) * fStack_88 +
                          fStack_58;
              fStack_54 = (local_80._12_4_ * *(float *)(pauVar2[2] + 0xc) * auVar24._12_4_ *
                           local_f0._12_4_ + fStack_f4 * *(float *)(pauVar2[3] + 0xc)) * fStack_84 +
                          fStack_54;
            }
            if ((param_15 == (uint *)0x0) || (*(int *)((int)this + 0x300) == 0)) goto LAB_10018e95;
            pfVar18 = &local_b0;
            if (*(int *)((int)this + 0x4c4) == 0) {
              pfVar18 = (float *)&local_110;
            }
            fVar75 = *(float *)((int)this + 0x144);
            uVar84 = SUB41(fVar75,0);
            uVar85 = (undefined1)((uint)fVar75 >> 8);
            uVar86 = (undefined1)((uint)fVar75 >> 0x10);
            uVar87 = (undefined1)((uint)fVar75 >> 0x18);
            uVar88 = 0;
            uVar89 = 0;
            uVar90 = 0;
            uVar91 = 0;
            fVar74 = (float)local_d0 - *pfVar18;
            fVar97 = local_d0._4_4_ - pfVar18[1];
            fVar73 = fStack_c8 - pfVar18[2];
            auVar80._0_4_ = fVar74 * fVar74;
            auVar80._4_4_ = fVar97 * fVar97;
            auVar80._8_4_ = fVar73 * fVar73;
            auVar82._0_4_ = auVar80._0_4_ + auVar80._8_4_ + auVar80._4_4_;
            auVar82._4_8_ = auVar80._4_8_;
            auVar82._12_4_ = 0;
            auVar24 = rsqrtss(auVar82,auVar82);
            fVar79 = auVar24._0_4_;
            auVar83._0_4_ =
                 (fVar79 * fVar74 - local_e0) * fVar34 + (fVar79 * fVar73 - fStack_d8) * fVar99 +
                 (fVar79 * fVar97 - fStack_dc) * fVar98;
            auVar83._4_4_ = auVar83._0_4_;
            auVar83._8_4_ = auVar83._0_4_;
            auVar83._12_4_ = auVar83._0_4_;
            auVar24 = minps(auVar83,local_70);
            auVar24 = maxps(auVar24,ZEXT816(0));
            uVar19 = (uint)(auVar24._0_4_ * 1024.0);
            if (fVar75 == 0.0) {
              fVar74 = 1.0;
              fVar97 = 1.0;
              fVar73 = 1.0;
              fVar79 = 1.0;
            }
            else {
              fVar74 = 0.0;
              fVar97 = 0.0;
              fVar73 = 0.0;
              fVar79 = 0.0;
            }
            if (uVar19 != 0) {
              if ((0x3ff < uVar19) ||
                 (fVar75 = *(float *)(*(int *)((int)this + 0xa40) + uVar19 * 4) * fVar75,
                 1024.0 <= ABS(fVar75))) {
                dVar23 = (double)auVar24._0_4_;
                FUN_100acad0();
                fVar74 = (float)dVar23;
                fVar34 = local_50;
                fVar98 = fStack_4c;
                fVar99 = fStack_48;
                fVar100 = fStack_44;
                fVar97 = fVar74;
                fVar73 = fVar74;
                fVar79 = fVar74;
              }
              else {
                iVar17 = (int)fVar75;
                iVar22 = (int)((fVar75 - (float)iVar17) * 1024.0);
                if (iVar17 < 0) {
                  fVar74 = *(float *)(*(int *)((int)this + 0xa44) + iVar22 * 4) /
                           *(float *)(*(int *)((int)this + 0xa48) + iVar17 * -4);
                  fVar97 = fVar74;
                  fVar73 = fVar74;
                  fVar79 = fVar74;
                }
                else {
                  fVar74 = *(float *)(*(int *)((int)this + 0xa44) + iVar22 * 4) *
                           *(float *)(*(int *)((int)this + 0xa48) + iVar17 * 4);
                  fVar97 = fVar74;
                  fVar73 = fVar74;
                  fVar79 = fVar74;
                }
              }
            }
            uVar19 = CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))) ^
                     CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84)));
            uVar84 = (undefined1)uVar19;
            uVar85 = (undefined1)(uVar19 >> 8);
            uVar86 = (undefined1)(uVar19 >> 0x10);
            uVar87 = (undefined1)(uVar19 >> 0x18);
            uVar20 = CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,uVar88))) ^
                     CONCAT13(uVar91,CONCAT12(uVar90,CONCAT11(uVar89,uVar88)));
            uVar88 = (undefined1)uVar20;
            uVar89 = (undefined1)(uVar20 >> 8);
            uVar90 = (undefined1)(uVar20 >> 0x10);
            uVar91 = (undefined1)(uVar20 >> 0x18);
            uVar1 = *param_7;
            auVar7 = ZEXT812(0);
            auVar67._12_3_ = 0;
            auVar67._0_12_ = auVar7;
            auVar67[0xf] = uVar91;
            auVar66._14_2_ = auVar67._14_2_;
            auVar66[0xc] = 0;
            auVar66._0_12_ = auVar7;
            auVar66[0xd] = uVar90;
            auVar65._13_3_ = auVar66._13_3_;
            auVar65[0xc] = 0;
            auVar65._0_12_ = auVar7;
            auVar64._12_4_ = auVar65._12_4_;
            auVar64._0_11_ = ZEXT811(0);
            auVar64[0xb] = uVar89;
            auVar63._11_5_ = auVar64._11_5_;
            auVar63._0_11_ = ZEXT811(0);
            auVar62._10_6_ = auVar63._10_6_;
            auVar62._0_9_ = (unkuint9)0;
            auVar62[9] = uVar88;
            auVar61._9_7_ = auVar62._9_7_;
            auVar61._0_9_ = (unkuint9)0;
            Var11 = CONCAT91(CONCAT81(auVar61._8_8_,uVar87),(char)((uint)uVar1 >> 0x18));
            auVar60._6_10_ = Var11;
            auVar60[5] = uVar86;
            auVar60[4] = (char)((uint)uVar1 >> 0x10);
            auVar60._0_4_ = uVar1;
            auVar14._2_12_ = auVar60._4_12_;
            auVar14[1] = uVar85;
            auVar14[0] = (char)((uint)uVar1 >> 8);
            uVar103 = CONCAT11(uVar84,(char)uVar1);
            auVar59._2_14_ = auVar14;
            auVar70._0_12_ = auVar59._0_12_;
            auVar70._12_2_ = (short)Var11;
            auVar70._14_2_ = (short)(uVar20 >> 0x10);
            auVar69._12_4_ = auVar70._12_4_;
            auVar69._0_10_ = auVar59._0_10_;
            auVar69._10_2_ = (short)uVar20;
            auVar68._10_6_ = auVar69._10_6_;
            auVar68._0_8_ = auVar59._0_8_;
            auVar68._8_2_ = auVar60._4_2_;
            auVar15._4_8_ = auVar68._8_8_;
            auVar15._2_2_ = (short)(uVar19 >> 0x10);
            auVar15._0_2_ = auVar14._0_2_;
            auVar31._0_4_ = (float)CONCAT22((short)uVar19,uVar103);
            auVar31._4_4_ = (float)auVar15._0_4_;
            auVar31._8_4_ = (float)auVar68._8_4_;
            auVar31._12_4_ = (float)auVar69._12_4_;
            auVar24 = divps(auVar31,_DAT_100b5d10);
            local_40._0_4_ =
                 fVar74 * (float)local_80._0_4_ * *(float *)pauVar2[4] * auVar24._0_4_ *
                          (float)local_90._0_4_ + (float)local_40._0_4_;
            local_40._4_4_ =
                 fVar97 * (float)local_80._4_4_ * *(float *)(pauVar2[4] + 4) * auVar24._4_4_ *
                          (float)local_90._4_4_ + (float)local_40._4_4_;
            fStack_38 = fVar73 * fStack_78 * *(float *)(pauVar2[4] + 8) * auVar24._8_4_ * fStack_88
                        + fStack_38;
            fStack_34 = fVar79 * fStack_74 * *(float *)(pauVar2[4] + 0xc) * auVar24._12_4_ *
                                 fStack_84 + fStack_34;
          }
          local_14 = (uint *)((int)local_14 + 1);
          uVar19 = local_1c;
          puVar21 = param_14;
          _local_90 = _DAT_100b5cb0;
        } while (local_14 < local_1c);
      }
      _local_90 = _DAT_100b5cb0;
      if (puVar21 != (uint *)0x0) {
        auVar24 = minps(_local_60,_DAT_100b5cb0);
        auVar24 = maxps(auVar24,ZEXT816(0));
        auVar71._0_8_ = CONCAT44((int)(auVar24._4_4_ * 255.0),(int)(auVar24._0_4_ * 255.0));
        auVar71._8_4_ = (int)(auVar24._8_4_ * 255.0);
        auVar71._12_4_ = (int)(auVar24._12_4_ * 255.0);
        auVar32._8_4_ = auVar71._8_4_;
        auVar32._0_8_ = auVar71._0_8_;
        auVar32._12_4_ = auVar71._12_4_;
        auVar24 = packssdw(auVar32,auVar71);
        sVar4 = auVar24._0_2_;
        sVar5 = auVar24._2_2_;
        sVar6 = auVar24._4_2_;
        *puVar21 = (uint)CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar24[4] - (0xff < sVar6),
                                  CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar24[2] -
                                           (0xff < sVar5),
                                           (0 < sVar4) * (sVar4 < 0x100) * auVar24[0] -
                                           (0xff < sVar4))) | *param_6 & 0xff000000;
        puVar21 = (uint *)((int)puVar21 + param_16);
        param_14 = puVar21;
      }
      if (param_15 != (uint *)0x0) {
        if (*(int *)((int)this + 0x300) == 0) {
          uVar20 = *param_8 & 0xff000000;
        }
        else {
          auVar24 = minps(_local_40,_local_90);
          auVar24 = maxps(auVar24,ZEXT816(0));
          auVar72._0_8_ = CONCAT44((int)(auVar24._4_4_ * 255.0),(int)(auVar24._0_4_ * 255.0));
          auVar72._8_4_ = (int)(auVar24._8_4_ * 255.0);
          auVar72._12_4_ = (int)(auVar24._12_4_ * 255.0);
          auVar33._8_4_ = auVar72._8_4_;
          auVar33._0_8_ = auVar72._0_8_;
          auVar33._12_4_ = auVar72._12_4_;
          auVar24 = packssdw(auVar33,auVar72);
          sVar4 = auVar24._0_2_;
          sVar5 = auVar24._2_2_;
          sVar6 = auVar24._4_2_;
          uVar20 = (uint)CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar24[4] - (0xff < sVar6),
                                  CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar24[2] -
                                           (0xff < sVar5),
                                           (0 < sVar4) * (sVar4 < 0x100) * auVar24[0] -
                                           (0xff < sVar4))) | *param_8 & 0xff000000;
        }
        *param_15 = uVar20;
        param_15 = (uint *)((int)param_15 + param_17);
        param_8 = (uint *)((int)param_8 + param_13);
      }
      param_4 = (undefined4 *)((int)param_4 + param_9);
      param_5 = (undefined4 *)((int)param_5 + param_10);
      param_6 = (uint *)((int)param_6 + param_11);
      param_7 = (undefined4 *)((int)param_7 + param_12);
      local_20 = (void *)((int)local_20 + 1);
      fVar75 = local_c0;
      fVar74 = fStack_bc;
      fVar97 = fStack_b8;
      fVar73 = fStack_b4;
    } while (local_20 < param_18);
  }
  return;
}

