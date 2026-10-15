/*
 * FUN_180206b80 at 180206b80
 * undefined FUN_180206b80(void)
 * Address ranges: 180206b80-180206bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180206b80(undefined8 param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  undefined *puVar2;
  code *extraout_x11;
  ulonglong uVar3;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      if (*(longlong *)(param_3 + uVar3 * 8) != 0) {
        (*(code *)puVar2)();
        (*extraout_x11)();
        *(undefined8 *)(param_3 + uVar3 * 8) = 0;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < param_2);
  }
  return;
}

