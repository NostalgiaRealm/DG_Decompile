/*
 * FUN_180085cf8 at 180085cf8
 * undefined FUN_180085cf8(void)
 * Address ranges: 180085cf8-180085d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180085cf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + -0xd0);
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x000180222c50(lVar1,0,0x400);
    }
    else {
      thunk_FUN_180001218(lVar1,param_2,0x400);
    }
    *(undefined1 *)(param_1 + 0x89) = 1;
    FUN_180083fc0(param_1 + -0xe0,0);
  }
  return;
}

