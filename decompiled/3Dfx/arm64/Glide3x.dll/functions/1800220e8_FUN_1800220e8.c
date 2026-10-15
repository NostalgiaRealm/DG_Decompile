/*
 * FUN_1800220e8 at 1800220e8
 * undefined __cdecl FUN_1800220e8(longlong * param_1)
 * Address ranges: 1800220e8-180022173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800220e8(longlong *param_1)

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
  FUN_18000d8c0(lVar1);
  iVar3 = *(int *)(lVar1 + 0x2c38);
  iVar4 = *(int *)(lVar1 + 0x2c68);
  iVar5 = *(int *)(lVar1 + 0x2c30);
  iVar6 = *(int *)(lVar1 + 0x2c34);
  lVar10 = *(longlong *)(lVar1 + 0x2c28);
  lVar9 = *(longlong *)(lVar1 + 0x2c58);
  iVar7 = *(int *)(lVar1 + 0x2c60);
  iVar8 = *(int *)(lVar1 + 0x2c64);
  puVar2[1] = (ulonglong)(uint)(*(int *)(lVar1 + 0x2c18) - *(int *)(lVar1 + 0x2c48));
  *puVar2 = 0;
  puVar2[3] = lVar10 - lVar9;
  puVar2[2] = 0;
  puVar2[5] = (ulonglong)(uint)(iVar3 - iVar4);
  puVar2[4] = CONCAT44(iVar6 - iVar8,iVar5 - iVar7);
  return;
}

