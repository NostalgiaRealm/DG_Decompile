/*
 * FUN_100542b0 at 100542b0
 * undefined FUN_100542b0(void)
 * Address ranges: 100542b0-1005430b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100542b0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_3 != (int *)0x0) {
    if (*param_3 == 0x6c) {
      uVar1 = FUN_10053258((undefined4 *)(param_1 + 4));
    }
    else {
      uVar1 = FUN_1004eb48(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,param_5);
    }
  }
  return uVar1;
}

