/*
 * FUN_1800ae860 at 1800ae860
 * ulonglong __fastcall FUN_1800ae860(longlong param_1, uint param_2, int param_3, int param_4, int param_5)
 * Address ranges: 1800ae860-1800ae8ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ae860(longlong param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) {
    uVar1 = FUN_1800028ec(param_1 + -0xa0,param_3);
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_1800add94(param_1 + -0xa0,param_3,param_4,param_5);
      uVar3 = uVar2 & 0xffffffff;
      if ((int)uVar2 == -0x7789f794) {
        uVar3 = 0x8876086a;
      }
    }
  }
  return uVar3 & 0xffffffff;
}

