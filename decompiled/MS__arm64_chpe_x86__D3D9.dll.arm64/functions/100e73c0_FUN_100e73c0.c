/*
 * FUN_100e73c0 at 100e73c0
 * undefined FUN_100e73c0(void)
 * Address ranges: 100e73c0-100e7407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e73c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = FUN_100d14a0(*(int *)(param_1 + 0x10) + 0x66b8,&DAT_1015e450,param_2,0);
  }
  return uVar1;
}

