/*
 * FUN_100970f5 at 100970f5
 * undefined4 __stdcall FUN_100970f5(int param_1)
 * Address ranges: 100970f5-10097122
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100970f5(int param_1)

{
  uint3 uVar2;
  int iVar1;
  
  uVar2 = (uint3)((uint)param_1 >> 8);
  if ((((param_1 == 0x1b) || (param_1 == 0x1c)) || (param_1 == 0x17)) ||
     (((param_1 == 0x18 || (param_1 == 9)) || (param_1 == 0xb)))) {
    iVar1 = CONCAT31(uVar2,1);
  }
  else {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}

