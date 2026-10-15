/*
 * FUN_1800df448 at 1800df448
 * undefined FUN_1800df448(void)
 * Address ranges: 1800df448-1800df4d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800df448(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_18023b318;
  thunk_FUN_180102fc0(param_1[100]);
  lVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180102fc0(*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x44;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180102fc0(*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x24;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180102fc0(*puVar1);
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_18023b268;
  return;
}

