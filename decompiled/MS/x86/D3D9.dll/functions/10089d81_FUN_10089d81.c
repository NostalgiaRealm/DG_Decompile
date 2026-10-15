/*
 * FUN_10089d81 at 10089d81
 * undefined4 __fastcall FUN_10089d81(uint * param_1)
 * Address ranges: 10089d81-10089dad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10089d81(uint *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  bVar1 = true;
  if (((*param_1 & 0x20000) == 0) || ((*param_1 & 0x180) != 0)) {
    bVar1 = false;
  }
  if (((*param_1 & 0xa000) == 0) && (((*param_1 & 0x70) != 0 || (bVar1)))) {
    uVar2 = 0;
  }
  return uVar2;
}

