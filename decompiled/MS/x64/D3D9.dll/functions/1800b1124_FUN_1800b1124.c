/*
 * FUN_1800b1124 at 1800b1124
 * undefined __fastcall FUN_1800b1124(longlong param_1)
 * Address ranges: 1800b1124-1800b115f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b1124(longlong param_1)

{
  if (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810)) {
    FUN_1800b10d4(param_1,*(int *)(param_1 + 0x6814),*(uint *)(param_1 + 0x680c),
                  *(uint *)(param_1 + 0x6810));
    *(undefined8 *)(param_1 + 0x6810) = 0;
    *(undefined4 *)(param_1 + 0x680c) = 0;
  }
  return;
}

