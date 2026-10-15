/*
 * FUN_100537b0 at 100537b0
 * undefined FUN_100537b0(void)
 * Address ranges: 100537b0-100537f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100537b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_4 + 4);
  }
  uVar1 = FUN_1004b1d0(*(undefined4 *)(param_1 + 4),param_2,param_3,uVar1,param_5,param_6);
  return uVar1;
}

