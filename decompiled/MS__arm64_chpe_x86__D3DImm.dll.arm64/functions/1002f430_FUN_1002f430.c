/*
 * FUN_1002f430 at 1002f430
 * undefined FUN_1002f430(void)
 * Address ranges: 1002f430-1002f637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f430(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_5c;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  iVar5 = param_1[3];
  iVar6 = param_1[4];
  iVar7 = param_1[5];
  iVar9 = param_1[6];
  cVar8 = (char)param_1[7];
  FUN_10026090(iVar2,0,0,0);
  iVar1 = iVar2 + iVar3 * 4;
  puVar13 = (undefined4 *)(iVar1 + 0x1fc8);
  iVar11 = iVar1;
  FUN_1001f6a8(iVar2,*puVar13);
  *puVar13 = 0;
  puVar13 = (undefined4 *)(iVar11 + 0x1fec);
  FUN_1001f6a8(iVar2,*puVar13);
  *puVar13 = 0;
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar5 == 0) {
    FUN_10034780(iVar2,iVar3,iVar4,0,0,iVar6,iVar7,(char)iVar9,cVar8);
    *(undefined4 *)(iVar1 + 0x1fa8) = 0;
    return;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar11 = (*extraout_w11)(iVar5);
  if (iVar11 == 1) {
    local_5c = iVar5 + -0x1c;
    iVar11 = 0;
    goto LAB_1002f590;
  }
  local_5c = 0;
  iVar11 = iVar5 + -0xc0;
  if (cVar8 == '\0') {
LAB_1002f580:
    uVar14 = 0;
  }
  else {
    (*pcVar10)();
    iVar12 = (*extraout_w11_00)(iVar5);
    if ((iVar12 != 1) || (uVar14 = 1, *(int *)(iVar5 + -0x9c) != 1)) goto LAB_1002f580;
  }
  *(undefined1 *)(iVar5 + 0x6e) = uVar14;
LAB_1002f590:
  *(int *)(iVar1 + 0x1fa8) = iVar11;
  FUN_10034780(iVar2,iVar3,iVar4,iVar11,local_5c,iVar6,iVar7,(char)iVar9,cVar8);
  *(undefined1 *)(iVar2 + 0x21d3) = 1;
  return;
}

