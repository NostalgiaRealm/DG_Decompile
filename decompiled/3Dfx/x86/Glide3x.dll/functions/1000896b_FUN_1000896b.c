/*
 * FUN_1000896b at 1000896b
 * undefined4 * __fastcall FUN_1000896b(undefined4 * param_1)
 * Address ranges: 1000896b-10008a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1000896b(undefined4 *param_1)

{
  uint uVar1;
  
  FUN_100087ee(param_1);
  uVar1 = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x8e] = 0;
  FUN_10052de1(param_1 + 0x6e,0,0x80);
  FUN_10052de1(param_1 + 0x43d,0,0xc00);
  FUN_10052de1(param_1 + 0x73d,0,0xc00);
  do {
    param_1[uVar1 * 0x13a + 0x8f] = 0;
    param_1[uVar1 * 0x13a + 0x90] = 0;
    FUN_10052de1(param_1 + uVar1 * 0x13a + 0x91,0,0x70);
    FUN_10052de1(param_1 + uVar1 * 0x13a + 0xad,0,0x70);
    FUN_10052de1(param_1 + uVar1 * 0x13a + 0xc9,0,0x400);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return param_1;
}

