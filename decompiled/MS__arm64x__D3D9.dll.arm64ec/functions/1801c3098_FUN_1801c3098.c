/*
 * FUN_1801c3098 at 1801c3098
 * undefined FUN_1801c3098(void)
 * Address ranges: 1801c3098-1801c3333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801c3098(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar7;
  ulonglong uVar8;
  
  iVar3 = FUN_1801042d0(param_1 + 0xc);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 0x10) + iVar3 == 0) {
    lVar5 = 0;
    if (param_1 != 0x6838) {
      lVar5 = param_1 + -0x18;
    }
    uVar7 = 0;
    if (*(int *)(param_1 + -8) != 0) {
      do {
        uVar4 = (*(code *)puVar2)();
        (*extraout_x11)(uVar4,lVar5);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + -8));
    }
    if (*(longlong *)(param_1 + -0x6810) != 0) {
      *(undefined1 *)(param_1 + -0x6568) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)(param_1 + -0x6838);
      uVar8 = 0;
      if (*(int *)(param_1 + -0x5908) != 0) {
        if (*(int *)(param_1 + -0x5908) == 0) {
          puVar6 = (undefined8 *)&DAT_00000008;
          goto LAB_1801c3194;
        }
        do {
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + -0x5910) + uVar8 * 0x18 + 0x10);
LAB_1801c3194:
          FUN_1802229d8(*puVar6,0x408);
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(param_1 + -0x5908));
      }
      FUN_1802229d8(*(undefined8 *)(param_1 + -0x5918));
      *(undefined8 *)(param_1 + -0x5910) = 0;
      *(undefined4 *)(param_1 + -0x5908) = 0;
      *(undefined4 *)(param_1 + -0x5904) = 0;
      *(undefined8 *)(param_1 + -0x5918) = 0;
      uVar7 = *(uint *)(param_1 + -0x5a00);
      while (uVar7 != 0) {
        lVar5 = *(longlong *)(param_1 + -0x5a08);
        uVar7 = uVar7 - 1;
        (*(code *)puVar2)();
        (*extraout_x11_01)(param_1 + -0x6838,*(undefined8 *)(lVar5 + (ulonglong)uVar7 * 8),0);
      }
      FUN_1802229d8(*(undefined8 *)(param_1 + -0x5a08));
      *(undefined4 *)(param_1 + -0x5a00) = 0;
      *(undefined4 *)(param_1 + -0x59fc) = 0;
      lVar5 = DAT_18024d928;
      *(undefined8 *)(param_1 + -0x5a08) = 0;
      iVar1 = *(int *)(lVar5 + 0x370) + -1;
      *(int *)(lVar5 + 0x370) = iVar1;
      if ((iVar1 == 0) && (DAT_180258b80 != 0)) {
        if (*(char *)(lVar5 + 0x7e8) != '\0') {
          thunk_FUN_180224080(*(undefined4 *)(lVar5 + 0x374),0x12,0,0);
          thunk_FUN_1802238ec(DAT_180258b80,0xffffffff);
        }
        thunk_FUN_180223824(DAT_180258b80);
        DAT_180258b80 = 0;
        *(undefined8 *)(lVar5 + 0x378) = 0;
        thunk_FUN_180223860(lVar5 + 0x388);
      }
      *(undefined8 *)(param_1 + -0x5998) = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_02)();
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_03)();
      *(undefined8 *)(param_1 + -0x6810) = 0;
      FUN_180222b28(*(undefined8 *)(*(longlong *)(param_1 + -0x5a28) + -8));
      *(undefined8 *)(param_1 + -0x5a28) = 0;
      if (*(longlong *)(param_1 + -0x59a8) != 0) {
        thunk_FUN_180223c84();
        *(undefined8 *)(param_1 + -0x59a8) = 0;
      }
    }
    FUN_1801c2d60(param_1 + -0x6838);
    FUN_180222b28(*(undefined8 *)(param_1 + -0x6840));
  }
  return iVar3;
}

