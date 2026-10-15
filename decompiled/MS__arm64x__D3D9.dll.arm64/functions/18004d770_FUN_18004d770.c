/*
 * FUN_18004d770 at 18004d770
 * undefined FUN_18004d770(void)
 * Address ranges: 18004d770-18004d7cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d770(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(ulonglong *)(*(longlong *)(*(longlong *)(lVar1 + 0xf6e0) + 0x1508) + 0xb78) <=
      *(ulonglong *)(param_1[1] + 0x20)) {
    FUN_18003feb0(lVar1,0,0,0);
    FUN_1800e8548(*(longlong *)(*(longlong *)(lVar1 + 0xf6e0) + 0x1508) + 8,0);
  }
  return;
}

