/*
 * FUN_100a397d at 100a397d
 * undefined4 __stdcall FUN_100a397d(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 100a397d-100a39d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100a397d(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while (*(int *)(param_2 + iVar1 * 4) == (&DAT_100af4d0)[iVar1]) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 4) goto LAB_100a39b0;
  }
  iVar1 = 0;
  do {
    if (*(int *)(param_2 + iVar1 * 4) != (&DAT_100af3c0)[iVar1]) {
      *param_3 = 0;
      return 0x80004002;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
LAB_100a39b0:
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}

