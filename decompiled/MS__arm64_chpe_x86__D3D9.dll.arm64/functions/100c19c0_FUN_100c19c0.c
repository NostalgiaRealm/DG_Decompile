/*
 * FUN_100c19c0 at 100c19c0
 * undefined FUN_100c19c0(void)
 * Address ranges: 100c19c0-100c1dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c19c0(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                 int param_7,byte param_8)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  uVar8 = param_6 + *(int *)(param_5 + 0x2c) * param_7;
  uVar9 = uVar8 >> 5;
  bVar10 = (*(byte *)((uVar8 >> 3 & 3) + param_5 + (uVar9 + 0x73) * 4) >> (ulonglong)(uVar8 & 7) & 1
           ) != 0;
  if (*(int *)(param_5 + 0x1c) == 0) {
    FUN_100b6c20(*(undefined4 *)(param_5 + 0xe0),1,*(undefined4 *)(param_5 + 8));
    bVar10 = (*(byte *)((uVar8 >> 3 & 3) + param_5 + (uVar9 + 0x76) * 4) >> (ulonglong)(uVar8 & 7) &
             1) == 0 && bVar10;
  }
  iVar3 = *(int *)(param_5 + 0x58);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_5 + 0x54);
  }
  piVar2 = (int *)(param_5 + 0x44);
  if (((param_8 ^ 1) & bVar10) != 0) {
    FUN_10112730(*(undefined4 *)(*piVar2 + 0x15d8),auStack_4c,*(undefined4 *)(param_5 + 400),0);
  }
  uVar4 = *(undefined4 *)(param_5 + 100);
  iVar5 = *(int *)(param_5 + 0x1c);
  uVar6 = *(undefined4 *)(*piVar2 + 0x15dc);
  fVar11 = *(float *)(param_5 + 0x1b8);
  fVar12 = *(float *)(param_5 + 0x1b4);
  uVar7 = *(undefined4 *)(param_5 + 0xe0);
  FUN_10112730(*(undefined4 *)(*piVar2 + 0x15d8),auStack_48,*(undefined4 *)(param_5 + 0x154),0);
  FUN_10112730(uVar6,auStack_44,uVar4,uVar8);
  FUN_100b7030(fVar12 * param_1,fVar11 * param_2,fVar12 * param_3,fVar11 * param_4,uVar7,iVar5,iVar5
               ,param_6,uVar8,param_6,param_7,uVar8,iVar3);
  iVar3 = param_5 + uVar9 * 4;
  pbVar1 = (byte *)((uVar8 >> 3 & 3) + iVar3 + 0x1d8);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
  pbVar1 = (byte *)((uVar8 >> 3 & 3) + iVar3 + 0x1c0);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
  pbVar1 = (byte *)((uVar8 >> 3 & 3) + iVar3 + 200);
  *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar8 & 7));
  pbVar1 = (byte *)((uVar8 >> 3 & 3) + iVar3 + 0x1cc);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
  (*(code *)PTR_FUN_1016c270)(*(int *)(param_5 + 0x150) + uVar8 * 0x20 + 0x10);
  return;
}

