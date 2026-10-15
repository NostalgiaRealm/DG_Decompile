/*
 * FUN_1800243dc at 1800243dc
 * undefined __fastcall FUN_1800243dc(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800243dc-180024462
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800243dc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_res8 [2];
  longlong local_res10 [3];
  
  if (*(char *)(param_1 + 0x27c) != '\0') {
    local_res10[0] = 0;
    local_res8[0] = 0;
    FUN_18004f7ec(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338),0,param_4,
                  local_res10,local_res8,local_res8);
    FUN_18004f89c(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338),0,0x2a);
    *(undefined1 *)(param_1 + 0x27c) = 0;
  }
  return;
}

