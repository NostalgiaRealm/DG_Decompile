/*
 * FUN_1002af4a at 1002af4a
 * undefined __stdcall FUN_1002af4a(int param_1, uint param_2, undefined4 param_3)
 * Address ranges: 1002af4a-1002afdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002af4a(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(DAT_100dea74 + 0x780);
  if ((((iVar1 == 3) || (iVar1 == 8)) || (iVar1 == 4)) || ((iVar1 == 5 || (iVar1 == 7)))) {
    local_10 = param_2;
    local_c = param_3;
    FUN_100cc6ec(&local_20,&local_10,*(uint *)(DAT_100dea74 + 0x812),*(uint *)(DAT_100dea74 + 0x816)
                 ,*(uint *)(DAT_100dea74 + 0x81a),*(uint *)(DAT_100dea74 + 0x81e));
    SetRect((LPRECT)(&DAT_100df498 + param_1 * 0x228),local_20,local_1c,local_18,local_14);
  }
  else {
    SetRectEmpty((LPRECT)(&DAT_100df498 + param_1 * 0x228));
  }
  return;
}

