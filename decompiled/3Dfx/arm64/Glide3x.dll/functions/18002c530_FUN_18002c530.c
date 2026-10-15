/*
 * FUN_18002c530 at 18002c530
 * undefined __cdecl FUN_18002c530(longlong param_1, longlong param_2)
 * Address ranges: 18002c530-18002c82f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c530(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_170 [2];
  float local_168 [3];
  float fStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  float local_150;
  float fStack_14c;
  undefined8 uStack_148;
  float local_140;
  float fStack_13c;
  undefined8 local_138;
  float local_130;
  float fStack_12c;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  float local_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90 [2];
  
  fVar17 = *(float *)(param_2 + 0x28);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x140);
  fVar18 = (float)*(uint *)(*(longlong *)(lVar8 + 8) + 0x9e);
  fVar16 = fVar17 * fVar18;
  if (fVar16 != 0.0) {
    fVar15 = *(float *)(param_2 + 0x2c);
    fVar18 = fVar15 * fVar18;
    if (fVar18 != 0.0) {
      uVar3 = *(uint *)(lVar8 + 0x3338);
      local_168[0] = 0.0;
      local_168[1] = 0.0;
      uVar9 = *(ulonglong *)(lVar8 + 0x3330);
      local_158 = 0;
      fVar14 = *(float *)(param_2 + 0x30);
      fVar13 = *(float *)(param_2 + 0x34);
      local_154 = 0x3f800000;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x28);
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c);
      uVar10 = *(undefined8 *)(param_2 + 8);
      lVar8 = uVar9 + (ulonglong)uVar3 * 0x18c0;
      fVar12 = (float)*(uint *)(param_2 + 0x18);
      fVar11 = (float)*(uint *)(param_2 + 0x1c);
      local_168[2] = fVar12;
      fStack_15c = fVar11;
      FUN_180054160(uVar9,(ulonglong)uVar3,local_168);
      uVar5 = 0;
      FUN_1800539b0(uVar9,(ulonglong)uVar3,(int *)&DAT_180065f20,0);
      FUN_180053700(uVar9,(ulonglong)uVar3,(int *)&DAT_180065db0,uVar5,-1);
      FUN_180053c88(uVar9,(ulonglong)uVar3,(uint *)&DAT_180065ef8);
      FUN_1800543b8(uVar9,(ulonglong)uVar3,5,*(longlong *)(lVar8 + 0xe88),
                    *(longlong *)(lVar8 + 0xe78),*(longlong *)(lVar8 + 0xe60));
      uStack_a8 = 0;
      puVar6 = &local_b0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = uVar10;
      FUN_1800544c0(uVar9,(ulonglong)uVar3,4,(longlong)puVar6,0);
      local_170[0] = 0;
      local_170[1] = 0x10;
      FUN_1800542d8(uVar9,uVar3,0,puVar6,(longlong *)(lVar8 + 0xe98),local_170 + 1,local_170);
      FUN_180054360(uVar9,uVar3,0,0);
      uVar3 = 0;
      if (*(uint *)(lVar8 + 0xea0) + 10 < 0x401) {
        uVar3 = *(uint *)(lVar8 + 0xea0);
      }
      *(uint *)(lVar8 + 0xea0) = uVar3 + 10;
      uVar7 = 4;
      if (uVar3 != 0) {
        uVar7 = 5;
      }
      iVar4 = (**(code **)(**(longlong **)(lVar8 + 0x6b8) + 0x70))
                        (*(longlong **)(lVar8 + 0x6b8),*(undefined8 *)(lVar8 + 0xe98),0,uVar7,0,
                         local_90);
      if (-1 < iVar4) {
        uStack_148 = 0;
        local_138 = 0;
        uStack_128 = 0;
        puVar6 = (undefined8 *)(local_90[0] + (ulonglong)uVar3 * 0x10);
        local_118 = 0;
        uStack_108 = 0;
        local_f8 = 0;
        uStack_e8 = 0;
        local_d8 = 0;
        uStack_c8 = 0;
        local_b8 = 0;
        fVar20 = (float)uVar1 * fVar17 + fVar14;
        fVar19 = (float)uVar2 * fVar15 + fVar13;
        local_130 = (fVar16 + fVar16) / fVar12;
        fStack_10c = (fVar18 + fVar18) / fVar11;
        fVar14 = fVar17 * 0.0 + fVar14;
        local_140 = ((fVar14 + fVar14) - fVar12) / fVar12;
        local_120 = ((fVar20 + fVar20) - fVar12) / fVar12;
        fVar13 = fVar15 * 0.0 + fVar13;
        local_150 = local_130 + local_140;
        local_130 = local_120 - local_130;
        fStack_13c = (fVar11 - (fVar13 + fVar13)) / fVar11;
        fStack_fc = (fVar11 - (fVar19 + fVar19)) / fVar11;
        fStack_14c = fStack_13c - fStack_10c;
        fStack_10c = fStack_10c + fStack_fc;
        puVar6[1] = 0;
        *puVar6 = CONCAT44(fStack_14c,local_150);
        puVar6[3] = 0;
        puVar6[2] = CONCAT44(fStack_13c,local_140);
        puVar6[5] = 0;
        puVar6[4] = CONCAT44(fStack_14c,local_130);
        puVar6[7] = 0;
        puVar6[6] = CONCAT44(fStack_13c,local_120);
        puVar6[9] = 0;
        puVar6[8] = CONCAT44(fStack_10c,local_130);
        puVar6[0xb] = 0;
        puVar6[10] = CONCAT44(fStack_fc,local_120);
        puVar6[0xd] = 0;
        puVar6[0xc] = CONCAT44(fStack_10c,local_150);
        puVar6[0xf] = 0;
        puVar6[0xe] = CONCAT44(fStack_fc,local_140);
        puVar6[0x11] = 0;
        puVar6[0x10] = CONCAT44(fStack_14c,local_150);
        puVar6[0x13] = 0;
        puVar6[0x12] = CONCAT44(fStack_13c,local_140);
        fStack_12c = fStack_14c;
        fStack_11c = fStack_13c;
        local_110 = local_130;
        local_100 = local_120;
        local_f0 = local_150;
        fStack_ec = fStack_10c;
        local_e0 = local_140;
        fStack_dc = fStack_fc;
        local_d0 = local_150;
        fStack_cc = fStack_14c;
        local_c0 = local_140;
        fStack_bc = fStack_13c;
        (**(code **)(**(longlong **)(lVar8 + 0x6b8) + 0x78))
                  (*(longlong **)(lVar8 + 0x6b8),*(undefined8 *)(lVar8 + 0xe98),0);
        (**(code **)(**(longlong **)(lVar8 + 0x6b8) + 0x68))(*(longlong **)(lVar8 + 0x6b8),10,uVar3)
        ;
      }
    }
  }
  return;
}

