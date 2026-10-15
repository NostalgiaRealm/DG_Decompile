/*
 * FUN_18000385c at 18000385c
 * int * __fastcall FUN_18000385c(undefined8 param_1, int * param_2, int * param_3, HWND param_4)
 * Address ranges: 18000385c-1800038e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_18000385c(undefined8 param_1,int *param_2,int *param_3,HWND param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  tagRECT local_18;
  
  if (*(longlong *)(param_3 + 8) != 0) {
    param_4 = *(HWND *)(param_3 + 8);
  }
  GetClientRect(param_4,&local_18);
  uVar2 = *(undefined8 *)(param_3 + 2);
  if (*param_3 != 0) {
    local_18.right = *param_3;
  }
  uVar3 = *(undefined8 *)(param_3 + 4);
  uVar4 = *(undefined8 *)(param_3 + 6);
  if (param_3[1] != 0) {
    local_18.bottom = param_3[1];
  }
  iVar1 = param_3[2];
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 2) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar5 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 4) = uVar3;
  *(undefined8 *)(param_2 + 6) = uVar4;
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  uVar4 = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)(param_2 + 10) = uVar5;
  *(undefined8 *)(param_2 + 0xc) = uVar3;
  *(undefined8 *)(param_2 + 0xe) = uVar4;
  *param_2 = local_18.right;
  param_2[1] = local_18.bottom;
  if (iVar1 == 0) {
    param_2[2] = 0x15;
  }
  if (3 < (uint)param_3[3]) {
    param_2[3] = 3;
  }
  return param_2;
}

