/*
 * FUN_18001a258 at 18001a258
 * undefined __fastcall FUN_18001a258(longlong param_1, char param_2)
 * Address ranges: 18001a258-18001a2f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a258(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x32da) != '\0') {
    *(undefined4 *)(param_1 + 0x3268) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3288) = 2;
    lVar1 = FUN_18004157c(*(longlong *)(param_1 + 0x31c0) + 0x19d8,(byte *)(param_1 + 0x3228));
    *(longlong *)(param_1 + 13000) = lVar1;
  }
  if ((*(char *)(param_1 + 0x32da) != '\0') || (param_2 != '\0')) {
    FUN_180048020(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(longlong *)(param_1 + 13000));
    FUN_180047a30(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(param_1 + 13000));
    *(undefined1 *)(param_1 + 0x32da) = 0;
  }
  return;
}

