/*
 * FUN_10066d90 at 10066d90
 * undefined FUN_10066d90(void)
 * Address ranges: 10066d90-1006700b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10066d90(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_78 = *(undefined4 *)(param_1 + 0x1c);
  uStack_74 = *(undefined4 *)(param_1 + 0x24);
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_70 = *(undefined4 *)(param_1 + 0x20);
  uStack_6c = 0;
  uVar8 = FUN_100668f8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_78,
                       &DAT_100a1c28,(int)&uStack_58 + 4);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((uVar8 & 1) == 0) {
LAB_10066ff0:
    uVar9 = 0;
  }
  else {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    puVar6 = (undefined8 *)(*extraout_w11)(uVar5,auStack_80);
    local_60 = *puVar6;
    uVar5 = (*pcVar4)();
    puVar7 = (undefined4 *)(*extraout_w11_00)(uVar5,auStack_80);
    piVar1 = (int *)(param_1 + 0xc);
    puVar2 = (uint *)(param_1 + 0x10);
    uStack_58 = CONCAT44(uStack_58._4_4_,*puVar7);
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar3 = (uint *)(param_1 + 0x14);
      uVar13 = *puVar3;
      if (*puVar2 == uVar13) {
        uVar10 = uVar13 << 1;
        if (uVar13 == 0) {
          uVar10 = 0x10;
        }
        iVar12 = uVar10 * 0x20;
        if (uVar10 >> 0x1b != 0) {
          iVar12 = -1;
        }
        iVar12 = FUN_10083400(iVar12);
        if (iVar12 == 0) goto LAB_10066fc8;
        FUN_10083b40(iVar12,*piVar1,((ulonglong)*puVar3 & 0x7ffffff) << 5);
        FUN_10083420(*piVar1);
        *piVar1 = iVar12;
        *puVar3 = uVar10;
      }
      uVar13 = *puVar2;
    }
    else {
      puVar3 = (uint *)(param_1 + 0x14);
      iVar12 = *(int *)(param_1 + 0x18);
      uVar13 = *puVar3;
      if (*puVar2 == uVar13) {
        uVar10 = uVar13 << 1;
        if (uVar13 == 0) {
          uVar10 = 0x10;
        }
        iVar11 = uVar10 * 0x20;
        if (uVar10 >> 0x1b != 0) {
          iVar11 = -1;
        }
        iVar11 = FUN_10083400(iVar11);
        if (iVar11 == 0) {
LAB_10066fc8:
          uVar5 = (*pcVar4)();
          (*extraout_w11_01)(uVar5);
          goto LAB_10066ff0;
        }
        FUN_10083b40(iVar11,*piVar1,((ulonglong)*puVar3 & 0x7ffffff) << 5);
        FUN_10083420(*piVar1);
        *piVar1 = iVar11;
        *puVar3 = uVar10;
      }
      uVar13 = iVar12 + 1;
      for (uVar10 = *puVar2; uVar13 < uVar10; uVar10 = uVar10 - 1) {
        puVar6 = (undefined8 *)(*piVar1 + uVar10 * 0x20);
        puVar6[1] = puVar6[-3];
        *puVar6 = puVar6[-4];
        puVar6[3] = puVar6[-1];
        puVar6[2] = puVar6[-2];
      }
    }
    uVar9 = 1;
    puVar6 = (undefined8 *)(*piVar1 + uVar13 * 0x20);
    puVar6[1] = uStack_58;
    *puVar6 = local_60;
    puVar6[3] = uStack_48;
    puVar6[2] = local_50;
    *puVar2 = *puVar2 + 1;
  }
  return uVar9;
}

