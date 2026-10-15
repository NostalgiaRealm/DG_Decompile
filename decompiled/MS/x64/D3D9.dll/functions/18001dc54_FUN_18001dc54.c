/*
 * FUN_18001dc54 at 18001dc54
 * undefined4 * __fastcall FUN_18001dc54(undefined4 * param_1)
 * Address ranges: 18001dc54-18001de66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18001dc54(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0x10a;
  lVar2 = 0x10a;
  puVar1 = param_1;
  do {
    FUN_1800fbea0((undefined1 *)puVar1,0,0x40);
    puVar1[0xf] = 0x3f800000;
    puVar1[10] = 0x3f800000;
    puVar1[5] = 0x3f800000;
    *puVar1 = 0x3f800000;
    puVar1 = puVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x10a0;
  do {
    FUN_1800fbea0((undefined1 *)puVar1,0,0x40);
    puVar1[0xf] = 0x3f800000;
    puVar1[10] = 0x3f800000;
    puVar1[5] = 0x3f800000;
    *puVar1 = 0x3f800000;
    puVar1 = puVar1 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x2140),0,0x40);
  param_1[0x2140] = 0x3f800000;
  param_1[0x214f] = 0x3f800000;
  param_1[0x214a] = 0x3f800000;
  param_1[0x2145] = 0x3f800000;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x2150),0,0x40);
  param_1[0x2150] = 0x3f800000;
  param_1[0x215f] = 0x3f800000;
  param_1[0x215a] = 0x3f800000;
  param_1[0x2155] = 0x3f800000;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x2160),0,0x40);
  param_1[0x2160] = 0x3f800000;
  param_1[0x216f] = 0x3f800000;
  param_1[0x216a] = 0x3f800000;
  param_1[0x2165] = 0x3f800000;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x2170),0,0x40);
  param_1[0x2170] = 0x3f800000;
  param_1[0x217f] = 0x3f800000;
  param_1[0x217a] = 0x3f800000;
  param_1[0x2175] = 0x3f800000;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x2180),0,0x40);
  param_1[0x2180] = 0x3f800000;
  param_1[0x218f] = 0x3f800000;
  param_1[0x218a] = 0x3f800000;
  param_1[0x2185] = 0x3f800000;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x2190),0,0x40);
  param_1[0x2190] = 0x3f800000;
  param_1[0x219f] = 0x3f800000;
  param_1[0x219a] = 0x3f800000;
  param_1[0x2195] = 0x3f800000;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x21a0),0,0x40);
  param_1[0x21a0] = 0x3f800000;
  param_1[0x21af] = 0x3f800000;
  param_1[0x21aa] = 0x3f800000;
  param_1[0x21a5] = 0x3f800000;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x21b0),0,0x40);
  param_1[0x21b0] = 0x3f800000;
  param_1[0x21bf] = 0x3f800000;
  param_1[0x21ba] = 0x3f800000;
  param_1[0x21b5] = 0x3f800000;
  FUN_1800fbea0((undefined1 *)(param_1 + 0x21c0),0,0x40);
  param_1[0x21cf] = 0x3f800000;
  param_1[0x21ca] = 0x3f800000;
  param_1[0x21c5] = 0x3f800000;
  param_1[0x21c0] = 0x3f800000;
  return param_1;
}

