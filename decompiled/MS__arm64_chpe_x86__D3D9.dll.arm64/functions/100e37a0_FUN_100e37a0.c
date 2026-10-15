/*
 * FUN_100e37a0 at 100e37a0
 * undefined FUN_100e37a0(void)
 * Address ranges: 100e37a0-100e37e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e37a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = FUN_100d14a0(*(int *)(param_1 + 0x44) + 0x74,&DAT_1015e440,param_2,0);
  }
  return uVar1;
}

