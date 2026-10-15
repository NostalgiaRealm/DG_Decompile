/*
 * FUN_100eae00 at 100eae00
 * undefined FUN_100eae00(void)
 * Address ranges: 100eae00-100eae53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100eae00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) ||
     (uVar1 = 0x8876086c, (*(uint *)(*(int *)(param_1 + 0x10) + 0x30) >> 10 & 1) == 0)) {
    uVar1 = FUN_100217f0(param_1 + -0x78,0,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

