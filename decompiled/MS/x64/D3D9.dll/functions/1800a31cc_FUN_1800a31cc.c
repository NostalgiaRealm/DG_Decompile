/*
 * FUN_1800a31cc at 1800a31cc
 * undefined __fastcall FUN_1800a31cc(undefined8 * param_1)
 * Address ranges: 1800a31cc-1800a326c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a31cc(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  (**(code **)(*plVar1 + 0x38))
            (plVar1,lVar2,*(undefined4 *)(param_1 + 3),*(undefined4 *)((longlong)param_1 + 0x1c),
             *(undefined4 *)(param_1 + 4),*(undefined4 *)((longlong)param_1 + 0x24),
             *(undefined4 *)(param_1 + 5),*(undefined8 *)((longlong)param_1 + 0x2c),
             *(undefined4 *)((longlong)param_1 + 0x34),param_1[7],*(undefined4 *)(param_1 + 8));
  FUN_1800e05b4(plVar1,lVar3,0);
  if (*(longlong *)((longlong)param_1 + 0x44) != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1 + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x358 + 0x41e),
                  *(int *)((longlong)param_1 + 0x54),(int)*(longlong *)((longlong)param_1 + 0x44),
                  *(ulonglong *)((longlong)param_1 + 0x4c));
  }
  return;
}

