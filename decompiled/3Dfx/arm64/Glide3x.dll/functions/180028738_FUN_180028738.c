/*
 * FUN_180028738 at 180028738
 * undefined __cdecl FUN_180028738(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180028738-18002879f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028738(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_20 [2];
  longlong local_18;
  
  if (*(char *)(param_1 + 0x27c) != '\0') {
    local_18 = 0;
    local_20[0] = 0;
    FUN_1800542d8(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330),
                  *(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338),0,param_4,&local_18,local_20,
                  local_20);
    FUN_180054360(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330),
                  *(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338),0,0x2a);
    *(undefined1 *)(param_1 + 0x27c) = 0;
  }
  return;
}

