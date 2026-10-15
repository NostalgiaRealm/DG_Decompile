/*
 * FUN_180181910 at 180181910
 * undefined FUN_180181910(void)
 * Address ranges: 180181910-180181a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180181910(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_30 [4];
  
  local_50[0] = 0;
  local_48 = 1;
  FUN_180215058(param_2,4,0x4000067,0x1020f2,local_50,0x10);
  uVar4 = 1;
  do {
    FUN_1802135e0(param_2,uVar4,0xf);
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
    local_50[0] = 0xd;
    local_48 = 2;
    FUN_180215058(param_2,4,0x4000067,(uint)(byte)(&DAT_18022c4d8)[uVar5] << 4 | 0x102002,local_50,
                  0x10);
  }
  if (bVar3 != 0) {
    local_50[0] = 0xe;
    local_48 = 2;
    FUN_180215058(param_2,4,0x4000067,(uint)bVar3 << 4 | 0x102002,local_50,0x10);
  }
  return;
}

