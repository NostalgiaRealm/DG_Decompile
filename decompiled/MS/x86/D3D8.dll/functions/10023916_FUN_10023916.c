/*
 * FUN_10023916 at 10023916
 * undefined __stdcall FUN_10023916(int param_1, uint param_2, undefined4 param_3)
 * Address ranges: 10023916-100239a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023916(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(DAT_100ba2b4 + 0x780);
  if ((((iVar1 == 3) || (iVar1 == 8)) || (iVar1 == 4)) || ((iVar1 == 5 || (iVar1 == 7)))) {
    local_10 = param_2;
    local_c = param_3;
    FUN_100a9e1d(&local_20,&local_10,*(uint *)(DAT_100ba2b4 + 0x812),*(uint *)(DAT_100ba2b4 + 0x816)
                 ,*(uint *)(DAT_100ba2b4 + 0x81a),*(uint *)(DAT_100ba2b4 + 0x81e));
    SetRect((LPRECT)(&DAT_100ba8d0 + param_1 * 0x228),local_20,local_1c,local_18,local_14);
  }
  else {
    SetRectEmpty((LPRECT)(&DAT_100ba8d0 + param_1 * 0x228));
  }
  return;
}

