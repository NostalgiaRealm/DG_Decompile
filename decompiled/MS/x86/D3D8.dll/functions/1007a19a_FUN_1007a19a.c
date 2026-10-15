/*
 * FUN_1007a19a at 1007a19a
 * uint __stdcall FUN_1007a19a(int param_1, uint param_2, int param_3, int param_4, undefined4 param_5, uint param_6)
 * Address ranges: 1007a19a-1007a1e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1007a19a(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,uint param_6)

{
  undefined4 uVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar2;
  
  uVar2 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = FUN_100025de(param_3);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_100025f2((void *)(param_1 + -0x70),extraout_ECX);
      if ((char)uVar1 != '\0') {
        uVar2 = FUN_10002b5c(param_2,param_3,param_4,extraout_ECX_00,param_6,extraout_ECX_00,1);
      }
    }
  }
  return uVar2;
}

