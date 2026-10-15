/*
 * FUN_18000e660 at 18000e660
 * undefined __cdecl FUN_18000e660(longlong param_1, byte param_2)
 * Address ranges: 18000e660-18000e6fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000e660(longlong param_1,byte param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x345a) != '\0') {
    *(undefined4 *)(param_1 + 0x33e8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3408) = 2;
    lVar1 = FUN_180047e00(*(longlong *)(param_1 + 0x3340) + 0x19d8,(byte *)(param_1 + 0x33a8));
    *(longlong *)(param_1 + 0x3448) = lVar1;
  }
  if ((*(char *)(param_1 + 0x345a) != '\0') || ((param_2 & 1) != 0)) {
    FUN_18004f1b8(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(longlong *)(param_1 + 0x3448));
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
    FUN_180049c38(*(longlong *)(uVar2 + 0xb18),*(ulonglong *)(param_1 + 0x3448),
                  *(ulonglong *)(uVar2 + 0xb10),uVar2,*(ulonglong *)(uVar2 + 0xb78));
    *(undefined1 *)(param_1 + 0x345a) = 0;
  }
  return;
}

