/*
 * FUN_1801dfc40 at 1801dfc40
 * undefined FUN_1801dfc40(void)
 * Address ranges: 1801dfc40-1801dff2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801dfc40(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  ulonglong uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar12;
  longlong lVar13;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68 [5];
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x40);
  iVar7 = FUN_1801042d0(param_1 + 0x28);
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 0x2c) + iVar7 != 0) goto LAB_1801dfed4;
  lVar13 = param_1 + -0x80;
  if (((*(uint *)(*(longlong *)(param_1 + 0x38) + 0xe78) >> 2 & 1) == 0) &&
     (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    uVar9 = extraout_x1;
  }
  else {
    bVar4 = true;
    iVar8 = thunk_FUN_1802236e4(DAT_180258900);
    uVar9 = extraout_x1_00;
    if (iVar8 == 0) {
      FUN_1801085c8();
      uVar9 = extraout_x1_01;
    }
  }
  if ((*(longlong *)(param_1 + 0x50) == 0) && (*(longlong *)(param_1 + 0x48) == 0)) {
    lVar12 = *(longlong *)(param_1 + 0x38);
    bVar5 = false;
    uVar11 = 0;
    uVar10 = *(undefined8 *)(lVar12 + 0x50);
    do {
      if (bVar5) break;
      local_68[uVar11] = *(undefined8 *)(lVar12 + 0x30 + uVar11 * 8);
      if (lVar13 == *(longlong *)(lVar12 + 0xc460 + uVar11 * 8)) {
        bVar5 = true;
        *(undefined8 *)(lVar12 + 0xc460 + uVar11 * 8) = 0;
        local_68[uVar11] = 0;
      }
      uVar1 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar1;
    } while (uVar1 < 4);
    if (lVar13 == *(longlong *)(lVar12 + 0xc480)) {
      *(undefined8 *)(lVar12 + 0xc480) = 0;
      uVar10 = 0;
LAB_1801dfd60:
      if (*(longlong *)(lVar12 + 0xc460) == 0) {
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        uVar9 = (*(code *)puVar6)(0x180225000,*(undefined8 *)(lVar12 + 0x28),uVar9,uVar10);
        (*extraout_x11)(uVar9,4,1,&local_e8,&local_108);
      }
      else {
        FUN_18011c748(lVar12,local_68,uVar10,0);
      }
    }
    else if (bVar5) goto LAB_1801dfd60;
    FUN_18010b348(lVar12,lVar13);
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x38);
    bVar5 = false;
    uVar11 = 0;
    uVar10 = *(undefined8 *)(lVar12 + 0x50);
    do {
      if (bVar5) break;
      local_68[uVar11] = *(undefined8 *)(lVar12 + 0x30 + uVar11 * 8);
      if (lVar13 == *(longlong *)(lVar12 + 0xc460 + uVar11 * 8)) {
        bVar5 = true;
        *(undefined8 *)(lVar12 + 0xc460 + uVar11 * 8) = 0;
        local_68[uVar11] = 0;
      }
      uVar1 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar1;
    } while (uVar1 < 4);
    if (lVar13 == *(longlong *)(lVar12 + 0xc480)) {
      *(undefined8 *)(lVar12 + 0xc480) = 0;
      uVar10 = 0;
LAB_1801dfe40:
      if (*(longlong *)(lVar12 + 0xc460) == 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        uVar9 = (*(code *)puVar6)(0x180225000,*(undefined8 *)(lVar12 + 0x28),uVar9,uVar10);
        (*extraout_x11_00)(uVar9,4,1,&local_a8,&local_f8);
      }
      else {
        FUN_18011c748(lVar12,local_68,uVar10,0);
      }
    }
    else if (bVar5) goto LAB_1801dfe40;
  }
  FUN_180116d28(lVar13);
  if (lVar13 != 0) {
    FUN_1801df700(lVar13);
    FUN_1802229d8(lVar13,0xd8);
  }
  if (bVar4) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
LAB_1801dfed4:
  if (lVar3 == 0) {
    if (iVar7 == 0) {
      FUN_1801c3098(lVar2 + 0x6838);
    }
  }
  else {
    (*(code *)puVar6)(0x180224000);
    iVar7 = (*extraout_x11_01)(lVar3);
  }
  return iVar7;
}

