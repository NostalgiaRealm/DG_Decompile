/*
 * FUN_18002f1a4 at 18002f1a4
 * undefined __fastcall FUN_18002f1a4(longlong param_1)
 * Address ranges: 18002f1a4-18002f20a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f1a4(longlong param_1)

{
  longlong *plVar1;
  
  FUN_18005eba0(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0) + 0x12c0);
  plVar1 = *(longlong **)(param_1 + 0x3038);
  if (plVar1 != (longlong *)0x0) {
    FUN_180043530(*(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0) + 0x1b500),
                  (ulonglong)plVar1,'\x01');
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

