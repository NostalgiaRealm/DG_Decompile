/*
 * FUN_18009bdc0 at 18009bdc0
 * undefined __fastcall FUN_18009bdc0(longlong param_1, uint param_2, RECT * param_3)
 * Address ranges: 18009bdc0-18009be23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009bdc0(longlong param_1,uint param_2,RECT *param_3)

{
  LPRECT ptVar1;
  
  ptVar1 = (LPRECT)(*(longlong *)(param_1 + 0x84) + ((ulonglong)param_2 * 0x20 | 0x10));
  UnionRect(ptVar1,ptVar1,param_3);
  if (*(longlong *)(param_1 + 0x164) != 0) {
    ptVar1 = (LPRECT)(*(longlong *)(param_1 + 0x164) + 0x10 + (ulonglong)param_2 * 0x20);
    UnionRect(ptVar1,ptVar1,param_3);
  }
  return;
}

