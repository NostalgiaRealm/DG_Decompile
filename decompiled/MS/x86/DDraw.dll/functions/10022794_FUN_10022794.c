/*
 * FUN_10022794 at 10022794
 * undefined __stdcall FUN_10022794(void)
 * Address ranges: 10022794-100227bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022794(void)

{
  if (DAT_1006c238 != 0) {
    DAT_1006c238 = 0;
    FreeLibrary(DAT_1006c234);
    DAT_1006c234 = (HMODULE)0x0;
  }
  return;
}

