/*
 * FUN_100672a0 at 100672a0
 * undefined FUN_100672a0(void)
 * Address ranges: 100672a0-100672e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100672a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [4];
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    local_10[0] = 0;
    uVar1 = FUN_10067990(param_1 + 0x20,param_2,param_3,local_10);
  }
  return uVar1;
}

