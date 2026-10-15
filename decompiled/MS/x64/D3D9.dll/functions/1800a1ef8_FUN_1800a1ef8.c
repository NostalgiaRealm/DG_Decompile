/*
 * FUN_1800a1ef8 at 1800a1ef8
 * undefined __fastcall FUN_1800a1ef8(longlong param_1, uint param_2, RECT * param_3)
 * Address ranges: 1800a1ef8-1800a1f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1ef8(longlong param_1,uint param_2,RECT *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  LPRECT lprcDst;
  
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    FUN_18009bdc0(param_1,param_2,param_3);
  }
  else {
    lprcDst = (LPRECT)(((ulonglong)param_2 << 5 | 0x10) + *(longlong *)(param_1 + 0x84));
    UnionRect(lprcDst,lprcDst,param_3);
    uVar2 = (ulonglong)(param_2 & 0x3f);
    pbVar1 = (byte *)(param_1 + 0x250 + (ulonglong)(param_2 >> 6) * 8 + ((longlong)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
    pbVar1 = (byte *)(param_1 + 0x280 + (ulonglong)(param_2 >> 6) * 8 + ((longlong)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return;
}

