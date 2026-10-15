/*
 * FUN_100579eb at 100579eb
 * undefined __fastcall FUN_100579eb(uint param_1, int * param_2)
 * Address ranges: 100579eb-10057a90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100579eb(uint param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (((param_1 == 0x10040) || (param_1 == 0x40)) || (param_1 == 0x41)) goto LAB_10057a5c;
    iVar1 = param_1 - 0x50;
  }
  else {
    if (param_1 == 0x10050) goto LAB_10057a5c;
    if (param_1 == 0x10051) goto LAB_10057a10;
    iVar1 = param_1 - 0x20050;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
LAB_10057a10:
    FUN_100577d6(8,0xe4,3,4,0,0,0);
    FUN_10057663(param_2,7);
    return;
  }
LAB_10057a5c:
  FUN_100577d6(8,0xe4,2,4,0,0,0);
  FUN_10057663(param_2,4);
  return;
}

