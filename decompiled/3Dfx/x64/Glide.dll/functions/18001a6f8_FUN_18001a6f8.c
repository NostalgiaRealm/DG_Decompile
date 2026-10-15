/*
 * FUN_18001a6f8 at 18001a6f8
 * undefined __fastcall FUN_18001a6f8(longlong param_1, char param_2)
 * Address ranges: 18001a6f8-18001a799
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a6f8(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x32da) != '\0') {
    *(undefined4 *)(param_1 + 0x3268) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3288) = 2;
    lVar1 = FUN_180041a24(*(longlong *)(param_1 + 0x31c0) + 0x19d8,(byte *)(param_1 + 0x3228));
    *(longlong *)(param_1 + 13000) = lVar1;
  }
  if ((*(char *)(param_1 + 0x32da) != '\0') || (param_2 != '\0')) {
    FUN_1800484c8(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(longlong *)(param_1 + 13000));
    FUN_180047ed8(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(param_1 + 13000));
    *(undefined1 *)(param_1 + 0x32da) = 0;
  }
  return;
}

