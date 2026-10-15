/*
 * FUN_180027780 at 180027780
 * undefined __cdecl FUN_180027780(undefined8 * param_1)
 * Address ranges: 180027780-1800277c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180067848;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_180067840;
  return;
}

