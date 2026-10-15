/*
 * FUN_180066600 at 180066600
 * undefined __fastcall FUN_180066600(undefined8 param_1, longlong param_2, ushort * param_3, uint * param_4, uint * param_5)
 * Address ranges: 180066600-18006666c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180066600(undefined8 param_1,longlong param_2,ushort *param_3,uint *param_4,uint *param_5)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  if (((byte)uVar1 & 0xf0) == 0xa0) {
    bVar2 = (byte)uVar1 & 7;
    uVar5 = 1 << bVar2;
    uVar4 = 0x100;
    if ((uVar1 & 0x100) == 0) {
      *param_4 = *param_4 | uVar5;
    }
    else {
      uVar4 = 0x180;
      *param_5 = *param_5 | uVar5;
    }
    uVar4 = uVar4 | (ulonglong)bVar2 << 4;
    uVar3 = *(ushort *)(uVar4 + param_2) | 0x200;
    if ((uVar1 & 0x200) == 0) {
      uVar3 = *(ushort *)(uVar4 + param_2);
    }
    *param_3 = uVar3;
  }
  return;
}

