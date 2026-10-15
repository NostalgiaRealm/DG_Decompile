/*
 * FUN_1800ede18 at 1800ede18
 * undefined FUN_1800ede18(void)
 * Address ranges: 1800ede18-1800ee42b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800ede18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong local_2e0 [2];
  longlong local_2d0;
  longlong lStack_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong lStack_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong lStack_288;
  longlong local_280;
  longlong local_278;
  longlong lStack_270;
  longlong local_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong local_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong local_230;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar13 = 0;
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar15 = ((ulonglong)*(uint *)(param_2 + 0x13) |
           (ulonglong)*(uint *)((longlong)param_2 + 0x9c) +
           (ulonglong)*(uint *)((longlong)param_2 + 0x94) +
           (longlong)*(int *)((longlong)param_2 + 0x8c) + (longlong)(int)param_2[0x11] +
           (longlong)(int)param_2[0x10] + (longlong)(int)param_2[0xf] + (longlong)(int)param_2[0xe]
           + (longlong)*(int *)((longlong)param_2 + 100) + param_2[0xb] + param_2[9] + param_2[7] +
           param_2[5] + param_2[3] + param_2[1] << 0x20) + (ulonglong)*(uint *)(param_2 + 0x12) +
           (longlong)*(int *)((longlong)param_2 + 0x84) +
           (longlong)*(int *)((longlong)param_2 + 0x7c) +
           (longlong)*(int *)((longlong)param_2 + 0x74) +
           (longlong)*(int *)((longlong)param_2 + 0x6c) + (ulonglong)*(uint *)(param_2 + 0xd) +
           (longlong)(int)param_2[0xc] + (ulonglong)*(uint *)(param_2 + 8) + param_2[10] +
           param_2[6] + param_2[4] + param_2[2] + *param_2;
  if (uVar2 == 0) {
LAB_1800edf58:
    if (uVar2 == *(uint *)(param_1 + 0x20)) {
      uVar12 = CONCAT44(0,*(uint *)(param_1 + 0x20) << 1);
      lVar17 = uVar12 * 0x18;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar12;
      if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
        lVar17 = -1;
      }
      lVar17 = thunk_FUN_180102f80(lVar17);
      if (lVar17 != 0) {
        uVar12 = 0;
        if (*(int *)(param_1 + 0x20) != 0) {
          do {
            uVar2 = (int)uVar12 + 1;
            puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x18);
            puVar1 = (undefined8 *)(lVar17 + uVar12 * 0x18);
            uVar18 = *puVar7;
            puVar1[1] = puVar7[1];
            *puVar1 = uVar18;
            puVar1[2] = puVar7[2];
            uVar12 = (ulonglong)uVar2;
          } while (uVar2 < *(uint *)(param_1 + 0x20));
        }
        thunk_FUN_180102fc0(*(longlong *)(param_1 + 0x18));
        *(longlong *)(param_1 + 0x18) = lVar17;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 1;
      }
    }
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x24);
    while ((uint)uVar13 < (uint)uVar12) {
      uVar11 = (ulonglong)((uint)uVar12 - 1);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x18);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar11 * 0x18);
      uVar18 = *puVar1;
      puVar7[1] = puVar1[1];
      *puVar7 = uVar18;
      puVar7[2] = puVar1[2];
      uVar12 = uVar11;
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18) = uVar15;
    *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18 + 8) = uVar15;
    puVar7 = (undefined8 *)FUN_180102f80(0x10);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18 + 0x10) = puVar7;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    uVar10 = 0;
    uVar9 = uVar2;
    do {
      uVar3 = uVar9 + uVar10 >> 1;
      uVar13 = (ulonglong)uVar3;
      uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18);
      if (uVar12 <= uVar15) {
        if (uVar15 <= uVar12) break;
        uVar10 = uVar3 + 1;
        uVar13 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
    } while (uVar9 != uVar10);
    if (((uint)uVar13 == uVar2) ||
       (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18) != uVar15))
    goto LAB_1800edf58;
  }
  puVar7 = (undefined8 *)(uVar13 * 0x18 + *(longlong *)(param_1 + 0x18) + 0x10);
  if (puVar7 == (undefined8 *)0x0) {
    return 0;
  }
  plVar14 = (longlong *)*puVar7;
  uVar2 = *(uint *)(plVar14 + 1);
  if (uVar2 != 0) {
    lVar17 = *plVar14;
    uVar15 = 0;
    do {
      lVar16 = lVar17 + uVar15 * 0xa8;
      iVar6 = func_0x000180222c00(lVar16,param_2,0xa0);
      if (iVar6 == 0) {
        lVar17 = *(longlong *)(lVar16 + 0xa0);
        if (lVar17 != 0) {
          return lVar17;
        }
        break;
      }
      uVar10 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar10;
    } while (uVar10 < uVar2);
  }
  local_2d0 = *param_2;
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    lStack_2c8 = 0;
  }
  else {
    lStack_2c8 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
  }
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    local_2c0 = 0;
  }
  else {
    local_2c0 = (**(code **)(*(longlong *)param_2[1] + 0x20))();
  }
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    local_2b8 = 0;
  }
  else {
    local_2b8 = (**(code **)(*(longlong *)param_2[2] + 0x18))();
  }
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    local_2b0 = 0;
  }
  else {
    local_2b0 = (**(code **)(*(longlong *)param_2[2] + 0x20))();
  }
  if ((longlong *)param_2[3] == (longlong *)0x0) {
    lStack_2a8 = 0;
  }
  else {
    lStack_2a8 = (**(code **)(*(longlong *)param_2[3] + 0x18))();
  }
  if ((longlong *)param_2[3] == (longlong *)0x0) {
    local_2a0 = 0;
  }
  else {
    local_2a0 = (**(code **)(*(longlong *)param_2[3] + 0x20))();
  }
  if ((longlong *)param_2[4] == (longlong *)0x0) {
    local_298 = 0;
  }
  else {
    local_298 = (**(code **)(*(longlong *)param_2[4] + 0x18))();
  }
  if ((longlong *)param_2[4] == (longlong *)0x0) {
    local_290 = 0;
  }
  else {
    local_290 = (**(code **)(*(longlong *)param_2[4] + 0x20))();
  }
  if ((longlong *)param_2[5] == (longlong *)0x0) {
    lStack_288 = 0;
  }
  else {
    lStack_288 = (**(code **)(*(longlong *)param_2[5] + 0x18))();
  }
  if ((longlong *)param_2[5] == (longlong *)0x0) {
    local_280 = 0;
  }
  else {
    local_280 = (**(code **)(*(longlong *)param_2[5] + 0x20))();
  }
  puVar7 = (undefined8 *)param_2[6];
  if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)&DAT_18023beb0;
  }
  lStack_270 = puVar7[1];
  local_278 = *puVar7;
  lStack_260 = puVar7[3];
  local_268 = puVar7[2];
  thunk_FUN_180001218(&lStack_258,param_2[7],0x148);
  local_110 = (undefined4)param_2[8];
  puVar7 = (undefined8 *)param_2[9];
  puVar1 = (undefined8 *)param_2[10];
  uStack_104 = puVar7[1];
  local_10c = *puVar7;
  uStack_f4 = puVar7[3];
  uStack_fc = puVar7[2];
  local_ec = puVar7[4];
  local_e4 = *(undefined4 *)(puVar7 + 5);
  uStack_d8 = puVar1[1];
  local_e0 = *puVar1;
  uStack_c8 = puVar1[3];
  uStack_d0 = puVar1[2];
  uStack_b8 = puVar1[5];
  local_c0 = puVar1[4];
  local_b0 = *(undefined4 *)(puVar1 + 6);
  uStack_a0 = ((undefined8 *)param_2[0xb])[1];
  local_a8 = *(undefined8 *)param_2[0xb];
  local_2e0[0] = 0;
  local_98 = (undefined4)param_2[0xc];
  uStack_94 = *(undefined4 *)((longlong)param_2 + 100);
  local_58 = 0;
  uStack_50 = 0;
  local_90 = (undefined4)param_2[0xd];
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x6c);
  local_88 = (undefined4)param_2[0xe];
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x74);
  local_80 = (undefined4)param_2[0xf];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x7c);
  local_78 = (undefined4)param_2[0x10];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x84);
  local_70 = (undefined4)param_2[0x11];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x8c);
  local_68 = param_2[0x12];
  local_60 = (undefined4)param_2[0x13];
  local_48 = *(undefined4 *)((longlong)param_2 + 0x9c);
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x20);
  (**(code **)(*plVar8 + 0x50))(plVar8,&local_2d0,&DAT_18023bed0,local_2e0);
  lVar17 = local_2e0[0];
  if (local_2e0[0] == 0) {
    return 0;
  }
  lStack_2c8 = param_2[1];
  local_2d0 = *param_2;
  local_2b8 = param_2[3];
  local_2c0 = param_2[2];
  local_230 = local_2e0[0];
  iVar6 = *(int *)((longlong)plVar14 + 0xc);
  lStack_2a8 = param_2[5];
  local_2b0 = param_2[4];
  local_298 = param_2[7];
  local_2a0 = param_2[6];
  lStack_288 = param_2[9];
  local_290 = param_2[8];
  local_278 = param_2[0xb];
  local_280 = param_2[10];
  local_268 = param_2[0xd];
  lStack_270 = param_2[0xc];
  lStack_258 = param_2[0xf];
  lStack_260 = param_2[0xe];
  lStack_248 = param_2[0x11];
  local_250 = param_2[0x10];
  lStack_238 = param_2[0x13];
  lStack_240 = param_2[0x12];
  if ((int)plVar14[1] == iVar6) {
    uVar2 = iVar6 << 1;
    if (iVar6 == 0) {
      uVar2 = 0x10;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = CONCAT44(0,uVar2);
    lVar16 = CONCAT44(0,uVar2) * 0xa8;
    if (SUB168(auVar5 * ZEXT816(0xa8),8) != 0) {
      lVar16 = -1;
    }
    lVar16 = thunk_FUN_180102f80(lVar16);
    if (lVar16 == 0) goto LAB_1800ee400;
    thunk_FUN_180001218(lVar16,*plVar14,(ulonglong)*(uint *)((longlong)plVar14 + 0xc) * 0xa8);
    thunk_FUN_180102fc0(*plVar14);
    *plVar14 = lVar16;
    *(uint *)((longlong)plVar14 + 0xc) = uVar2;
  }
  plVar8 = (longlong *)(*plVar14 + (ulonglong)*(uint *)(plVar14 + 1) * 0xa8);
  plVar8[1] = lStack_2c8;
  *plVar8 = local_2d0;
  plVar8[3] = local_2b8;
  plVar8[2] = local_2c0;
  plVar8[5] = lStack_2a8;
  plVar8[4] = local_2b0;
  plVar8[7] = local_298;
  plVar8[6] = local_2a0;
  plVar8[9] = lStack_288;
  plVar8[8] = local_290;
  plVar8[0xb] = local_278;
  plVar8[10] = local_280;
  plVar8[0xd] = local_268;
  plVar8[0xc] = lStack_270;
  plVar8[0xf] = lStack_258;
  plVar8[0xe] = lStack_260;
  plVar8[0x11] = lStack_248;
  plVar8[0x10] = local_250;
  plVar8[0x13] = lStack_238;
  plVar8[0x12] = lStack_240;
  plVar8[0x14] = local_230;
  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
LAB_1800ee400:
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return lVar17;
}

