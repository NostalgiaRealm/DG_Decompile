/*
 * FUN_1004d129 at 1004d129
 * undefined __stdcall FUN_1004d129(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1004d129-1004d15b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d129(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 4);
  }
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  FUN_10047689(*(void **)(param_1 + 4),iVar1,iVar2,param_4);
  return;
}

