/*
 * FUN_1800475e8 at 1800475e8
 * undefined FUN_1800475e8(void)
 * Address ranges: 1800475e8-180047633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800475e8(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  FUN_1800577d0(lVar2,(ulonglong)uVar1,*(undefined4 *)((longlong)param_1 + 0xc));
  if ((uVar1 < 0x35) && ((0x10000000004080U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) {
    *(undefined1 *)(lVar2 + 0x1018f) = 1;
  }
  return;
}

