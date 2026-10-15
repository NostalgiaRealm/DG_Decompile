/*
 * FUN_180032f30 at 180032f30
 * undefined __fastcall FUN_180032f30(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180032f30-180032f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032f30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180032ec0(param_1);
  FUN_18003197c(param_1,*(HANDLE *)(param_1 + 0xf8),
                *(int *)(param_1 + 0x18) * 0x40 + 0xfffU & 0xfffff000,param_4,
                *(char *)(param_1 + 0x60) == '\0');
  return;
}

