/*
 * FUN_1001cc78 at 1001cc78
 * undefined FUN_1001cc78(void)
 * Address ranges: 1001cc78-1001ced3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001cc78(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    uVar7 = 0;
  }
  else {
    *(char *)(param_1 + 0x3c) = '\0';
    iVar6 = *(int *)(param_1 + 0x38);
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    while (__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer = pcVar3, iVar6 != 0) {
      (*(code *)PTR_FUN_1009d0dc)(1);
      pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      iVar6 = *(int *)(param_1 + 0x38);
    }
    piVar1 = (int *)(param_1 + 0x44);
    if (*piVar1 != 0) {
      (*pcVar3)();
      (*extraout_w11)();
      uVar5 = (*pcVar3)();
      (*extraout_w11_00)(uVar5);
      (*(code *)PTR_FUN_1009d044)(*piVar1);
      *piVar1 = 0;
    }
    piVar1 = (int *)(param_1 + 0xc);
    iVar6 = *piVar1;
    if (*(char *)(iVar6 + 0xde) == '\0') {
      (*(code *)PTR_FUN_1009d200)(1);
      *(char *)(iVar6 + 0xde) = '\x01';
    }
    bVar4 = false;
    if ((*(int *)(*piVar1 + 0x94) != 0) &&
       (iVar6 = FUN_100076e8(*(undefined4 *)(param_1 + 0x1c),*(int *)(*piVar1 + 0x94)), iVar6 != 0))
    {
      bVar4 = *(int *)(iVar6 + 0x24) != 0;
    }
    FUN_10026730(param_1,0,0);
    FUN_10026bb0(param_1,*(undefined4 *)(*piVar1 + 0x94));
    uVar5 = (*pcVar3)();
    (*extraout_w11_01)(uVar5);
    if (*(int *)(param_1 + 0x20) != 0) {
      (*(code *)PTR_FUN_1009d1c4)(*(undefined4 *)(*piVar1 + 0x94),0x401,0,0);
      iVar6 = *(int *)(param_1 + 0x28);
      while (iVar6 != 0) {
        (*(code *)PTR_FUN_1009d0dc)(1);
        iVar6 = *(int *)(param_1 + 0x28);
      }
      *(int *)(param_1 + 0x20) = 0;
    }
    FUN_10007200(*(int *)(param_1 + 0x1c));
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar2 = *(int *)(iVar6 + 0xf8) + -1;
    *(int *)(iVar6 + 0xf8) = iVar2;
    if ((iVar2 == 0) && (*(char *)(iVar6 + 0x789) != '\0')) {
      (*(code *)PTR_FUN_1009d0cc)(*(undefined4 *)(iVar6 + 0xf4));
      *(undefined4 *)(iVar6 + 0xf4) = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (!bVar4) {
      (*(code *)PTR_FUN_1009d044)(DAT_1009f7ac);
    }
    uVar7 = 1;
  }
  return uVar7;
}

