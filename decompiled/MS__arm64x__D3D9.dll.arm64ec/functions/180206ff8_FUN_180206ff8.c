/*
 * FUN_180206ff8 at 180206ff8
 * undefined FUN_180206ff8(void)
 * Address ranges: 180206ff8-180207077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180206ff8(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  code *extraout_x11;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x67c);
  *(int *)(param_1 + 0x67c) = iVar1 + 1;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (((iVar1 == 0) && (*(longlong *)(param_1 + 0xb10) != 0)) &&
     (uVar3 = 0, *(int *)(param_1 + 0xba8) != 0)) {
    do {
      (*(code *)puVar2)();
      (*extraout_x11)();
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xba8));
  }
  return;
}

