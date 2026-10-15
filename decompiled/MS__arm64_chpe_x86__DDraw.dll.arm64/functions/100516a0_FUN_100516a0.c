/*
 * FUN_100516a0 at 100516a0
 * undefined FUN_100516a0(void)
 * Address ranges: 100516a0-1005170b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100516a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_4 == (int *)0x0) || (*param_4 != 0x6c)) {
    uVar1 = FUN_10039f38(*param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar1 = FUN_10051618(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

