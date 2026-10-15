/*
 * FUN_180044270 at 180044270
 * longlong __cdecl FUN_180044270(longlong param_1, byte * param_2)
 * Address ranges: 180044270-180044883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180044270(longlong param_1,byte *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  SIZE_T SVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  byte *pbVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong local_2e0 [2];
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
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
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar14 = 0;
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar16 = ((ulonglong)*(uint *)(param_2 + 0x98) |
           (ulonglong)*(uint *)(param_2 + 0x9c) + (ulonglong)*(uint *)(param_2 + 0x94) +
           (longlong)*(int *)(param_2 + 0x8c) + (longlong)*(int *)(param_2 + 0x88) +
           (longlong)*(int *)(param_2 + 0x80) + (longlong)*(int *)(param_2 + 0x78) +
           (longlong)*(int *)(param_2 + 0x70) + (longlong)*(int *)(param_2 + 100) +
           *(longlong *)(param_2 + 0x58) + *(longlong *)(param_2 + 0x48) +
           *(longlong *)(param_2 + 0x38) + *(longlong *)(param_2 + 0x28) +
           *(longlong *)(param_2 + 0x18) + *(longlong *)(param_2 + 8) << 0x20) +
           (ulonglong)*(uint *)(param_2 + 0x90) + (longlong)*(int *)(param_2 + 0x84) +
           (longlong)*(int *)(param_2 + 0x7c) + (longlong)*(int *)(param_2 + 0x74) +
           (longlong)*(int *)(param_2 + 0x6c) + (ulonglong)*(uint *)(param_2 + 0x68) +
           (longlong)*(int *)(param_2 + 0x60) + (ulonglong)*(uint *)(param_2 + 0x40) +
           *(longlong *)(param_2 + 0x50) + *(longlong *)(param_2 + 0x30) +
           *(longlong *)(param_2 + 0x20) + *(longlong *)(param_2 + 0x10) + *(longlong *)param_2;
  if (uVar2 == 0) {
LAB_1800443b0:
    if (uVar2 == *(uint *)(param_1 + 0x20)) {
      uVar13 = CONCAT44(0,*(uint *)(param_1 + 0x20) << 1);
      SVar11 = uVar13 * 0x18;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar13;
      if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
        SVar11 = 0xffffffffffffffff;
      }
      lVar18 = thunk_FUN_18005fb88(SVar11);
      if (lVar18 != 0) {
        uVar13 = 0;
        if (*(int *)(param_1 + 0x20) != 0) {
          do {
            uVar2 = (int)uVar13 + 1;
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18);
            puVar1 = (undefined8 *)(lVar18 + uVar13 * 0x18);
            uVar19 = *puVar8;
            puVar1[1] = puVar8[1];
            *puVar1 = uVar19;
            puVar1[2] = puVar8[2];
            uVar13 = (ulonglong)uVar2;
          } while (uVar2 < *(uint *)(param_1 + 0x20));
        }
        thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0x18));
        *(longlong *)(param_1 + 0x18) = lVar18;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) << 1;
      }
    }
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x24);
    while ((uint)uVar14 < (uint)uVar13) {
      uVar12 = (ulonglong)((uint)uVar13 - 1);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x18);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x18);
      uVar19 = *puVar1;
      puVar8[1] = puVar1[1];
      *puVar8 = uVar19;
      puVar8[2] = puVar1[2];
      uVar13 = uVar12;
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar14 * 0x18) = uVar16;
    *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar14 * 0x18 + 8) = uVar16;
    puVar8 = (undefined8 *)FUN_18005fb88(0x10);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x18) + uVar14 * 0x18 + 0x10) = puVar8;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    uVar10 = 0;
    uVar9 = uVar2;
    do {
      uVar3 = uVar9 + uVar10 >> 1;
      uVar14 = (ulonglong)uVar3;
      uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar14 * 0x18);
      if (uVar13 <= uVar16) {
        if (uVar16 <= uVar13) break;
        uVar10 = uVar3 + 1;
        uVar14 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
    } while (uVar9 != uVar10);
    if (((uint)uVar14 == uVar2) ||
       (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar14 * 0x18) != uVar16))
    goto LAB_1800443b0;
  }
  puVar8 = (undefined8 *)(uVar14 * 0x18 + *(longlong *)(param_1 + 0x18) + 0x10);
  if (puVar8 == (undefined8 *)0x0) {
    return 0;
  }
  plVar15 = (longlong *)*puVar8;
  uVar2 = *(uint *)(plVar15 + 1);
  if (uVar2 != 0) {
    lVar18 = *plVar15;
    uVar16 = 0;
    do {
      pbVar17 = (byte *)(lVar18 + uVar16 * 0xa8);
      iVar6 = FUN_180060310(pbVar17,param_2,0xa0);
      if (iVar6 == 0) {
        lVar18 = *(longlong *)(pbVar17 + 0xa0);
        if (lVar18 != 0) {
          return lVar18;
        }
        break;
      }
      uVar10 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar10;
    } while (uVar10 < uVar2);
  }
  local_2d0 = *(undefined8 *)param_2;
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
    uStack_2c8 = 0;
  }
  else {
    uStack_2c8 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))();
  }
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
    local_2c0 = 0;
  }
  else {
    local_2c0 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
  }
  if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
    local_2b8 = 0;
  }
  else {
    local_2b8 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x18))();
  }
  if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
    local_2b0 = 0;
  }
  else {
    local_2b0 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))();
  }
  if (*(longlong **)(param_2 + 0x18) == (longlong *)0x0) {
    uStack_2a8 = 0;
  }
  else {
    uStack_2a8 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x18))();
  }
  if (*(longlong **)(param_2 + 0x18) == (longlong *)0x0) {
    local_2a0 = 0;
  }
  else {
    local_2a0 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x20))();
  }
  if (*(longlong **)(param_2 + 0x20) == (longlong *)0x0) {
    local_298 = 0;
  }
  else {
    local_298 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x18))();
  }
  if (*(longlong **)(param_2 + 0x20) == (longlong *)0x0) {
    local_290 = 0;
  }
  else {
    local_290 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x20))();
  }
  if (*(longlong **)(param_2 + 0x28) == (longlong *)0x0) {
    uStack_288 = 0;
  }
  else {
    uStack_288 = (**(code **)(**(longlong **)(param_2 + 0x28) + 0x18))();
  }
  if (*(longlong **)(param_2 + 0x28) == (longlong *)0x0) {
    local_280 = 0;
  }
  else {
    local_280 = (**(code **)(**(longlong **)(param_2 + 0x28) + 0x20))();
  }
  puVar8 = *(undefined8 **)(param_2 + 0x30);
  if (*(undefined8 **)(param_2 + 0x30) == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)&DAT_180064e00;
  }
  uStack_270 = puVar8[1];
  local_278 = *puVar8;
  uStack_260 = puVar8[3];
  local_268 = puVar8[2];
  thunk_FUN_180001218(&uStack_258,*(undefined8 **)(param_2 + 0x38),0x148);
  local_110 = *(undefined4 *)(param_2 + 0x40);
  puVar8 = *(undefined8 **)(param_2 + 0x48);
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  uStack_104 = puVar8[1];
  local_10c = *puVar8;
  uStack_f4 = puVar8[3];
  uStack_fc = puVar8[2];
  local_ec = puVar8[4];
  local_e4 = *(undefined4 *)(puVar8 + 5);
  uStack_d8 = puVar1[1];
  local_e0 = *puVar1;
  uStack_c8 = puVar1[3];
  uStack_d0 = puVar1[2];
  uStack_b8 = puVar1[5];
  local_c0 = puVar1[4];
  local_b0 = *(undefined4 *)(puVar1 + 6);
  uStack_a0 = (*(undefined8 **)(param_2 + 0x58))[1];
  local_a8 = **(undefined8 **)(param_2 + 0x58);
  local_2e0[0] = 0;
  local_98 = *(undefined4 *)(param_2 + 0x60);
  uStack_94 = *(undefined4 *)(param_2 + 100);
  local_58 = 0;
  uStack_50 = 0;
  local_90 = *(undefined4 *)(param_2 + 0x68);
  uStack_8c = *(undefined4 *)(param_2 + 0x6c);
  local_88 = *(undefined4 *)(param_2 + 0x70);
  uStack_84 = *(undefined4 *)(param_2 + 0x74);
  local_80 = *(undefined4 *)(param_2 + 0x78);
  uStack_7c = *(undefined4 *)(param_2 + 0x7c);
  local_78 = *(undefined4 *)(param_2 + 0x80);
  uStack_74 = *(undefined4 *)(param_2 + 0x84);
  local_70 = *(undefined4 *)(param_2 + 0x88);
  uStack_6c = *(undefined4 *)(param_2 + 0x8c);
  local_68 = *(undefined8 *)(param_2 + 0x90);
  local_60 = *(undefined4 *)(param_2 + 0x98);
  local_48 = *(undefined4 *)(param_2 + 0x9c);
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x20);
  (**(code **)(*plVar7 + 0x50))(plVar7,&local_2d0,&DAT_180064e20,local_2e0);
  lVar18 = local_2e0[0];
  if (local_2e0[0] == 0) {
    return 0;
  }
  uStack_2c8 = *(undefined8 *)(param_2 + 8);
  local_2d0 = *(undefined8 *)param_2;
  local_2b8 = *(undefined8 *)(param_2 + 0x18);
  local_2c0 = *(undefined8 *)(param_2 + 0x10);
  local_230 = local_2e0[0];
  iVar6 = *(int *)((longlong)plVar15 + 0xc);
  uStack_2a8 = *(undefined8 *)(param_2 + 0x28);
  local_2b0 = *(undefined8 *)(param_2 + 0x20);
  local_298 = *(undefined8 *)(param_2 + 0x38);
  local_2a0 = *(undefined8 *)(param_2 + 0x30);
  uStack_288 = *(undefined8 *)(param_2 + 0x48);
  local_290 = *(undefined8 *)(param_2 + 0x40);
  local_278 = *(undefined8 *)(param_2 + 0x58);
  local_280 = *(undefined8 *)(param_2 + 0x50);
  local_268 = *(undefined8 *)(param_2 + 0x68);
  uStack_270 = *(undefined8 *)(param_2 + 0x60);
  uStack_258 = *(undefined8 *)(param_2 + 0x78);
  uStack_260 = *(undefined8 *)(param_2 + 0x70);
  uStack_248 = *(undefined8 *)(param_2 + 0x88);
  local_250 = *(undefined8 *)(param_2 + 0x80);
  uStack_238 = *(undefined8 *)(param_2 + 0x98);
  uStack_240 = *(undefined8 *)(param_2 + 0x90);
  if ((int)plVar15[1] == iVar6) {
    uVar2 = iVar6 << 1;
    if (iVar6 == 0) {
      uVar2 = 0x10;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = CONCAT44(0,uVar2);
    SVar11 = CONCAT44(0,uVar2) * 0xa8;
    if (SUB168(auVar5 * ZEXT816(0xa8),8) != 0) {
      SVar11 = 0xffffffffffffffff;
    }
    puVar8 = (undefined8 *)thunk_FUN_18005fb88(SVar11);
    if (puVar8 == (undefined8 *)0x0) goto LAB_180044858;
    thunk_FUN_180001218(puVar8,(undefined8 *)*plVar15,
                        (ulonglong)*(uint *)((longlong)plVar15 + 0xc) * 0xa8);
    thunk_FUN_18005fbc8((LPVOID)*plVar15);
    *plVar15 = (longlong)puVar8;
    *(uint *)((longlong)plVar15 + 0xc) = uVar2;
  }
  puVar8 = (undefined8 *)(*plVar15 + (ulonglong)*(uint *)(plVar15 + 1) * 0xa8);
  puVar8[1] = uStack_2c8;
  *puVar8 = local_2d0;
  puVar8[3] = local_2b8;
  puVar8[2] = local_2c0;
  puVar8[5] = uStack_2a8;
  puVar8[4] = local_2b0;
  puVar8[7] = local_298;
  puVar8[6] = local_2a0;
  puVar8[9] = uStack_288;
  puVar8[8] = local_290;
  puVar8[0xb] = local_278;
  puVar8[10] = local_280;
  puVar8[0xd] = local_268;
  puVar8[0xc] = uStack_270;
  puVar8[0xf] = uStack_258;
  puVar8[0xe] = uStack_260;
  puVar8[0x11] = uStack_248;
  puVar8[0x10] = local_250;
  puVar8[0x13] = uStack_238;
  puVar8[0x12] = uStack_240;
  puVar8[0x14] = local_230;
  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
LAB_180044858:
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return lVar18;
}

