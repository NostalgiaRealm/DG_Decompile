/*
 * FUN_1800137f4 at 1800137f4
 * undefined __fastcall FUN_1800137f4(longlong param_1)
 * Address ranges: 1800137f4-180013852
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800137f4(longlong param_1)

{
  ulonglong uVar1;
  
  FUN_180012fe0(param_1,param_1);
  FUN_1800526f8(*(longlong **)(*(longlong *)(param_1 + 8) + 0x29f0),
                *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0),0);
  uVar1 = FUN_180052840(*(longlong *)(*(longlong *)(param_1 + 8) + 0x29f0),
                        *(longlong *)(param_1 + 0x10));
  if (((char)uVar1 == '\0') &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x20) == '\0')) {
    FUN_180013dec(param_1);
  }
  return;
}

