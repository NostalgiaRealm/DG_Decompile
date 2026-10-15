/*
 * FUN_18008ed34 at 18008ed34
 * undefined __fastcall FUN_18008ed34(longlong param_1, uint param_2, RECT * param_3)
 * Address ranges: 18008ed34-18008eda3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008ed34(longlong param_1,uint param_2,RECT *param_3)

{
  LPRECT ptVar1;
  byte *pbVar2;
  
  ptVar1 = (LPRECT)(*(longlong *)(param_1 + 0x90) + 0x18 + (ulonglong)param_2 * 0x28);
  UnionRect(ptVar1,ptVar1,param_3);
  if (*(longlong *)(param_1 + 0x148) != 0) {
    ptVar1 = (LPRECT)(*(longlong *)(param_1 + 0x148) + 0x18 + (ulonglong)param_2 * 0x28);
    UnionRect(ptVar1,ptVar1,param_3);
  }
  *(undefined1 *)(param_1 + 0x16b) = 0;
  pbVar2 = (byte *)(param_1 + 0x158 + (ulonglong)(param_2 >> 6) * 8 +
                   ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << ((ulonglong)(param_2 & 0x3f) & 7));
  return;
}

