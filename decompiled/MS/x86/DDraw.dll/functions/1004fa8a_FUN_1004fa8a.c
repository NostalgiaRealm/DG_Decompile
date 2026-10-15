/*
 * FUN_1004fa8a at 1004fa8a
 * undefined4 __stdcall FUN_1004fa8a(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1004fa8a-1004fae1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004fa8a(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while (*(int *)(param_2 + iVar1 * 4) == (&DAT_10062560)[iVar1]) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 4) goto LAB_1004fabd;
  }
  iVar1 = 0;
  do {
    if (*(int *)(param_2 + iVar1 * 4) != (&DAT_10062450)[iVar1]) {
      *param_3 = 0;
      return 0x80004002;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
LAB_1004fabd:
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}

