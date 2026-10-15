/*
 * FUN_1000c918 at 1000c918
 * undefined FUN_1000c918(void)
 * Address ranges: 1000c918-1000cba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000c918(int param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  pcVar1 = (char *)(param_1 + 0x3c);
  if ((*pcVar1 == '\0') || ((param_2 != 0 && (param_2 != *(int *)(param_1 + 0x30))))) {
    uVar9 = 0;
  }
  else {
    *pcVar1 = '\0';
    iVar7 = *(int *)(param_1 + 0x38);
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    while (__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer = pcVar4, iVar7 != 0) {
      (*(code *)PTR_FUN_100a80dc)(1);
      pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      iVar7 = *(int *)(param_1 + 0x38);
    }
    piVar2 = (int *)(param_1 + 0x44);
    if (*piVar2 != 0) {
      (*pcVar4)();
      (*extraout_w11)();
      uVar6 = (*pcVar4)();
      (*extraout_w11_00)(uVar6);
      (*(code *)PTR_FUN_100a8044)(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = (int *)(param_1 + 0xc);
    uVar8 = FUN_10009878();
    if (((uVar8 & 1) == 0) || (*(char *)(param_1 + 0x3d) != '\0')) {
      iVar7 = *piVar2;
      if (*(char *)(iVar7 + 0xe2) == '\0') {
        (*(code *)PTR_FUN_100a8204)(1);
        *(char *)(iVar7 + 0xe2) = '\x01';
      }
      bVar5 = false;
      if ((*(int *)(*piVar2 + 0x94) != 0) &&
         (iVar7 = FUN_10008f48(*(undefined4 *)(param_1 + 0x1c),*(int *)(*piVar2 + 0x94)), iVar7 != 0
         )) {
        bVar5 = *(int *)(iVar7 + 0x24) != 0;
      }
      FUN_10015e10(param_1,0,0);
      FUN_10016290(param_1,*(undefined4 *)(*piVar2 + 0x94));
      uVar6 = (*pcVar4)();
      (*extraout_w11_01)(uVar6);
      if (*(int *)(param_1 + 0x20) != 0) {
        (*(code *)PTR_FUN_100a81c8)(*(undefined4 *)(*piVar2 + 0x94),0x401,0,0);
        iVar7 = *(int *)(param_1 + 0x28);
        while (iVar7 != 0) {
          (*(code *)PTR_FUN_100a80dc)(1);
          iVar7 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x20) = 0;
      }
      FUN_10008a60(*(int *)(param_1 + 0x1c));
      iVar7 = *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(iVar7 + 0xf8) + -1;
      *(int *)(iVar7 + 0xf8) = iVar3;
      if ((iVar3 == 0) && (*(char *)(iVar7 + 0x789) != '\0')) {
        (*(code *)PTR_FUN_100a80cc)(*(undefined4 *)(iVar7 + 0xf4));
        *(undefined4 *)(iVar7 + 0xf4) = 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (!bVar5) {
        (*(code *)PTR_FUN_100a8044)(DAT_100aaa5c);
      }
    }
    else {
      *pcVar1 = '\x01';
    }
    uVar9 = 1;
  }
  return uVar9;
}

