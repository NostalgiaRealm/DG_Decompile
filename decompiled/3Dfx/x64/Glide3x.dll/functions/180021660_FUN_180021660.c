/*
 * FUN_180021660 at 180021660
 * undefined __fastcall FUN_180021660(longlong param_1)
 * Address ranges: 180021660-1800216c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021660(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1800602b0(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 0x12c0);
  plVar1 = *(longlong **)(param_1 + 0x3038);
  if (plVar1 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3330) + 0x1b500),
                  (ulonglong)plVar1,'\x01');
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

