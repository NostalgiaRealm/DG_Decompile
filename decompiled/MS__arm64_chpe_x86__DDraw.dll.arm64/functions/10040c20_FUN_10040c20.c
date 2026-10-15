/*
 * FUN_10040c20 at 10040c20
 * undefined FUN_10040c20(void)
 * Address ranges: 10040c20-10040c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10040c20(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [4];
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    local_10[0] = 0;
    uVar1 = FUN_10041088(param_1 + 4,param_2,param_3,local_10);
  }
  return uVar1;
}

