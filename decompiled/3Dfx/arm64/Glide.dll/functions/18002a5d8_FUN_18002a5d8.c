/*
 * FUN_18002a5d8 at 18002a5d8
 * undefined __cdecl FUN_18002a5d8(longlong param_1, ulonglong * param_2)
 * Address ranges: 18002a5d8-18002a99f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_18002a5d8(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong local_1b0 [2];
  undefined4 local_1a0;
  uint uStack_19c;
  longlong local_198;
  undefined8 *local_190;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  float local_160;
  float fStack_15c;
  undefined8 uStack_158;
  float local_150;
  float fStack_14c;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  undefined8 local_128;
  float local_120;
  float fStack_11c;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  ulonglong local_b0;
  uint local_a8;
  undefined4 local_9c;
  undefined4 uStack_98;
  
  fVar18 = *(float *)(param_2 + 7);
  fVar17 = *(float *)((longlong)param_2 + 0x3c);
  fVar16 = *(float *)(param_2 + 6);
  fVar15 = *(float *)((longlong)param_2 + 0x34);
  uVar7 = param_2[2];
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x140);
  uVar4 = *(uint *)(*(longlong *)(lVar10 + 8) + 0x9e);
  plVar3 = (longlong *)*param_2;
  local_1b0[0] = param_2[1];
  lVar11 = *(longlong *)(lVar10 + 0x31b0);
  lVar10 = lVar11 + (ulonglong)*(uint *)(lVar10 + 0x31b8) * 0x1ac0;
  *(int *)(*(longlong *)(lVar10 + 0x1e08) + 0x684) =
       *(int *)(*(longlong *)(lVar10 + 0x1e08) + 0x684) + 1;
  uVar9 = *(undefined8 *)(*(longlong *)(lVar10 + 0x1e08) + 0xb78);
  *(undefined8 *)(lVar10 + 0x9d0) = uVar9;
  FUN_180045f40(*(longlong *)(lVar10 + 0x908) + 0x40,&local_198,2,
                *(longlong *)(*(longlong *)(lVar10 + 0x1e00) + 0x18),uVar9);
  puVar6 = local_190;
  if (local_190 != (undefined8 *)0x0) {
    *(longlong *)(*(longlong *)(lVar10 + 0x1e08) + 0xb88) = lVar11;
    fVar14 = (float)uVar1 * fVar16 + fVar18;
    fVar13 = (float)uVar2 * fVar15 + fVar17;
    fVar19 = (float)uVar4;
    fVar12 = fVar16 * fVar19;
    fVar19 = fVar15 * fVar19;
    (**(code **)(*plVar3 + 0x50))(plVar3,auStack_c0);
    *(undefined4 *)(lVar10 + 0x980) = 1;
    *(int *)(lVar10 + 0x984) = (int)uVar7;
    *(undefined4 *)(lVar10 + 0x9a8) = local_9c;
    *(undefined4 *)(lVar10 + 0x9ac) = uStack_98;
    uVar9 = FUN_18001c3d8((longlong *)(lVar10 + 0x2278),(int *)&DAT_1800632c0);
    *(undefined8 *)(lVar10 + 0x950) = uVar9;
    uVar9 = FUN_18001c660((longlong *)(lVar10 + 0x2260),(int *)&DAT_180063250);
    *(undefined8 *)(lVar10 + 0x968) = uVar9;
    uVar9 = FUN_18001c1a0((longlong *)(lVar10 + 0x22a8),(uint *)&DAT_180063288);
    *(undefined8 *)(lVar10 + 0x960) = uVar9;
    if (*(int *)(*(longlong *)(lVar10 + 0x908) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(lVar10 + 0x908) + 0x34) = 0;
    }
    FUN_18004bee8(*(ulonglong *)(lVar10 + 0x1e08),(ulonglong)plVar3,0,0,4);
    uVar7 = *(ulonglong *)(lVar10 + 0x1e08);
    FUN_180046ef8(*(longlong *)(uVar7 + 0xb18),*(ulonglong *)(lVar10 + 0x918),
                  *(ulonglong *)(uVar7 + 0xb10),uVar7,*(ulonglong *)(uVar7 + 0xb78));
    FUN_18004c390(*(longlong *)(lVar10 + 0x1e08),*(longlong *)(lVar10 + 0x918));
    FUN_18004c4c8(*(longlong *)(lVar10 + 0x1e08),5);
    local_190 = (undefined8 *)0x1000000200;
    FUN_18004c978(*(longlong *)(lVar10 + 0x1e08),0,1,(longlong)&local_198);
    *(undefined8 *)(lVar10 + 0x920) = *(undefined8 *)(lVar10 + 0x1ba0);
    *(undefined8 *)(lVar10 + 0x928) = *(undefined8 *)(lVar10 + 0x1b88);
    *(undefined8 *)(lVar10 + 0x970) = *(undefined8 *)(lVar10 + 0x1bb0);
    uVar7 = FUN_1800450c0(lVar10 + 0x22d8,(byte *)(lVar10 + 0x918));
    FUN_18004c478(*(longlong *)(lVar10 + 0x1e08),uVar7);
    uVar8 = *(ulonglong *)(lVar10 + 0x1e08);
    FUN_180046ef8(*(longlong *)(uVar8 + 0xb18),uVar7,*(ulonglong *)(uVar8 + 0xb10),uVar8,
                  *(ulonglong *)(uVar8 + 0xb78));
    FUN_18004cbd8(*(longlong *)(lVar10 + 0x1e08),1,(longlong *)local_1b0,0,(longlong *)0x0);
    local_180 = 0;
    local_170 = 0;
    local_1b0[1] = 0;
    local_178 = (float)(local_b0 & 0xffffffff);
    fStack_174 = (float)local_a8;
    local_1a0 = (undefined4)local_b0;
    uStack_19c = local_a8;
    local_16c = 0x3f800000;
    FUN_18004cec0(*(longlong *)(lVar10 + 0x1e08),1,(longlong)&local_180);
    FUN_18004cdf0(*(longlong *)(lVar10 + 0x1e08),1,(longlong)(local_1b0 + 1));
    local_130 = (float)(local_b0 & 0xffffffff);
    fStack_10c = (float)local_a8;
    local_140 = (fVar12 + fVar12) / local_130;
    fStack_11c = (fVar19 + fVar19) / fStack_10c;
    fVar18 = fVar16 * 0.0 + fVar18;
    uStack_158 = 0;
    local_148 = 0;
    uStack_138 = 0;
    local_128 = 0;
    uStack_118 = 0;
    local_150 = ((fVar18 + fVar18) - local_130) / local_130;
    local_108 = 0;
    uStack_f8 = 0;
    local_e8 = 0;
    uStack_d8 = 0;
    local_c8 = 0;
    local_130 = ((fVar14 + fVar14) - local_130) / local_130;
    fVar17 = fVar15 * 0.0 + fVar17;
    local_160 = local_140 + local_150;
    local_140 = local_130 - local_140;
    fStack_14c = (fStack_10c - (fVar17 + fVar17)) / fStack_10c;
    fStack_10c = (fStack_10c - (fVar13 + fVar13)) / fStack_10c;
    fStack_15c = fStack_14c - fStack_11c;
    fStack_11c = fStack_11c + fStack_10c;
    puVar6[1] = 0;
    *puVar6 = CONCAT44(fStack_15c,local_160);
    puVar6[3] = 0;
    puVar6[2] = CONCAT44(fStack_14c,local_150);
    puVar6[5] = 0;
    puVar6[4] = CONCAT44(fStack_15c,local_140);
    puVar6[7] = 0;
    puVar6[6] = CONCAT44(fStack_14c,local_130);
    puVar6[9] = 0;
    puVar6[8] = CONCAT44(fStack_11c,local_140);
    puVar6[0xb] = 0;
    puVar6[10] = CONCAT44(fStack_10c,local_130);
    puVar6[0xd] = 0;
    puVar6[0xc] = CONCAT44(fStack_11c,local_160);
    puVar6[0xf] = 0;
    puVar6[0xe] = CONCAT44(fStack_10c,local_150);
    puVar6[0x11] = 0;
    puVar6[0x10] = CONCAT44(fStack_15c,local_160);
    puVar6[0x13] = 0;
    puVar6[0x12] = CONCAT44(fStack_14c,local_150);
    fStack_13c = fStack_15c;
    fStack_12c = fStack_14c;
    local_120 = local_140;
    local_110 = local_130;
    local_100 = local_160;
    fStack_fc = fStack_11c;
    local_f0 = local_150;
    fStack_ec = fStack_10c;
    local_e0 = local_160;
    fStack_dc = fStack_15c;
    local_d0 = local_150;
    fStack_cc = fStack_14c;
    FUN_18004d280(*(longlong *)(lVar10 + 0x1e08),10,1,0,0);
    lVar10 = *(longlong *)(lVar10 + 0x1e08);
    iVar5 = *(int *)(lVar10 + 0x684) + -1;
    *(int *)(lVar10 + 0x684) = iVar5;
    if ((iVar5 == 0) && (*(int *)(lVar10 + 0x680) <= *(int *)(lVar10 + 0x678))) {
      FUN_18004baf0(lVar10 + 8,0);
    }
  }
  return;
}

