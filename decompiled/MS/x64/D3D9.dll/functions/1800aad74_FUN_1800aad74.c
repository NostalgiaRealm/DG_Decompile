/*
 * FUN_1800aad74 at 1800aad74
 * undefined __fastcall FUN_1800aad74(longlong param_1, longlong * param_2)
 * Address ranges: 1800aad74-1800aadcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aad74(longlong param_1,longlong *param_2)

{
  FUN_1800e07c4(*(LPCRITICAL_SECTION *)(param_1 + 0x20),(undefined8 *)*param_2,
                3 - (uint)((int)param_2[3] != 1),(int)param_2[4]);
  FUN_1800e0e08(*(longlong *)(param_1 + 0x20),*param_2,
                param_1 + 0x100c0 + (ulonglong)*(uint *)((longlong)param_2 + 0x1c) * 0xc18,
                (undefined8 *)(param_1 + 0x18));
  return;
}

