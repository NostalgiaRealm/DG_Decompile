/*
 * FUN_1800213c0 at 1800213c0
 * undefined __fastcall FUN_1800213c0(longlong param_1, int * param_2, int * param_3)
 * Address ranges: 1800213c0-1800214d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800213c0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x2984);
  iVar5 = -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else if (iVar1 == 1) {
    iVar5 = 1;
  }
  else if (iVar1 == 2) {
    iVar5 = 2;
  }
  iVar1 = *(int *)(param_1 + 0x2988);
  *param_2 = iVar5;
  iVar6 = -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  else if (iVar1 == 1) {
    iVar6 = 1;
  }
  else if (iVar1 == 2) {
    iVar6 = 2;
  }
  *param_3 = iVar6;
  if (iVar5 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x58))();
  }
  if (*param_3 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x58))
                      (*(longlong **)(param_1 + 0x3180),*param_3);
  }
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x4a) = *(byte *)(lVar3 + 0x4a) | 2;
  }
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x4a) = *(byte *)(lVar4 + 0x4a) | 2;
  }
  if (lVar3 != 0) {
    lVar4 = lVar3;
  }
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0x24);
    if ((*(float *)(param_1 + 0x2bf0) != (float)*(uint *)(lVar4 + 0x20)) ||
       (*(float *)(param_1 + 0x2bf4) != (float)uVar2)) {
      *(float *)(param_1 + 0x2bf0) = (float)*(uint *)(lVar4 + 0x20);
      *(float *)(param_1 + 0x2bf4) = (float)uVar2;
      *(undefined1 *)(param_1 + 0x3170) = 1;
    }
  }
  return;
}

