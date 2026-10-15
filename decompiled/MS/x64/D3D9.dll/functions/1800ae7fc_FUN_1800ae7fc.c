/*
 * FUN_1800ae7fc at 1800ae7fc
 * ulonglong __fastcall FUN_1800ae7fc(longlong param_1, uint param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 1800ae7fc-1800ae85e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ae7fc(longlong param_1,uint param_2,int param_3,int param_4,int param_5,
                       int param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) {
    uVar1 = FUN_1800028ec(param_1 + -0xa0,param_3);
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_180001ffc(param_1 + -0xa0,param_3,param_4,param_5,param_6);
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  return uVar2 & 0xffffffff;
}

