/*
 * FUN_100364e0 at 100364e0
 * undefined FUN_100364e0(void)
 * Address ranges: 100364e0-10036523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100364e0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [4];
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    local_10[0] = 0;
    uVar1 = FUN_10036f38(param_1 + 4,param_2,param_3,local_10);
  }
  return uVar1;
}

