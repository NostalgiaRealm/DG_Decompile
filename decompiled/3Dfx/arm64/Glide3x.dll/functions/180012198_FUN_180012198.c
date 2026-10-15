/*
 * FUN_180012198 at 180012198
 * undefined __cdecl FUN_180012198(longlong param_1)
 * Address ranges: 180012198-18001219b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012198(longlong param_1)

{
  FUN_180011b28(param_1);
  FUN_180010b18(param_1,1);
  *(undefined4 *)(param_1 + 0x2c4c) = *(undefined4 *)(param_1 + 0x2c1c);
  *(undefined4 *)(param_1 + 0x2c50) = *(undefined4 *)(param_1 + 0x2c20);
  *(undefined8 *)(param_1 + 0x2c58) = *(undefined8 *)(param_1 + 0x2c28);
  *(undefined4 *)(param_1 + 0x2c60) = *(undefined4 *)(param_1 + 0x2c30);
  *(undefined4 *)(param_1 + 0x2c64) = *(undefined4 *)(param_1 + 0x2c34);
  FUN_1800109c0(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

