/*
 * FUN_10034ee0 at 10034ee0
 * undefined FUN_10034ee0(void)
 * Address ranges: 10034ee0-10035097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10034ee0(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  piVar1 = (int *)(param_1 + 0xbc);
  if (*piVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (param_1 != 0x38) {
      iVar2 = param_1 + -0x28;
    }
    iVar2 = FUN_10002dc8(*(undefined4 *)(param_1 + 0xe4),param_2,iVar2,param_4);
    *param_4 = 0;
    if (iVar2 != 0) {
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[0] = 0;
      param_3[1] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      *param_3 = iVar2;
      (*(code *)PTR_FUN_100ba21c)(param_2,param_3 + 2,0);
      uVar3 = (*(code *)PTR_FUN_100ba014)(0,0,0,0);
      (*(code *)PTR_FUN_100ba220)(param_2,uVar3,0);
      (*(code *)PTR_FUN_100ba054)(iVar2,uVar3);
      (*(code *)PTR_FUN_100ba020)(uVar3);
      (*(code *)PTR_FUN_100ba2ec)(param_2,0);
      *param_4 = 1;
      if (*piVar1 != 0) {
        local_40[0] = 0;
        iVar4 = FUN_1004ee50(*piVar1,local_40);
        if (-1 < iVar4) {
          uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          iVar4 = (*extraout_w11)(uVar3);
          uVar3 = local_40[0];
          (*(code *)__hybrid_CompilerIAT)
                    (iVar2,0,0,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 8),local_40[0],0
                     ,0,0xcc0020);
          FUN_1004f220(*piVar1,uVar3);
        }
      }
    }
  }
  return iVar2;
}

