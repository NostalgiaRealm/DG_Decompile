/*
 * _grTexMultibaseAddress@20 at 180004e98
 * undefined __cdecl _grTexMultibaseAddress@20(int param_1, uint param_2, uint param_3, uint param_4, int * param_5)
 * Address ranges: 180004e98-18000501f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMultibaseAddress_20(int param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  
                    /* 0x4e98  86  _grTexMultibaseAddress@20
                       0x4e98  186  grTexMultibaseAddress */
  lVar9 = FUN_180008ce0();
  if (*(char *)(lVar9 + 100) == '\0') {
    return;
  }
  iVar4 = param_5[2];
  uVar6 = param_5[3];
  iVar5 = *param_5;
  iVar7 = param_5[1];
  FUN_1800643e0((uint *)(lVar9 + 0x60));
  bVar1 = *(int *)(*(longlong *)(lVar9 + 0x30) + 0x833) <= param_1;
  if (((((bVar1 || 8 < iVar7) || 8 < iVar5) || 0xe < uVar6) &&
       (((bVar1 || 8 < iVar7) || 8 < iVar5) || uVar6 != 0xf)) || (6 < iVar4 + 3U))
  goto LAB_180004ffc;
  uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x30) + 0x82f);
  uVar3 = param_3 & 0xfffffff8;
  if (uVar8 < (param_3 & 0xfffffff8)) {
    uVar3 = uVar8;
  }
  lVar2 = (longlong)param_1 * 0x55 + *(longlong *)(lVar9 + 0x18);
  if (*(byte *)(lVar2 + 0x1f2) == param_4) {
    uVar11 = 3 - param_2;
    uVar8 = uVar11;
    if (3 < param_2) {
      uVar8 = 0;
    }
    if ((((*(uint *)(lVar2 + (ulonglong)uVar8 * 4 + 0x1d2) != uVar3) ||
         (*(int *)(lVar2 + 0x1ea) != iVar4)) || (*(uint *)(lVar2 + 0x1ee) != uVar6)) ||
       ((*(int *)(lVar2 + 0x1e6) != iVar7 || (*(int *)(lVar2 + 0x1e2) != iVar5))))
    goto LAB_180004fb0;
    bVar10 = 0;
  }
  else {
LAB_180004fb0:
    bVar10 = 1;
    uVar11 = 3 - param_2;
  }
  if (3 < param_2) {
    uVar11 = 0;
  }
  *(uint *)(lVar2 + (ulonglong)uVar11 * 4 + 0x1d2) = uVar3;
  *(char *)(lVar2 + 0x1f2) = (char)param_4;
  *(int *)(lVar2 + 0x1ea) = iVar4;
  *(uint *)(lVar2 + 0x1ee) = uVar6;
  *(int *)(lVar2 + 0x1e6) = iVar7;
  *(int *)(lVar2 + 0x1e2) = iVar5;
  FUN_180008ae0(lVar9,param_1,bVar10);
LAB_180004ffc:
  FUN_1800643d0((uint *)(lVar9 + 0x60));
  return;
}

