/*
 * FUN_1800dfce0 at 1800dfce0
 * undefined8 * __fastcall FUN_1800dfce0(undefined8 * param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800dfce0-1800dfe44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800dfce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  lVar2 = 0x10;
  *param_1 = &PTR_D3DPERF_GetStatus_1801067d8;
  puVar1 = param_1 + 3;
  do {
    FUN_1800ddf28(puVar1);
    puVar1 = puVar1 + 5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x53] = param_2;
  puVar1 = param_1 + 99;
  param_1[0x54] = 0;
  lVar2 = 8;
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
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x314) = 0;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 0xc;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x67c) = 0;
  param_1[0xd0] = param_3;
  param_1[0xd1] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  return param_1;
}

