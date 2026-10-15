/*
 * FUN_180092de8 at 180092de8
 * undefined __fastcall FUN_180092de8(longlong param_1, uint param_2, RECT * param_3)
 * Address ranges: 180092de8-180092e64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180092de8(longlong param_1,uint param_2,RECT *param_3)

{
  LPRECT lprcDst;
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    FUN_18008ed34(param_1,param_2,param_3);
  }
  else {
    lprcDst = (LPRECT)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_2 * 0x28 + 0x18);
    UnionRect(lprcDst,lprcDst,param_3);
    uVar4 = (ulonglong)(param_2 >> 6);
    uVar3 = (ulonglong)(param_2 & 0x3f);
    lVar1 = (longlong)uVar3 >> 3;
    pbVar2 = (byte *)(param_1 + 0x250 + uVar4 * 8 + lVar1);
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
    pbVar2 = (byte *)(param_1 + 0x280 + uVar4 * 8 + lVar1);
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
    *(undefined1 *)(param_1 + 0x16b) = 0;
    pbVar2 = (byte *)(param_1 + 0x158 + uVar4 * 8 + lVar1);
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
  }
  return;
}

