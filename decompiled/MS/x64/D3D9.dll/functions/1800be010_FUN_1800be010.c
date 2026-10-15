/*
 * FUN_1800be010 at 1800be010
 * undefined8 __fastcall FUN_1800be010(longlong param_1, ulonglong * param_2)
 * Address ranges: 1800be010-1800be046
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800be010(longlong param_1,ulonglong *param_2)

{
  *param_2 = -(ulonglong)(*(longlong *)(param_1 + -0x178) != 0) &
             *(longlong *)(param_1 + -0x178) + 0x78U;
  if (*(longlong *)(param_1 + -0x178) != 0) {
    FUN_1800c0004(*(longlong *)(param_1 + -0x178) + 0x78);
  }
  return 0;
}

