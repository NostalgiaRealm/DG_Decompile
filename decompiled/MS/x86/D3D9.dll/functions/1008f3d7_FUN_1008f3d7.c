/*
 * FUN_1008f3d7 at 1008f3d7
 * uint * __fastcall FUN_1008f3d7(uint * param_1, int param_2, int param_3)
 * Address ranges: 1008f3d7-1008f4f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall FUN_1008f3d7(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = param_3 * 0x2c;
  uVar7 = *(uint *)(&DAT_100d2658 + param_3 * 4);
  *param_1 = 0;
  *(char *)param_1 = (char)(uVar7 >> 3);
  if (uVar7 == 0x20) {
    bVar1 = (&DAT_100dcd92)[iVar6];
    bVar2 = (&DAT_100dcd94)[iVar6];
    uVar3 = CONCAT11((&DAT_100dcd96)[iVar6],bVar1) & 0x7ff;
    uVar7 = CONCAT11((&DAT_100dcd90)[iVar6],bVar2) & 0xfffffff9;
    uVar4 = CONCAT31((int3)(uVar7 >> 8),(char)uVar7 * '\x02' | (char)uVar3 >> 1) & 0xfffffffc;
    uVar5 = CONCAT11((char)(uVar4 >> 8),(byte)uVar4 | ((&DAT_100dcd96)[iVar6] & 0xf8) << 3) & 0x7ff;
    *(byte *)((int)param_1 + 1) = (byte)uVar5 | (char)(uVar7 >> 8) >> 3;
    *param_1 = -(uint)(uVar3 >> 8 != 0) & 0x80000 | -(uint)((bVar2 & 7) != 0) & 0x40000 |
               -(uint)((bVar1 & 7) != 0) & 0x20000 | -(uint)((char)(uVar5 >> 8) != '\0') & 0x10000 |
               *param_1 & 0xfff0ffff;
  }
  iVar6 = 0x2c;
  if (param_3 != 0x15) {
    iVar6 = 0x1c;
  }
  uVar7 = *param_1;
  if (*(int *)(param_2 + iVar6) == 9) {
    uVar7 = uVar7 & 0xffefffff | 0x200000;
  }
  else if (*(int *)(param_2 + iVar6) == 0x17) {
    uVar7 = uVar7 & 0xffdfffff | 0x100000;
  }
  else {
    uVar7 = uVar7 & 0xffcfffff;
  }
  uVar4 = 0;
  if ((&DAT_100d2700)[param_3] != '\0') {
    uVar4 = 0x400000;
  }
  *param_1 = uVar4 | uVar7 & 0xffbfffff;
  return param_1;
}

