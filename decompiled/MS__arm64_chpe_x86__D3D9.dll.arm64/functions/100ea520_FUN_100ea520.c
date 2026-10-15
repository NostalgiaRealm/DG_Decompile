/*
 * FUN_100ea520 at 100ea520
 * undefined FUN_100ea520(void)
 * Address ranges: 100ea520-100ea547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ea520(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0xd0);
  }
  return uVar1;
}

