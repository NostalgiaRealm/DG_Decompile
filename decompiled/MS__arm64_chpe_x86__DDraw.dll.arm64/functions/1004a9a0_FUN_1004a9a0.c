/*
 * FUN_1004a9a0 at 1004a9a0
 * undefined FUN_1004a9a0(void)
 * Address ranges: 1004a9a0-1004aa5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1004a9a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_1004f590(param_1);
  }
  uVar1 = 0x887601c2;
  if (((*(char *)(param_1 + 8) == '\0') &&
      (uVar1 = 0x887601ae, *(int *)(*(int *)(param_1 + 4) + 0xb0) == 0)) &&
     ((param_3 == 0 || (*(int *)(*(int *)(param_3 + 4) + 0xb0) == 0)))) {
    uVar1 = FUN_1004a3d0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

