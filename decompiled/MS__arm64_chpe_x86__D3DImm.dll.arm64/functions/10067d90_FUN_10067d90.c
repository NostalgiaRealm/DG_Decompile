/*
 * FUN_10067d90 at 10067d90
 * undefined FUN_10067d90(void)
 * Address ranges: 10067d90-10067dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10067d90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [4];
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    local_10[0] = 0;
    uVar1 = FUN_10068d20(param_1 + 4,param_2,param_3,local_10);
  }
  return uVar1;
}

