/*
 * FUN_180012180 at 180012180
 * undefined FUN_180012180(void)
 * Address ranges: 180012180-1800121f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012180(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = param_2 - 10;
  lVar1 = param_1 + ((ulonglong)(uVar3 >> 6) + 0x19e) * 8;
  if ((*(byte *)(lVar1 + ((ulonglong)(uVar3 >> 3) & 7)) >> ((ulonglong)uVar3 & 7) & 1) == 0) {
    lVar2 = *(longlong *)(param_1 + 0xe10) + (longlong)param_2 * 0x40;
    FUN_18001eff8(lVar2,lVar2 + 0x4280,1);
    uVar4 = (ulonglong)(uVar3 >> 3) & 7;
    *(byte *)(lVar1 + uVar4) = *(byte *)(lVar1 + uVar4) | (byte)(1 << ((ulonglong)uVar3 & 7));
  }
  return;
}

