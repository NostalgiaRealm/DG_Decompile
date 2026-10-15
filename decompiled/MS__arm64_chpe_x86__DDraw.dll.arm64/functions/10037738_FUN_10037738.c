/*
 * FUN_10037738 at 10037738
 * undefined FUN_10037738(void)
 * Address ranges: 10037738-10037877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10037738(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  
  FUN_10037888(auStack_40);
  FUN_10002d00();
  FUN_100a9d50(auStack_3c);
  iVar2 = -0x7ff8ffa9;
  if ((param_3 != (undefined4 *)0x0) && (*param_3 = 0, param_4 == 0)) {
    iVar2 = FUN_10091750(param_1,&DAT_100b1850,0x10);
    iVar3 = FUN_10034570(iVar2 != 0);
    iVar2 = -0x7ff8fff2;
    if (iVar3 != 0) {
      iVar2 = FUN_1003ade8(iVar3,param_2);
      pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (iVar2 == 0) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        iVar2 = (*extraout_w11)(iVar3,param_1,param_3,0);
        if (iVar2 < 0) {
          FUN_10037bb8(iVar3);
        }
        else if (iVar2 == 0) goto LAB_10037850;
      }
      (*pcVar1)();
      (*extraout_w11_00)(iVar3,1);
      if (iVar2 == -0x7789fffb) {
        iVar2 = -0x7789fdce;
      }
    }
  }
LAB_10037850:
  FUN_100a9ca0(auStack_3c);
  FUN_10037900(auStack_40);
  return iVar2;
}

