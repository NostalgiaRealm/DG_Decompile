/*
 * FUN_10019bce at 10019bce
 * undefined4 __stdcall FUN_10019bce(int param_1)
 * Address ranges: 10019bce-10019c44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10019bce(int param_1)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar6 = *(byte *)(param_1 + 4);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar6);
  if (bVar6 < 0xb) {
    uVar2 = (uint)bVar6;
    bVar6 = (&DAT_10051a90)[uVar2];
  }
  else {
    bVar6 = 0;
  }
  bVar5 = *(byte *)(param_1 + 6);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar5);
  if (bVar5 < 0xb) {
    uVar2 = (uint)bVar5;
    bVar5 = (&DAT_10051a90)[uVar2];
  }
  else {
    bVar5 = 0;
  }
  bVar4 = (bVar5 | bVar6) & 1;
  if ((bVar6 & 2) != 0) {
    uVar3 = (undefined3)(uVar2 >> 8);
    if (*(byte *)(param_1 + 5) < 0xd) {
      uVar1 = (&DAT_10051a80)[*(byte *)(param_1 + 5)];
      uVar3 = 0;
    }
    else {
      uVar1 = 0;
    }
    uVar2 = CONCAT31(uVar3,uVar1) & 0xffffff01;
    bVar4 = bVar4 | (byte)uVar2;
  }
  if ((bVar5 & 2) != 0) {
    uVar3 = (undefined3)(uVar2 >> 8);
    if (*(byte *)(param_1 + 7) < 0xd) {
      uVar1 = (&DAT_10051a80)[*(byte *)(param_1 + 7)];
      uVar3 = 0;
    }
    else {
      uVar1 = 0;
    }
    uVar2 = CONCAT31(uVar3,uVar1) & 0xffffff01;
    bVar4 = bVar4 | (byte)uVar2;
  }
  return CONCAT31((int3)(uVar2 >> 8),bVar4);
}

