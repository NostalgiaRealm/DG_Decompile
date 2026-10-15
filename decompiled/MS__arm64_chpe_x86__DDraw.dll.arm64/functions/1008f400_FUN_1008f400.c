/*
 * FUN_1008f400 at 1008f400
 * undefined FUN_1008f400(void)
 * Address ranges: 1008f400-1008f583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008f400(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *extraout_w11;
  char local_50 [16];
  
  *param_1 = 0;
  iVar3 = FUN_1008cfc8();
  iVar4 = FUN_1008f3b8(iVar3,param_2);
  if (iVar4 == 0) {
    iVar6 = (*(code *)PTR_FUN_100ba1c4)(param_2,param_3,param_4,param_5);
    goto LAB_1008f55c;
  }
  piVar1 = (int *)(iVar4 + 0x24);
  *piVar1 = *piVar1 + 1;
  if ((param_3 == 0x402 && param_4 == 0x44454745) && param_5 == 0x45474544) {
    *(undefined1 *)(iVar3 + 0x971) = 1;
    iVar6 = 0;
  }
  else {
    local_50[0] = '\0';
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar6 = (*extraout_w11)(uVar5,iVar3,iVar4,param_2,param_3,param_4,param_5,local_50);
    if (local_50[0] != '\0') {
      *param_1 = *(undefined4 *)(iVar4 + 0x14);
    }
    if ((param_3 < 0x1d) && (((uint)&DAT_10000040 >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
      bVar2 = param_4 != 0;
    }
    else {
      if (param_3 != 0x21) goto LAB_1008f52c;
      bVar2 = iVar6 - 1U < 2;
    }
    *(bool *)(iVar4 + 0x2d) = bVar2;
  }
LAB_1008f52c:
  *piVar1 = *piVar1 + -1;
LAB_1008f55c:
  FUN_1008d9d0(iVar3);
  return iVar6;
}

