/*
 * FUN_10076828 at 10076828
 * undefined FUN_10076828(void)
 * Address ranges: 10076828-10076acf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10076828(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_78 = *(undefined4 *)(param_1 + 0x1c);
  uStack_74 = *(undefined4 *)(param_1 + 0x24);
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_70 = *(undefined4 *)(param_1 + 0x20);
  uStack_6c = 0;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(uVar5,&local_78,&DAT_1009ea48,(int)&uStack_58 + 4);
  if (iVar6 < 0) {
LAB_10076ab4:
    uVar9 = 0;
  }
  else {
    uVar5 = (*pcVar4)();
    puVar7 = (undefined8 *)(*extraout_w11_00)(uVar5,auStack_80);
    local_60 = *puVar7;
    uVar5 = (*pcVar4)();
    puVar8 = (undefined4 *)(*extraout_w11_01)(uVar5,auStack_80);
    piVar1 = (int *)(param_1 + 0xc);
    puVar2 = (uint *)(param_1 + 0x10);
    uStack_58 = CONCAT44(uStack_58._4_4_,*puVar8);
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar3 = (uint *)(param_1 + 0x14);
      uVar12 = *puVar3;
      if (*puVar2 == uVar12) {
        uVar10 = uVar12 << 1;
        if (uVar12 == 0) {
          uVar10 = 0x10;
        }
        iVar6 = uVar10 * 0x20;
        if (uVar10 >> 0x1b != 0) {
          iVar6 = -1;
        }
        iVar6 = FUN_10081da0(iVar6);
        if (iVar6 == 0) goto LAB_10076a8c;
        FUN_10081ee0(iVar6,*piVar1,((ulonglong)*puVar3 & 0x7ffffff) << 5);
        FUN_10081dc0(*piVar1);
        *piVar1 = iVar6;
        *puVar3 = uVar10;
      }
      uVar12 = *puVar2;
    }
    else {
      puVar3 = (uint *)(param_1 + 0x14);
      iVar6 = *(int *)(param_1 + 0x18);
      uVar12 = *puVar3;
      if (*puVar2 == uVar12) {
        uVar10 = uVar12 << 1;
        if (uVar12 == 0) {
          uVar10 = 0x10;
        }
        iVar11 = uVar10 * 0x20;
        if (uVar10 >> 0x1b != 0) {
          iVar11 = -1;
        }
        iVar11 = FUN_10081da0(iVar11);
        if (iVar11 == 0) {
LAB_10076a8c:
          uVar5 = (*pcVar4)();
          (*extraout_w11_02)(uVar5);
          goto LAB_10076ab4;
        }
        FUN_10081ee0(iVar11,*piVar1,((ulonglong)*puVar3 & 0x7ffffff) << 5);
        FUN_10081dc0(*piVar1);
        *piVar1 = iVar11;
        *puVar3 = uVar10;
      }
      uVar12 = iVar6 + 1;
      for (uVar10 = *puVar2; uVar12 < uVar10; uVar10 = uVar10 - 1) {
        puVar7 = (undefined8 *)(*piVar1 + uVar10 * 0x20);
        puVar7[1] = puVar7[-3];
        *puVar7 = puVar7[-4];
        puVar7[3] = puVar7[-1];
        puVar7[2] = puVar7[-2];
      }
    }
    uVar9 = 1;
    puVar7 = (undefined8 *)(*piVar1 + uVar12 * 0x20);
    puVar7[1] = uStack_58;
    *puVar7 = local_60;
    puVar7[3] = uStack_48;
    puVar7[2] = local_50;
    *puVar2 = *puVar2 + 1;
  }
  return uVar9;
}

