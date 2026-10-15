/*
 * FUN_18002ebb0 at 18002ebb0
 * undefined __cdecl FUN_18002ebb0(longlong * param_1)
 * Address ranges: 18002ebb0-18002ec3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ebb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  FUN_180019e20(lVar1);
  iVar3 = *(int *)(lVar1 + 0x2ba0);
  iVar4 = *(int *)(lVar1 + 0x2bd0);
  iVar5 = *(int *)(lVar1 + 0x2b98);
  iVar6 = *(int *)(lVar1 + 0x2b9c);
  lVar10 = *(longlong *)(lVar1 + 0x2b90);
  lVar9 = *(longlong *)(lVar1 + 0x2bc0);
  iVar7 = *(int *)(lVar1 + 0x2bc8);
  iVar8 = *(int *)(lVar1 + 0x2bcc);
  puVar2[1] = (ulonglong)(uint)(*(int *)(lVar1 + 0x2b80) - *(int *)(lVar1 + 0x2bb0));
  *puVar2 = 0;
  puVar2[3] = lVar10 - lVar9;
  puVar2[2] = 0;
  puVar2[5] = (ulonglong)(uint)(iVar3 - iVar4);
  puVar2[4] = CONCAT44(iVar6 - iVar8,iVar5 - iVar7);
  return;
}

