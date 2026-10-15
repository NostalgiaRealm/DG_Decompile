/*
 * FUN_18000d13c at 18000d13c
 * undefined __fastcall FUN_18000d13c(longlong param_1, longlong param_2, undefined4 param_3, longlong param_4, undefined4 param_5)
 * Address ranges: 18000d13c-18000d1c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d13c(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = *(longlong *)(param_2 + 0x80);
  local_10 = *(undefined4 *)(param_2 + 0x30);
  local_c = param_3;
  FUN_18004a9cc(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),0,1,(longlong)&local_18);
  if (param_4 != 0) {
    local_18 = *(longlong *)(param_4 + 0x80);
    local_10 = *(undefined4 *)(param_4 + 0x30);
    local_c = param_5;
    FUN_18004aaac(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),&local_18);
  }
  return;
}

