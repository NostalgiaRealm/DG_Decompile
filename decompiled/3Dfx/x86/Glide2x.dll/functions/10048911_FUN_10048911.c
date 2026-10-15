/*
 * FUN_10048911 at 10048911
 * int __fastcall FUN_10048911(int * param_1, uint param_2)
 * Address ranges: 10048911-10048961
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10048911(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  iVar1 = FUN_100488cc(param_2);
  if ((iVar1 == 0x40) || (local_14 = 0x58454853, iVar1 == 0x41)) {
    local_14 = 0x52444853;
  }
  local_10 = 0;
  local_8 = 0;
  local_c = param_2;
  FUN_1004874e(param_1,&local_14,0x10);
  return param_1[1] - *param_1;
}

