/*
 * FUN_10012db0 at 10012db0
 * undefined FUN_10012db0(void)
 * Address ranges: 10012db0-10012e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10012db0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0xdc4);
    param_2[1] = *(undefined4 *)(param_1 + 0xdc8);
    param_2[2] = *(undefined4 *)(param_1 + 0xdcc);
    param_2[3] = *(undefined4 *)(param_1 + 0xdd0);
  }
  return uVar1;
}

