/*
 * FUN_1000339a at 1000339a
 * int * __stdcall FUN_1000339a(int * param_1, int * param_2, HWND param_3)
 * Address ranges: 1000339a-10003404
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1000339a(int *param_1,int *param_2,HWND param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  tagRECT local_14;
  
  if (param_2[7] != 0) {
    param_3 = (HWND)param_2[7];
  }
  GetClientRect(param_3,&local_14);
  if (*param_2 != 0) {
    local_14.right = *param_2;
  }
  if (param_2[1] != 0) {
    local_14.bottom = param_2[1];
  }
  piVar2 = param_2;
  piVar3 = param_1;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  param_1[1] = local_14.bottom;
  *param_1 = local_14.right;
  if (param_2[2] == 0) {
    param_1[2] = 0x15;
  }
  if (3 < (uint)param_2[3]) {
    param_1[3] = 3;
  }
  return param_1;
}

