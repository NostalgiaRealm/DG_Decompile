/*
 * FUN_1003a038 at 1003a038
 * undefined FUN_1003a038(void)
 * Address ranges: 1003a038-1003a38f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003a038(void)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 extraout_x1;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int extraout_w13;
  int iVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  if (DAT_10170acc != (undefined4 *)0x0) {
    return 1;
  }
  iVar9 = 0;
  DAT_10170ad0 = FUN_1012e248();
  if (DAT_10170ad0 == 0) {
    return 0;
  }
  if ((*(uint *)(DAT_10170ad0 + 0x764) < 7) &&
     ((0x69U >> (ulonglong)(*(uint *)(DAT_10170ad0 + 0x764) & 0x1f) & 1) != 0)) {
    *(undefined1 *)(DAT_10170ad0 + 0x78a) = 1;
  }
  uVar5 = DAT_10175b50;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar4 = *(int *)(DAT_10170ad0 + 0x764);
  if (iVar4 - 5U < 2) {
    bVar1 = false;
    if ((iVar4 != 6) && (bVar1 = false, iVar4 != 5)) goto LAB_1003a0e4;
LAB_1003a0e8:
    switch(*(undefined4 *)(DAT_10170ad0 + 0x836)) {
    default:
      uVar10 = 0;
      break;
    case 2:
      uVar10 = 1;
      break;
    case 3:
      uVar10 = 2;
      break;
    case 4:
      uVar10 = 3;
    }
    iVar4 = FUN_101321c0(0x3b0);
    if (iVar4 != 0) {
      FUN_101077f8(iVar4,uVar5,uVar10);
      *extraout_w11 = &PTR_FUN_1015fef0;
      DAT_10170acc = extraout_w11;
      *(undefined8 *)(extraout_w11 + 0xea) = 0xc00000000000;
      *(undefined1 *)(extraout_w11 + 0xe9) = 0;
      iVar4 = DAT_10170ad0 + 0x764;
      uVar5 = (*pcVar2)();
      auVar11 = (*extraout_w11_00)(uVar5,&DAT_1015e3f0);
      (*pcVar2)(auVar11._0_8_,auVar11._8_8_,auVar11._0_8_ & 0xffffffff);
      cVar3 = (*extraout_w11_01)(DAT_10170acc,iVar4);
      if (cVar3 == '\0') {
        if (DAT_10170acc != (undefined4 *)0x0) {
          uVar5 = (*pcVar2)();
          (*extraout_w11_02)(uVar5,1);
        }
        DAT_10170acc = (undefined4 *)0x0;
      }
      else {
        iVar9 = 1;
      }
      goto LAB_1003a218;
    }
    DAT_10170acc = (undefined4 *)0x0;
  }
  else {
    bVar1 = true;
LAB_1003a0e4:
    if (iVar4 == 0) goto LAB_1003a0e8;
LAB_1003a218:
    if (DAT_10170acc != (undefined4 *)0x0) goto LAB_1003a334;
  }
  uVar5 = DAT_10175b50;
  if (bVar1) {
    auVar11 = FUN_101063e0(DAT_10170ad0 + 0x764);
    switch(*(undefined4 *)(extraout_w13 + 0xd2)) {
    default:
      uVar10 = 0;
      break;
    case 2:
      uVar10 = 1;
      break;
    case 3:
      uVar10 = 2;
      break;
    case 4:
      uVar10 = 3;
    }
    uVar6 = FUN_101321c0(0x3bc);
    uVar8 = uVar6 & 0xffffffff;
    if ((int)uVar6 == 0) {
      DAT_10170acc = (undefined4 *)0x0;
    }
    else {
      uVar10 = FUN_101077f8(uVar6 & 0xffffffff,uVar5,uVar10);
      puVar7 = (undefined4 *)uVar8;
      DAT_10170acc = puVar7;
      *puVar7 = &PTR_FUN_1015fe98;
      puVar7[0xea] = 0;
      *(undefined1 (*) [16])(puVar7 + 0xeb) = auVar11;
      *(undefined8 *)(puVar7 + 0xda) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0xd8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0xde) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0xdc) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0xe2) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0xe0) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0xe6) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0xe4) = 0xffffffffffffffff;
      *(bool *)(puVar7 + 0xe9) = *(int *)*(undefined1 (*) [16])(puVar7 + 0xeb) == 5;
      (*pcVar2)(uVar10,DAT_10170ad0 + 0x764);
      cVar3 = (*extraout_w11_03)(uVar8 & 0xffffffff,extraout_x1,0);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
LAB_1003a334:
  if (iVar9 == 0) {
    if (DAT_10170acc != (undefined4 *)0x0) {
      uVar5 = (*pcVar2)();
      (*extraout_w11_04)(uVar5,1);
    }
    DAT_10170acc = (undefined4 *)0x0;
    FUN_1012ec50(DAT_10170ad0);
  }
  return iVar9;
}

