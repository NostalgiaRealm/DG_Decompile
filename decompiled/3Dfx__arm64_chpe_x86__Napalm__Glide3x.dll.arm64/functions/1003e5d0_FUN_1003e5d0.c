/*
 * FUN_1003e5d0 at 1003e5d0
 * undefined FUN_1003e5d0(void)
 * Address ranges: 1003e5d0-1003e787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e5d0(int param_1,uint param_2,int param_3,byte param_4)

{
  undefined2 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  ulonglong extraout_x14;
  ulonglong extraout_x15;
  
  param_3 = param_3 + param_2 * 0xe;
  iVar7 = 0xf6;
  if (param_4 == 0) {
    iVar7 = 0xbe;
  }
  puVar4 = (undefined2 *)(iVar7 + param_3);
  if (param_2 < 2) {
    iVar7 = 0x10e;
    if (param_4 == 0) {
      iVar7 = 0xd6;
    }
    uVar2 = (ulonglong)*(ushort *)(iVar7 + param_3);
  }
  else {
    uVar2 = 0;
  }
  uVar8 = (uint)param_4;
  iVar7 = 0x150;
  if (uVar8 == 0) {
    iVar7 = 0x120;
  }
  uVar3 = (ulonglong)uVar8;
  puVar5 = (undefined4 *)(iVar7 + param_2 * 0x250 + param_1);
  uVar6 = 0x100;
  if (puVar5[9] == 0) {
    uVar6 = 0;
  }
  puVar4[5] = (short)param_2 + 1U | uVar6 | (ushort)((uVar8 & 0xf) << 0xc) | 0xf0;
  uVar1 = FUN_1003e390(*puVar5,puVar5[4],param_2,uVar2,uVar3,1);
  puVar4[1] = uVar1;
  uVar3 = uVar3 & 0xffffffff;
  uVar2 = uVar2 & 0xffffffff;
  uVar1 = FUN_1003e390(puVar5[1],puVar5[5],param_2,uVar2,uVar3,2);
  puVar4[2] = uVar1;
  uVar3 = uVar3 & 0xffffffff;
  uVar2 = uVar2 & 0xffffffff;
  uVar1 = FUN_1003e390(puVar5[2],puVar5[6],param_2,uVar2,uVar3,3);
  *puVar4 = uVar1;
  uVar3 = uVar3 & 0xffffffff;
  uVar2 = uVar2 & 0xffffffff;
  uVar1 = FUN_1003e390(puVar5[3],puVar5[7],param_2,uVar2,uVar3,4);
  puVar4[3] = uVar1;
  uVar8 = (uint)(float)puVar5[8];
  if (uVar8 == 0) {
    uVar9 = 0xff;
  }
  else {
    uVar8 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar9 = (undefined1)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
  }
  *(undefined1 *)(puVar4 + 4) = uVar9;
  uVar1 = FUN_1003e390(*puVar5,1,param_2,uVar2 & 0xffffffff,uVar3 & 0xffffffff,1);
  puVar4[6] = uVar1;
  FUN_1003e9e8(puVar4,extraout_x15 & 0xffffffff,extraout_x14 & 0xffffffff);
  return;
}

