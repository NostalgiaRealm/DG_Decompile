/*
 * FUN_10053940 at 10053940
 * undefined FUN_10053940(void)
 * Address ranges: 10053940-1005396f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053940(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = 0;
    *param_2 = (int)*(undefined8 *)(*(int *)(param_1 + 4) + 0x1b8);
  }
  return uVar1;
}

