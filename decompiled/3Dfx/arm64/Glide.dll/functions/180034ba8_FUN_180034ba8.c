/*
 * FUN_180034ba8 at 180034ba8
 * undefined __cdecl FUN_180034ba8(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180034ba8-180034c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034ba8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_20 [2];
  longlong local_18;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    local_18 = 0;
    local_20[0] = 0;
    FUN_180051598(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0),
                  *(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8),0,param_4,&local_18,local_20,
                  local_20);
    FUN_180051620(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0),
                  *(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8),0,0x2a);
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
}

