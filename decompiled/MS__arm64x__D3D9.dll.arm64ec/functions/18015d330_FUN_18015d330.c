/*
 * FUN_18015d330 at 18015d330
 * undefined FUN_18015d330(void)
 * Address ranges: 18015d330-18015d38f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015d330(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(ulonglong *)(*(longlong *)(*(longlong *)(lVar1 + 0xf6e0) + 0x1508) + 0xb78) <=
      *(ulonglong *)(param_1[1] + 0x20)) {
    FUN_18014e9a0(lVar1,0,0,0);
    FUN_180207560(*(longlong *)(*(longlong *)(lVar1 + 0xf6e0) + 0x1508) + 8,0);
  }
  return;
}

