/*
 * FUN_1800207f8 at 1800207f8
 * undefined __fastcall FUN_1800207f8(longlong param_1)
 * Address ranges: 1800207f8-180020856
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800207f8(longlong param_1)

{
  ulonglong uVar1;
  
  FUN_180020044(param_1,param_1);
  FUN_180050594(*(longlong **)(*(longlong *)(param_1 + 8) + 0x2978),
                *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0),0);
  uVar1 = FUN_1800506dc(*(longlong *)(*(longlong *)(param_1 + 8) + 0x2978),
                        *(longlong *)(param_1 + 0x10));
  if (((char)uVar1 == '\0') &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x20) == '\0')) {
    FUN_180020df0(param_1);
  }
  return;
}

