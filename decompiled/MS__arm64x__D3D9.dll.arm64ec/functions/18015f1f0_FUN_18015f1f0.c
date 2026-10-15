/*
 * FUN_18015f1f0 at 18015f1f0
 * undefined FUN_18015f1f0(void)
 * Address ranges: 18015f1f0-18015f2a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015f1f0(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *extraout_x11;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 2) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      lVar4 = 0;
      goto LAB_18015f23c;
    }
    do {
      lVar4 = param_1[1] + uVar3 * 0x40;
LAB_18015f23c:
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        FUN_180205808(param_1[3]);
        (*(code *)puVar2)();
        (*extraout_x11)();
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
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

