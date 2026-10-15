/*
 * FUN_18004ddac at 18004ddac
 * undefined __fastcall FUN_18004ddac(longlong param_1, longlong param_2)
 * Address ranges: 18004ddac-18004ddfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ddac(longlong param_1,longlong param_2)

{
  if (*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78) <=
      *(ulonglong *)(param_2 + 0x20)) {
    FUN_180049b30(param_1,0,0,0);
    FUN_1800e2ae8(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 8,'\0');
  }
  return;
}

