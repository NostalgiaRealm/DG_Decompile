/*
 * FUN_18005361c at 18005361c
 * undefined __fastcall FUN_18005361c(undefined8 * param_1)
 * Address ranges: 18005361c-180053689
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005361c(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_18004d2e0(plVar1,*(int *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14),*(undefined8 **)((longlong)param_1 + 0x1c),0
                ,*(uint *)((longlong)param_1 + 0x24),'\x01');
  if (param_1[5] != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1[0x1edc] + 0x17f0),*(int *)(param_1 + 7),
                  (int)param_1[5],param_1[6]);
  }
  return;
}

