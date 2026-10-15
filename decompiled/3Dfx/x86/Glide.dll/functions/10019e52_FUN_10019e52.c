/*
 * FUN_10019e52 at 10019e52
 * undefined4 * __fastcall FUN_10019e52(undefined4 * param_1)
 * Address ranges: 10019e52-10019efc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10019e52(undefined4 *param_1)

{
  uint uVar1;
  
  FUN_10019d21(param_1);
  uVar1 = 0;
  param_1[0x4e] = 0;
  param_1[0x6f] = 0;
  FUN_10050561(param_1 + 0x4f,0,0x80);
  FUN_10050561(param_1 + 0x41e,0,0xc00);
  FUN_10050561(param_1 + 0x71e,0,0xc00);
  do {
    param_1[uVar1 * 0x13a + 0x70] = 0;
    param_1[uVar1 * 0x13a + 0x71] = 0;
    FUN_10050561(param_1 + uVar1 * 0x13a + 0x72,0,0x70);
    FUN_10050561(param_1 + uVar1 * 0x13a + 0x8e,0,0x70);
    FUN_10050561(param_1 + uVar1 * 0x13a + 0xaa,0,0x400);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return param_1;
}

