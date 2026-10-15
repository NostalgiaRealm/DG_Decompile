/*
 * FUN_18002ecfc at 18002ecfc
 * undefined __fastcall FUN_18002ecfc(longlong param_1)
 * Address ranges: 18002ecfc-18002ed62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ecfc(longlong param_1)

{
  longlong *plVar1;
  
  FUN_18005e700(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0) + 0x12c0);
  plVar1 = *(longlong **)(param_1 + 0x3038);
  if (plVar1 != (longlong *)0x0) {
    FUN_180043088(*(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0) + 0x1b500),
                  (ulonglong)plVar1,'\x01');
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

