/*
 * FUN_180014c40 at 180014c40
 * undefined8 * __cdecl FUN_180014c40(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 180014c40-180014ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180014c40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 2;
  *param_1 = &PTR_LAB_180067668;
  puVar1 = (undefined8 *)((longlong)param_1 + 0x184);
  do {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x3f800000;
    lVar2 = lVar2 + -1;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x3f800000;
    *(undefined4 *)(puVar1 + 5) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar1 + 8) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    puVar1[7] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    puVar1 = puVar1 + 10;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x45] = param_2;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  FUN_18000c728((longlong)param_1);
  return param_1;
}

