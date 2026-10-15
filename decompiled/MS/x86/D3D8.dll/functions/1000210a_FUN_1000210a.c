/*
 * FUN_1000210a at 1000210a
 * undefined4 __stdcall FUN_1000210a(void)
 * Address ranges: 1000210a-1000213c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000210a(void)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (DAT_100ba2a8 == 0) {
    if (DAT_100ba2a0 != (HMODULE)0x0) {
      FreeLibrary(DAT_100ba2a0);
      DAT_100ba2a0 = (HMODULE)0x0;
    }
    FUN_1007a7de();
    uVar1 = FUN_10022527();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

