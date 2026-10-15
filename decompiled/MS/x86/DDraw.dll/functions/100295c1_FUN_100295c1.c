/*
 * FUN_100295c1 at 100295c1
 * undefined4 __stdcall FUN_100295c1(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 100295c1-10029622
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100295c1(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  *param_3 = 0;
  iVar1 = 0;
  while (*(int *)(param_2 + iVar1 * 4) == (&DAT_10062560)[iVar1]) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 4) goto LAB_1002960d;
  }
  iVar1 = 0;
  do {
    if (*(int *)(param_2 + iVar1 * 4) != (&DAT_10062410)[iVar1]) {
      return 0x80004002;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
LAB_1002960d:
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}

