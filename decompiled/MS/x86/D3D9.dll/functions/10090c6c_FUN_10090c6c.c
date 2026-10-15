/*
 * FUN_10090c6c at 10090c6c
 * uint __stdcall FUN_10090c6c(int param_1, uint param_2, int param_3, int param_4, undefined4 param_5, uint param_6, undefined4 * param_7)
 * Address ranges: 10090c6c-10090ce9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10090c6c(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,uint param_6,
                 undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  void *this;
  uint uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = FUN_100026b9(param_3);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_100026d2(this,extraout_ECX);
      if ((char)uVar1 != '\0') {
        uVar3 = FUN_10002e5f(param_2,param_3,param_4,extraout_ECX_00,param_6,0,1);
        if ((-1 < (int)uVar3) && (param_7 != (undefined4 *)0x0)) {
          uVar1 = 1;
          if (param_6 == 1) {
            puVar2 = &DAT_100deee4;
            if (param_3 == 2) {
              puVar2 = &DAT_100deef0;
            }
            uVar1 = puVar2[param_2 * 8];
          }
          *param_7 = uVar1;
        }
      }
    }
  }
  return uVar3;
}

