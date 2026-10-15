/*
 * FUN_1801cead8 at 1801cead8
 * undefined FUN_1801cead8(void)
 * Address ranges: 1801cead8-1801ceb37;1801ceec4-1801ceef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1801cead8(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0xc50a) == '\0') {
    uVar2 = *(undefined1 *)(param_1 + 0xc505);
  }
  else {
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0xc498) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xc498) + 0x20;
      *(longlong *)(param_1 + 0xc4e8) = lVar1;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_1 + 0x70,lVar1,0x254);
    }
    *(undefined1 *)(param_1 + 0xc505) = 0;
    *(undefined1 *)(param_1 + 0xc50a) = 0;
  }
  return uVar2;
}

