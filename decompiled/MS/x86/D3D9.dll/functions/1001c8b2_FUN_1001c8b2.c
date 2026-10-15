/*
 * FUN_1001c8b2 at 1001c8b2
 * undefined __thiscall FUN_1001c8b2(void * this, int param_1, undefined4 param_2, undefined4 param_3, uint * param_4, uint * param_5, undefined1[16] * param_6, uint * param_7, uint * param_8, int param_9, int param_10, int param_11, int param_12, int param_13, byte param_14, byte param_15, byte param_16, byte param_17, uint * param_18, uint * param_19, int param_20, int param_21, uint param_22)
 * Address ranges: 1001c8b2-1001d22e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1001c8b2(void *this,int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
            uint *param_5,undefined1 (*param_6) [16],uint *param_7,uint *param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13,byte param_14,byte param_15,
            byte param_16,byte param_17,uint *param_18,uint *param_19,int param_20,int param_21,
            uint param_22)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 (*pauVar4) [16];
  int *piVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [14];
  unkbyte10 Var19;
  undefined1 auVar20 [14];
  undefined1 auVar21 [12];
  SIZE_T SVar22;
  int iVar23;
  uint uVar24;
  float *pfVar25;
  int iVar26;
  void *this_00;
  void *pvVar27;
  uint uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined2 uVar93;
  undefined2 uVar94;
  float fVar40;
  undefined1 auVar50 [16];
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  ulonglong local_100;
  float fStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [8];
  float fStack_b8;
  undefined1 local_b0 [8];
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [8];
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [8];
  float fStack_68;
  float fStack_64;
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
  void *local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  void *local_14;
  undefined1 auVar42 [16];
  undefined1 auVar54 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar51 [16];
  undefined1 auVar63 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  undefined1 auVar41 [16];
  undefined1 auVar53 [16];
  
  local_24 = this;
  FUN_1001a7d4((int)this);
  iVar23 = *(int *)((int)this + 0xd80);
  uVar28 = *(uint *)((int)this + 0x31c);
  fVar1 = *(float *)(iVar23 + 0x865c);
  fVar2 = *(float *)(iVar23 + 0x866c);
  fVar40 = fVar1 - *(float *)(iVar23 + 0x8658);
  fVar3 = *(float *)(iVar23 + 0x864c);
  uVar81 = 0;
  uVar82 = 0;
  uVar83 = 0;
  uVar84 = 0;
  uVar85 = 0;
  uVar86 = 0;
  uVar87 = 0;
  uVar88 = 0;
  uVar24 = *(uint *)((int)this + 0x65c);
  auVar13[0xc] = (char)(uVar24 >> 0x18);
  auVar13._0_12_ = ZEXT712(0);
  local_100 = CONCAT44(fVar40,fVar40) ^ 0x8000000080000000;
  fStack_f8 = -(fVar2 - *(float *)(iVar23 + 0x8668));
  uStack_f4 = 0x3f800000;
  local_f0 = (float)(uVar24 & 0xff);
  fStack_ec = (float)(uVar24 >> 8 & 0xff);
  fStack_e8 = (float)(int)CONCAT32(auVar13._10_3_,(ushort)(byte)(uVar24 >> 0x10));
  fStack_e4 = (float)(uint3)(auVar13._10_3_ >> 0x10);
  if (*(uint *)((int)this + 0xd68) < uVar28) {
    thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xd60));
    *(undefined4 *)((int)this + 0xd68) = 0;
    SVar22 = (SIZE_T)((ulonglong)uVar28 * 8);
    if ((int)((ulonglong)uVar28 * 8 >> 0x20) != 0) {
      SVar22 = 0xffffffff;
    }
    iVar23 = FUN_100cfd89(SVar22);
    *(int *)((int)this + 0xd60) = iVar23;
    uVar24 = CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81))) ^
             CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81)));
    uVar81 = (undefined1)uVar24;
    uVar82 = (undefined1)(uVar24 >> 8);
    uVar83 = (undefined1)(uVar24 >> 0x10);
    uVar84 = (undefined1)(uVar24 >> 0x18);
    uVar24 = CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) ^
             CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85)));
    uVar85 = (undefined1)uVar24;
    uVar86 = (undefined1)(uVar24 >> 8);
    uVar87 = (undefined1)(uVar24 >> 0x10);
    uVar88 = (undefined1)(uVar24 >> 0x18);
    uVar24 = 0;
    if (iVar23 != 0) {
      uVar24 = uVar28;
    }
    *(uint *)((int)this + 0xd68) = uVar24;
  }
  local_18 = *(int *)((int)this + 0xd60);
  pvVar27 = (void *)0x0;
  local_14 = (void *)0x0;
  if ((local_18 != 0) && (uVar28 = 0, *(int *)((int)this + 0x31c) != 0)) {
    this_00 = (void *)((int)this + 0x2fc);
    do {
      local_1c = (uint *)(*(int *)((int)this + 0x318) + uVar28 * 4);
      if (*local_1c != 0xffffffff) {
        uVar24 = FUN_1001a0f1(this_00,*local_1c,0);
        if (uVar24 == *(uint *)((int)this + 0x304)) {
LAB_1001ca3c:
          local_20 = 0;
        }
        else {
          iVar23 = *(int *)((int)this + 0x300);
          iVar26 = uVar24 * 0xa0;
          this = local_24;
          if ((*(uint *)(iVar26 + iVar23) != *local_1c) || (*(int *)(iVar26 + 4 + iVar23) != 0))
          goto LAB_1001ca3c;
          local_20 = iVar23 + 0x20 + iVar26;
        }
        iVar23 = FUN_10009dee((void *)((int)this + 0x2ec),local_1c);
        if ((local_20 != 0) && (iVar23 != 0)) {
          *(uint *)(local_18 + (int)local_14 * 8) = local_20;
          *(int *)(local_18 + 4 + (int)local_14 * 8) = iVar23;
          local_14 = (void *)((int)local_14 + 1);
          this = local_24;
        }
        this_00 = (void *)((int)this + 0x2fc);
        pvVar27 = local_14;
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < *(uint *)((int)this + 0x31c));
  }
  if (*(int *)((int)this + 0x66c) == 0) {
    local_90 = 0x7f7fffff;
    uStack_8c = 0x7f7fffff;
    uStack_88 = 0x7f7fffff;
    uStack_84 = 0x7f7fffff;
  }
  else {
    local_90 = 0x3f800000;
    uStack_8c = 0x3f800000;
    uStack_88 = 0x3f800000;
    uStack_84 = 0x3f800000;
  }
  local_20 = 0;
  if (param_22 != 0) {
    local_1c = (uint *)(uint)param_14;
    _local_c0 = local_d0;
    auVar30 = local_d0;
    local_50 = local_e0;
    fStack_4c = fStack_dc;
    fStack_48 = fStack_d8;
    fStack_44 = fStack_d4;
    do {
      iVar23 = local_18;
      auVar39 = auVar30;
      if (pvVar27 != (void *)0x0) {
        _local_c0 = *(undefined1 (*) [16])(local_20 * 0x20 + param_1);
        pfVar25 = (float *)(local_20 * 0x20 + 0x10 + param_1);
        local_50 = *pfVar25;
        fStack_4c = pfVar25[1];
        fStack_48 = pfVar25[2];
        fStack_44 = pfVar25[3];
        local_d0 = _local_c0;
        auVar39 = _local_c0;
        if (*(int *)((int)this + 0x66c) != 0) {
          fVar40 = local_50 * local_50 + fStack_48 * fStack_48 + fStack_4c * fStack_4c;
          auVar67._4_4_ = fVar40;
          auVar67._0_4_ = fVar40;
          auVar67._8_4_ = fVar40;
          auVar67._12_4_ = fVar40;
          auVar30 = rsqrtss(auVar67,auVar67);
          auVar39._0_4_ = auVar30._0_4_;
          auVar39._4_4_ = auVar39._0_4_;
          auVar39._8_4_ = auVar39._0_4_;
          auVar39._12_4_ = auVar39._0_4_;
          local_50 = (float)(-(uint)(0.0 < fVar40) & auVar39._0_4_) * local_50;
          fStack_4c = (float)(-(uint)(0.0 < fVar40) & auVar39._0_4_) * fStack_4c;
          fStack_48 = (float)(-(uint)(0.0 < fVar40) & auVar39._0_4_) * fStack_48;
          fStack_44 = (float)(-(uint)(0.0 < fVar40) & auVar39._0_4_) * 0.0;
        }
      }
      if (local_1c == (uint *)0x4) {
        uVar28 = *param_4;
        auVar12 = ZEXT812(0);
        auVar49._12_3_ = 0;
        auVar49._0_12_ = auVar12;
        auVar49[0xf] = uVar88;
        auVar48._14_2_ = auVar49._14_2_;
        auVar48[0xc] = 0;
        auVar48._0_12_ = auVar12;
        auVar48[0xd] = uVar87;
        auVar47._13_3_ = auVar48._13_3_;
        auVar47[0xc] = 0;
        auVar47._0_12_ = auVar12;
        auVar46._12_4_ = auVar47._12_4_;
        auVar46._0_11_ = ZEXT811(0);
        auVar46[0xb] = uVar86;
        auVar45._11_5_ = auVar46._11_5_;
        auVar45._0_11_ = ZEXT811(0);
        auVar44._10_6_ = auVar45._10_6_;
        auVar44._0_9_ = (unkuint9)0;
        auVar44[9] = uVar85;
        auVar43._9_7_ = auVar44._9_7_;
        auVar43._0_9_ = (unkuint9)0;
        Var19 = CONCAT91(CONCAT81(auVar43._8_8_,uVar84),(char)(uVar28 >> 0x18));
        auVar42._6_10_ = Var19;
        auVar42[5] = uVar83;
        auVar42[4] = (char)(uVar28 >> 0x10);
        auVar42._0_4_ = uVar28;
        auVar18._2_12_ = auVar42._4_12_;
        auVar18[1] = uVar82;
        auVar18[0] = (char)(uVar28 >> 8);
        uVar93 = CONCAT11(uVar81,(char)uVar28);
        auVar41._2_14_ = auVar18;
        auVar52[0xf] = uVar88;
        auVar52[0xe] = uVar87;
        auVar52._0_12_ = auVar41._0_12_;
        auVar52._12_2_ = (short)Var19;
        auVar51._12_4_ = auVar52._12_4_;
        auVar51._0_10_ = auVar41._0_10_;
        auVar51[0xb] = uVar86;
        auVar51[10] = uVar85;
        auVar50._10_6_ = auVar51._10_6_;
        auVar50._0_8_ = auVar41._0_8_;
        auVar50._8_2_ = auVar42._4_2_;
        auVar12[3] = uVar84;
        auVar12[2] = uVar83;
        auVar12._4_8_ = auVar50._8_8_;
        auVar12._0_2_ = auVar18._0_2_;
        auVar31._0_4_ = (float)CONCAT22(CONCAT11(uVar82,uVar81),uVar93);
        auVar31._4_4_ = (float)auVar12._0_4_;
        auVar31._8_4_ = (float)auVar50._8_4_;
        auVar31._12_4_ = (float)auVar51._12_4_;
        auVar39 = divps(auVar31,_DAT_100d97d0);
      }
      else {
        FUN_100277fd(param_4,(uint)local_1c);
        uVar28 = CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81))) ^
                 CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81)));
        uVar81 = (undefined1)uVar28;
        uVar82 = (undefined1)(uVar28 >> 8);
        uVar83 = (undefined1)(uVar28 >> 0x10);
        uVar84 = (undefined1)(uVar28 >> 0x18);
        uVar28 = CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) ^
                 CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85)));
        uVar85 = (undefined1)uVar28;
        uVar86 = (undefined1)(uVar28 >> 8);
        uVar87 = (undefined1)(uVar28 >> 0x10);
        uVar88 = (undefined1)(uVar28 >> 0x18);
      }
      _local_80 = auVar39;
      if (param_18 == (uint *)0x0) {
        auVar30 = ZEXT816(0);
      }
      else {
        if (param_15 == 4) {
          uVar28 = *param_5;
          auVar12 = ZEXT812(0);
          auVar61._12_3_ = 0;
          auVar61._0_12_ = auVar12;
          auVar61[0xf] = uVar88;
          auVar60._14_2_ = auVar61._14_2_;
          auVar60[0xc] = 0;
          auVar60._0_12_ = auVar12;
          auVar60[0xd] = uVar87;
          auVar59._13_3_ = auVar60._13_3_;
          auVar59[0xc] = 0;
          auVar59._0_12_ = auVar12;
          auVar58._12_4_ = auVar59._12_4_;
          auVar58._0_11_ = ZEXT811(0);
          auVar58[0xb] = uVar86;
          auVar57._11_5_ = auVar58._11_5_;
          auVar57._0_11_ = ZEXT811(0);
          auVar56._10_6_ = auVar57._10_6_;
          auVar56._0_9_ = (unkuint9)0;
          auVar56[9] = uVar85;
          auVar55._9_7_ = auVar56._9_7_;
          auVar55._0_9_ = (unkuint9)0;
          Var19 = CONCAT91(CONCAT81(auVar55._8_8_,uVar84),(char)(uVar28 >> 0x18));
          auVar54._6_10_ = Var19;
          auVar54[5] = uVar83;
          auVar54[4] = (char)(uVar28 >> 0x10);
          auVar54._0_4_ = uVar28;
          auVar20._2_12_ = auVar54._4_12_;
          auVar20[1] = uVar82;
          auVar20[0] = (char)(uVar28 >> 8);
          uVar94 = CONCAT11(uVar81,(char)uVar28);
          auVar53._2_14_ = auVar20;
          auVar64[0xf] = uVar88;
          auVar64[0xe] = uVar87;
          auVar64._0_12_ = auVar53._0_12_;
          auVar64._12_2_ = (short)Var19;
          auVar63._12_4_ = auVar64._12_4_;
          auVar63._0_10_ = auVar53._0_10_;
          auVar63[0xb] = uVar86;
          auVar63[10] = uVar85;
          auVar62._10_6_ = auVar63._10_6_;
          auVar62._0_8_ = auVar53._0_8_;
          auVar62._8_2_ = auVar54._4_2_;
          auVar21[3] = uVar84;
          auVar21[2] = uVar83;
          auVar21._4_8_ = auVar62._8_8_;
          auVar21._0_2_ = auVar20._0_2_;
          auVar65._0_4_ = (float)CONCAT22(CONCAT11(uVar82,uVar81),uVar94);
          auVar65._4_4_ = (float)auVar21._0_4_;
          auVar65._8_4_ = (float)auVar62._8_4_;
          auVar65._12_4_ = (float)auVar63._12_4_;
        }
        else {
          FUN_10027b35(param_5,(uint)param_15);
          auVar65 = auVar39;
        }
        auVar32._0_4_ = (float)local_80._0_4_ * local_f0 + auVar65._0_4_;
        auVar32._4_4_ = (float)local_80._4_4_ * fStack_ec + auVar65._4_4_;
        auVar32._8_4_ = fStack_78 * fStack_e8 + auVar65._8_4_;
        auVar32._12_4_ = fStack_74 * fStack_e4 + auVar65._12_4_;
        auVar30 = divps(auVar32,_DAT_100d97d0);
      }
      local_24 = (void *)0x0;
      _local_b0 = ZEXT816(0);
      _local_70 = auVar30;
      if (local_14 != (void *)0x0) {
        do {
          fVar72 = 0.0;
          pauVar4 = *(undefined1 (**) [16])(iVar23 + (int)local_24 * 8);
          fVar40 = 0.0;
          local_a0 = 1.0;
          fStack_9c = 1.0;
          fStack_98 = 1.0;
          fStack_94 = 1.0;
          piVar5 = *(int **)(local_18 + 4 + (int)local_24 * 8);
          auVar39 = *pauVar4;
          uVar81 = auVar39[0];
          uVar82 = auVar39[1];
          uVar83 = auVar39[2];
          uVar84 = auVar39[3];
          uVar85 = auVar39[4];
          uVar86 = auVar39[5];
          uVar87 = auVar39[6];
          uVar88 = auVar39[7];
          fVar89 = auVar39._0_4_;
          fVar90 = auVar39._4_4_;
          fVar91 = auVar39._8_4_;
          if (*piVar5 != 3) {
            fVar89 = (float)local_c0._0_4_ - (float)*(undefined8 *)(piVar5 + 0xd);
            fVar90 = (float)local_c0._4_4_ -
                     (float)((ulonglong)*(undefined8 *)(piVar5 + 0xd) >> 0x20);
            fVar91 = fStack_b8 - (float)piVar5[0xf];
            fVar40 = (float)piVar5[0x13];
            fVar72 = SQRT(fVar89 * fVar89 + fVar91 * fVar91 + fVar90 * fVar90);
            fVar92 = (fVar72 * 1.0 + 0.0) * *(float *)(pauVar4[1] + 4);
            auVar33._4_4_ = fVar92;
            auVar33._0_4_ = fVar92;
            auVar33._8_4_ = fVar92;
            auVar33._12_4_ = fVar92;
            fVar92 = (fVar72 * fVar72 + 0.0) * *(float *)pauVar4[1] +
                     (fVar72 * 0.0 + 1.0) * *(float *)(pauVar4[1] + 8) + fVar92;
            auVar10._4_4_ = fVar92;
            auVar10._0_4_ = fVar92;
            auVar10._8_4_ = fVar92;
            auVar10._12_4_ = fVar92;
            auVar30 = rcpps(auVar33,auVar10);
            local_a0 = (float)(~-(uint)(fVar92 == 0.0) & auVar30._0_4_);
            fStack_9c = (float)(~-(uint)(fVar92 == 0.0) & auVar30._4_4_);
            fStack_98 = (float)(~-(uint)(fVar92 == 0.0) & auVar30._8_4_);
            fStack_94 = (float)(~-(uint)(fVar92 == 0.0) & auVar30._12_4_);
          }
          if (fVar72 <= fVar40) {
            auVar73._8_4_ = 0x3f800000;
            auVar73._0_8_ = 0x3f8000003f800000;
            auVar73._12_4_ = 0x3f800000;
            auVar75._0_4_ = fVar89 * fVar89;
            auVar75._4_4_ = fVar90 * fVar90;
            auVar75._8_4_ = fVar91 * fVar91;
            auVar77._0_4_ = auVar75._0_4_ + auVar75._8_4_ + auVar75._4_4_;
            auVar77._4_8_ = auVar75._4_8_;
            auVar77._12_4_ = 0;
            auVar30 = rsqrtss(auVar77,auVar77);
            fVar40 = auVar30._0_4_;
            local_e0 = fVar40 * fVar89;
            fStack_dc = fVar40 * fVar90;
            fStack_d8 = fVar40 * fVar91;
            fStack_d4 = fVar40 * 0.0;
            fVar40 = -fStack_dc * fStack_4c;
            auVar30._4_4_ = fVar40;
            auVar30._0_4_ = fVar40;
            auVar30._8_4_ = fVar40;
            auVar30._12_4_ = fVar40;
            auVar66._0_4_ = -local_e0 * local_50 + -fStack_d8 * fStack_48 + fVar40;
            auVar66._4_4_ = auVar66._0_4_;
            auVar66._8_4_ = auVar66._0_4_;
            auVar66._12_4_ = auVar66._0_4_;
            auVar16._4_4_ = uStack_8c;
            auVar16._0_4_ = local_90;
            auVar16._8_4_ = uStack_88;
            auVar16._12_4_ = uStack_84;
            auVar67 = minps(auVar66,auVar16);
            _local_40 = maxps(auVar67,ZEXT816(0));
            if (*piVar5 == 2) {
              fVar40 = auVar39._0_4_ * local_e0 + auVar39._8_4_ * fStack_d8 +
                       auVar39._4_4_ * fStack_dc;
              uVar81 = SUB41(fVar40,0);
              uVar82 = (undefined1)((uint)fVar40 >> 8);
              uVar83 = (undefined1)((uint)fVar40 >> 0x10);
              uVar84 = (undefined1)((uint)fVar40 >> 0x18);
              auVar34._4_4_ = fVar40;
              auVar34._0_4_ = fVar40;
              auVar34._8_4_ = fVar40;
              auVar34._12_4_ = fVar40;
              auVar30._4_12_ = auVar34._4_12_;
              auVar30._0_4_ = (float)-(uint)(fVar40 <= *(float *)pauVar4[7]);
              uVar28 = movmskps(local_18,auVar30);
              uVar85 = uVar81;
              uVar86 = uVar82;
              uVar87 = uVar83;
              uVar88 = uVar84;
              if ((uVar28 & 1) != 0) {
                auVar74._0_4_ = fVar40 - *(float *)pauVar4[6];
                auVar74._4_4_ = fVar40 - *(float *)(pauVar4[6] + 4);
                auVar74._8_4_ = fVar40 - *(float *)(pauVar4[6] + 8);
                auVar74._12_4_ = fVar40 - *(float *)(pauVar4[6] + 0xc);
                auVar30 = divps(auVar74,pauVar4[5]);
                auVar30 = maxps(auVar30,_DAT_100d95e0);
                auVar11._8_4_ = 0x3f800000;
                auVar11._0_8_ = 0x3f8000003f800000;
                auVar11._12_4_ = 0x3f800000;
                _local_60 = minps(auVar30,auVar11);
                fVar40 = local_60._0_4_;
                auVar30._4_4_ = (float)-(uint)(local_60._4_4_ == 0.0);
                auVar30._0_4_ = (float)-(uint)(fVar40 == 1.0);
                auVar30._8_4_ = (float)-(uint)(local_60._8_4_ == 0.0);
                auVar30._12_4_ = (float)-(uint)(local_60._12_4_ == 0.0);
                iVar23 = movmskps(uVar28,auVar30);
                auVar73 = _local_60;
                if (iVar23 == 0) {
                  fVar89 = (float)piVar5[0x14];
                  uVar81 = SUB41(fVar89,0);
                  uVar82 = (undefined1)((uint)fVar89 >> 8);
                  uVar83 = (undefined1)((uint)fVar89 >> 0x10);
                  uVar84 = (undefined1)((uint)fVar89 >> 0x18);
                  uVar85 = 0;
                  uVar86 = 0;
                  uVar87 = 0;
                  uVar88 = 0;
                  auVar30._0_4_ = (float)(int)(fVar40 * 1024.0);
                  auVar30._4_4_ = (float)(int)local_60._4_4_;
                  auVar30._8_4_ = (float)(int)local_60._8_4_;
                  auVar30._12_4_ = (float)(int)local_60._12_4_;
                  if (fVar89 == 0.0) {
                    auVar73._8_4_ = 0x3f800000;
                    auVar73._0_8_ = 0x3f8000003f800000;
                    auVar73._12_4_ = 0x3f800000;
                  }
                  else {
                    auVar73._0_12_ = ZEXT812(0);
                    auVar73._12_4_ = 0;
                  }
                  if (auVar30._0_4_ != 0.0) {
                    if ((0x3ff < (uint)auVar30._0_4_) ||
                       (fVar89 = *(float *)(*(int *)((int)this + 0xd04) + (int)auVar30._0_4_ * 4) *
                                 fVar89, 1024.0 <= ABS(fVar89))) {
                      auVar30._0_8_ = (double)fVar40;
                      auVar30._8_8_ = 0;
                      FUN_100cf3b0();
                      fVar40 = (float)auVar30._0_8_;
                    }
                    else {
                      iVar23 = (int)fVar89;
                      uVar28 = (uint)((fVar89 - (float)iVar23) * 1024.0);
                      auVar30 = ZEXT416(uVar28);
                      if (iVar23 < 0) {
                        fVar40 = *(float *)(*(int *)((int)this + 0xd08) + uVar28 * 4) /
                                 *(float *)(*(int *)((int)this + 0xd0c) + iVar23 * -4);
                      }
                      else {
                        fVar40 = *(float *)(*(int *)((int)this + 0xd08) + uVar28 * 4) *
                                 *(float *)(*(int *)((int)this + 0xd0c) + iVar23 * 4);
                      }
                    }
                    auVar73._4_4_ = fVar40;
                    auVar73._0_4_ = fVar40;
                    auVar73._8_4_ = fVar40;
                    auVar73._12_4_ = fVar40;
                  }
                }
              }
            }
            _local_60 = auVar73;
            if (param_18 != (uint *)0x0) {
              if (param_16 == 4) {
                uVar28 = *(uint *)*param_6;
                auVar14[0xc] = (char)(uVar28 >> 0x18);
                auVar14._0_12_ = ZEXT712(0);
                auVar78._0_4_ = (float)(uVar28 & 0xff);
                auVar78._4_4_ = (float)(uVar28 >> 8 & 0xff);
                auVar78._8_4_ = (float)(int)CONCAT32(auVar14._10_3_,(ushort)(byte)(uVar28 >> 0x10));
                auVar78._12_4_ = (float)(uint3)(auVar14._10_3_ >> 0x10);
                auVar39 = divps(auVar78,_DAT_100d97d0);
              }
              else {
                FUN_100277fd((uint *)param_6,(uint)param_16);
                auVar39 = auVar30;
              }
              auVar30._0_4_ = (float)local_80._0_4_ * *(float *)pauVar4[3];
              auVar30._4_4_ = (float)local_80._4_4_ * *(float *)(pauVar4[3] + 4);
              auVar30._8_4_ = fStack_78 * *(float *)(pauVar4[3] + 8);
              auVar30._12_4_ = fStack_74 * *(float *)(pauVar4[3] + 0xc);
              local_70._0_4_ =
                   (local_60._0_4_ * *(float *)pauVar4[2] * auVar39._0_4_ * (float)local_40._0_4_ +
                   auVar30._0_4_) * local_a0 + (float)local_70._0_4_;
              local_70._4_4_ =
                   (local_60._4_4_ * *(float *)(pauVar4[2] + 4) * auVar39._4_4_ *
                    (float)local_40._4_4_ + auVar30._4_4_) * fStack_9c + (float)local_70._4_4_;
              fStack_68 = (local_60._8_4_ * *(float *)(pauVar4[2] + 8) * auVar39._8_4_ * fStack_38 +
                          auVar30._8_4_) * fStack_98 + fStack_68;
              fStack_64 = (local_60._12_4_ * *(float *)(pauVar4[2] + 0xc) * auVar39._12_4_ *
                           fStack_34 + auVar30._12_4_) * fStack_94 + fStack_64;
            }
            if ((param_19 != (uint *)0x0) && (*(int *)((int)this + 0x4a4) != 0)) {
              pfVar25 = (float *)local_d0;
              if (*(int *)((int)this + 0x668) == 0) {
                pfVar25 = (float *)&local_100;
              }
              fVar40 = *(float *)((int)this + 0x2e8);
              uVar81 = SUB41(fVar40,0);
              uVar82 = (undefined1)((uint)fVar40 >> 8);
              uVar83 = (undefined1)((uint)fVar40 >> 0x10);
              uVar84 = (undefined1)((uint)fVar40 >> 0x18);
              uVar85 = 0;
              uVar86 = 0;
              uVar87 = 0;
              uVar88 = 0;
              fVar89 = fVar3 - *pfVar25;
              fVar90 = fVar1 - pfVar25[1];
              fVar91 = fVar2 - pfVar25[2];
              auVar76._0_4_ = fVar89 * fVar89;
              auVar76._4_4_ = fVar90 * fVar90;
              auVar76._8_4_ = fVar91 * fVar91;
              auVar79._0_4_ = auVar76._0_4_ + auVar76._8_4_ + auVar76._4_4_;
              auVar79._4_8_ = auVar76._4_8_;
              auVar79._12_4_ = 0;
              auVar30 = rsqrtss(auVar79,auVar79);
              fVar72 = auVar30._0_4_;
              _local_40 = ZEXT816(0);
              auVar80._0_4_ =
                   (fVar72 * fVar89 - local_e0) * local_50 +
                   (fVar72 * fVar91 - fStack_d8) * fStack_48 +
                   (fVar72 * fVar90 - fStack_dc) * fStack_4c;
              auVar80._4_4_ = auVar80._0_4_;
              auVar80._8_4_ = auVar80._0_4_;
              auVar80._12_4_ = auVar80._0_4_;
              auVar17._4_4_ = uStack_8c;
              auVar17._0_4_ = local_90;
              auVar17._8_4_ = uStack_88;
              auVar17._12_4_ = uStack_84;
              auVar30 = minps(auVar80,auVar17);
              auVar30 = maxps(auVar30,_local_40);
              auVar35._0_4_ = (uint)(auVar30._0_4_ * 1024.0);
              auVar35._4_4_ = (int)auVar30._4_4_;
              auVar35._8_4_ = (int)auVar30._8_4_;
              auVar35._12_4_ = (int)auVar30._12_4_;
              auVar69 = auVar35;
              if (fVar40 == 0.0) {
                _local_40 = _DAT_100d9770;
                auVar69 = _DAT_100d9770;
              }
              if (auVar35._0_4_ != 0) {
                if ((0x3ff < auVar35._0_4_) ||
                   (fVar40 = *(float *)(*(int *)((int)this + 0xd04) + auVar35._0_4_ * 4) * fVar40,
                   1024.0 <= ABS(fVar40))) {
                  dVar29 = (double)auVar30._0_4_;
                  FUN_100cf3b0();
                  auVar69._0_4_ = (float)dVar29;
                  auVar69._4_4_ = auVar69._0_4_;
                  auVar69._8_4_ = auVar69._0_4_;
                  auVar69._12_4_ = auVar69._0_4_;
                  _local_40 = auVar69;
                }
                else {
                  iVar23 = (int)fVar40;
                  uVar28 = (uint)((fVar40 - (float)iVar23) * 1024.0);
                  auVar69 = ZEXT416(uVar28);
                  if (iVar23 < 0) {
                    fVar40 = *(float *)(*(int *)((int)this + 0xd08) + uVar28 * 4) /
                             *(float *)(*(int *)((int)this + 0xd0c) + iVar23 * -4);
                  }
                  else {
                    fVar40 = *(float *)(*(int *)((int)this + 0xd08) + uVar28 * 4) *
                             *(float *)(*(int *)((int)this + 0xd0c) + iVar23 * 4);
                  }
                  local_40._4_4_ = fVar40;
                  local_40._0_4_ = fVar40;
                  fStack_38 = fVar40;
                  fStack_34 = fVar40;
                }
              }
              if (param_17 == 4) {
                uVar28 = *param_7;
                auVar15[0xc] = (char)(uVar28 >> 0x18);
                auVar15._0_12_ = ZEXT712(0);
                auVar68._0_4_ = (float)(uVar28 & 0xff);
                auVar68._4_4_ = (float)(uVar28 >> 8 & 0xff);
                auVar68._8_4_ = (float)(int)CONCAT32(auVar15._10_3_,(ushort)(byte)(uVar28 >> 0x10));
                auVar68._12_4_ = (float)(uint3)(auVar15._10_3_ >> 0x10);
                auVar69 = divps(auVar68,_DAT_100d97d0);
              }
              else {
                FUN_100277fd(param_7,(uint)param_17);
              }
              auVar30._0_4_ =
                   (float)local_60._0_4_ * *(float *)pauVar4[4] * auVar69._0_4_ * local_a0 *
                   (float)local_40._0_4_ + (float)local_b0._0_4_;
              auVar30._4_4_ =
                   (float)local_60._4_4_ * *(float *)(pauVar4[4] + 4) * auVar69._4_4_ * fStack_9c *
                   (float)local_40._4_4_ + (float)local_b0._4_4_;
              auVar30._8_4_ =
                   fStack_58 * *(float *)(pauVar4[4] + 8) * auVar69._8_4_ * fStack_98 * fStack_38 +
                   fStack_a8;
              auVar30._12_4_ =
                   fStack_54 * *(float *)(pauVar4[4] + 0xc) * auVar69._12_4_ * fStack_94 * fStack_34
                   + fStack_a4;
              _local_b0 = auVar30;
            }
          }
          local_24 = (void *)((int)local_24 + 1);
          iVar23 = local_18;
        } while (local_24 < local_14);
      }
      if (param_18 != (uint *)0x0) {
        auVar30 = minps(_local_70,_DAT_100d9770);
        auVar30 = maxps(auVar30,ZEXT816(0));
        iVar23 = (int)(auVar30._0_4_ * 255.0);
        iVar26 = (int)(auVar30._4_4_ * 255.0);
        auVar70._0_8_ = CONCAT44(iVar26,iVar23);
        auVar70._8_4_ = (int)(auVar30._8_4_ * 255.0);
        auVar70._12_4_ = (int)(auVar30._12_4_ * 255.0);
        auVar36._8_4_ = auVar70._8_4_;
        auVar36._0_8_ = auVar70._0_8_;
        auVar36._12_4_ = auVar70._12_4_;
        auVar30 = packssdw(auVar36,auVar70);
        sVar6 = auVar30._0_2_;
        sVar7 = auVar30._2_2_;
        sVar8 = auVar30._4_2_;
        sVar9 = auVar30._6_2_;
        auVar37._0_4_ =
             CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar30[6] - (0xff < sVar9),
                      CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar30[4] - (0xff < sVar8),
                               CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar30[2] - (0xff < sVar7),
                                        (0 < sVar6) * (sVar6 < 0x100) * auVar30[0] - (0xff < sVar6))
                              ));
        sVar6 = auVar30._8_2_;
        auVar37[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar30[8] - (0xff < sVar6);
        sVar6 = auVar30._10_2_;
        auVar37[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar30[10] - (0xff < sVar6);
        sVar6 = auVar30._12_2_;
        auVar37[6] = (0 < sVar6) * (sVar6 < 0x100) * auVar30[0xc] - (0xff < sVar6);
        sVar6 = auVar30._14_2_;
        auVar37[7] = (0 < sVar6) * (sVar6 < 0x100) * auVar30[0xe] - (0xff < sVar6);
        sVar6 = (short)iVar23;
        auVar37[8] = (0 < sVar6) * (sVar6 < 0x100) * (char)iVar23 - (0xff < sVar6);
        sVar6 = (short)((uint)iVar23 >> 0x10);
        auVar37[9] = (0 < sVar6) * (sVar6 < 0x100) * (char)((uint)iVar23 >> 0x10) - (0xff < sVar6);
        sVar6 = (short)iVar26;
        auVar37[10] = (0 < sVar6) * (sVar6 < 0x100) * (char)iVar26 - (0xff < sVar6);
        sVar6 = (short)((uint)iVar26 >> 0x10);
        auVar37[0xb] = (0 < sVar6) * (sVar6 < 0x100) * (char)((uint)iVar26 >> 0x10) - (0xff < sVar6)
        ;
        sVar6 = (short)auVar70._8_4_;
        auVar37[0xc] = (0 < sVar6) * (sVar6 < 0x100) * (char)auVar70._8_4_ - (0xff < sVar6);
        sVar6 = (short)((uint)auVar70._8_4_ >> 0x10);
        auVar37[0xd] = (0 < sVar6) * (sVar6 < 0x100) * (char)((uint)auVar70._8_4_ >> 0x10) -
                       (0xff < sVar6);
        sVar6 = (short)auVar70._12_4_;
        auVar37[0xe] = (0 < sVar6) * (sVar6 < 0x100) * (char)auVar70._12_4_ - (0xff < sVar6);
        sVar6 = (short)((uint)auVar70._12_4_ >> 0x10);
        auVar37[0xf] = (0 < sVar6) * (sVar6 < 0x100) * (char)((uint)auVar70._12_4_ >> 0x10) -
                       (0xff < sVar6);
        auVar30 = auVar37;
        if (param_16 == 4) {
          uVar28 = *(uint *)*param_6;
        }
        else {
          uVar28 = FUN_10027e89(param_6,(uint)param_16);
        }
        *param_18 = (uVar28 ^ auVar37._0_4_) & 0xffffff ^ uVar28;
        param_18 = (uint *)((int)param_18 + param_20);
      }
      if (param_19 != (uint *)0x0) {
        if (*(int *)((int)this + 0x4a4) == 0) {
          uVar28 = *param_8 & 0xff000000;
        }
        else {
          auVar30 = minps(_local_b0,_DAT_100d9770);
          auVar30 = maxps(auVar30,ZEXT816(0));
          iVar23 = (int)(auVar30._0_4_ * 255.0);
          iVar26 = (int)(auVar30._4_4_ * 255.0);
          auVar71._0_8_ = CONCAT44(iVar26,iVar23);
          auVar71._8_4_ = (int)(auVar30._8_4_ * 255.0);
          auVar71._12_4_ = (int)(auVar30._12_4_ * 255.0);
          auVar38._8_4_ = auVar71._8_4_;
          auVar38._0_8_ = auVar71._0_8_;
          auVar38._12_4_ = auVar71._12_4_;
          auVar39 = packssdw(auVar38,auVar71);
          sVar6 = auVar39._0_2_;
          sVar7 = auVar39._2_2_;
          sVar8 = auVar39._4_2_;
          auVar30._0_3_ =
               CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar39[4] - (0xff < sVar8),
                        CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar39[2] - (0xff < sVar7),
                                 (0 < sVar6) * (sVar6 < 0x100) * auVar39[0] - (0xff < sVar6)));
          sVar6 = auVar39._6_2_;
          auVar30[3] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[6] - (0xff < sVar6);
          sVar6 = auVar39._8_2_;
          auVar30[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[8] - (0xff < sVar6);
          sVar6 = auVar39._10_2_;
          auVar30[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[10] - (0xff < sVar6);
          sVar6 = auVar39._12_2_;
          auVar30[6] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[0xc] - (0xff < sVar6);
          sVar6 = auVar39._14_2_;
          auVar30[7] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[0xe] - (0xff < sVar6);
          sVar6 = (short)iVar23;
          auVar30[8] = (0 < sVar6) * (sVar6 < 0x100) * (char)iVar23 - (0xff < sVar6);
          sVar6 = (short)((uint)iVar23 >> 0x10);
          auVar30[9] = (0 < sVar6) * (sVar6 < 0x100) * (char)((uint)iVar23 >> 0x10) - (0xff < sVar6)
          ;
          sVar6 = (short)iVar26;
          auVar30[10] = (0 < sVar6) * (sVar6 < 0x100) * (char)iVar26 - (0xff < sVar6);
          sVar6 = (short)((uint)iVar26 >> 0x10);
          auVar30[0xb] = (0 < sVar6) * (sVar6 < 0x100) * (char)((uint)iVar26 >> 0x10) -
                         (0xff < sVar6);
          sVar6 = (short)auVar71._8_4_;
          auVar30[0xc] = (0 < sVar6) * (sVar6 < 0x100) * (char)auVar71._8_4_ - (0xff < sVar6);
          sVar6 = (short)((uint)auVar71._8_4_ >> 0x10);
          auVar30[0xd] = (0 < sVar6) * (sVar6 < 0x100) * (char)((uint)auVar71._8_4_ >> 0x10) -
                         (0xff < sVar6);
          sVar6 = (short)auVar71._12_4_;
          auVar30[0xe] = (0 < sVar6) * (sVar6 < 0x100) * (char)auVar71._12_4_ - (0xff < sVar6);
          sVar6 = (short)((uint)auVar71._12_4_ >> 0x10);
          auVar30[0xf] = (0 < sVar6) * (sVar6 < 0x100) * (char)((uint)auVar71._12_4_ >> 0x10) -
                         (0xff < sVar6);
          uVar28 = (uint)auVar30._0_3_ | *param_8 & 0xff000000;
        }
        *param_19 = uVar28;
        param_19 = (uint *)((int)param_19 + param_21);
        param_8 = (uint *)((int)param_8 + param_13);
      }
      uVar28 = CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81))) ^
               CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81)));
      uVar81 = (undefined1)uVar28;
      uVar82 = (undefined1)(uVar28 >> 8);
      uVar83 = (undefined1)(uVar28 >> 0x10);
      uVar84 = (undefined1)(uVar28 >> 0x18);
      uVar28 = CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85))) ^
               CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar86,uVar85)));
      uVar85 = (undefined1)uVar28;
      uVar86 = (undefined1)(uVar28 >> 8);
      uVar87 = (undefined1)(uVar28 >> 0x10);
      uVar88 = (undefined1)(uVar28 >> 0x18);
      param_4 = (uint *)((int)param_4 + param_9);
      param_5 = (uint *)((int)param_5 + param_10);
      param_6 = (undefined1 (*) [16])(*param_6 + param_11);
      param_7 = (uint *)((int)param_7 + param_12);
      local_20 = local_20 + 1;
      pvVar27 = local_14;
    } while (local_20 < param_22);
  }
  return;
}

