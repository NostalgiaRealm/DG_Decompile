/*
 * FUN_1004d6db at 1004d6db
 * undefined __stdcall FUN_1004d6db(int param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1004d6db-1004d704
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d6db(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  FUN_1003fbda(*(void **)(param_1 + 4),&DAT_1005d250,iVar1,param_3,param_4);
  return;
}

