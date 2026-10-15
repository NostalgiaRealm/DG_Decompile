/*
 * FUN_18001220c at 18001220c
 * undefined __cdecl FUN_18001220c(longlong param_1)
 * Address ranges: 18001220c-180012273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001220c(longlong param_1)

{
  FUN_180011b28(param_1);
  FUN_180010b18(param_1,1);
  *(undefined4 *)(param_1 + 0x2c40) = *(undefined4 *)(param_1 + 0x2c10);
  *(undefined4 *)(param_1 + 0x2c44) = *(undefined4 *)(param_1 + 0x2c14);
  *(undefined4 *)(param_1 + 0x2c48) = *(undefined4 *)(param_1 + 0x2c18);
  *(undefined4 *)(param_1 + 0x2c68) = *(undefined4 *)(param_1 + 0x2c38);
  FUN_1800109c0(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

