/*
 * FUN_180017b10 at 180017b10
 * undefined __cdecl FUN_180017b10(longlong param_1, undefined4 param_2)
 * Address ranges: 180017b10-180017b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017b10(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800608b0((uint *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))(*(longlong **)(param_1 + 0x18),param_2);
    *(char *)(*(longlong *)(param_1 + 0x18) + 0xf0) = (char)param_2;
    FUN_1800608a0((uint *)(param_1 + 0x60));
  }
  return;
}

