/*
 * FUN_100bbd40 at 100bbd40
 * undefined FUN_100bbd40(void)
 * Address ranges: 100bbd40-100bbda7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bbd40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + -0x4de0);
    param_2[1] = *(undefined4 *)(param_1 + -0x4ddc);
    param_2[2] = *(undefined4 *)(param_1 + -0x4dd8);
    param_2[3] = *(undefined4 *)(param_1 + -0x4dd4);
  }
  return uVar1;
}

