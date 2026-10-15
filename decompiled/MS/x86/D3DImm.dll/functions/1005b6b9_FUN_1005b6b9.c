/*
 * FUN_1005b6b9 at 1005b6b9
 * undefined4 __stdcall FUN_1005b6b9(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1005b6b9-1005b710
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005b6b9(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while (*(int *)(param_2 + iVar1 * 4) == (&DAT_1005d2a0)[iVar1]) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 4) goto LAB_1005b6ec;
  }
  iVar1 = 0;
  do {
    if (*(int *)(param_2 + iVar1 * 4) != (&DAT_1005d280)[iVar1]) {
      *param_3 = 0;
      return 0x80004002;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
LAB_1005b6ec:
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}

