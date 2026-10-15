/*
 * FUN_18013f9b8 at 18013f9b8
 * undefined FUN_18013f9b8(void)
 * Address ranges: 18013f9b8-18013fa5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013f9b8(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  code *extraout_x11;
  ulonglong uVar4;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 2) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      lVar3 = 0;
      goto LAB_18013fa04;
    }
    do {
      lVar3 = param_1[1] + uVar4 * 0x18;
LAB_18013fa04:
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        (*(code *)puVar2)();
        (*extraout_x11)();
      }
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

