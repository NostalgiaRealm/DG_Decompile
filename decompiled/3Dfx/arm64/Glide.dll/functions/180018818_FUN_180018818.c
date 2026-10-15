/*
 * FUN_180018818 at 180018818
 * undefined __cdecl FUN_180018818(longlong param_1, undefined4 param_2)
 * Address ranges: 180018818-18001886b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018818(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))(*(longlong **)(param_1 + 0x18),param_2);
    *(char *)(*(longlong *)(param_1 + 0x18) + 0xf0) = (char)param_2;
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

