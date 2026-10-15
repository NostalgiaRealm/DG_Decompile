/*
 * FUN_101312d0 at 101312d0
 * undefined FUN_101312d0(void)
 * Address ranges: 101312d0-1013136b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_101312d0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int local_20 [4];
  
  local_20[0] = 0;
  if ((*(int *)(param_1 + 4) - 1U < 0xfffffffe) &&
     (iVar1 = (*(code *)PTR_FUN_1016c0ec)(*(int *)(param_1 + 4),param_3,param_2,local_20,0),
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

