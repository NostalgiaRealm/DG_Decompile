/*
 * FUN_1004bc90 at 1004bc90
 * undefined FUN_1004bc90(void)
 * Address ranges: 1004bc90-1004bd2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004bc90(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int local_20 [4];
  
  local_20[0] = 0;
  if ((*(int *)(param_1 + 4) - 1U < 0xfffffffe) &&
     (iVar1 = (*(code *)PTR_FUN_100a80b8)(*(int *)(param_1 + 4),param_3,param_2,local_20,0),
     iVar1 == 1)) {
    if (param_4 != (int *)0x0) {
      *param_4 = local_20[0];
      return 0;
    }
    if (local_20[0] == param_2) {
      return 0;
    }
  }
  return 1;
}

