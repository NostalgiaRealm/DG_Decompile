/*
 * FUN_180014ce8 at 180014ce8
 * undefined __cdecl FUN_180014ce8(undefined8 * param_1, uint param_2, uint param_3)
 * Address ranges: 180014ce8-180014d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014ce8(undefined8 *param_1,uint param_2,uint param_3)

{
  if (*(uint *)((longlong)param_1 + 0x234) < param_2 || *(uint *)(param_1 + 0x47) < param_3) {
    (**(code **)*param_1)
              (param_1,*(uint *)((longlong)param_1 + 0x234) < param_2,
               *(uint *)(param_1 + 0x47) < param_3);
  }
  *(uint *)((longlong)param_1 + 0x234) = *(int *)((longlong)param_1 + 0x234) - param_2;
  *(uint *)(param_1 + 0x47) = *(int *)(param_1 + 0x47) - param_3;
  *(uint *)(param_1 + 0x4e) = *(int *)(param_1 + 0x4e) + param_2;
  return;
}

