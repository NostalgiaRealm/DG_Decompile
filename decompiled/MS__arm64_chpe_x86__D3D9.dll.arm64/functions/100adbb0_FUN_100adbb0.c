/*
 * FUN_100adbb0 at 100adbb0
 * undefined FUN_100adbb0(void)
 * Address ranges: 100adbb0-100addb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100adbb0(int param_1,ulonglong param_2,undefined4 param_3,int param_4,int param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  code *extraout_w11;
  int extraout_w11_00;
  uint extraout_w12;
  undefined8 uVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  uint local_90;
  uint *local_8c;
  int local_88;
  undefined4 local_84;
  int iStack_80;
  int *local_7c;
  undefined1 auStack_78 [56];
  
  piVar14 = (int *)(param_1 + -0x48);
  iVar13 = param_1 + -0x88;
  uVar15 = param_2 & 0xffffffff;
  uVar12 = 0;
  local_88 = param_4;
  FUN_1010f6c0(*piVar14,param_2,iVar13);
  local_90 = 0;
  local_8c = (uint *)0x0;
  iVar7 = FUN_100ad018(iVar13,uVar15,param_3,1,1,&local_90,&local_8c);
  if (iVar7 == 0) {
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar8,auStack_78);
    uVar10 = *(uint *)(&DAT_10162c20 + *(int *)(param_1 + -0x6c) * 4);
    if (uVar10 == 0x18) {
      uVar10 = 0x20;
    }
    uVar1 = uVar10 >> 3;
    if (uVar10 < 8) {
      uVar1 = *(uint *)(&DAT_10162730 + *(int *)(param_1 + -0x6c) * 4);
    }
    uVar9 = FUN_100ceef0(iVar13,*(undefined4 *)(param_1 + -0x74),uVar15);
    iVar7 = local_88;
    puVar5 = local_8c;
    uVar4 = local_90;
    uVar10 = uVar9;
    if (extraout_w12 < 8) {
      bVar3 = *(byte *)(extraout_w11_00 + 0x101627d8);
      if (bVar3 == 0) {
                    /* WARNING: Does not return */
        uVar12 = SoftwareBreakpoint(0xf004,0x100adccc);
        (*(code *)uVar12)();
      }
      uVar10 = 0;
      if (bVar3 != 0) {
        uVar10 = uVar9 / bVar3;
      }
    }
    uVar9 = param_6[1];
    uVar2 = param_6[3];
    if (uVar9 <= uVar2) {
      iVar11 = *param_6;
      local_8c = (uint *)(param_6 + 2);
      local_90 = (uint)param_2;
      bVar6 = uVar9 == uVar2;
      local_84 = param_3;
      iStack_80 = iVar13;
      local_7c = piVar14;
      do {
        if (bVar6) {
          uVar10 = *local_8c;
        }
        FUN_101325a0(iVar7 + uVar9 * param_5 + uVar1 * iVar11,
                     uVar4 + uVar9 * (int)puVar5 + uVar1 * iVar11,(uVar10 - iVar11) * uVar1);
        uVar2 = param_6[3];
        uVar9 = uVar9 + 1;
        iVar11 = 0;
        bVar6 = uVar9 == uVar2;
      } while (uVar9 <= uVar2);
      uVar15 = (ulonglong)local_90;
      iVar13 = iStack_80;
      param_3 = local_84;
      piVar14 = local_7c;
    }
    FUN_100ad138(iVar13,uVar15,param_3);
    uVar12 = 1;
  }
  (*(code *)PTR_FUN_1016c0c0)(*piVar14 + 0x4a0);
  return uVar12;
}

