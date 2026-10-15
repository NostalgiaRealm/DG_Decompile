/*
 * FUN_180054760 at 180054760
 * undefined __fastcall FUN_180054760(longlong * param_1)
 * Address ranges: 180054760-1800547e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054760(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_18004d7fc(lVar1,(int)param_1[1],*(undefined **)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14),*(longlong *)((longlong)param_1 + 0x1c),
                *(undefined4 *)((longlong)param_1 + 0x24),*(uint *)(param_1 + 5),
                *(uint *)((longlong)param_1 + 0x2c),(char)param_1[6],
                *(byte *)((longlong)param_1 + 0x34),(char)param_1[7]);
  if (*(longlong *)((longlong)param_1 + 0x3c) != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + 0xf6e0) + 0x17f0),
                  *(int *)((longlong)param_1 + 0x4c),(int)*(longlong *)((longlong)param_1 + 0x3c),
                  *(ulonglong *)((longlong)param_1 + 0x44));
  }
  return;
}

