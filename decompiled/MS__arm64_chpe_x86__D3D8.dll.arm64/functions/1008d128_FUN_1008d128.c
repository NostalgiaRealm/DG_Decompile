/*
 * FUN_1008d128 at 1008d128
 * undefined FUN_1008d128(void)
 * Address ranges: 1008d128-1008d23f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1008d128(int param_1,int param_2,int param_3,uint param_4,char param_5,undefined4 *param_6,
            undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_w8;
  code *extraout_w11;
  undefined1 auVar3 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  
  uVar1 = 2;
  auVar3 = FUN_1008d090(param_1,param_2,param_3);
  if ((auVar3._0_8_ & 1) != 0) {
    uVar1 = 3;
    if (param_5 != '\0') {
      if ((param_4 & 1) == 0) {
        uVar1 = 2;
        if ((param_4 & 2) == 0) {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(*(int *)(param_1 + 0x44) + 4),auVar3._8_8_,
                       param_2 + *(int *)(param_1 + 0x2c) * param_3,uVar1,(param_4 & 4) << 0x12);
    iVar2 = (*extraout_w11)(uVar1,*extraout_w8);
    if (iVar2 < 0) {
      uVar1 = 1;
      if (iVar2 != -0x7785fff6) {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 0;
      *param_6 = local_50;
      *param_7 = uStack_4c;
    }
  }
  return uVar1;
}

