/*
 * FUN_1800a0480 at 1800a0480
 * undefined FUN_1800a0480(void)
 * Address ranges: 1800a0480-1800a04eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a0480(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  do {
    FUN_1800a1058(param_1,uVar2,0);
    thunk_FUN_180001218(param_1 + 0x100c0 + uVar2 * 0xc18,param_1 + 0x1c240,0xc00);
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  return;
}

