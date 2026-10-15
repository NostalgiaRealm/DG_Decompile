/*
 * FUN_140012d38 at 140012d38
 * undefined8 * __cdecl FUN_140012d38(undefined8 * param_1, undefined8 param_2, undefined8 * param_3)
 * Address ranges: 140012d38-140012e27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140012d38(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_140028dd0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0x10;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar3 = param_1 + 4;
  do {
    lVar1 = lVar1 + -1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar3 = param_1 + 0x24;
  do {
    lVar1 = lVar1 + -1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar3 = param_1 + 0x44;
  do {
    lVar1 = lVar1 + -1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  } while (lVar1 != 0);
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffffffffffff;
  FUN_140025250((undefined1 *)((longlong)param_1 + 0x334),0,0x100);
  uVar5 = param_3[1];
  uVar4 = *param_3;
  param_1[0x90] = 0;
  *param_1 = &PTR_FUN_140028c48;
  uVar2 = param_3[2];
  param_1[0x92] = uVar5;
  param_1[0x91] = uVar4;
  param_1[0x93] = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffffffffffff;
  *(bool *)(param_1 + 0x8f) = *(int *)(param_1 + 0x91) == 5;
  return param_1;
}

