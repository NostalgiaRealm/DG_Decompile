/*
 * FUN_18001af18 at 18001af18
 * undefined __cdecl FUN_18001af18(longlong param_1, byte param_2)
 * Address ranges: 18001af18-18001afb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001af18(longlong param_1,byte param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x32da) != '\0') {
    *(undefined4 *)(param_1 + 0x3268) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3288) = 2;
    lVar1 = FUN_1800450c0(*(longlong *)(param_1 + 0x31c0) + 0x19d8,(byte *)(param_1 + 0x3228));
    *(longlong *)(param_1 + 13000) = lVar1;
  }
  if ((*(char *)(param_1 + 0x32da) != '\0') || ((param_2 & 1) != 0)) {
    FUN_18004c478(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(longlong *)(param_1 + 13000));
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
    FUN_180046ef8(*(longlong *)(uVar2 + 0xb18),*(ulonglong *)(param_1 + 13000),
                  *(ulonglong *)(uVar2 + 0xb10),uVar2,*(ulonglong *)(uVar2 + 0xb78));
    *(undefined1 *)(param_1 + 0x32da) = 0;
  }
  return;
}

