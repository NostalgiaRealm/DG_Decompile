/*
 * FUN_10027448 at 10027448
 * undefined FUN_10027448(void)
 * Address ranges: 10027448-100276eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027448(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  iVar13 = param_2 + *(int *)(param_1 + 0x2c) * param_3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_1001c0d0(*(undefined4 *)(param_1 + 0xe0),2,*(undefined4 *)(param_1 + 8));
  }
  uVar14 = FUN_10028ca0(param_1,0,0);
  fVar15 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
  piVar1 = (int *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x194);
  uVar3 = *(undefined4 *)(*piVar1 + 0x15dc);
  uVar4 = *(undefined4 *)(param_1 + 0x158);
  uVar5 = *(undefined4 *)(*piVar1 + 0x15dc);
  uVar6 = *(undefined4 *)(param_1 + 0x148);
  uVar7 = *(uint *)(param_1 + 0x134);
  uVar8 = *(uint *)(param_1 + 0x130);
  uVar9 = *(uint *)(param_1 + 0x18);
  iVar10 = *(int *)(param_1 + 0x1c);
  uVar11 = *(uint *)(param_1 + 0x14);
  uVar12 = *(undefined4 *)(param_1 + 0xe0);
  FUN_10073b50(*(undefined4 *)(*piVar1 + 0x15d8),auStack_4c,uVar14,0);
  FUN_10073b50(uVar3,auStack_48,uVar2,iVar13);
  FUN_10073b50(uVar5,auStack_44,uVar4,iVar13);
  FUN_1001c4c0(0,0,(float)uVar11 / fVar15,(float)uVar9 / fVar15,0,0,(float)uVar8 / fVar15,
               (float)uVar7 / fVar15,uVar12,iVar10,iVar10,param_2,iVar13,param_2,param_3,iVar13,
               uVar6);
  return;
}

