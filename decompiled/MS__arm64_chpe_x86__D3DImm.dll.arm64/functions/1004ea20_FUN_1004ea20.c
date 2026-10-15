/*
 * FUN_1004ea20 at 1004ea20
 * undefined FUN_1004ea20(void)
 * Address ranges: 1004ea20-1004ebdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004ea20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  local_4c = param_7;
  uStack_48 = param_3;
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_50 = 0;
  iVar3 = -0x7fffbffe;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11)(param_4);
  if (iVar4 == 0) {
    (*pcVar1)();
    cVar2 = (*extraout_w11_00)(param_2);
    if (cVar2 != '\0') {
      (*pcVar1)();
      iVar3 = (*extraout_w11_01)(param_1,param_2,uStack_48,&DAT_1009c3f0,&local_50,local_4c);
      if (-1 < iVar3) {
        iVar3 = FUN_10064740(*(undefined4 *)(param_2 + 0xc),&DAT_1009c480,param_5,0,param_4,0,
                             param_6,1);
        uVar5 = (*pcVar1)();
        (*extraout_w11_02)(uVar5);
      }
    }
  }
  else {
    uVar5 = FUN_10053e50(iVar4);
    iVar6 = FUN_10081e90(param_5,uVar5,0x10);
    if (iVar6 == 0) {
      iVar3 = FUN_10052b50(iVar4,&DAT_1009c480,param_6);
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar3;
}

