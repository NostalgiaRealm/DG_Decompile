/*
 * FUN_10048ca1 at 10048ca1
 * int __fastcall FUN_10048ca1(int * param_1, uint param_2)
 * Address ranges: 10048ca1-10048cf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10048ca1(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  iVar1 = FUN_10048c5c(param_2);
  if ((iVar1 == 0x40) || (local_14 = 0x58454853, iVar1 == 0x41)) {
    local_14 = 0x52444853;
  }
  local_10 = 0;
  local_8 = 0;
  local_c = param_2;
  FUN_10048ade(param_1,&local_14,0x10);
  return param_1[1] - *param_1;
}

