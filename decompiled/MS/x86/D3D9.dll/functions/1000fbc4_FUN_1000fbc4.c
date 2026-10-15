/*
 * FUN_1000fbc4 at 1000fbc4
 * undefined __fastcall FUN_1000fbc4(undefined4 * param_1)
 * Address ranges: 1000fbc4-1000fc00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000fbc4(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[2] != 0) {
    do {
      thunk_FUN_100cfd6c(*(LPVOID *)(param_1[1] + 0x10 + uVar1 * 0x20));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[2]);
  }
  thunk_FUN_100cfd6c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

