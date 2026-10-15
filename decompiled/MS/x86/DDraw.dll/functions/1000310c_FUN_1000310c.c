/*
 * FUN_1000310c at 1000310c
 * undefined __stdcall FUN_1000310c(int param_1, uint param_2, undefined4 param_3)
 * Address ranges: 1000310c-1000319f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000310c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(DAT_1006c210 + 0x780);
  if ((((iVar1 == 3) || (iVar1 == 8)) || (iVar1 == 4)) || ((iVar1 == 5 || (iVar1 == 7)))) {
    local_10 = param_2;
    local_c = param_3;
    FUN_1005dc2d(&local_20,&local_10,*(uint *)(DAT_1006c210 + 0x812),*(uint *)(DAT_1006c210 + 0x816)
                 ,*(uint *)(DAT_1006c210 + 0x81a),*(uint *)(DAT_1006c210 + 0x81e));
    SetRect((LPRECT)(&DAT_1006c460 + param_1 * 0x228),local_20,local_1c,local_18,local_14);
  }
  else {
    SetRectEmpty((LPRECT)(&DAT_1006c460 + param_1 * 0x228));
  }
  return;
}

