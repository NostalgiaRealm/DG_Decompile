/*
 * FUN_10059019 at 10059019
 * bool __stdcall FUN_10059019(undefined4 param_1, uint param_2, char param_3)
 * Address ranges: 10059019-10059056
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10059019(undefined4 param_1,uint param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = __aullshr(param_3 * '\x03',param_2 & 0xffff);
  uVar1 = (uint)uVar3 & 7;
  if ((uVar1 == 5) || (uVar1 == 6)) {
    bVar2 = (param_2 >> 0x12 & 1) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

