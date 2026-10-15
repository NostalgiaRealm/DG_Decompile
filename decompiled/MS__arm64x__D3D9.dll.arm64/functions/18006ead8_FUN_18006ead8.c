/*
 * FUN_18006ead8 at 18006ead8
 * undefined FUN_18006ead8(void)
 * Address ranges: 18006ead8-18006ebd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006ead8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_30 [4];
  
  FUN_1800f5b00(param_2,4,0x4000067,0x1020f2,0,1);
  uVar4 = 1;
  do {
    FUN_1800f5b00(param_2,3,0x3000065,0x1020f2,uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xd);
  uVar5 = 0;
  uVar4 = 0;
  do {
    iVar2 = (int)uVar4 >> 3;
    local_30[0] = *(undefined4 *)(param_3 + 8);
    uVar1 = uVar4 & 7;
    uVar4 = uVar4 + 1;
    if ((*(byte *)((longlong)local_30 + (longlong)iVar2) >> (ulonglong)uVar1 & 1) != 0) {
      uVar5 = uVar5 + 1;
    }
  } while (uVar4 < 6);
  bVar3 = (&DAT_18022c4d0)[uVar5];
  if ((byte)(&DAT_18022c4d8)[uVar5] != 0) {
    FUN_1800f5b00(param_2,4,0x4000067,(uint)(byte)(&DAT_18022c4d8)[uVar5] << 4 | 0x102002,0xd,2);
  }
  if (bVar3 != 0) {
    FUN_1800f5b00(param_2,4,0x4000067,(uint)bVar3 << 4 | 0x102002,0xe,2);
  }
  return;
}

