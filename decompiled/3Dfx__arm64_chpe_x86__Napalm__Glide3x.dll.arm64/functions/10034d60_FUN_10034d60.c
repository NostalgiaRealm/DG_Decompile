/*
 * FUN_10034d60 at 10034d60
 * undefined FUN_10034d60(void)
 * Address ranges: 10034d60-10034e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034d60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  FUN_10035760(param_1 + 0x4090,0,0);
  FUN_10014e08(param_1);
  FUN_10034cb8(param_1,param_2,param_3,param_4);
  uVar1 = 3;
  do {
    FUN_10036790(param_1,uVar1,param_3,param_3 + param_4);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  (*(code *)PTR_FUN_100a8090)(*(int *)(param_1 + 0x3680) + 0x4a0);
  return;
}

