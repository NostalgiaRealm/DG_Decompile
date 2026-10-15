/*
 * FUN_180101df0 at 180101df0
 * undefined FUN_180101df0(void)
 * Address ranges: 180101df0-180101e0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180101df0(longlong param_1)

{
  int local_50 [2];
  undefined1 auStack_48 [56];
  
  local_50[0] = *(int *)(param_1 + 0x200);
  while (0 < local_50[0]) {
    (*__imp_USER32_dll_PeekMessageA)(auStack_48,0,0,0,0x400000);
    (**(code **)(param_1 + 0x58))(param_1 + 0x200,local_50,4,5);
    local_50[0] = *(int *)(param_1 + 0x200);
  }
  return;
}

