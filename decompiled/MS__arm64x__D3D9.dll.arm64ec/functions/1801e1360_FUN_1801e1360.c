/*
 * FUN_1801e1360 at 1801e1360
 * undefined FUN_1801e1360(void)
 * Address ranges: 1801e1360-1801e189b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1801e1360(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             uint param_6)

{
  longlong *plVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  undefined4 uVar11;
  code *pcVar12;
  longlong lVar13;
  undefined1 auStack_d0 [4];
  uint local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 auStack_50 [16];
  
  uVar9 = 0xfffffffc;
  if (*(char *)(param_1 + 0x180) != '\0') {
    uVar9 = 0xfffffe00;
  }
  if ((uVar9 & param_6) != 0) {
    return 0x8876086c;
  }
  if (param_5 != 0) {
    return 0x8876086c;
  }
  local_c0 = param_4;
  FUN_1801181c0(auStack_d0);
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x58) + 0x6819);
  uVar10 = (ulonglong)bVar2;
  uVar11 = 0x88760868;
  if (bVar2 != 0) goto LAB_1801e1874;
  uVar11 = 0x8876086c;
  uVar10 = 1;
  if (*(uint *)(param_1 + 0xd4) != 0) {
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x60 + uVar10 * 8) + 8) + 0x100) >> 0xb &
          1) != 0) goto LAB_1801e1874;
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 <= *(uint *)(param_1 + 0xd4));
  }
  FUN_18010b668(*(longlong *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68));
  pcVar12 = (code *)__hybrid_os_arm64x_dispatch_icall;
  uVar9 = *(uint *)(param_1 + 0xcc);
  bVar3 = true;
  if (((param_6 & 0x104) == 0) || (uVar10 = 0, uVar9 == 5)) {
    uVar10 = 1;
  }
  if ((uVar9 < 6) && ((0x24U >> (ulonglong)(uVar9 & 0x1f) & 1) != 0)) {
LAB_1801e1468:
    uVar9 = (uint)uVar10;
    if (param_3 != 0 || param_2 != 0) {
      uVar9 = 0;
    }
    uVar10 = (ulonglong)uVar9;
  }
  else {
    if (uVar9 == 1) {
      if (*(char *)(param_1 + 0x101) == '\0') goto LAB_1801e1468;
    }
    else if (uVar9 != 3) goto LAB_1801e1874;
    bVar3 = false;
  }
  if ((int)uVar10 != 0) {
    if (bVar3) {
      plVar1 = (longlong *)(param_1 + 0x60);
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      uVar9 = 1;
      lVar13 = *(longlong *)(*(longlong *)(*plVar1 + 8) + 0x70);
      if (*(int *)(param_1 + 0xd4) != 0) {
        uVar7 = 0x180224000;
        uVar10 = 1;
        local_cc = param_6;
        local_c8 = param_3;
        local_b8 = lVar13;
        do {
          (*pcVar12)(plVar1[uVar10],uVar7);
          (*extraout_x11_00)();
          uVar9 = (int)uVar10 - 1;
          FUN_180116e78(plVar1[uVar9],*(undefined8 *)(*(longlong *)(plVar1[uVar10] + 8) + 0x70));
          FUN_18010b410(*(undefined8 *)(param_1 + 0x58),plVar1[uVar9]);
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          uVar7 = extraout_x1;
          param_3 = local_c8;
          lVar13 = local_b8;
          param_6 = local_cc;
        } while (uVar9 <= *(uint *)(param_1 + 0xd4));
      }
      lVar8 = param_1 + (ulonglong)(uVar9 - 1) * 8;
      FUN_180116e78(*(undefined8 *)(lVar8 + 0x60),lVar13);
      FUN_18010b410(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar8 + 0x60));
    }
    else {
      local_60 = 0;
      local_58 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      local_70 = 0;
      local_54 = 1;
      thunk_FUN_180223c20(&local_70,0,0,*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0x9c));
      if (param_2 != 0) {
        thunk_FUN_180223c34(&local_70,&local_70,param_2);
      }
      if (*(char *)(param_1 + 0x101) == '\0') {
        thunk_FUN_180223c20(&local_80,0,0,*(undefined4 *)(param_1 + 0x98),
                            *(undefined4 *)(param_1 + 0x9c));
        if (param_3 != 0) {
          thunk_FUN_180223c34(&local_80,&local_80,param_3);
        }
        param_3 = 0;
        param_2 = 0;
      }
      else {
        uStack_78 = uStack_68;
        local_80 = local_70;
      }
      pcVar12 = (code *)__hybrid_os_arm64x_dispatch_icall;
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11_01)();
      (*pcVar12)(0x180224000);
      (*extraout_x11_02)();
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
      uVar7 = (*pcVar12)(0x180224000);
      (*extraout_x11_03)(uVar7,0,0,0,0,*(undefined8 *)(lVar13 + 0x70),*(undefined8 *)(lVar8 + 0x70),
                         &local_80);
    }
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
    thunk_FUN_18022375c(param_1 + 0x110);
    local_cc = *(uint *)(param_1 + 0xd0);
    lVar13 = *(longlong *)(param_1 + 0x60);
    if ((param_6 & 0x100) != 0) {
      local_cc = 0;
    }
    uVar7 = *(undefined8 *)(*(longlong *)(lVar13 + 8) + 0x70);
    local_b8 = lVar13;
    (*pcVar12)(0x180224000);
    iVar5 = (*extraout_x11_04)(uVar7);
    (*pcVar12)(0x180224000);
    iVar6 = (*extraout_x11_05)(uVar7);
    if (*(longlong *)(lVar13 + 0x38) == 0) {
      local_b0 = 0;
      lVar8 = 0;
      if (*(longlong *)(lVar13 + 8) != 0) {
        lVar8 = *(longlong *)(lVar13 + 8) + 0x68;
      }
      local_a8 = iVar5;
      iStack_a4 = iVar6;
      cVar4 = FUN_180118f88(param_1 + 8,lVar8);
    }
    else {
      local_c8 = CONCAT44(local_c8._4_4_,
                          (uint)(*(int *)(param_1 + 0xb4) * iVar5 !=
                                *(int *)(param_1 + 0xb0) * iVar6));
      thunk_FUN_180223c20(&local_b0,0,0,*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0x9c));
      if (param_2 != 0) {
        thunk_FUN_180223c34(local_a0,&local_b0,param_2);
        thunk_FUN_180223c48(local_a0,&local_b0);
      }
      if (param_3 != 0) {
        lVar13 = local_c0;
        if (local_c0 == 0) {
          lVar13 = *(longlong *)(param_1 + 0x90);
        }
        thunk_FUN_180223be4(lVar13,local_90);
        thunk_FUN_180223c34(auStack_50,local_90,param_3);
        thunk_FUN_180223c48(auStack_50,&local_b0);
      }
      lVar13 = 0;
      if (*(longlong *)(local_b8 + 8) != 0) {
        lVar13 = *(longlong *)(local_b8 + 8) + 0x68;
      }
      cVar4 = FUN_180118f88(param_1 + 8,lVar13);
    }
    uVar10 = 0x80004005;
    uVar11 = 0;
    if (cVar4 == '\0') {
      uVar11 = 0x80004005;
    }
  }
LAB_1801e1874:
  FUN_180118248(uVar10,auStack_d0);
  return uVar11;
}

