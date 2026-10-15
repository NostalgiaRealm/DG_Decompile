/*
 * FUN_10001f95 at 10001f95
 * undefined4 __stdcall FUN_10001f95(void)
 * Address ranges: 10001f95-10001fca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001f95(void)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (DAT_100dea68 == 0) {
    if (DAT_100dea60 != (HMODULE)0x0) {
      FreeLibrary(DAT_100dea60);
      DAT_100dea60 = (HMODULE)0x0;
    }
    FUN_1009130d();
    uVar1 = FUN_10029bbf();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

