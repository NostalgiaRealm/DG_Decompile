/*
 * FUN_10050c40 at 10050c40
 * undefined FUN_10050c40(void)
 * Address ranges: 10050c40-10050e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10050c40(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  iVar3 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar3 == 0) {
    iVar3 = FUN_1004f6d0(param_1);
  }
  else {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar2 = (*extraout_w11)(uVar4);
    if ((cVar2 == '\0') || (iVar3 = FUN_10081e90(param_2,&DAT_1009c480,0x10), iVar3 != 0)) {
      uVar4 = (*pcVar1)();
      cVar2 = (*extraout_w11_00)(uVar4);
      if ((cVar2 != '\0') && (iVar3 = FUN_10081e90(param_2,&DAT_1009c490,0x10), iVar3 == 0)) {
        iVar3 = FUN_10081e90(param_1 + 0xa60,&DAT_1009c490,0x10);
        if ((iVar3 == 0) || (iVar3 = FUN_10081e90(param_1 + 0xa60,&DAT_1009c4a0,0x10), iVar3 == 0))
        {
          iVar3 = FUN_1004f790(param_1);
          goto LAB_10050e24;
        }
      }
      uVar4 = (*pcVar1)();
      cVar2 = (*extraout_w11_01)(uVar4);
      if (((cVar2 == '\0') || (iVar3 = FUN_10081e90(param_2,&DAT_1009c4a0,0x10), iVar3 != 0)) ||
         (iVar3 = FUN_10081e90(param_1 + 0xa60,&DAT_1009c4a0,0x10), iVar3 != 0)) {
        uVar4 = (*pcVar1)();
        cVar2 = (*extraout_w11_02)(uVar4);
        if (cVar2 != '\0') {
          return 0x80004002;
        }
        iVar3 = FUN_10081e90(param_2,&DAT_1009c4b0,0x10);
        if (iVar3 != 0) {
          return 0x80004002;
        }
        iVar3 = FUN_1004f850(param_1);
      }
      else {
        iVar3 = FUN_1004f7f0(param_1);
      }
    }
    else {
      iVar3 = FUN_1004f730(param_1);
    }
  }
LAB_10050e24:
  *param_3 = iVar3;
  uVar4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0x8007000e;
  }
  return uVar4;
}

