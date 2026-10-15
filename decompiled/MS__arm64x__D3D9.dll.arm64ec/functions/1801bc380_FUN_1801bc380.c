/*
 * FUN_1801bc380 at 1801bc380
 * undefined FUN_1801bc380(void)
 * Address ranges: 1801bc380-1801bc5cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801bc380(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  uint uVar8;
  ulonglong uVar9;
  
  iVar4 = FUN_1801042d0(param_1 + 0xc);
  if (*(int *)(param_1 + 0x10) + iVar4 == 0) {
    iVar5 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar5 == 0) {
      FUN_1801085c8();
    }
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    lVar2 = param_1 + -0xa0;
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = param_1 + -0x18;
    }
    uVar8 = 0;
    if (*(int *)(param_1 + -8) != 0) {
      do {
        uVar6 = (*(code *)puVar3)();
        (*extraout_x11)(uVar6,lVar1);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_1 + -8));
    }
    uVar9 = 0;
    if (*(int *)(param_1 + -0x30) != 0) {
      do {
        uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x38) + uVar9 * 4);
        FUN_1802229d8((&DAT_18024e338)[uVar7 * 5]);
        (&DAT_18024e338)[uVar7 * 5] = 0;
        (&DAT_18024e340)[uVar7 * 5] = 0;
        FUN_1802229d8((&DAT_18024e348)[uVar7 * 5]);
        (&DAT_18024e348)[uVar7 * 5] = 0;
        (&DAT_18024e350)[uVar7 * 5] = 0;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + -0x30));
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + -0x80));
    FUN_1802229d8(*(undefined8 *)(param_1 + -0x88));
    FUN_1802229d8(*(undefined8 *)(param_1 + -0x78));
    FUN_1802229d8(*(undefined8 *)(param_1 + -0x70));
    uVar6 = FUN_1802229d8(*(undefined8 *)(param_1 + -0x68));
    *(undefined8 *)(param_1 + -0x88) = 0;
    *(undefined8 *)(param_1 + -0x80) = 0;
    uVar9 = 0;
    *(undefined8 *)(param_1 + -0x78) = 0;
    *(undefined8 *)(param_1 + -0x70) = 0;
    *(undefined8 *)(param_1 + -0x68) = 0;
    if (*(int *)(param_1 + -0x30) != 0) {
      do {
        if (((*(char *)(param_1 + uVar9 + -0x5a) != '\0') && ((&DAT_18024e858)[uVar9 * 0x96] != 0))
           && (uVar6 = FUN_1801042d0(&DAT_18024e858 + uVar9 * 0x96), (int)uVar6 == 0)) {
          (*(code *)puVar3)(0x180224000);
          (*extraout_x11_00)();
          uVar6 = 0;
          if ((&DAT_18024e850)[uVar9 * 0x4b] != 0) {
            uVar6 = (*(code *)puVar3)(0x180224000);
            uVar6 = (*extraout_x11_01)(uVar6,1);
          }
          (&DAT_18024e850)[uVar9 * 0x4b] = 0;
        }
        uVar6 = FUN_18012bbb8(uVar6,*(undefined4 *)(*(longlong *)(param_1 + -0x38) + uVar9 * 4));
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + -0x30));
    }
    iVar5 = FUN_1801042d0(&DAT_18024d938);
    if ((iVar5 == 0) && (DAT_18024d930 != 0)) {
      thunk_FUN_180223784();
      thunk_FUN_1802237ac(DAT_18024d948);
    }
    *(undefined1 *)(param_1 + -0x5c) = 0;
    if (lVar2 != 0) {
      FUN_1801bb990(lVar2);
      FUN_1802229d8(lVar2,0x100);
    }
    thunk_FUN_18022370c(DAT_180258900);
  }
  return iVar4;
}

