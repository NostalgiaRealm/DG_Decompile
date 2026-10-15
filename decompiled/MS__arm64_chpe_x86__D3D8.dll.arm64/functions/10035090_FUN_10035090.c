/*
 * FUN_10035090 at 10035090
 * undefined FUN_10035090(void)
 * Address ranges: 10035090-1003510f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10035090(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  if (param_8 == 0) {
    param_8 = FUN_10035120(param_1,param_4,param_6,param_5,1);
  }
  if (param_9 == 0) {
    param_9 = FUN_10034d10(param_2,param_7,param_5);
    param_9 = param_9 * param_8;
  }
  return param_3 * param_9;
}

