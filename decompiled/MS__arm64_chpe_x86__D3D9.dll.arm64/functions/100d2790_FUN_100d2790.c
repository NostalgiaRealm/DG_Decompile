/*
 * FUN_100d2790 at 100d2790
 * undefined FUN_100d2790(void)
 * Address ranges: 100d2790-100d27e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100d2790(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_3 == 0) ||
     (uVar1 = 0x8876086c, (*(uint *)(*(int *)(param_1 + 0x10) + 0x30) >> 10 & 1) == 0)) {
    uVar1 = FUN_100217f0(param_1 + -0x78,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

