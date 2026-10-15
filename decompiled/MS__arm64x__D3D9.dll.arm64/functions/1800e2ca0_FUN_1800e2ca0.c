/*
 * FUN_1800e2ca0 at 1800e2ca0
 * undefined FUN_1800e2ca0(void)
 * Address ranges: 1800e2ca0-1800e2d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2ca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_18023b758;
  FUN_1800e40b0();
  lVar2 = 0x10;
  puVar1 = param_1 + 0x3256;
  do {
    lVar2 = lVar2 + -1;
    thunk_FUN_180102fc0(puVar1[-0x253]);
    thunk_FUN_180102fc0(puVar1[-599]);
    thunk_FUN_180102fc0(puVar1[-0x25b]);
    thunk_FUN_180102fc0(puVar1[-0x25f]);
    thunk_FUN_180102fc0(puVar1[-0x263]);
    thunk_FUN_180102fc0(puVar1[-0x267]);
    thunk_FUN_180102fc0(puVar1[-0x26b]);
    thunk_FUN_180102fc0(puVar1[-0x26f]);
    puVar1 = puVar1 + -0x318;
  } while (lVar2 != 0);
  FUN_1800e3eb8(param_1);
  return;
}

