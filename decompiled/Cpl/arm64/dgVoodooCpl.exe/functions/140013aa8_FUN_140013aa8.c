/*
 * FUN_140013aa8 at 140013aa8
 * undefined8 * __cdecl FUN_140013aa8(undefined8 * param_1)
 * Address ranges: 140013aa8-140013b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140013aa8(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_140028dd0;
  param_1[1] = 0;
  lVar1 = 0x10;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar2 = param_1 + 4;
  do {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar2 = param_1 + 0x24;
  do {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar2 = param_1 + 0x44;
  do {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (lVar1 != 0);
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffffffffffff;
  FUN_140025250((undefined1 *)((longlong)param_1 + 0x334),0,0x100);
  return param_1;
}

