/*
 * FUN_1001be00 at 1001be00
 * undefined FUN_1001be00(void)
 * Address ranges: 1001be00-1001c007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001be00(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 auVar10 [16];
  
  piVar1 = (int *)(param_1 + 0x18);
  if (*piVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x1c);
    uVar3 = *(uint *)(*piVar2 + 0x764);
    if ((uVar3 < 7) && ((0x69U >> (ulonglong)(uVar3 & 0x1f) & 1) != 0)) {
      *(undefined1 *)(*piVar2 + 0x78a) = 1;
    }
    iVar7 = *(int *)(*piVar2 + 0x764);
    if ((iVar7 == 0) || (iVar7 - 5U < 2)) {
      iVar7 = FUN_10055c70(param_1,(int *)(*piVar2 + 0x764));
    }
    else {
      iVar7 = FUN_100561c0();
    }
    *piVar1 = iVar7;
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (iVar7 != 0) {
      iVar7 = *piVar2;
      iVar4 = *piVar1;
      uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      auVar10 = (*extraout_w11)(uVar8,&DAT_10094620);
      (*pcVar5)(auVar10._0_8_,auVar10._8_8_,auVar10._0_8_ & 0xffffffff);
      cVar6 = (*extraout_w11_00)(iVar4,iVar7 + 0x764);
      if (cVar6 != '\0') {
        uVar8 = (*pcVar5)();
        cVar6 = (*extraout_w11_01)(uVar8);
        if (cVar6 != '\0') {
          uVar8 = (*pcVar5)();
          iVar7 = (*extraout_w11_02)(uVar8);
          if (iVar7 != 0) {
            uVar8 = (*pcVar5)();
            uVar8 = (*extraout_w11_03)(uVar8,0);
            *(undefined4 *)(param_1 + 0x10) = uVar8;
            iVar7 = 0;
            if (*(int *)(*piVar2 + 0x76c) != 0) {
              iVar7 = *(int *)(*piVar2 + 0x76c) + -1;
            }
            *(int *)(param_1 + 0x14) = iVar7;
            goto LAB_1001bfb4;
          }
        }
        if (*piVar1 != 0) {
          uVar8 = (*pcVar5)();
          (*extraout_w11_04)(uVar8,1);
        }
        *piVar1 = 0;
      }
    }
    uVar9 = 0;
  }
  else {
LAB_1001bfb4:
    uVar9 = 1;
  }
  return uVar9;
}

