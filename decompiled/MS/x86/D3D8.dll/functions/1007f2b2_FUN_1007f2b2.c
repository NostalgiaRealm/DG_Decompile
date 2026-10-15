/*
 * FUN_1007f2b2 at 1007f2b2
 * undefined4 __stdcall FUN_1007f2b2(int param_1, undefined4 * param_2)
 * Address ranges: 1007f2b2-1007f2ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f2b2(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + -0x4de0);
    param_2[1] = *(undefined4 *)(param_1 + -0x4ddc);
    param_2[2] = *(undefined4 *)(param_1 + -0x4dd8);
    param_2[3] = *(undefined4 *)(param_1 + -0x4dd4);
    uVar1 = 0;
  }
  return uVar1;
}

