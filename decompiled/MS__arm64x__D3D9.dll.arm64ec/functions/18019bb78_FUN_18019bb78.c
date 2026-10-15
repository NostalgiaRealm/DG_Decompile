/*
 * FUN_18019bb78 at 18019bb78
 * undefined FUN_18019bb78(void)
 * Address ranges: 18019bb78-18019bb9b;18019bba0-18019bbcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019bb78(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + -0xd0);
  if (lVar1 != 0) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar1,param_2,0x400);
    }
    FUN_180222c50(lVar1,0,0x400);
    *(undefined1 *)(param_1 + 0x89) = 1;
    FUN_180199c00(param_1 + -0xe0,0);
  }
  return;
}

