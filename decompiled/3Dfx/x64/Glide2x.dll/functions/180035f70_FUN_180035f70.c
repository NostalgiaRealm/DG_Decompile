/*
 * FUN_180035f70 at 180035f70
 * undefined __fastcall FUN_180035f70(undefined8 * param_1, uint param_2, uint param_3)
 * Address ranges: 180035f70-180035fbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035f70(undefined8 *param_1,uint param_2,uint param_3)

{
  if ((*(uint *)((longlong)param_1 + 0x14) < param_2) || (*(uint *)(param_1 + 3) < param_3)) {
    (**(code **)*param_1)
              (param_1,*(uint *)((longlong)param_1 + 0x14) < param_2,
               *(uint *)(param_1 + 3) < param_3);
  }
  *(uint *)(param_1 + 3) = *(int *)(param_1 + 3) - param_3;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) - param_2;
  *(uint *)(param_1 + 10) = *(int *)(param_1 + 10) + param_2;
  return;
}

