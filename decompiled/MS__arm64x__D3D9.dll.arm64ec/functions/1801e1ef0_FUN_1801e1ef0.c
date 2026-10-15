/*
 * FUN_1801e1ef0 at 1801e1ef0
 * undefined FUN_1801e1ef0(void)
 * Address ranges: 1801e1ef0-1801e20bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e1ef0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  
  uVar9 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x58) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar4 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar4 == 0) {
        FUN_1801085c8();
      }
    }
    puVar2 = __hybrid_os_arm64x_dispatch_icall;
    uVar8 = (&DAT_18024e840)[(ulonglong)*(uint *)(param_1 + 0xf0) * 0x4b];
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar5 = (*extraout_x11)(uVar8);
    if ((uVar5 < 5) && ((0x12U >> (ulonglong)(uVar5 & 0x1f) & 1) != 0)) {
      uVar9 = 0x88760874;
    }
    else if (uVar5 == 2) {
      uVar9 = 0x88760870;
    }
    else if (uVar5 == 3) {
      uVar9 = 0x88760868;
    }
    else if (uVar5 == 0) {
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      if ((*(char *)(param_1 + 0x101) == '\0') &&
         ((*(uint *)(*(longlong *)(param_1 + 0x178) + 0xe78) >> 0xe & 1) != 0)) {
        lVar6 = (ulonglong)*(uint *)(param_1 + 0xf0) * 600;
        puVar7 = &DAT_18024e860;
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_00)(uVar8,&lStack_50,*(undefined4 *)((longlong)puVar7 + lVar6));
        thunk_FUN_18022375c(&local_58);
        lVar6 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) <= local_48) {
          lVar6 = local_58;
        }
        *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x118);
        if (lStack_50 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801e2054);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (lStack_50 != 0) {
          uVar9 = (undefined4)(lVar6 / lStack_50);
        }
        *(undefined4 *)((longlong)param_2 + 4) = uVar9;
        uVar9 = 0;
        if (lStack_50 != 0) {
          uVar9 = (undefined4)((local_58 - local_48) / lStack_50);
        }
        *(undefined4 *)(param_2 + 1) = uVar9;
        param_2[2] = *(undefined8 *)(param_1 + 0x110);
      }
      uVar9 = 0;
    }
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar9;
}

