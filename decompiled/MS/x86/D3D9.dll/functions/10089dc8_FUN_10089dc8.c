/*
 * FUN_10089dc8 at 10089dc8
 * undefined4 __fastcall FUN_10089dc8(uint * param_1)
 * Address ranges: 10089dc8-10089e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10089dc8(uint *param_1)

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
switchD_10089ddb_caseD_5:
    uVar2 = FUN_10089dae(uVar1 >> 4 & 7);
    return uVar2;
  case 5:
    goto switchD_10089ddb_caseD_5;
  default:
    return 0;
  }
}

