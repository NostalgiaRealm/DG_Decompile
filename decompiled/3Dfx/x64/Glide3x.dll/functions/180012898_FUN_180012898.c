/*
 * FUN_180012898 at 180012898
 * undefined __fastcall FUN_180012898(undefined8 * param_1, uint param_2, uint param_3)
 * Address ranges: 180012898-1800128f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012898(undefined8 *param_1,uint param_2,uint param_3)

{
  if ((*(uint *)((longlong)param_1 + 0x234) < param_2) || (*(uint *)(param_1 + 0x47) < param_3)) {
    (**(code **)*param_1)
              (param_1,*(uint *)((longlong)param_1 + 0x234) < param_2,
               *(uint *)(param_1 + 0x47) < param_3);
  }
  *(uint *)(param_1 + 0x47) = *(int *)(param_1 + 0x47) - param_3;
  *(int *)((longlong)param_1 + 0x234) = *(int *)((longlong)param_1 + 0x234) - param_2;
  *(uint *)(param_1 + 0x4e) = *(int *)(param_1 + 0x4e) + param_2;
  return;
}

