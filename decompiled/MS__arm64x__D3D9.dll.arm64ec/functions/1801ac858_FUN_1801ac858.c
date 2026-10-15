/*
 * FUN_1801ac858 at 1801ac858
 * undefined FUN_1801ac858(void)
 * Address ranges: 1801ac858-1801ac877;1801ac87c-1801ac8ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ac858(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(*(undefined8 *)(lVar1 + 0x10),*param_1,0x400);
  }
  FUN_180222c50(*(undefined8 *)(lVar1 + 0x10),0,0x400);
  *(undefined1 *)(lVar1 + 0x191) = 1;
  FUN_1801ab078(lVar1,0,0);
  return;
}

