/*
 * FUN_10033c0c at 10033c0c
 * undefined __cdecl FUN_10033c0c(int param_1, uint param_2, uint param_3, uint param_4, undefined1[16] * param_5, undefined1[16] * param_6, uint param_7)
 * Address ranges: 10033c0c-10033ea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10033c0c(int param_1,uint param_2,uint param_3,uint param_4,undefined1 (*param_5) [16],
            undefined1 (*param_6) [16],uint param_7)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [4];
  undefined4 uVar35;
  undefined4 uVar36;
  float local_150 [32];
  undefined1 local_d0 [144];
  undefined1 local_40 [4];
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  uVar4 = (uint)DAT_10066f40;
  uVar35 = DAT_10066f40._8_4_;
  uVar36 = DAT_10066f40._12_4_;
  uVar7 = 0;
  uVar8 = 1;
  _local_40 = ZEXT416(0xffffffff);
  if (param_3 != 0) {
    local_40 = (undefined1  [4])0xffffffff;
    uStack_3c = 0;
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    auVar32 = _DAT_10066f40;
    auVar34 = local_40;
    uVar4 = uStack_3c;
    fVar12 = fStack_38;
    fVar15 = fStack_34;
    do {
      uVar6 = 0;
      if (param_2 != 0) {
        do {
          if ((param_7 & uVar8) == 0) {
            pfVar1 = (float *)(uVar7 * 0x40 + param_1 + uVar6 * 0x10);
            fVar16 = *pfVar1;
            fVar17 = pfVar1[1];
            fVar30 = pfVar1[2];
            fVar31 = pfVar1[3];
            fVar10 = fVar16;
            FUN_100338ba((float *)0x0);
            fVar11 = fVar16;
            FUN_100338ba((float *)0x0);
            uVar20 = -(uint)(fVar11 < auVar32._0_4_) ^ (uint)auVar34;
            uVar21 = -(uint)(fVar11 < auVar32._4_4_) ^ uVar4;
            uVar22 = -(uint)(fVar10 < auVar32._8_4_) ^ (uint)fVar12;
            uVar23 = -(uint)(fVar10 < auVar32._12_4_) ^ (uint)fVar15;
            uVar6 = *(uint *)(*param_5 + 4);
            uVar2 = *(uint *)(*param_5 + 8);
            uVar3 = *(uint *)(*param_5 + 0xc);
            *(uint *)*param_5 = uVar20 & *(uint *)*param_5 | ~uVar20 & (uint)fVar16;
            *(uint *)(*param_5 + 4) = uVar20 & uVar6 | ~uVar20 & (uint)fVar17;
            *(uint *)(*param_5 + 8) = uVar20 & uVar2 | ~uVar20 & (uint)fVar30;
            *(uint *)(*param_5 + 0xc) = uVar20 & uVar3 | ~uVar20 & (uint)fVar31;
            auVar25._0_4_ = ~uVar21 & (uint)fVar16;
            auVar25._4_4_ = ~uVar21 & (uint)fVar17;
            auVar25._8_4_ = ~uVar21 & (uint)fVar30;
            auVar25._12_4_ = ~uVar21 & (uint)fVar31;
            auVar18._0_4_ = uVar21 & *(uint *)*param_6;
            auVar18._4_4_ = uVar21 & *(uint *)(*param_6 + 4);
            auVar18._8_4_ = uVar21 & *(uint *)(*param_6 + 8);
            auVar18._12_4_ = uVar21 & *(uint *)(*param_6 + 0xc);
            auVar28._0_4_ = uVar20 & (uint)auVar32._0_4_;
            auVar28._4_4_ = uVar21 & (uint)auVar32._4_4_;
            auVar28._8_4_ = uVar22 & (uint)auVar32._8_4_;
            auVar28._12_4_ = uVar23 & (uint)auVar32._12_4_;
            *param_6 = auVar18 | auVar25;
            auVar32._0_4_ = ~uVar20 & (uint)fVar11;
            auVar32._4_4_ = ~uVar21 & (uint)fVar11;
            auVar32._8_4_ = ~uVar22 & (uint)fVar10;
            auVar32._12_4_ = ~uVar23 & (uint)fVar10;
            auVar32 = auVar32 | auVar28;
            uVar6 = extraout_EDX;
          }
          uVar8 = uVar8 * 2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_2);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
    uVar4 = 0x7f7fffff;
    uVar35 = 0;
    uVar36 = 0;
  }
  FUN_100338fc(param_4,(int)local_d0);
  iVar5 = param_4 - 1;
  iVar9 = 0;
  fVar12 = (float)iVar5;
  fVar15 = (float)iVar5;
  fVar16 = (float)iVar5;
  fVar17 = (float)iVar5;
  local_18 = 0;
  uVar8 = 1;
  local_14 = 0;
  auVar24 = ZEXT816(0);
  auVar27 = ZEXT816(0);
  uStack_3c = (uint)fVar15;
  local_40 = (undefined1  [4])fVar12;
  fStack_38 = fVar16;
  fStack_34 = fVar17;
  local_1c = 1;
  local_24 = 0;
  iVar5 = 0;
  if (param_3 != 0) {
    do {
      local_20 = 0;
      uVar7 = local_24;
      auVar32 = auVar24;
      auVar25 = auVar27;
      if (param_2 != 0) {
        do {
          auVar24 = auVar32;
          auVar27 = auVar25;
          if ((param_7 & uVar8) == 0) {
            uVar8 = 0;
            uVar6 = 0;
            auVar33._4_4_ = 0;
            auVar33._0_4_ = uVar4;
            auVar33._8_4_ = uVar35;
            auVar33._12_4_ = uVar36;
            if (param_4 != 0) {
              iVar5 = local_20 + uVar7 * 4;
              do {
                auVar28 = *(undefined1 (*) [16])(iVar5 * 0x10 + param_1);
                FUN_100338ba(local_150 + uVar6 * 4);
                auVar19._4_12_ = auVar28._4_12_;
                auVar19._0_4_ = -(uint)(auVar28._0_4_ < auVar33._0_4_);
                uVar4 = movmskps(extraout_ECX,auVar19);
                uVar8 = uVar6;
                if ((uVar4 & 1) == 0) {
                  uVar8 = extraout_EDX_00;
                  auVar28 = auVar33;
                }
                auVar33 = auVar28;
                uVar6 = uVar6 + 1;
              } while (uVar6 < param_4);
              uVar4 = 0x7f7fffff;
              uVar35 = 0;
              uVar36 = 0;
            }
            iVar9 = local_18 + -1 + (param_4 - uVar8);
            local_14 = local_14 + uVar8;
            local_18 = iVar9;
            auVar24._0_4_ = auVar32._0_4_ + (fVar12 - (float)(int)uVar8) * local_150[uVar8 * 4];
            auVar24._4_4_ = auVar32._4_4_ + (fVar15 - (float)(int)uVar8) * local_150[uVar8 * 4 + 1];
            auVar24._8_4_ = auVar32._8_4_ + (fVar16 - (float)(int)uVar8) * local_150[uVar8 * 4 + 2];
            auVar24._12_4_ =
                 auVar32._12_4_ + (fVar17 - (float)(int)uVar8) * local_150[uVar8 * 4 + 3];
            auVar27._0_4_ = auVar25._0_4_ + local_150[uVar8 * 4] * (float)(int)uVar8;
            auVar27._4_4_ = auVar25._4_4_ + local_150[uVar8 * 4 + 1] * (float)(int)uVar8;
            auVar27._8_4_ = auVar25._8_4_ + local_150[uVar8 * 4 + 2] * (float)(int)uVar8;
            auVar27._12_4_ = auVar25._12_4_ + local_150[uVar8 * 4 + 3] * (float)(int)uVar8;
            uVar7 = local_24;
            uVar8 = local_1c;
          }
          uVar8 = uVar8 * 2;
          local_20 = local_20 + 1;
          local_1c = uVar8;
          auVar32 = auVar24;
          auVar25 = auVar27;
        } while (local_20 < param_2);
      }
      local_24 = uVar7 + 1;
      iVar5 = local_14;
    } while (uVar7 + 1 < param_3);
  }
  auVar32 = _DAT_10067000;
  auVar13._0_4_ = (float)iVar9;
  auVar13._4_4_ = (float)iVar9;
  auVar13._8_4_ = (float)iVar9;
  auVar13._12_4_ = (float)iVar9;
  auVar25 = divps(auVar24,auVar13);
  auVar14._0_4_ = (float)iVar5;
  auVar14._4_4_ = (float)iVar5;
  auVar14._8_4_ = (float)iVar5;
  auVar14._12_4_ = (float)iVar5;
  auVar26._0_4_ = auVar25._0_4_ + *(float *)*param_5;
  auVar26._4_4_ = auVar25._4_4_ + *(float *)(*param_5 + 4);
  auVar26._8_4_ = auVar25._8_4_ + *(float *)(*param_5 + 8);
  auVar26._12_4_ = auVar25._12_4_ + *(float *)(*param_5 + 0xc);
  auVar28 = divps(auVar27,auVar14);
  auVar25 = maxps(auVar26,ZEXT816(0));
  auVar25 = minps(auVar25,_DAT_10067000);
  *param_5 = auVar25;
  auVar29._0_4_ = auVar28._0_4_ + *(float *)*param_6;
  auVar29._4_4_ = auVar28._4_4_ + *(float *)(*param_6 + 4);
  auVar29._8_4_ = auVar28._8_4_ + *(float *)(*param_6 + 8);
  auVar29._12_4_ = auVar28._12_4_ + *(float *)(*param_6 + 0xc);
  auVar25 = maxps(auVar29,ZEXT816(0));
  auVar32 = minps(auVar25,auVar32);
  *param_6 = auVar32;
  return;
}

