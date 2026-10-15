/*
 * FUN_1006c0e0 at 1006c0e0
 * undefined FUN_1006c0e0(void)
 * Address ranges: 1006c0e0-1006c14f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1006c0e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (((param_7 != 0) && (*(int *)(param_7 + 4) != 0)) && (param_5 != 0)) {
    uVar1 = FUN_10057ea0(*(int *)(param_7 + 4),*(undefined4 *)(param_1 + 4),param_5,param_2,param_3,
                         param_4,param_6,param_8,0);
  }
  return uVar1;
}

