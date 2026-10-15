/*
 * FUN_100d0d40 at 100d0d40
 * undefined FUN_100d0d40(void)
 * Address ranges: 100d0d40-100d0d8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d0d40(int param_1,uint param_2,ulonglong param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + -0x24)) && ((param_3 & 0xfffffffd) == 0)) && (param_4 != 0)) {
    uVar1 = FUN_10006270(param_1 + -0x70,param_2,param_4);
  }
  return uVar1;
}

