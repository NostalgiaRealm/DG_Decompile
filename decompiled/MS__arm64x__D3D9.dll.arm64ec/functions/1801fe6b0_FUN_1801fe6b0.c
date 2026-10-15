/*
 * FUN_1801fe6b0 at 1801fe6b0
 * undefined FUN_1801fe6b0(void)
 * Address ranges: 1801fe6b0-1801fe71f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fe6b0(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  undefined *puVar2;
  code *extraout_x11;
  ulonglong uVar3;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      if (*(longlong *)(param_4 + uVar3 * 8) != 0) {
        (*(code *)puVar2)();
        (*extraout_x11)();
        *(undefined8 *)(param_4 + uVar3 * 8) = 0;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
  }
  return;
}

