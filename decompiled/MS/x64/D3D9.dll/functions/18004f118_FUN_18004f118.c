/*
 * FUN_18004f118 at 18004f118
 * undefined __fastcall FUN_18004f118(undefined8 * param_1)
 * Address ranges: 18004f118-18004f19b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f118(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_18004b890(plVar1,*(int *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14),*(uint *)((longlong)param_1 + 0x1c),
                *(undefined4 *)(param_1 + 4),*(uint **)((longlong)param_1 + 0x24),
                *(uint *)((longlong)param_1 + 0x2c),*(int *)(param_1 + 6),
                *(char *)((longlong)param_1 + 0x34),*(undefined1 *)(param_1 + 7));
  if (*(longlong *)((longlong)param_1 + 0x3c) != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1[0x1edc] + 0x17f0),*(int *)((longlong)param_1 + 0x4c),
                  (int)*(longlong *)((longlong)param_1 + 0x3c),
                  *(ulonglong *)((longlong)param_1 + 0x44));
  }
  return;
}

