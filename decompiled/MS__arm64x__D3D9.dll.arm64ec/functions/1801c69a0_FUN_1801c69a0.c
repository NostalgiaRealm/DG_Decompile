/*
 * FUN_1801c69a0 at 1801c69a0
 * undefined FUN_1801c69a0(void)
 * Address ranges: 1801c69a0-1801c6e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801c69a0(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong extraout_x10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar15;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  iVar11 = -0x7789f794;
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_3 == 0) {
    return -0x7789f794;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar9 == 0) {
      FUN_1801085c8();
    }
  }
  uVar12 = 1;
  lVar15 = param_3 + -0x80;
  if ((((*(uint *)(param_2 + -0x30) & 3) != 0) &&
      (*(int *)(param_2 + -0x20) == *(int *)(param_3 + -0x20))) &&
     (*(int *)(param_2 + -0x1c) == *(int *)(param_3 + -0x1c))) {
    if (((*(int *)(param_2 + -0x28) == 0) || (*(int *)(param_2 + -0x28) == 1)) &&
       (*(int *)(param_2 + -0x24) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar9 = iVar11;
    if (bVar1) goto LAB_1801c6ac8;
    iVar9 = 0;
    if (*(int *)(param_2 + -0x38) != *(int *)(param_3 + -0x38)) {
      iVar9 = iVar11;
    }
    if ((iVar9 < 0) ||
       (((*(int *)(param_2 + -0x2c) == 0 && (*(int *)(param_3 + -0x2c) == 2)) &&
        (((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0 &&
         ((*(uint *)(*(longlong *)(param_3 + -0x78) + 0x100) >> 0xb & 1) == 0))))))
    goto LAB_1801c6ac8;
  }
  iVar9 = iVar11;
LAB_1801c6ac8:
  bVar1 = false;
  bVar2 = false;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0xb0);
    bVar1 = (*(uint *)(lVar14 + 0x50) & 0x400) != 0 && lVar14 != param_2 + -0x80;
  }
  if (*(longlong *)(param_3 + 0x48) != 0) {
    lVar14 = *(longlong *)(*(longlong *)(param_3 + 0x48) + 0xb0);
    bVar2 = (*(uint *)(lVar14 + 0x50) & 0x400) != 0 && lVar14 != lVar15;
  }
  if (((!bVar1) && (!bVar2)) && (iVar11 = iVar9, -1 < iVar9)) {
    if (*(char *)(param_1 + -0x1f) == '\0') {
      local_98 = *(longlong *)(param_2 + -0x78);
      lStack_90 = *(longlong *)(param_3 + -0x78);
      uVar3 = *(undefined4 *)(param_2 + -0x20);
      uVar4 = *(undefined4 *)(param_2 + -0x1c);
      if (((*(int *)(*(longlong *)(local_98 + 0x70) + 8) == 2) &&
          (*(int *)(*(longlong *)(lStack_90 + 0x70) + 8) != 2)) &&
         ((*(uint *)(param_3 + -0x2c) & 0xfffffffd) == 0)) {
        FUN_180117130(lVar15);
      }
      FUN_180116f60(lVar15,param_2 + -0x80);
      puVar8 = __hybrid_os_arm64x_dispatch_icall;
      if ((*(uint *)(param_3 + -0x30) & 1) != 0) {
        local_68 = *(undefined8 *)(*(longlong *)(param_3 + -0x78) + 0x70);
        local_58 = 0;
        uStack_50 = 0;
        uStack_60 = 0;
        uVar13 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(uVar13,&local_68,0);
      }
      iVar9 = FUN_180107140(*(undefined4 *)(param_2 + -0x38));
      iVar10 = FUN_1801071f0(extraout_x10 & 0xffffffff);
      iVar11 = *(int *)(param_2 + -0x10);
      local_c0 = 0;
      local_b8 = 0;
      local_88 = *(undefined8 *)(*(longlong *)(param_2 + -0x78) + 0x70);
      local_b4 = 1;
      uStack_d8 = 0;
      local_e0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      uStack_80 = *(undefined8 *)(*(longlong *)(param_3 + -0x78) + 0x70);
      local_b0 = *(int *)(param_3 + -0x10);
      uStack_a8 = *(undefined4 *)(local_98 + 0x94);
      local_ac = *(undefined4 *)(local_98 + 0x98);
      uStack_a0 = *(undefined4 *)(lStack_90 + 0x94);
      local_a4 = *(undefined4 *)(lStack_90 + 0x98);
      uVar13 = *(undefined8 *)(param_1 + -0x59a0);
      thunk_FUN_180223c20(&local_d0,0,0,uVar3,uVar4);
      thunk_FUN_180223c20(&local_e0,0,0,uVar3,uVar4);
      if ((iVar11 == local_b0) && (iVar11 - 0xeU < 7)) {
        uVar5 = -iVar9;
        uVar6 = -iVar10;
        local_d0 = CONCAT44(uVar6 & local_d0._4_4_,uVar5 & (uint)local_d0);
        local_c8 = CONCAT44((local_c8._4_4_ + iVar10) - 1U & uVar6,
                            ((int)local_c8 + iVar9) - 1U & uVar5);
        local_e0 = CONCAT44(uVar6 & local_e0._4_4_,uVar5 & (uint)local_e0);
        uStack_d8 = CONCAT44((uStack_d8._4_4_ + iVar10) - 1U & uVar6,
                             ((int)uStack_d8 + iVar9) - 1U & uVar5);
      }
      iVar11 = thunk_FUN_180223d24(&local_d0);
      if ((iVar11 == 0) && (iVar11 = thunk_FUN_180223d24(&local_e0), iVar11 == 0)) {
        (*(code *)puVar8)(0x180224000);
        uVar12 = (*extraout_x11_00)(uVar13,uStack_a0,local_a4,uStack_a8,local_ac,uStack_80,local_88,
                                    &local_e0);
        uVar12 = uVar12 & 1;
      }
      iVar11 = 0;
      if (uVar12 == 0) {
        iVar11 = -0x7789f7d9;
      }
      if (*(longlong *)(*(longlong *)(param_3 + -0x78) + 0x70) != 0) {
        FUN_18010b470(*(undefined8 *)(param_3 + -0x58),lVar15);
      }
      if (uVar12 != 0) {
        if ((((*(int *)(*(longlong *)(param_3 + -0x78) + 0xf0) != 0) &&
             ((*(uint *)(param_3 + -0x30) & 1) != 0)) && (*(uint *)(param_3 + -0x20) < 5)) &&
           (*(uint *)(param_3 + -0x1c) < 5)) {
          uVar13 = (*(code *)puVar8)(0x180224000);
          (*extraout_x11_01)(uVar13,*(undefined4 *)(lStack_90 + 0x98),
                             *(undefined4 *)(local_98 + 0x94));
        }
        if (*(longlong *)(param_3 + 0x48) != 0) {
          lVar15 = *(longlong *)(*(longlong *)(param_3 + 0x48) + 0x48);
          local_78 = 0;
          local_70 = uVar3;
          uStack_6c = uVar4;
          thunk_FUN_180223c70(lVar15 + (ulonglong)*(uint *)(param_3 + -0x14) * 0x10,
                              lVar15 + (ulonglong)*(uint *)(param_3 + -0x14) * 0x10,&local_78);
        }
      }
    }
    else {
      iVar11 = -0x7789f798;
    }
  }
  if (bVar7) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar11;
}

