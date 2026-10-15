/*
 * FUN_180020350 at 180020350
 * undefined __fastcall FUN_180020350(longlong param_1)
 * Address ranges: 180020350-1800203ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020350(longlong param_1)

{
  ulonglong uVar1;
  
  FUN_18001fb9c(param_1,param_1);
  FUN_1800500ec(*(longlong **)(*(longlong *)(param_1 + 8) + 0x2978),
                *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0),0);
  uVar1 = FUN_180050234(*(longlong *)(*(longlong *)(param_1 + 8) + 0x2978),
                        *(longlong *)(param_1 + 0x10));
  if (((char)uVar1 == '\0') &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x20) == '\0')) {
    FUN_180020948(param_1);
  }
  return;
}

