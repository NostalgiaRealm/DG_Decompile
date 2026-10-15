/*
 * FUN_180217a40 at 180217a40
 * undefined FUN_180217a40(void)
 * Address ranges: 180217a40-180217abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180217a40(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  uint uVar3;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    do {
      uVar2 = (*(code *)puVar1)();
      (*extraout_x11)(uVar2,*(undefined4 *)(param_2 + 0x10),param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x6c8));
  }
  return;
}

