/*
 * FUN_10009ba0 at 10009ba0
 * undefined FUN_10009ba0(void)
 * Address ranges: 10009ba0-10009e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10009ba0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  int extraout_w13;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  piVar1 = (int *)(param_1 + 0x18);
  if (*piVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x1c);
    uVar4 = *(uint *)(*piVar2 + 0x764);
    if ((uVar4 < 7) && ((0x69U >> (ulonglong)(uVar4 & 0x1f) & 1) != 0)) {
      *(undefined1 *)(*piVar2 + 0x78a) = 1;
    }
    uVar10 = DAT_100a288c;
    piVar3 = (int *)(*piVar2 + 0x764);
    if ((*piVar3 == 0) || (*piVar3 - 5U < 2)) {
      puVar9 = (undefined4 *)FUN_10059a00(param_1,piVar3);
    }
    else {
      auVar12 = FUN_10059ab8(piVar3);
      switch(*(undefined4 *)(extraout_w13 + 0xd2)) {
      default:
        uVar11 = 0;
        break;
      case 2:
        uVar11 = 1;
        break;
      case 3:
        uVar11 = 2;
        break;
      case 4:
        uVar11 = 3;
      }
      iVar8 = FUN_1007dc70(0x3bc);
      if (iVar8 == 0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        FUN_10074b58(iVar8,uVar10,uVar11);
        *extraout_w11 = &PTR_FUN_10098e6c;
        extraout_w11[0xea] = 0;
        *(undefined1 (*) [16])(extraout_w11 + 0xeb) = auVar12;
        *(undefined8 *)(extraout_w11 + 0xda) = 0xffffffffffffffff;
        *(undefined8 *)(extraout_w11 + 0xd8) = 0xffffffffffffffff;
        *(undefined8 *)(extraout_w11 + 0xde) = 0xffffffffffffffff;
        *(undefined8 *)(extraout_w11 + 0xdc) = 0xffffffffffffffff;
        *(undefined8 *)(extraout_w11 + 0xe2) = 0xffffffffffffffff;
        *(undefined8 *)(extraout_w11 + 0xe0) = 0xffffffffffffffff;
        *(undefined8 *)(extraout_w11 + 0xe6) = 0xffffffffffffffff;
        *(undefined8 *)(extraout_w11 + 0xe4) = 0xffffffffffffffff;
        *(bool *)(extraout_w11 + 0xe9) = *(int *)*(undefined1 (*) [16])(extraout_w11 + 0xeb) == 5;
        puVar9 = extraout_w11;
      }
    }
    *piVar1 = (int)puVar9;
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (puVar9 != (undefined4 *)0x0) {
      iVar8 = *piVar2;
      iVar5 = *piVar1;
      uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      auVar12 = (*extraout_w11_00)(uVar10,&DAT_100984a0);
      (*pcVar6)(auVar12._0_8_,auVar12._8_8_,auVar12._0_8_ & 0xffffffff);
      cVar7 = (*extraout_w11_01)(iVar5,iVar8 + 0x764);
      if (cVar7 != '\0') {
        uVar10 = (*pcVar6)();
        cVar7 = (*extraout_w11_02)(uVar10);
        if (cVar7 != '\0') {
          uVar10 = (*pcVar6)();
          iVar8 = (*extraout_w11_03)(uVar10);
          if (iVar8 != 0) {
            uVar10 = (*pcVar6)();
            uVar10 = (*extraout_w11_04)(uVar10,0);
            *(undefined4 *)(param_1 + 0x10) = uVar10;
            iVar8 = 0;
            if (*(int *)(*piVar2 + 0x76c) != 0) {
              iVar8 = *(int *)(*piVar2 + 0x76c) + -1;
            }
            *(int *)(param_1 + 0x14) = iVar8;
            goto LAB_10009e1c;
          }
        }
        if (*piVar1 != 0) {
          uVar10 = (*pcVar6)();
          (*extraout_w11_05)(uVar10,1);
        }
        *piVar1 = 0;
      }
    }
    uVar11 = 0;
  }
  else {
LAB_10009e1c:
    uVar11 = 1;
  }
  return uVar11;
}

