/*
 * FUN_18000686c at 18000686c
 * undefined __fastcall FUN_18000686c(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, int * param_6)
 * Address ranges: 18000686c-1800069aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000686c(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  char cVar10;
  
  if (*(char *)(param_1 + 100) == '\0') {
    return;
  }
  cVar10 = '\x01';
  uVar1 = param_6[3];
  iVar2 = param_6[2];
  iVar3 = param_6[1];
  iVar4 = *param_6;
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  UNLOCK();
  if ((((*(int *)(*(longlong *)(param_1 + 0x30) + 0x833) <= param_2) || (8 < iVar3)) || (8 < iVar4))
     || ((0xf < uVar1 || (6 < iVar2 + 3U)))) goto LAB_18000699a;
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x82f);
  if ((param_4 & 0xfffffff8) <= uVar5) {
    uVar5 = param_4 & 0xfffffff8;
  }
  lVar9 = (longlong)param_2 * 0x55 + *(longlong *)(param_1 + 0x18);
  if (*(byte *)(lVar9 + 0x1f2) == param_5) {
    uVar8 = 3 - param_3;
    uVar6 = 0;
    if (param_3 < 4) {
      uVar6 = uVar8;
    }
    if (((*(uint *)(lVar9 + 0x1d2 + (ulonglong)uVar6 * 4) != uVar5) ||
        (*(int *)(lVar9 + 0x1ea) != iVar2)) ||
       ((*(uint *)(lVar9 + 0x1ee) != uVar1 ||
        ((*(int *)(lVar9 + 0x1e6) != iVar3 || (*(int *)(lVar9 + 0x1e2) != iVar4))))))
    goto LAB_180006952;
    cVar10 = '\0';
  }
  else {
LAB_180006952:
    uVar8 = 3 - param_3;
  }
  uVar7 = 0;
  if (param_3 < 4) {
    uVar7 = (ulonglong)uVar8;
  }
  *(uint *)(lVar9 + 0x1d2 + uVar7 * 4) = uVar5;
  *(char *)(lVar9 + 0x1f2) = (char)param_5;
  *(int *)(lVar9 + 0x1ea) = iVar2;
  *(uint *)(lVar9 + 0x1ee) = uVar1;
  *(int *)(lVar9 + 0x1e6) = iVar3;
  *(int *)(lVar9 + 0x1e2) = iVar4;
  FUN_180006824(param_1,param_2,cVar10);
LAB_18000699a:
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  UNLOCK();
  return;
}

