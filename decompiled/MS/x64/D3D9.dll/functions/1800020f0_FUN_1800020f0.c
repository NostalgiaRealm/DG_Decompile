/*
 * FUN_1800020f0 at 1800020f0
 * undefined8 __fastcall FUN_1800020f0(void)
 * Address ranges: 1800020f0-180002174
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800020f0(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (DAT_180111f0c == 0) {
    if (DAT_180111f00 != (HMODULE)0x0) {
      FreeLibrary(DAT_180111f00);
      DAT_180111f00 = (HMODULE)0x0;
    }
    uVar1 = FUN_1800af334();
    if (DAT_180111f18 != (longlong *)0x0) {
      (**(code **)(*DAT_180111f18 + 0x60))();
      if (DAT_180111f18 != (longlong *)0x0) {
        (**(code **)*DAT_180111f18)(DAT_180111f18,1);
      }
      DAT_180111f18 = (longlong *)0x0;
      uVar1 = FUN_1800f8148(DAT_180111f20);
      DAT_180111f20 = (undefined8 *)0x0;
    }
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  else {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  return uVar2;
}

