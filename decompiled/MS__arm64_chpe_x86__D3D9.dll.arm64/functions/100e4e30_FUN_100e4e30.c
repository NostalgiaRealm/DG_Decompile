/*
 * FUN_100e4e30 at 100e4e30
 * undefined FUN_100e4e30(void)
 * Address ranges: 100e4e30-100e4e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4e30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x5bd8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x5bd8) + 0x274);
    }
    *param_2 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}

