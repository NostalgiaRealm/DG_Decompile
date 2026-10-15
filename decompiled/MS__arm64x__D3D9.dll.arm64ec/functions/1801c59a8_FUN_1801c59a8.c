/*
 * FUN_1801c59a8 at 1801c59a8
 * undefined FUN_1801c59a8(void)
 * Address ranges: 1801c59a8-1801c5bcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801c59a8(longlong param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar9;
  longlong lVar10;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar5 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar5 == 0) {
      FUN_1801085c8();
      bVar2 = true;
    }
  }
  uVar9 = 1;
  bVar4 = false;
  if (*(longlong *)(param_1 + -0x59a8) != 0) {
    lVar10 = **(longlong **)(param_1 + -0x5a08);
    uVar6 = FUN_180119760(lVar10);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_18012f210();
      if (((uVar6 & 1) == 0) || (*(char *)(lVar10 + 0x120) == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      uVar7 = thunk_FUN_180223e8c();
      uVar6 = FUN_18012f280();
      bVar4 = uVar7 != uVar6;
    }
    uVar7 = 0;
    if (*(int *)(param_1 + -0x5a00) != 0) {
      do {
        uVar6 = FUN_180119760(*(undefined8 *)(*(longlong *)(param_1 + -0x5a08) + uVar7 * 8));
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
        uVar9 = (uint)uVar6 & 0xff & uVar9;
      } while (uVar1 < *(uint *)(param_1 + -0x5a00));
      if (uVar9 == 0) {
        uVar8 = FUN_18012f280();
        FUN_18012f2d0(uVar8,uVar8);
        puVar3 = __hybrid_os_arm64x_dispatch_icall;
        if (*(int *)(param_1 + -0x5a00) != 0) {
          uVar9 = 0;
          do {
            lVar10 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)uVar9 * 8);
            uVar8 = (*(code *)puVar3)(0x180224000);
            (*extraout_x11)(uVar8,param_2 != 0);
            *(bool *)(lVar10 + 0x120) = param_2 != 0;
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + -0x5a00));
        }
        goto LAB_1801c5b94;
      }
    }
    if (param_2 == 0) {
      uVar6 = FUN_18012f280();
      uVar7 = uVar6;
    }
    else {
      uVar7 = *(ulonglong *)(param_1 + -0x59a8);
    }
    FUN_18012f2d0(uVar6,uVar7);
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    uVar6 = 0;
    if (*(int *)(param_1 + -0x5a00) != 0) {
      do {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + uVar6 * 8);
        uVar8 = (*(code *)puVar3)();
        (*extraout_x11_00)(uVar8,0);
        *(undefined1 *)(lVar10 + 0x120) = 0;
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(param_1 + -0x5a00));
    }
  }
LAB_1801c5b94:
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return bVar4;
}

