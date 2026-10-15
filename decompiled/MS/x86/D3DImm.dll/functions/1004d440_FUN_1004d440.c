/*
 * FUN_1004d440 at 1004d440
 * undefined __stdcall FUN_1004d440(int param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1004d440-1004d469
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d440(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  FUN_1003fbda(*(void **)(param_1 + 4),&DAT_1005d240,iVar1,param_3,param_4);
  return;
}

