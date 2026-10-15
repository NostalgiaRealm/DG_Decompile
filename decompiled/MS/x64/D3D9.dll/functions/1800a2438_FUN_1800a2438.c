/*
 * FUN_1800a2438 at 1800a2438
 * undefined __fastcall FUN_1800a2438(longlong * param_1)
 * Address ranges: 1800a2438-1800a2485
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2438(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  LPRECT lprcDst;
  
  plVar3 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar2,(RECT *)((longlong)param_1 + 0xc));
  if (cVar1 == '\0') {
    lprcDst = (LPRECT)(((ulonglong)uVar2 << 5 | 0x10) + *(longlong *)((longlong)plVar3 + 0xd4));
    UnionRect(lprcDst,lprcDst,(RECT *)((longlong)param_1 + 0xc));
  }
  return;
}

