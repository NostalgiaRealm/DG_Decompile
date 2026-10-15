/*
 * FUN_140013330 at 140013330
 * undefined8 * __fastcall FUN_140013330(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 140013330-140013444
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140013330(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_140028f90;
  puVar2 = param_1 + 1;
  lVar1 = 0x10;
  do {
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
    QueryPerformanceCounter((LARGE_INTEGER *)(puVar2 + 3));
    puVar2[4] = puVar2[3];
    puVar2 = puVar2 + 5;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x302) = 0;
  *(undefined1 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x61] = param_2;
  param_1[0x62] = 0;
  return param_1;
}

