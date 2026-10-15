/*
 * FUN_10002fe2 at 10002fe2
 * int * __stdcall FUN_10002fe2(int * param_1, int * param_2, HWND param_3)
 * Address ranges: 10002fe2-1000303d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10002fe2(int *param_1,int *param_2,HWND param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  tagRECT local_14;
  
  if (param_2[6] != 0) {
    param_3 = (HWND)param_2[6];
  }
  GetClientRect(param_3,&local_14);
  if (*param_2 != 0) {
    local_14.right = *param_2;
  }
  if (param_2[1] != 0) {
    local_14.bottom = param_2[1];
  }
  piVar3 = param_2;
  piVar4 = param_1;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  *param_1 = local_14.right;
  uVar1 = param_2[3];
  param_1[1] = local_14.bottom;
  if (3 < uVar1) {
    param_1[3] = 3;
  }
  return param_1;
}

