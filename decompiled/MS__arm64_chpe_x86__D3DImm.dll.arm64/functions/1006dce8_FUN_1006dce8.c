/*
 * FUN_1006dce8 at 1006dce8
 * undefined FUN_1006dce8(void)
 * Address ranges: 1006dce8-1006de63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006dce8(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 extraout_x1;
  undefined4 *in_w6;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar6;
  
  uVar4 = DAT_100acbc0;
  *in_w6 = 0;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = 1;
  if (DAT_100a2070 != 0) {
    uVar2 = FUN_10081780(uVar4,DAT_100a2070);
    iVar3 = FUN_100817e8(uVar4,DAT_100a2070);
    if (iVar3 != 0) {
      uVar4 = (*pcVar1)();
      iVar5 = (*extraout_w11)(uVar4,iVar3,uVar2,0);
      if (-1 < iVar5) {
        uVar4 = (*pcVar1)(*(undefined4 *)(param_1 + param_2 * 0x1510 + 0x510),extraout_x1,
                          DAT_100a2034);
        iVar5 = (*extraout_w11_00)(uVar4,*extraout_w8);
        if (-1 < iVar5) {
          FUN_10081dc0(iVar3);
          goto LAB_1006de2c;
        }
      }
    }
    FUN_10081dc0(iVar3);
    iVar6 = 0;
  }
LAB_1006de2c:
  if (iVar6 == 0) {
    FUN_1006de68();
  }
  return iVar6;
}

