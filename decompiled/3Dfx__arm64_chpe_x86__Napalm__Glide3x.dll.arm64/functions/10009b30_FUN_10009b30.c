/*
 * FUN_10009b30 at 10009b30
 * undefined FUN_10009b30(void)
 * Address ranges: 10009b30-10009bd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10009b30(uint param_1,int param_2,uint param_3,undefined8 param_4,ulonglong param_5)

{
  int iVar1;
  int extraout_w1;
  int iVar2;
  undefined8 extraout_x10;
  ulonglong uVar3;
  ulonglong extraout_x11;
  
  param_5 = param_5 & 0xffffffff;
  iVar2 = 0;
  if (param_2 <= (int)param_3) {
    uVar3 = (ulonglong)(param_1 & 3);
    do {
      if (((int)uVar3 == 3) || ((param_3 & 1) == (uint)((int)uVar3 != 1))) {
        iVar1 = FUN_1000aed8(param_5 & 0xffffffff);
        iVar2 = iVar2 + iVar1 * ((uint)((ulonglong)extraout_x10 >> 0x10) & 0xffff) *
                        ((uint)extraout_x10 & 0xffff);
        param_2 = extraout_w1;
        uVar3 = extraout_x11;
      }
      param_3 = param_3 - 1;
    } while (param_2 <= (int)param_3);
  }
  return iVar2;
}

