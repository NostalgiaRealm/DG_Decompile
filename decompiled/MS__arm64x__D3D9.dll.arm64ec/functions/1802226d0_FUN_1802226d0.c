/*
 * FUN_1802226d0 at 1802226d0
 * undefined FUN_1802226d0(void)
 * Address ranges: 1802226d0-1802226ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802226d0(longlong param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int local_20 [4];
  
  local_20[0] = 0;
  if ((*(longlong *)(param_1 + 8) - 1U < 0xfffffffffffffffe) &&
     (iVar1 = thunk_FUN_180223af4(*(longlong *)(param_1 + 8),param_3,param_2,local_20,0), iVar1 == 1
     )) {
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

