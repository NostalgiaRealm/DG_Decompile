/*
 * FUN_1003e788 at 1003e788
 * undefined FUN_1003e788(void)
 * Address ranges: 1003e788-1003e9e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e788(int param_1,int param_2,byte param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  undefined2 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined1 uVar15;
  ulonglong extraout_x15;
  ulonglong extraout_x15_00;
  ulonglong extraout_x15_01;
  
  uVar10 = (ulonglong)param_3;
  uVar9 = (ushort)param_3;
  iVar12 = 0xe8;
  if (uVar9 == 0) {
    iVar12 = 0xb0;
  }
  puVar1 = (undefined2 *)(iVar12 + param_2);
  iVar12 = 0xf0;
  if (uVar9 == 0) {
    iVar12 = 0xc0;
  }
  puVar2 = (undefined4 *)(iVar12 + param_1);
  uVar6 = (ulonglong)*(ushort *)(param_2 + 0x100);
  iVar13 = 0x100;
  iVar12 = iVar13;
  if (puVar2[9] == 0) {
    iVar12 = 0;
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar4 = FUN_1003e4f8(*(undefined4 *)(param_1 + 0xf0),1,uVar6,0,0,uVar10,1);
  uVar11 = (ulonglong)uVar4;
  uVar10 = uVar10 & 0xffffffff;
  FUN_1003e4f8(*(undefined4 *)(param_1 + 0xf4),1,uVar6 & 0xffffffff,uVar7 & 0xffffffff,
               uVar8 & 0xffffffff,uVar10,2,uVar11);
  puVar1[5] = (ushort)iVar12 | uVar9 << 0xc | 0xf0;
  if ((int)uVar10 == 0) {
    iVar13 = 200;
  }
  puVar3 = (undefined2 *)(iVar13 + param_2);
  uVar10 = uVar10 & 0xffffffff;
  uVar5 = FUN_1003e4f8(*puVar2,puVar2[4],*puVar3,0,0,uVar10,1);
  puVar1[1] = uVar5;
  if (((int)uVar10 == 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    uVar4 = *(ushort *)(param_2 + 0x100);
    uVar6 = extraout_x15;
    if ((uVar4 & 0xdf0) == 0) {
      uVar4 = 0x2040;
    }
    else if ((uVar4 & 0xff0) == 0x100) {
      uVar4 = 0x2050;
    }
    else {
      uVar4 = uVar4 | 0x4000;
    }
  }
  else {
    uVar10 = uVar10 & 0xffffffff;
    uVar4 = FUN_1003e4f8(puVar2[1],puVar2[5],*puVar3,0,0,uVar10,2);
    uVar6 = extraout_x15_00;
  }
  puVar1[2] = uVar4;
  uVar10 = uVar10 & 0xffffffff;
  uVar5 = FUN_1003e4f8(puVar2[2],puVar2[6],*puVar3,uVar6 & 0xffffffff,uVar11 & 0xffffffff,uVar10,3);
  *puVar1 = uVar5;
  uVar10 = uVar10 & 0xffffffff;
  uVar5 = FUN_1003e4f8(puVar2[3],puVar2[7],*puVar3,extraout_x15_01 & 0xffffffff,uVar11 & 0xffffffff,
                       uVar10,4);
  puVar1[3] = uVar5;
  uVar14 = (uint)(float)puVar2[8];
  if (uVar14 == 0) {
    uVar15 = 0xff;
  }
  else {
    uVar14 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    uVar15 = (undefined1)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
  }
  *(undefined1 *)(puVar1 + 4) = uVar15;
  uVar5 = FUN_1003e4f8(*puVar2,1,*puVar3,0,0,uVar10 & 0xffffffff,1);
  puVar1[6] = uVar5;
  FUN_1003e9e8(puVar1,iVar12,uVar9 << 0xc);
  return;
}

