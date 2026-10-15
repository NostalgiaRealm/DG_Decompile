/*
 * FUN_10073c0b at 10073c0b
 * undefined4 __fastcall FUN_10073c0b(uint * param_1)
 * Address ranges: 10073c0b-10073c46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10073c0b(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  switch(uVar1 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
    if ((uVar1 & 0x2000) != 0) {
      return 0;
    }
    if ((uVar1 & 0x8000) != 0) {
      return 2;
    }
switchD_10073c1e_caseD_5:
    uVar2 = FUN_10073bf1(uVar1 >> 4 & 7);
    return uVar2;
  case 5:
    goto switchD_10073c1e_caseD_5;
  default:
    return 0;
  }
}

