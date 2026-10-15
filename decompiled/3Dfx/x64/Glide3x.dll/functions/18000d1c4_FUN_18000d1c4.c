/*
 * FUN_18000d1c4 at 18000d1c4
 * undefined __fastcall FUN_18000d1c4(longlong param_1, char param_2)
 * Address ranges: 18000d1c4-18000d265
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d1c4(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x345a) != '\0') {
    *(undefined4 *)(param_1 + 0x33e8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3408) = 2;
    lVar1 = FUN_180043b88(*(longlong *)(param_1 + 0x3340) + 0x19d8,(byte *)(param_1 + 0x33a8));
    *(longlong *)(param_1 + 0x3448) = lVar1;
  }
  if ((*(char *)(param_1 + 0x345a) != '\0') || (param_2 != '\0')) {
    FUN_18004a62c(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(longlong *)(param_1 + 0x3448));
    FUN_18004a03c(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(ulonglong *)(param_1 + 0x3448));
    *(undefined1 *)(param_1 + 0x345a) = 0;
  }
  return;
}

