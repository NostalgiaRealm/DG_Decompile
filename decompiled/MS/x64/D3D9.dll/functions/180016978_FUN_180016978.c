/*
 * FUN_180016978 at 180016978
 * int __fastcall FUN_180016978(longlong param_1)
 * Address ranges: 180016978-180016a35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180016978(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar3 = *(int *)(param_1 + 0x50);
  uVar1 = *(uint *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = iVar3;
  uVar5 = FUN_1800028a0(iVar3);
  uVar10 = (uint)uVar5;
  uVar5 = FUN_180002844(iVar3);
  uVar8 = (uint)uVar5;
  uVar5 = FUN_1800026c0(iVar3);
  iVar7 = (int)uVar5;
  iVar3 = FUN_180002500(iVar4);
  iVar4 = FUN_180031910(iVar2,uVar1,1,iVar3,iVar7,uVar8,uVar10);
  iVar3 = *(int *)(param_1 + 0x54);
  iVar4 = iVar4 * (*(int *)(param_1 + 0x44) + 1);
  if (iVar3 != 0) {
    iVar7 = iVar3;
    uVar5 = FUN_1800028a0(iVar3);
    uVar6 = FUN_180002844(iVar3);
    uVar8 = (uint)uVar6;
    uVar6 = FUN_1800026c0(iVar3);
    iVar9 = (int)uVar6;
    iVar3 = FUN_180002500(iVar7);
    iVar3 = FUN_180031910(iVar2,uVar1,1,iVar3,iVar9,uVar8,(uint)uVar5);
    iVar4 = iVar3 + iVar4;
  }
  return iVar4;
}

