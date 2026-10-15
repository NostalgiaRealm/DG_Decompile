/*
 * FUN_100832a0 at 100832a0
 * undefined FUN_100832a0(void)
 * Address ranges: 100832a0-1008330b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100832a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_10083c50();
    FUN_10083c90(&DAT_100a9000,&DAT_100a9004);
  }
  uVar1 = FUN_10007290(param_1,param_2,param_3);
  if (param_2 == 0) {
    FUN_10083c00();
  }
  return uVar1;
}

