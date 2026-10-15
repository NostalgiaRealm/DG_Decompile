/*
 * FUN_18003a5b8 at 18003a5b8
 * undefined __cdecl FUN_18003a5b8(undefined8 * param_1, uint param_2, uint param_3)
 * Address ranges: 18003a5b8-18003a62b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a5b8(undefined8 *param_1,uint param_2,uint param_3)

{
  if (*(uint *)((longlong)param_1 + 0x14) < param_2 || *(uint *)(param_1 + 3) < param_3) {
    (**(code **)*param_1)
              (param_1,*(uint *)((longlong)param_1 + 0x14) < param_2,
               *(uint *)(param_1 + 3) < param_3);
  }
  *(uint *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) - param_2;
  *(uint *)(param_1 + 3) = *(int *)(param_1 + 3) - param_3;
  *(uint *)(param_1 + 10) = *(int *)(param_1 + 10) + param_2;
  return;
}

