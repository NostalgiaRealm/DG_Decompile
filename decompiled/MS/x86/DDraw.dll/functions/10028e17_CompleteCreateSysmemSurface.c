/*
 * CompleteCreateSysmemSurface at 10028e17
 * undefined __stdcall CompleteCreateSysmemSurface(void)
 * Address ranges: 10028e17-10028e3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void CompleteCreateSysmemSurface(void)

{
                    /* 0x28e17  2  CompleteCreateSysmemSurface */
  if (DAT_10070a08 == (FARPROC)0x0) {
    DAT_10070a08 = FUN_10023885("CompleteCreateSysmemSurface");
    if (DAT_10070a08 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10028e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10070a08)();
  return;
}

