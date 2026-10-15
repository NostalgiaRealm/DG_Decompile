/*
 * FUN_1000f7b5 at 1000f7b5
 * undefined __fastcall FUN_1000f7b5(uint * param_1)
 * Address ranges: 1000f7b5-1000f7f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000f7b5(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    param_1[uVar1 + 0x16] = 0xffffffff;
    param_1[uVar1 + 6] = 0xffffffff;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  param_1[0x27] = 0;
  param_1[0x26] = 1 << ((byte)param_1[2] & 0x1f) | 1 << (param_1[1] & 0x1f) | 1 << (*param_1 & 0x1f)
  ;
  return;
}

