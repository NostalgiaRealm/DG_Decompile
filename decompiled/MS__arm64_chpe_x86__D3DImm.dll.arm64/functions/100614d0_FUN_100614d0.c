/*
 * FUN_100614d0 at 100614d0
 * undefined FUN_100614d0(void)
 * Address ranges: 100614d0-10061513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100614d0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [4];
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    local_10[0] = 0;
    uVar1 = FUN_10061910(param_1 + 4,param_2,param_3,local_10);
  }
  return uVar1;
}

