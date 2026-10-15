/*
 * FUN_10007890 at 10007890
 * undefined FUN_10007890(void)
 * Address ranges: 10007890-10007a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007890(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

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
  iVar3 = FUN_10005ff8();
  iVar4 = FUN_10007848(iVar3,param_2);
  if (iVar4 == 0) {
    iVar6 = (*(code *)PTR_FUN_100a014c)(param_2,param_3,param_4,param_5);
    goto LAB_100079ec;
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
      if (param_3 != 0x21) goto LAB_100079bc;
      bVar2 = iVar6 - 1U < 2;
    }
    *(bool *)(iVar4 + 0x2d) = bVar2;
  }
LAB_100079bc:
  *piVar1 = *piVar1 + -1;
LAB_100079ec:
  FUN_10006a00(iVar3);
  return iVar6;
}

