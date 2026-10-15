/*
 * FUN_180002f20 at 180002f20
 * undefined FUN_180002f20(void)
 * Address ranges: 180002f20-180002faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_180002f20(undefined8 param_1,int *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_20 [8];
  int local_18;
  int iStack_14;
  
  lVar2 = *(longlong *)(param_3 + 8);
  if (*(longlong *)(param_3 + 8) == 0) {
    lVar2 = param_4;
  }
  (*__imp_USER32_dll_GetClientRect)(lVar2,auStack_20);
  iVar3 = param_3[1];
  uVar6 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)(param_3 + 6);
  uVar4 = *(undefined8 *)(param_3 + 4);
  iVar1 = *param_3;
  if (*param_3 == 0) {
    iVar1 = local_18;
  }
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = uVar6;
  *(undefined8 *)(param_2 + 6) = uVar5;
  *(undefined8 *)(param_2 + 4) = uVar4;
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar5 = *(undefined8 *)(param_3 + 0xe);
  uVar4 = *(undefined8 *)(param_3 + 0xc);
  if (iVar3 == 0) {
    iVar3 = iStack_14;
  }
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_2 + 0xe) = uVar5;
  *(undefined8 *)(param_2 + 0xc) = uVar4;
  *param_2 = iVar1;
  param_2[1] = iVar3;
  if (param_3[2] == 0) {
    param_2[2] = 0x15;
  }
  if (3 < (uint)param_3[3]) {
    param_2[3] = 3;
  }
  return param_2;
}

