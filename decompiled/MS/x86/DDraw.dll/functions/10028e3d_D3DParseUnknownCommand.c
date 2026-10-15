/*
 * D3DParseUnknownCommand at 10028e3d
 * undefined __stdcall D3DParseUnknownCommand(void)
 * Address ranges: 10028e3d-10028e62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void D3DParseUnknownCommand(void)

{
                    /* 0x28e3d  3  D3DParseUnknownCommand */
  if (DAT_10070a0c == (FARPROC)0x0) {
    DAT_10070a0c = FUN_10023885("D3DParseUnknownCommand");
    if (DAT_10070a0c == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10028e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10070a0c)();
  return;
}

