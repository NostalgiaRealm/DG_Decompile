/*
 * FUN_180032470 at 180032470
 * undefined __fastcall FUN_180032470(undefined8 * param_1)
 * Address ranges: 180032470-1800324a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032470(undefined8 *param_1)

{
  if (*(int *)(param_1 + 4) != -1) {
    (**(code **)(*(longlong *)*param_1 + 0x80))
              ((longlong *)*param_1,param_1[1],
               *(undefined8 *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 4) * 8));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  return;
}

