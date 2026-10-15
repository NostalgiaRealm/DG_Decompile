/*
 * FUN_18018e4c8 at 18018e4c8
 * undefined FUN_18018e4c8(void)
 * Address ranges: 18018e4c8-18018e5b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018e4c8(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  longlong *plVar3;
  code *extraout_x11;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 2) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      plVar3 = (longlong *)&DAT_00000008;
      goto LAB_18018e520;
    }
    do {
      plVar3 = (longlong *)(param_1[1] + uVar4 * 0x18 + 0x10);
LAB_18018e520:
      lVar5 = param_1[3];
      lVar6 = *plVar3;
      lVar7 = lVar5 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
      thunk_FUN_1802236f8(lVar5 + 0x620);
      if (lVar6 == *(longlong *)(lVar7 + 0xbb0)) {
        *(undefined8 *)(lVar7 + 0xbb0) = 0;
      }
      (*(code *)puVar2)();
      (*extraout_x11)(lVar6);
      thunk_FUN_18022370c(lVar5 + 0x620);
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 2));
  }
  FUN_1802229d8(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  FUN_1802229d8(0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

