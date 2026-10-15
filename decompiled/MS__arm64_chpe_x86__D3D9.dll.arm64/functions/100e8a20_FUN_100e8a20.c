/*
 * FUN_100e8a20 at 100e8a20
 * undefined FUN_100e8a20(void)
 * Address ranges: 100e8a20-100e8a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e8a20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = FUN_100d14a0(*(int *)(param_1 + 0x24) + 0x66b8,&DAT_1015e450,param_2,0);
  }
  return uVar1;
}

