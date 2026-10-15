/*
 * FUN_10008178 at 10008178
 * undefined FUN_10008178(void)
 * Address ranges: 10008178-100084d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008178(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  
  iVar5 = FUN_1001beb0();
  *(undefined1 *)(iVar5 + 0x3d) = 1;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    *(char *)(iVar5 + 0x3c) = '\0';
    iVar7 = *(int *)(iVar5 + 0x38);
    while (iVar7 != 0) {
      (*(code *)PTR_FUN_1009d0dc)(1);
      iVar7 = *(int *)(iVar5 + 0x38);
    }
    piVar1 = (int *)(iVar5 + 0x44);
    if (*piVar1 != 0) {
      (*pcVar3)();
      (*extraout_w11)();
      uVar6 = (*pcVar3)();
      (*extraout_w11_00)(uVar6);
      (*(code *)PTR_FUN_1009d044)(*piVar1);
      *piVar1 = 0;
    }
    piVar1 = (int *)(iVar5 + 0xc);
    iVar7 = *piVar1;
    if (*(char *)(iVar7 + 0xde) == '\0') {
      (*(code *)PTR_FUN_1009d200)(1);
      *(char *)(iVar7 + 0xde) = '\x01';
    }
    bVar4 = false;
    if ((*(int *)(*piVar1 + 0x94) != 0) &&
       (iVar7 = FUN_10007848(*(undefined4 *)(iVar5 + 0x1c),*(int *)(*piVar1 + 0x94)), iVar7 != 0)) {
      bVar4 = *(int *)(iVar7 + 0x24) != 0;
    }
    FUN_10026bb0(iVar5,0,0);
    FUN_10027030(iVar5,*(undefined4 *)(*piVar1 + 0x94));
    uVar6 = (*pcVar3)();
    (*extraout_w11_01)(uVar6);
    if (*(int *)(iVar5 + 0x20) != 0) {
      (*(code *)PTR_FUN_1009d1c4)(*(undefined4 *)(*piVar1 + 0x94),0x401,0,0);
      iVar7 = *(int *)(iVar5 + 0x28);
      while (iVar7 != 0) {
        (*(code *)PTR_FUN_1009d0dc)(1);
        iVar7 = *(int *)(iVar5 + 0x28);
      }
      *(int *)(iVar5 + 0x20) = 0;
    }
    FUN_10007360(*(int *)(iVar5 + 0x1c));
    iVar7 = *(int *)(iVar5 + 0x1c);
    iVar2 = *(int *)(iVar7 + 0xf8) + -1;
    *(int *)(iVar7 + 0xf8) = iVar2;
    if ((iVar2 == 0) && (*(char *)(iVar7 + 0x789) != '\0')) {
      (*(code *)PTR_FUN_1009d0cc)(*(undefined4 *)(iVar7 + 0xf4));
      *(undefined4 *)(iVar7 + 0xf4) = 0;
    }
    *(undefined4 *)(iVar5 + 0x30) = 0;
    if (!bVar4) {
      (*(code *)PTR_FUN_1009d044)(DAT_1009f7ac);
    }
  }
  piVar1 = (int *)(iVar5 + 0xc);
  if (*piVar1 != 0) {
    uVar6 = (*pcVar3)();
    (*extraout_w11_02)(uVar6);
    if (*(int *)(*piVar1 + 0x29c) != 0) {
      FUN_1007a470(*(int *)(*piVar1 + 0x29c),1);
    }
    uVar6 = (*pcVar3)();
    (*extraout_w11_03)(uVar6);
    *piVar1 = 0;
  }
  piVar1 = (int *)(iVar5 + 0x18);
  if (*piVar1 != 0) {
    uVar6 = (*pcVar3)();
    (*extraout_w11_04)(uVar6);
    if (*piVar1 != 0) {
      uVar6 = (*pcVar3)();
      (*extraout_w11_05)(uVar6,1);
    }
    *piVar1 = 0;
  }
  FUN_1007a470(*(undefined4 *)(iVar5 + 0x5c),0xc4);
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  FUN_10006a00(*(undefined4 *)(iVar5 + 0x1c));
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined1 *)(iVar5 + 0x3e) = 0;
  *(undefined1 *)(iVar5 + 0x3d) = 0;
  return;
}

