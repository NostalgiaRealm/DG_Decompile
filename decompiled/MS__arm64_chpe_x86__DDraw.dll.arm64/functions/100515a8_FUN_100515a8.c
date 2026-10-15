/*
 * FUN_100515a8 at 100515a8
 * undefined FUN_100515a8(void)
 * Address ranges: 100515a8-10051613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100515a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_4 == (int *)0x0) || (*param_4 != 0x6c)) {
    uVar1 = FUN_10039b60(*param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar1 = FUN_10051520(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

