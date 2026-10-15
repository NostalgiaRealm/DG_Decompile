/*
 * FUN_1801569a0 at 1801569a0
 * undefined FUN_1801569a0(void)
 * Address ranges: 1801569a0-1801569eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801569a0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  FUN_180167890(lVar2,(ulonglong)uVar1,*(undefined4 *)((longlong)param_1 + 0xc));
  if ((uVar1 < 0x35) && ((0x10000000004080U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) {
    *(undefined1 *)(lVar2 + 0x1018f) = 1;
  }
  return;
}

