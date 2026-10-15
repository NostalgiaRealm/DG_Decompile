/*
 * FUN_1000b1f9 at 1000b1f9
 * undefined __thiscall FUN_1000b1f9(void * this, int param_1, float * param_2, int param_3, undefined4 * param_4, undefined4 * param_5, uint * param_6, uint * param_7, uint * param_8, int param_9, int param_10, int param_11, int param_12, int param_13, uint * param_14, uint * param_15, int param_16, int param_17, uint param_18)
 * Address ranges: 1000b1f9-1000bd27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1000b1f9(void *this,int param_1,float *param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5,uint *param_6,uint *param_7,uint *param_8,int param_9,int param_10,
            int param_11,int param_12,int param_13,uint *param_14,uint *param_15,int param_16,
            int param_17,uint param_18)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [16];
  undefined1 auVar15 [14];
  unkbyte10 Var16;
  undefined1 auVar17 [14];
  undefined1 auVar18 [12];
  uint *puVar19;
  SIZE_T SVar20;
  int iVar21;
  uint uVar22;
  float *pfVar23;
  int iVar24;
  void *this_00;
  float *pfVar25;
  uint uVar26;
  uint *puVar27;
  undefined4 in_XMM0_Da;
  double dVar28;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined2 uVar95;
  undefined2 uVar96;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar43 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint *puVar63;
  undefined1 auVar64 [12];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar65 [12];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint *puVar75;
  float fVar76;
  float fVar82;
  float fVar83;
  undefined1 auVar77 [12];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar84;
  undefined1 auVar86 [12];
  undefined1 auVar87 [16];
  float fVar85;
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  ulonglong local_120;
  float fStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [8];
  float fStack_108;
  float fStack_104;
  undefined1 local_100 [8];
  float fStack_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [8];
  float fStack_88;
  float fStack_84;
  uint *local_80;
  uint *puStack_7c;
  uint *puStack_78;
  uint *puStack_74;
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
  uint local_28;
  float *local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  float *local_14;
  undefined1 auVar36 [16];
  undefined1 auVar47 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar44 [16];
  undefined1 auVar56 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar57 [16];
  undefined1 auVar35 [16];
  undefined1 auVar46 [16];
  
  local_f0 = in_XMM0_Da;
  uStack_ec = in_XMM0_Db;
  uStack_e8 = in_XMM0_Dc;
  uStack_e4 = in_XMM0_Dd;
  local_e0 = in_XMM1_Da;
  fStack_dc = in_XMM1_Db;
  fStack_d8 = in_XMM1_Dc;
  fStack_d4 = in_XMM1_Dd;
  local_14 = this;
  FUN_10008c80((int)this);
  iVar21 = *(int *)((int)this + 0x9cc);
  uVar26 = *(uint *)((int)this + 0x17c);
  fVar1 = *(float *)(iVar21 + 0x85c);
  fVar2 = *(float *)(iVar21 + 0x86c);
  fVar3 = *(float *)(iVar21 + 0x84c);
  fVar84 = fVar1 - *(float *)(iVar21 + 0x858);
  uVar22 = *(uint *)((int)this + 0x4bc);
  local_120 = CONCAT44(fVar84,fVar84) ^ 0x8000000080000000;
  fStack_118 = -(fVar2 - *(float *)(iVar21 + 0x868));
  uStack_114 = 0x3f800000;
  auVar68._0_12_ = ZEXT812(0);
  auVar68._12_4_ = 0;
  auVar11[0xc] = (char)(uVar22 >> 0x18);
  auVar11._0_12_ = ZEXT712(0);
  local_d0 = (float)(uVar22 & 0xff);
  fStack_cc = (float)(uVar22 >> 8 & 0xff);
  fStack_c8 = (float)(int)CONCAT32(auVar11._10_3_,(ushort)(byte)(uVar22 >> 0x10));
  fStack_c4 = (float)(uint3)(auVar11._10_3_ >> 0x10);
  if (*(uint *)((int)this + 0x9b4) < uVar26) {
    thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x9ac));
    *(undefined4 *)((int)this + 0x9b4) = 0;
    SVar20 = (SIZE_T)((ulonglong)uVar26 * 8);
    if ((int)((ulonglong)uVar26 * 8 >> 0x20) != 0) {
      SVar20 = 0xffffffff;
    }
    iVar21 = FUN_1005c789(SVar20);
    auVar68 = ZEXT816(0);
    *(int *)((int)this + 0x9ac) = iVar21;
    uVar22 = 0;
    if (iVar21 != 0) {
      uVar22 = uVar26;
    }
    *(uint *)((int)this + 0x9b4) = uVar22;
  }
  local_20 = *(int *)((int)this + 0x9ac);
  pfVar25 = (float *)0x0;
  local_24 = (float *)0x0;
  fVar84 = local_d0;
  fVar89 = fStack_cc;
  fVar90 = fStack_c8;
  fVar91 = fStack_c4;
  if ((local_20 != 0) && (uVar26 = 0, *(int *)((int)this + 0x17c) != 0)) {
    this_00 = (void *)((int)this + 0x15c);
    do {
      local_1c = (uint *)(*(int *)((int)this + 0x178) + uVar26 * 4);
      if (*local_1c != 0xffffffff) {
        uVar22 = FUN_10008552(this_00,*local_1c,0);
        if (uVar22 == *(uint *)((int)this + 0x164)) {
LAB_1000b398:
          local_18 = (int *)0x0;
        }
        else {
          iVar21 = *(int *)((int)this + 0x160);
          iVar24 = uVar22 * 0xa0;
          this = local_14;
          if ((*(uint *)(iVar21 + iVar24) != *local_1c) || (*(int *)(iVar21 + 4 + iVar24) != 0))
          goto LAB_1000b398;
          local_18 = (int *)(iVar24 + 0x20 + iVar21);
        }
        iVar21 = FUN_10008271((void *)((int)this + 0x14c),local_1c);
        if ((local_18 != (int *)0x0) && (iVar21 != 0)) {
          *(int **)(local_20 + (int)local_24 * 8) = local_18;
          *(int *)(local_20 + 4 + (int)local_24 * 8) = iVar21;
          local_24 = (float *)((int)local_24 + 1);
          this = local_14;
        }
        this_00 = (void *)((int)this + 0x15c);
        pfVar25 = local_24;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(uint *)((int)this + 0x17c));
  }
  if (*(int *)((int)this + 0x4cc) == 0) {
    local_b0 = 0x7f7fffff;
    uStack_ac = 0x7f7fffff;
    uStack_a8 = 0x7f7fffff;
    uStack_a4 = 0x7f7fffff;
  }
  else {
    local_b0 = 0x3f800000;
    uStack_ac = 0x3f800000;
    uStack_a8 = 0x3f800000;
    uStack_a4 = 0x3f800000;
  }
  local_28 = 0;
  if (param_18 != 0) {
    local_a0 = local_c0;
    fStack_9c = fStack_bc;
    fStack_98 = fStack_b8;
    fStack_94 = fStack_b4;
    local_50 = local_e0;
    fStack_4c = fStack_dc;
    fStack_48 = fStack_d8;
    fStack_44 = fStack_d4;
    puVar27 = param_14;
    auVar88 = _DAT_10060210;
    fVar92 = local_e0;
    fVar93 = fStack_dc;
    fVar94 = fStack_d8;
    do {
      if (pfVar25 != (float *)0x0) {
        pfVar23 = (float *)(local_28 * 0x20 + param_1);
        local_a0 = *pfVar23;
        fStack_9c = pfVar23[1];
        fStack_98 = pfVar23[2];
        fStack_94 = pfVar23[3];
        local_c0 = local_a0;
        fStack_bc = fStack_9c;
        fStack_b8 = fStack_98;
        fStack_b4 = fStack_94;
        if (param_2 == (float *)0x0) {
          pfVar23 = (float *)(local_28 * 0x20 + 0x10 + param_1);
          fVar92 = *pfVar23;
          fVar93 = pfVar23[1];
          fVar94 = pfVar23[2];
          fStack_44 = pfVar23[3];
          local_50 = fVar92;
          fStack_4c = fVar93;
          fStack_48 = fVar94;
          if (*(int *)((int)this + 0x4cc) != 0) {
            fVar76 = fVar92 * fVar92 + fVar94 * fVar94 + fVar93 * fVar93;
            auVar74._4_4_ = fVar76;
            auVar74._0_4_ = fVar76;
            auVar74._8_4_ = fVar76;
            auVar74._12_4_ = fVar76;
            auVar74 = rsqrtss(auVar74,auVar74);
            uVar26 = auVar74._0_4_;
            fVar92 = (float)(-(uint)(0.0 < fVar76) & uVar26) * fVar92;
            fVar93 = (float)(-(uint)(0.0 < fVar76) & uVar26) * fVar93;
            fVar94 = (float)(-(uint)(0.0 < fVar76) & uVar26) * fVar94;
            fStack_44 = (float)(-(uint)(0.0 < fVar76) & uVar26) * 0.0;
            local_50 = fVar92;
            fStack_4c = fVar93;
            fStack_48 = fVar94;
          }
        }
        else {
          fVar92 = *param_2;
          fVar94 = param_2[2];
          fVar93 = param_2[1];
          param_2 = (float *)((int)param_2 + param_3);
          fStack_44 = 0.0;
          local_50 = fVar92;
          fStack_4c = fVar93;
          fStack_48 = fVar94;
        }
      }
      uVar5 = *param_4;
      auVar10 = ZEXT812(0);
      auVar32._12_3_ = 0;
      auVar32._0_12_ = auVar10;
      auVar32[0xf] = auVar68[7];
      auVar42._14_2_ = auVar32._14_2_;
      auVar42[0xc] = 0;
      auVar42._0_12_ = auVar10;
      auVar42[0xd] = auVar68[6];
      auVar41._13_3_ = auVar42._13_3_;
      auVar41[0xc] = 0;
      auVar41._0_12_ = auVar10;
      auVar40._12_4_ = auVar41._12_4_;
      auVar40._0_11_ = ZEXT811(0);
      auVar40[0xb] = auVar68[5];
      auVar39._11_5_ = auVar40._11_5_;
      auVar39._0_11_ = ZEXT811(0);
      auVar38._10_6_ = auVar39._10_6_;
      auVar38._0_9_ = (unkuint9)0;
      auVar38[9] = auVar68[4];
      auVar37._9_7_ = auVar38._9_7_;
      auVar37._0_9_ = (unkuint9)0;
      Var16 = CONCAT91(CONCAT81(auVar37._8_8_,auVar68[3]),(char)((uint)uVar5 >> 0x18));
      auVar36._6_10_ = Var16;
      auVar36[5] = auVar68[2];
      auVar36[4] = (char)((uint)uVar5 >> 0x10);
      auVar36._0_4_ = uVar5;
      auVar15._2_12_ = auVar36._4_12_;
      auVar15[1] = auVar68[1];
      auVar15[0] = (char)((uint)uVar5 >> 8);
      uVar95 = CONCAT11(auVar68[0],(char)uVar5);
      auVar35._2_14_ = auVar15;
      auVar45._0_12_ = auVar35._0_12_;
      auVar45._12_2_ = (short)Var16;
      auVar45._14_2_ = auVar68._6_2_;
      auVar44._12_4_ = auVar45._12_4_;
      auVar44._0_10_ = auVar35._0_10_;
      auVar44._10_2_ = auVar68._4_2_;
      auVar43._10_6_ = auVar44._10_6_;
      auVar43._0_8_ = auVar35._0_8_;
      auVar43._8_2_ = auVar36._4_2_;
      auVar10._4_8_ = auVar43._8_8_;
      auVar10._2_2_ = auVar68._2_2_;
      auVar10._0_2_ = auVar15._0_2_;
      auVar66._0_4_ = (float)CONCAT22(auVar68._0_2_,uVar95);
      auVar66._4_4_ = (float)auVar10._0_4_;
      auVar66._8_4_ = (float)auVar43._8_4_;
      auVar66._12_4_ = (float)auVar44._12_4_;
      _local_100 = divps(auVar66,auVar88);
      if (puVar27 == (uint *)0x0) {
        _local_70 = ZEXT816(0);
      }
      else {
        uVar5 = *param_5;
        auVar10 = ZEXT812(0);
        auVar54._12_3_ = 0;
        auVar54._0_12_ = auVar10;
        auVar54[0xf] = auVar68[7];
        auVar53._14_2_ = auVar54._14_2_;
        auVar53[0xc] = 0;
        auVar53._0_12_ = auVar10;
        auVar53[0xd] = auVar68[6];
        auVar52._13_3_ = auVar53._13_3_;
        auVar52[0xc] = 0;
        auVar52._0_12_ = auVar10;
        auVar51._12_4_ = auVar52._12_4_;
        auVar51._0_11_ = ZEXT811(0);
        auVar51[0xb] = auVar68[5];
        auVar50._11_5_ = auVar51._11_5_;
        auVar50._0_11_ = ZEXT811(0);
        auVar49._10_6_ = auVar50._10_6_;
        auVar49._0_9_ = (unkuint9)0;
        auVar49[9] = auVar68[4];
        auVar48._9_7_ = auVar49._9_7_;
        auVar48._0_9_ = (unkuint9)0;
        Var16 = CONCAT91(CONCAT81(auVar48._8_8_,auVar68[3]),(char)((uint)uVar5 >> 0x18));
        auVar47._6_10_ = Var16;
        auVar47[5] = auVar68[2];
        auVar47[4] = (char)((uint)uVar5 >> 0x10);
        auVar47._0_4_ = uVar5;
        auVar17._2_12_ = auVar47._4_12_;
        auVar17[1] = auVar68[1];
        auVar17[0] = (char)((uint)uVar5 >> 8);
        uVar96 = CONCAT11(auVar68[0],(char)uVar5);
        auVar46._2_14_ = auVar17;
        auVar57._0_12_ = auVar46._0_12_;
        auVar57._12_2_ = (short)Var16;
        auVar57._14_2_ = auVar68._6_2_;
        auVar56._12_4_ = auVar57._12_4_;
        auVar56._0_10_ = auVar46._0_10_;
        auVar56._10_2_ = auVar68._4_2_;
        auVar55._10_6_ = auVar56._10_6_;
        auVar55._0_8_ = auVar46._0_8_;
        auVar55._8_2_ = auVar47._4_2_;
        auVar18._4_8_ = auVar55._8_8_;
        auVar18._2_2_ = auVar68._2_2_;
        auVar18._0_2_ = auVar17._0_2_;
        auVar58._0_4_ = local_100._0_4_ * fVar84 + (float)CONCAT22(auVar68._0_2_,uVar96);
        auVar58._4_4_ = local_100._4_4_ * fVar89 + (float)auVar18._0_4_;
        auVar58._8_4_ = local_100._8_4_ * fVar90 + (float)auVar55._8_4_;
        auVar58._12_4_ = local_100._12_4_ * fVar91 + (float)auVar56._12_4_;
        _local_70 = divps(auVar58,auVar88);
      }
      auVar74 = ZEXT816(0);
      local_14 = (float *)0x0;
      _local_40 = auVar74;
      if (pfVar25 != (float *)0x0) {
        do {
          puVar27 = (uint *)0x0;
          fStack_58 = 1.0;
          local_60 = (undefined1  [8])0x3f8000003f800000;
          fStack_54 = 1.0;
          pfVar25 = *(float **)(local_20 + (int)local_14 * 8);
          piVar6 = *(int **)(local_20 + 4 + (int)local_14 * 8);
          fVar84 = pfVar25[3];
          if ((*piVar6 == 3) || (*piVar6 == 4)) {
            puStack_74 = (uint *)0x0;
            fVar89 = *pfVar25;
            fVar90 = pfVar25[1];
            fVar91 = pfVar25[2];
            puVar63 = (uint *)0x0;
          }
          else {
            fVar89 = local_a0 - (float)*(undefined8 *)(piVar6 + 0xd);
            fVar90 = fStack_9c - (float)((ulonglong)*(undefined8 *)(piVar6 + 0xd) >> 0x20);
            fVar91 = fStack_98 - (float)piVar6[0xf];
            fVar84 = fStack_94 - 1.0;
            puStack_74 = (uint *)0x0;
            local_1c = (uint *)piVar6[0x13];
            cVar4 = *(char *)(*(int *)((int)this + 0x14) + 0xc);
            puVar75 = (uint *)SQRT(fVar89 * fVar89 + fVar91 * fVar91 + fVar90 * fVar90);
            puVar63 = puVar75;
            puVar27 = puVar75;
            puVar19 = puStack_74;
            if (((cVar4 != '\0') &&
                (puVar27 = local_1c, puVar19 = puVar75, (char)piVar6[0x1a] == '\0')) &&
               (fVar76 = ((float)local_1c - (float)puVar75) / (float)local_1c,
               puVar63 = (uint *)(~-(uint)(ABS(fVar76) == INFINITY) & (uint)fVar76),
               puVar27 = puVar75, puVar19 = puStack_74, (float)puVar63 <= 0.0)) {
              puVar63 = (uint *)0x0;
            }
            puStack_74 = puVar19;
            local_60._0_4_ =
                 ((float)puVar63 * (float)puVar63 + 0.0) * pfVar25[4] +
                 ((float)puVar63 * 0.0 + 1.0) * pfVar25[6] +
                 ((float)puVar63 * 1.0 + 0.0) * pfVar25[5];
            local_60._4_4_ = local_60._0_4_;
            fStack_58 = (float)local_60._0_4_;
            fStack_54 = (float)local_60._0_4_;
            auVar74 = _local_40;
            puVar63 = local_1c;
            if ((char)piVar6[0x1a] == '\0') {
              if (cVar4 == '\0') {
                auVar68 = rcpps(_local_60,_local_60);
                auVar68 = minps(auVar68,_DAT_10060200);
                _local_60 = maxps(auVar68,ZEXT816(0));
              }
            }
            else {
              if ((float)local_60._0_4_ <= 1.0) {
                local_60._0_4_ = 0x3f800000;
              }
              _local_60 = rcpps(_local_60,_local_60);
            }
          }
          local_18 = piVar6 + 0x1a;
          if ((float)puVar27 <= (float)puVar63) {
            pfVar23 = local_14;
            fVar76 = fVar89;
            fVar82 = fVar90;
            fVar83 = fVar91;
            if (param_2 != (float *)0x0) {
              local_1c = (uint *)0x900;
              iVar21 = 0x8c0;
              if ((char)*local_18 == '\0') {
                iVar21 = 0x900;
              }
              pfVar23 = (float *)(iVar21 + *(int *)((int)this + 0x9cc));
              fVar76 = fVar84 * pfVar23[3] + fVar90 * pfVar23[1] +
                       fVar91 * pfVar23[2] + fVar89 * *pfVar23;
              fVar82 = fVar84 * pfVar23[7] + fVar90 * pfVar23[5] +
                       fVar91 * pfVar23[6] + fVar89 * pfVar23[4];
              fVar83 = fVar84 * pfVar23[0xb] + fVar90 * pfVar23[9] +
                       fVar91 * pfVar23[10] + fVar89 * pfVar23[8];
            }
            auVar64._0_4_ = fVar76 * fVar76;
            auVar64._4_4_ = fVar82 * fVar82;
            auVar64._8_4_ = fVar83 * fVar83;
            auVar67._0_4_ = auVar64._0_4_ + auVar64._8_4_ + auVar64._4_4_;
            auVar67._4_8_ = auVar64._4_8_;
            auVar67._12_4_ = 0;
            auVar68 = rsqrtss(auVar67,auVar67);
            fVar84 = auVar68._0_4_;
            auVar77._0_4_ = fVar89 * fVar89;
            auVar77._4_4_ = fVar90 * fVar90;
            auVar77._8_4_ = fVar91 * fVar91;
            auVar69._0_4_ =
                 -(fVar84 * fVar76) * fVar92 + -(fVar84 * fVar83) * fVar94 +
                 -(fVar84 * fVar82) * fVar93;
            auVar69._4_4_ = auVar69._0_4_;
            auVar69._8_4_ = auVar69._0_4_;
            auVar69._12_4_ = auVar69._0_4_;
            auVar88._4_4_ = uStack_ac;
            auVar88._0_4_ = local_b0;
            auVar88._8_4_ = uStack_a8;
            auVar88._12_4_ = uStack_a4;
            auVar68 = minps(auVar69,auVar88);
            auVar78._0_4_ = auVar77._0_4_ + auVar77._8_4_ + auVar77._4_4_;
            auVar78._4_8_ = auVar77._4_8_;
            auVar78._12_4_ = 0;
            _local_110 = maxps(auVar68,ZEXT816(0));
            auVar68 = rsqrtss(auVar78,auVar78);
            fVar84 = auVar68._0_4_;
            _local_90 = _DAT_100601b0;
            auVar79 = _local_90;
            local_80 = puStack_74;
            puStack_7c = puStack_74;
            puStack_78 = puStack_74;
            if (*piVar6 == 2) {
              fVar76 = *pfVar25 * fVar84 * fVar89 + pfVar25[2] * fVar84 * fVar91 +
                       pfVar25[1] * fVar84 * fVar90;
              auVar29._4_4_ = fVar76;
              auVar29._0_4_ = fVar76;
              auVar29._8_4_ = fVar76;
              auVar29._12_4_ = fVar76;
              auVar30._4_12_ = auVar29._4_12_;
              auVar30._0_4_ = -(uint)(fVar76 <= pfVar25[0x1c]);
              uVar26 = movmskps(pfVar23,auVar30);
              if ((uVar26 & 1) != 0) {
                auVar70._0_4_ = fVar76 - pfVar25[0x18];
                auVar70._4_4_ = fVar76 - pfVar25[0x19];
                auVar70._8_4_ = fVar76 - pfVar25[0x1a];
                auVar70._12_4_ = fVar76 - pfVar25[0x1b];
                auVar68 = divps(auVar70,*(undefined1 (*) [16])(pfVar25 + 0x14));
                auVar68 = maxps(auVar68,_DAT_100600b0);
                _local_90 = minps(auVar68,_DAT_100601b0);
                fVar76 = local_90._0_4_;
                auVar31._4_4_ = -(uint)(local_90._4_4_ == 0.0);
                auVar31._0_4_ = -(uint)(fVar76 == 1.0);
                auVar31._8_4_ = -(uint)(local_90._8_4_ == 0.0);
                auVar31._12_4_ = -(uint)(local_90._12_4_ == 0.0);
                iVar21 = movmskps(uVar26,auVar31);
                auVar79 = _local_90;
                if (iVar21 == 0) {
                  uVar26 = (uint)(fVar76 * 1024.0);
                  auVar79 = _DAT_100601b0;
                  if ((float)piVar6[0x14] != 0.0) {
                    auVar79._0_12_ = ZEXT812(0);
                    auVar79._12_4_ = 0;
                  }
                  if (uVar26 != 0) {
                    if ((0x3ff < uVar26) ||
                       (fVar82 = *(float *)(*(int *)((int)this + 0x950) + uVar26 * 4) *
                                 (float)piVar6[0x14], 1024.0 <= ABS(fVar82))) {
                      dVar28 = (double)fVar76;
                      FUN_1005c520();
                      fVar76 = (float)dVar28;
                      fVar92 = local_50;
                      fVar93 = fStack_4c;
                      fVar94 = fStack_48;
                    }
                    else {
                      iVar21 = (int)fVar82;
                      fVar76 = *(float *)(*(int *)((int)this + 0x954) +
                                         (int)((fVar82 - (float)iVar21) * 1024.0) * 4);
                      if (iVar21 < 0) {
                        fVar76 = fVar76 / *(float *)(*(int *)((int)this + 0x958) + iVar21 * -4);
                      }
                      else {
                        fVar76 = fVar76 * *(float *)(*(int *)((int)this + 0x958) + iVar21 * 4);
                      }
                    }
                    auVar79._4_4_ = fVar76;
                    auVar79._0_4_ = fVar76;
                    auVar79._8_4_ = fVar76;
                    auVar79._12_4_ = fVar76;
                  }
                }
              }
            }
            _local_90 = auVar79;
            piVar6 = local_18;
            if (param_14 != (uint *)0x0) {
              if ((char)*local_18 == '\0') {
                uVar26 = *param_6;
                auVar12[0xc] = (char)(uVar26 >> 0x18);
                auVar12._0_12_ = ZEXT712(0);
                auVar80._0_4_ = (float)(uVar26 & 0xff);
                auVar80._4_4_ = (float)(uVar26 >> 8 & 0xff);
                auVar80._8_4_ = (float)(int)CONCAT32(auVar12._10_3_,(ushort)(byte)(uVar26 >> 0x10));
                auVar80._12_4_ = (float)(uint3)(auVar12._10_3_ >> 0x10);
                auVar81 = divps(auVar80,_DAT_10060210);
              }
              else {
                auVar81._4_4_ = uStack_ec;
                auVar81._0_4_ = local_f0;
                auVar81._8_4_ = uStack_e8;
                auVar81._12_4_ = uStack_e4;
              }
              iVar21 = *(int *)(local_20 + (int)local_14 * 8);
              local_70._4_4_ =
                   (local_90._4_4_ * *(float *)(iVar21 + 0x24) * auVar81._4_4_ *
                    (float)local_110._4_4_ + (float)local_100._4_4_ * *(float *)(iVar21 + 0x34)) *
                   (float)local_60._4_4_ + (float)local_70._4_4_;
              local_70._0_4_ =
                   (local_90._0_4_ * *(float *)(iVar21 + 0x20) * auVar81._0_4_ *
                    (float)local_110._0_4_ + (float)local_100._0_4_ * *(float *)(iVar21 + 0x30)) *
                   (float)local_60._0_4_ + (float)local_70._0_4_;
              fStack_68 = (local_90._8_4_ * *(float *)(iVar21 + 0x28) * auVar81._8_4_ * fStack_108 +
                          fStack_f8 * *(float *)(iVar21 + 0x38)) * fStack_58 + fStack_68;
              fStack_64 = (local_90._12_4_ * *(float *)(iVar21 + 0x2c) * auVar81._12_4_ * fStack_104
                          + fStack_f4 * *(float *)(iVar21 + 0x3c)) * fStack_54 + fStack_64;
            }
            auVar74 = _local_40;
            if (((param_15 != (uint *)0x0) && (*(int *)((int)this + 0x304) != 0)) &&
               (*(float *)((int)this + 0x144) != 0.0)) {
              pfVar25 = &local_c0;
              if (*(int *)((int)this + 0x4c8) == 0) {
                pfVar25 = (float *)&local_120;
              }
              fVar76 = fVar3 - *pfVar25;
              fVar82 = fVar1 - pfVar25[1];
              fVar83 = fVar2 - pfVar25[2];
              auVar86._0_4_ = fVar76 * fVar76;
              auVar86._4_4_ = fVar82 * fVar82;
              auVar86._8_4_ = fVar83 * fVar83;
              auVar87._0_4_ = auVar86._0_4_ + auVar86._8_4_ + auVar86._4_4_;
              auVar87._4_8_ = auVar86._4_8_;
              auVar87._12_4_ = 0;
              auVar68 = rsqrtss(auVar87,auVar87);
              fVar85 = auVar68._0_4_;
              fVar89 = fVar85 * fVar76 - fVar84 * fVar89;
              fVar90 = fVar85 * fVar82 - fVar84 * fVar90;
              fVar91 = fVar85 * fVar83 - fVar84 * fVar91;
              fVar84 = fVar85 * 0.0 - fVar84 * 0.0;
              if (param_2 != (float *)0x0) {
                iVar21 = *(int *)((int)this + 0x9cc);
                fVar82 = fVar89 * *(float *)(iVar21 + 0x920);
                fVar83 = fVar90 * *(float *)(iVar21 + 0x924);
                fVar76 = fVar89 * *(float *)(iVar21 + 0x910);
                fVar89 = fVar84 * *(float *)(iVar21 + 0x90c) + fVar90 * *(float *)(iVar21 + 0x904) +
                         fVar91 * *(float *)(iVar21 + 0x908) + fVar89 * *(float *)(iVar21 + 0x900);
                fVar90 = fVar84 * *(float *)(iVar21 + 0x91c) + fVar90 * *(float *)(iVar21 + 0x914) +
                         fVar91 * *(float *)(iVar21 + 0x918) + fVar76;
                fVar91 = fVar84 * *(float *)(iVar21 + 0x92c) + fVar83 +
                         fVar91 * *(float *)(iVar21 + 0x928) + fVar82;
              }
              auVar65._0_4_ = fVar89 * fVar89;
              auVar65._4_4_ = fVar90 * fVar90;
              auVar65._8_4_ = fVar91 * fVar91;
              auVar71._0_4_ = auVar65._0_4_ + auVar65._8_4_ + auVar65._4_4_;
              auVar71._4_8_ = auVar65._4_8_;
              auVar71._12_4_ = 0;
              auVar68 = rsqrtss(auVar71,auVar71);
              fVar84 = auVar68._0_4_;
              auVar72._0_4_ =
                   fVar84 * fVar89 * fVar92 + fVar84 * fVar91 * fVar94 + fVar84 * fVar90 * fVar93;
              auVar72._4_4_ = auVar72._0_4_;
              auVar72._8_4_ = auVar72._0_4_;
              auVar72._12_4_ = auVar72._0_4_;
              auVar68 = minps(auVar72,_DAT_100601b0);
              auVar68 = maxps(auVar68,ZEXT816(0));
              fVar84 = (float)(-(uint)(*(float *)((int)this + 0x148) < auVar68._0_4_) &
                              (uint)auVar68._0_4_);
              auVar73._0_12_ = ZEXT812(0);
              auVar73._12_4_ = 0;
              uVar26 = (uint)(fVar84 * 1024.0);
              if (uVar26 != 0) {
                if ((0x3ff < uVar26) ||
                   (fVar89 = *(float *)(*(int *)((int)this + 0x950) + uVar26 * 4) *
                             *(float *)((int)this + 0x144), 1024.0 <= ABS(fVar89))) {
                  dVar28 = (double)fVar84;
                  FUN_1005c520();
                  fVar84 = (float)dVar28;
                  fVar92 = local_50;
                  fVar93 = fStack_4c;
                  fVar94 = fStack_48;
                }
                else {
                  iVar21 = (int)fVar89;
                  iVar24 = (int)((fVar89 - (float)iVar21) * 1024.0);
                  if (iVar21 < 0) {
                    fVar84 = *(float *)(*(int *)((int)this + 0x954) + iVar24 * 4) /
                             *(float *)(*(int *)((int)this + 0x958) + iVar21 * -4);
                  }
                  else {
                    fVar84 = *(float *)(*(int *)((int)this + 0x954) + iVar24 * 4) *
                             *(float *)(*(int *)((int)this + 0x958) + iVar21 * 4);
                  }
                }
                auVar73._4_4_ = fVar84;
                auVar73._0_4_ = fVar84;
                auVar73._8_4_ = fVar84;
                auVar73._12_4_ = fVar84;
              }
              auVar14._4_4_ = puStack_7c;
              auVar14._0_4_ = local_80;
              auVar14._8_4_ = puStack_78;
              auVar14._12_4_ = puStack_74;
              if (0.0 < (float)local_80) {
                auVar73 = divps(auVar73,auVar14);
              }
              if ((char)*piVar6 == '\0') {
                uVar26 = *param_7;
                auVar13[0xc] = (char)(uVar26 >> 0x18);
                auVar13._0_12_ = ZEXT712(0);
                auVar59._0_4_ = (float)(uVar26 & 0xff);
                auVar59._4_4_ = (float)(uVar26 >> 8 & 0xff);
                auVar59._8_4_ = (float)(int)CONCAT32(auVar13._10_3_,(ushort)(byte)(uVar26 >> 0x10));
                auVar59._12_4_ = (float)(uint3)(auVar13._10_3_ >> 0x10);
                auVar60 = divps(auVar59,_DAT_10060210);
              }
              else {
                auVar60._4_4_ = fStack_dc;
                auVar60._0_4_ = local_e0;
                auVar60._8_4_ = fStack_d8;
                auVar60._12_4_ = fStack_d4;
              }
              iVar21 = *(int *)(local_20 + (int)local_14 * 8);
              local_40._0_4_ =
                   auVar73._0_4_ *
                   (float)local_90._0_4_ * *(float *)(iVar21 + 0x40) * auVar60._0_4_ *
                   (float)local_60._0_4_ + (float)local_40._0_4_;
              local_40._4_4_ =
                   auVar73._4_4_ *
                   (float)local_90._4_4_ * *(float *)(iVar21 + 0x44) * auVar60._4_4_ *
                   (float)local_60._4_4_ + (float)local_40._4_4_;
              fStack_38 = auVar73._8_4_ *
                          fStack_88 * *(float *)(iVar21 + 0x48) * auVar60._8_4_ * fStack_58 +
                          fStack_38;
              fStack_34 = auVar73._12_4_ *
                          fStack_84 * *(float *)(iVar21 + 0x4c) * auVar60._12_4_ * fStack_54 +
                          fStack_34;
              auVar74 = _local_40;
            }
          }
          local_14 = (float *)((int)local_14 + 1);
        } while (local_14 < local_24);
        auVar68 = ZEXT816(0);
        pfVar25 = local_24;
        puVar27 = param_14;
        auVar88 = _DAT_10060210;
      }
      if (puVar27 != (uint *)0x0) {
        auVar32 = minps(_local_70,_DAT_100601b0);
        auVar32 = maxps(auVar32,ZEXT816(0));
        auVar61._0_8_ =
             CONCAT44((int)(auVar32._4_4_ * auVar88._4_4_),(int)(auVar32._0_4_ * auVar88._0_4_));
        auVar61._8_4_ = (int)(auVar32._8_4_ * auVar88._8_4_);
        auVar61._12_4_ = (int)(auVar32._12_4_ * auVar88._12_4_);
        auVar33._8_4_ = auVar61._8_4_;
        auVar33._0_8_ = auVar61._0_8_;
        auVar33._12_4_ = auVar61._12_4_;
        auVar32 = packssdw(auVar33,auVar61);
        sVar7 = auVar32._0_2_;
        sVar8 = auVar32._2_2_;
        sVar9 = auVar32._4_2_;
        *puVar27 = (uint)CONCAT12((0 < sVar9) * (sVar9 < 0x100) * auVar32[4] - (0xff < sVar9),
                                  CONCAT11((0 < sVar8) * (sVar8 < 0x100) * auVar32[2] -
                                           (0xff < sVar8),
                                           (0 < sVar7) * (sVar7 < 0x100) * auVar32[0] -
                                           (0xff < sVar7))) | *param_6 & 0xff000000;
        puVar27 = (uint *)((int)puVar27 + param_16);
        param_14 = puVar27;
      }
      if (param_15 != (uint *)0x0) {
        if (*(int *)((int)this + 0x304) == 0) {
          uVar26 = *param_8 & 0xff000000;
        }
        else {
          auVar74 = minps(auVar74,_DAT_100601b0);
          auVar74 = maxps(auVar74,ZEXT816(0));
          auVar62._0_8_ =
               CONCAT44((int)(auVar74._4_4_ * auVar88._4_4_),(int)(auVar74._0_4_ * auVar88._0_4_));
          auVar62._8_4_ = (int)(auVar74._8_4_ * auVar88._8_4_);
          auVar62._12_4_ = (int)(auVar74._12_4_ * auVar88._12_4_);
          auVar34._8_4_ = auVar62._8_4_;
          auVar34._0_8_ = auVar62._0_8_;
          auVar34._12_4_ = auVar62._12_4_;
          auVar74 = packssdw(auVar34,auVar62);
          sVar7 = auVar74._0_2_;
          sVar8 = auVar74._2_2_;
          sVar9 = auVar74._4_2_;
          uVar26 = (uint)CONCAT12((0 < sVar9) * (sVar9 < 0x100) * auVar74[4] - (0xff < sVar9),
                                  CONCAT11((0 < sVar8) * (sVar8 < 0x100) * auVar74[2] -
                                           (0xff < sVar8),
                                           (0 < sVar7) * (sVar7 < 0x100) * auVar74[0] -
                                           (0xff < sVar7))) | *param_8 & 0xff000000;
        }
        *param_15 = uVar26;
        param_15 = (uint *)((int)param_15 + param_17);
        param_8 = (uint *)((int)param_8 + param_13);
      }
      param_4 = (undefined4 *)((int)param_4 + param_9);
      param_5 = (undefined4 *)((int)param_5 + param_10);
      param_6 = (uint *)((int)param_6 + param_11);
      param_7 = (uint *)((int)param_7 + param_12);
      local_28 = local_28 + 1;
      fVar84 = local_d0;
      fVar89 = fStack_cc;
      fVar90 = fStack_c8;
      fVar91 = fStack_c4;
    } while (local_28 < param_18);
  }
  return;
}

