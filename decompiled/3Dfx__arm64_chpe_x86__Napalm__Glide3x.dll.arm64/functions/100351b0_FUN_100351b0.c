/*
 * FUN_100351b0 at 100351b0
 * undefined FUN_100351b0(void)
 * Address ranges: 100351b0-100352c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

int * FUN_100351b0(int *param_1,code *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  code *pcVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar8;
  uint uVar9;
  int *unaff_w23;
  int *unaff_w24;
  int unaff_w25;
  int unaff_w27;
  undefined1 auVar10 [16];
  
  piVar4 = (int *)0x0;
  switch(param_2) {
  case (code *)0x17:
  case (code *)0x1e:
  case (code *)0x21:
    piVar2 = (int *)FUN_100148c8(param_1,1);
    if (param_2 < (code *)0x22) {
switchD_10035238_caseD_1003522c:
      pcVar5 = (code *)(int)(char)param_2[0x100352c5];
switchD_10035238_caseD_10035234:
      pcVar5 = (code *)(&BYTE_100352dc + (int)pcVar5 * 4);
      pcVar7 = (code *)&BYTE_100352dc;
      switch(pcVar5) {
      case (code *)0x10035200:
        goto switchD_10035238_caseD_10035200;
      case (code *)0x1003522c:
        goto switchD_10035238_caseD_1003522c;
      case (code *)0x10035234:
        goto switchD_10035238_caseD_10035234;
      case (code *)0x1003523c:
        piVar2 = param_1 + 0xb50;
        iVar6 = 0x2d70;
        break;
      case (code *)0x1003524c:
        piVar2 = param_1 + 0xb51;
        iVar6 = 0x2d74;
        break;
      case (code *)0x1003525c:
        piVar2 = param_1 + 0xb52;
        iVar6 = 0x2d78;
        break;
      case (code *)0x10035274:
        goto switchD_10035238_caseD_10035274;
      case (code *)0x10035294:
        goto switchD_10035238_caseD_10035294;
      case (code *)0x100352c8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case caseD_100352e8:
        goto code_r0x100352e8;
      case (code *)0x10035458:
        goto switchD_10035238_caseD_10035458;
      }
      *(int *)((int)param_1 + iVar6) = *piVar2;
    }
switchD_10035238_caseD_10035274:
    FUN_100147e0(param_1);
    break;
  case (code *)0x1d:
    pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
switchD_10035238_caseD_10035200:
    (*pcVar7)();
    (*extraout_w11)(param_1);
    break;
  case (code *)0x29:
    piVar2 = param_1 + 0x1024;
    piVar4 = piVar2;
switchD_10035238_caseD_10035294:
    FUN_10035760(piVar2,0);
    FUN_1000fa58(piVar4);
    *(undefined1 *)(param_1 + 0xd94) = 1;
    piVar4 = (int *)0x1;
  }
  return piVar4;
code_r0x100352e8:
  FUN_100356a8(piVar2);
  FUN_10077098(piVar2[0x87],piVar2 + 0x85);
  param_2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar4 = piVar2 + 0x8e;
  uVar9 = 0;
  if (piVar2[0x8f] != 0) {
    do {
      iVar6 = *piVar4;
      if (*(int *)(*(int *)(iVar6 + uVar9 * 4) + 4) != 0) {
        uVar8 = 0;
        do {
          if (*(int *)(**(int **)(iVar6 + uVar9 * 4) + uVar8 * 4) != 0) {
            uVar3 = (*param_2)();
            (*extraout_w11_00)(uVar3,1);
          }
          iVar6 = *piVar4;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(*(int *)(iVar6 + uVar9 * 4) + 4));
      }
      puVar1 = *(undefined4 **)(iVar6 + uVar9 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_10083420(*puVar1);
        FUN_100833b0(puVar1,0xc);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)piVar2[0x8f]);
  }
  FUN_10083420(*piVar4);
  piVar4[0] = 0;
  piVar4[1] = 0;
  piVar2[0x90] = 0;
  piVar2[0x89] = 0;
  piVar2[0x8c] = 0;
  unaff_w24 = piVar2 + 0x7a;
  param_1 = piVar2 + 0x83;
  unaff_w27 = *param_1;
  unaff_w25 = *(int *)(*unaff_w24 + 0x3684);
  piVar4 = *(int **)(*unaff_w24 + 0x3680);
  pcVar5 = (code *)PTR_FUN_100a803c;
  unaff_w23 = piVar2;
switchD_10035238_caseD_10035458:
  (*pcVar5)(piVar4 + 0x128);
  if (unaff_w27 == piVar4[unaff_w25 * 0x544 + 0x1f1]) {
    piVar4[unaff_w25 * 0x544 + 0x1f1] = 0;
  }
  (*param_2)();
  (*extraout_w11_01)(unaff_w27);
  (*(code *)PTR_FUN_100a8090)(piVar4 + 0x128);
  auVar10 = FUN_1006fe88(*(undefined4 *)(*unaff_w24 + 0x3680),*(undefined4 *)(*unaff_w24 + 0x3684),
                         unaff_w23[0x82]);
  piVar4 = (int *)FUN_1006fac8(auVar10._0_8_,auVar10._8_8_,2,unaff_w23 + 0x7e,unaff_w23 + 0x80);
  unaff_w23[0x82] = 0;
  unaff_w23[0x77] = 0;
  unaff_w23[0x6e] = 0;
  unaff_w23[0x6f] = 0;
  unaff_w23[0x70] = 0;
  unaff_w23[0x71] = 0;
  unaff_w23[0x72] = 0;
  unaff_w23[0x74] = 0;
  unaff_w23[0x75] = 0;
  *(undefined1 *)(unaff_w23 + 0x73) = 0;
  *param_1 = 0;
  return piVar4;
}

