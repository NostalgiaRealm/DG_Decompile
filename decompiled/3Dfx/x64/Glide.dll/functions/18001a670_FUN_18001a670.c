/*
 * FUN_18001a670 at 18001a670
 * undefined __fastcall FUN_18001a670(longlong param_1, longlong param_2, undefined4 param_3, longlong param_4, undefined4 param_5)
 * Address ranges: 18001a670-18001a6f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a670(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = *(longlong *)(param_2 + 0x80);
  local_10 = *(undefined4 *)(param_2 + 0x30);
  local_c = param_3;
  FUN_180048868(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),0,1,(longlong)&local_18);
  if (param_4 != 0) {
    local_18 = *(longlong *)(param_4 + 0x80);
    local_10 = *(undefined4 *)(param_4 + 0x30);
    local_c = param_5;
    FUN_180048948(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),&local_18);
  }
  return;
}

