/*
 * FUN_100e3a00 at 100e3a00
 * undefined FUN_100e3a00(void)
 * Address ranges: 100e3a00-100e3a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e3a00(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x591c)) {
    uVar1 = FUN_100201f0(*(undefined4 *)(*(int *)(param_1 + -0x5920) + param_2 * 4),param_3);
  }
  return uVar1;
}

