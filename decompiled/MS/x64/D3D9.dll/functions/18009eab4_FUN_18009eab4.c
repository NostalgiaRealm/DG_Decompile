/*
 * FUN_18009eab4 at 18009eab4
 * undefined __fastcall FUN_18009eab4(longlong * param_1)
 * Address ranges: 18009eab4-18009eb01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009eab4(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  LPRECT lprcDst;
  
  plVar3 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,(RECT *)((longlong)param_1 + 0xc));
  if (cVar1 == '\0') {
    lprcDst = (LPRECT)(((ulonglong)uVar2 << 5 | 0x10) + *(longlong *)((longlong)plVar3 + 0xd4));
    UnionRect(lprcDst,lprcDst,(RECT *)((longlong)param_1 + 0xc));
  }
  return;
}

