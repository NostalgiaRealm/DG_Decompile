/*
 * FUN_1800ae6b0 at 1800ae6b0
 * ulonglong __fastcall FUN_1800ae6b0(longlong param_1, uint param_2, int param_3, int param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 1800ae6b0-1800ae744
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ae6b0(longlong param_1,uint param_2,int param_3,int param_4,uint param_5,
                       int param_6,int param_7)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) {
    uVar2 = FUN_1800028ec(param_1 + -0xa0,param_3);
    if ((char)uVar2 != '\0') {
      uVar1 = FUN_180002a0c(param_1 + -0xa0,param_2,param_3,param_4,0,param_5,param_6,param_7,1);
      uVar3 = (ulonglong)uVar1;
    }
  }
  return uVar3 & 0xffffffff;
}

