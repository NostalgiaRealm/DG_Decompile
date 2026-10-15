/*
 * FUN_1801df750 at 1801df750
 * undefined FUN_1801df750(void)
 * Address ranges: 1801df750-1801dfaef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801df750(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar6;
  ulonglong uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60 [4];
  
  iVar4 = FUN_1801042d0(param_1 + 0xac);
  if (iVar4 + *(int *)(param_1 + 0xa8) != 0) {
    return;
  }
  if (((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0xe78) >> 2 & 1) == 0) &&
     (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    uVar5 = extraout_x1;
  }
  else {
    bVar2 = true;
    iVar4 = thunk_FUN_1802236e4(DAT_180258900);
    uVar5 = extraout_x1_00;
    if (iVar4 == 0) {
      FUN_1801085c8();
      uVar5 = extraout_x1_01;
    }
  }
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if ((*(longlong *)(param_1 + 0xd0) != 0) || (*(longlong *)(param_1 + 200) != 0)) {
    lVar8 = *(longlong *)(param_1 + 0xb8);
    bVar1 = false;
    uVar7 = 0;
    uVar6 = *(undefined8 *)(lVar8 + 0x50);
    do {
      if (bVar1) break;
      local_60[uVar7] = *(undefined8 *)(lVar8 + 0x30 + uVar7 * 8);
      if (param_1 == *(longlong *)(lVar8 + 0xc460 + uVar7 * 8)) {
        bVar1 = true;
        *(undefined8 *)(lVar8 + 0xc460 + uVar7 * 8) = 0;
        local_60[uVar7] = 0;
      }
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar10;
    } while (uVar10 < 4);
    if (param_1 == *(longlong *)(lVar8 + 0xc480)) {
      *(undefined8 *)(lVar8 + 0xc480) = 0;
      uVar6 = 0;
    }
    else if (!bVar1) goto LAB_1801df990;
    if (*(longlong *)(lVar8 + 0xc460) == 0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      uVar5 = (*(code *)puVar3)(0x180225000,*(undefined8 *)(lVar8 + 0x28),uVar5,uVar6);
      (*extraout_x11_00)(uVar5,4,1,&local_a0,&local_f0);
    }
    else {
      FUN_18011c748(lVar8,local_60,uVar6,0);
    }
    goto LAB_1801df990;
  }
  lVar8 = *(longlong *)(param_1 + 0xb8);
  bVar1 = false;
  uVar7 = 0;
  uVar6 = *(undefined8 *)(lVar8 + 0x50);
  do {
    if (bVar1) break;
    local_60[uVar7] = *(undefined8 *)(lVar8 + 0x30 + uVar7 * 8);
    if (param_1 == *(longlong *)(lVar8 + 0xc460 + uVar7 * 8)) {
      *(undefined8 *)(lVar8 + 0xc460 + uVar7 * 8) = 0;
      local_60[uVar7] = 0;
      bVar1 = true;
    }
    uVar10 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar10;
  } while (uVar10 < 4);
  if (param_1 == *(longlong *)(lVar8 + 0xc480)) {
    *(undefined8 *)(lVar8 + 0xc480) = 0;
    uVar6 = 0;
LAB_1801df85c:
    if (*(longlong *)(lVar8 + 0xc460) == 0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      uVar5 = (*(code *)puVar3)(0x180225000,*(undefined8 *)(lVar8 + 0x28),uVar5,uVar6);
      (*extraout_x11)(uVar5,4,1,&local_e0,&local_100);
    }
    else {
      FUN_18011c748(lVar8,local_60,uVar6,0);
    }
  }
  else if (bVar1) goto LAB_1801df85c;
  FUN_18010b348(lVar8,param_1);
LAB_1801df990:
  puVar9 = *(undefined8 **)(param_1 + 8);
  iVar4 = *(int *)((longlong)puVar9 + 0x104) + -1;
  *(int *)((longlong)puVar9 + 0x104) = iVar4;
  if (iVar4 == 0) {
    uVar10 = 0;
    if (*(int *)(puVar9 + 0x10) != 0) {
      do {
        (*(code *)puVar3)();
        (*extraout_x11_01)();
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(puVar9 + 0x10));
    }
    FUN_1802229d8(puVar9[0xf]);
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    if ((*(uint *)(puVar9 + 9) >> 3 & 1) == 0) {
      FUN_18012fda0(puVar9,puVar9[0x1f],*(int *)(puVar9 + 3) * 0x40 + 0xfffU & 0xfffff000);
    }
    if (puVar9[0x17] != 0) {
      thunk_FUN_180224288();
      puVar9[0x17] = 0;
      puVar9[0x1c] = 0;
    }
    if (((*(int *)((longlong)puVar9 + 0x94) == 0) && (*(int *)(puVar9 + 0x13) == 0)) &&
       (puVar9[0xe] != 0)) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_02)();
    }
    if (puVar9[0x1f] - 1 < 0xfffffffffffffffe) {
      thunk_FUN_180223824();
    }
    puVar9[0x1f] = 0xffffffffffffffff;
    *puVar9 = &PTR_D3DPERF_GetStatus_native_18022a8e0;
    FUN_1802229d8(puVar9[0xf]);
    FUN_1802229d8(puVar9,0x108);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_180222b28(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_1801df700(param_1);
  FUN_1802229d8(param_1,0xd8);
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return;
}

