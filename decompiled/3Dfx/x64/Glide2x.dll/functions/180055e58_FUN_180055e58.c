/*
 * FUN_180055e58 at 180055e58
 * undefined8 * __fastcall FUN_180055e58(undefined8 * param_1, undefined8 param_2, undefined4 param_3)
 * Address ranges: 180055e58-180055f26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180055e58(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_180064fb8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar1 = param_1 + 4;
  lVar3 = 0x10;
  lVar2 = lVar3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x24;
  lVar2 = lVar3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x44;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)((longlong)param_1 + 0x474) = param_3;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffffffffffff;
  FUN_18005f374((undefined1 *)((longlong)param_1 + 0x334),0,0x100);
  return param_1;
}

