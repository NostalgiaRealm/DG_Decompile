/*
 * FUN_100e33b0 at 100e33b0
 * undefined FUN_100e33b0(void)
 * Address ranges: 100e33b0-100e369b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e33b0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar6 = true;
    iVar11 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar11 == 0) {
      FUN_100071d0(0);
    }
  }
  iVar11 = -0x7789f794;
  if ((0x12 < param_2) || ((0x7ff70U >> (ulonglong)(param_2 & 0x1f) & 1) == 0)) goto LAB_100e3658;
  if (4 < param_2 - 8) {
    iVar11 = -0x7789f796;
    goto LAB_100e3658;
  }
  iVar11 = 0;
  if (param_3 == 0) goto LAB_100e3658;
  uVar9 = *(undefined4 *)(param_1 + -0x58c8);
  iVar11 = -0x7ff8fff2;
  puVar8 = (undefined4 *)FUN_101321c0(0x2c);
  if (puVar8 == (undefined4 *)0x0) goto LAB_100e3658;
  *(undefined8 *)(puVar8 + 1) = 0;
  puVar8[3] = puVar8;
  *puVar8 = &PTR_FUN_1015fb5c;
  puVar12 = puVar8 + 5;
  puVar8[4] = param_1 + -0x66b4;
  puVar8[5] = param_2;
  puVar8[6] = uVar9;
  *(undefined8 *)(puVar8 + 7) = 0;
  *(undefined2 *)(puVar8 + 10) = 1;
  puVar8[9] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar10 = (*extraout_w11)(uVar9,*puVar12);
  puVar8[7] = iVar10;
  if (iVar10 != 0) {
    piVar1 = (int *)(param_1 + 0xe8);
    puVar2 = (uint *)(param_1 + 0xf0);
    puVar3 = (uint *)(param_1 + 0xec);
    uVar4 = *puVar2;
    if (*puVar3 == uVar4) {
      uVar5 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar5 = 0x10;
      }
      iVar10 = uVar5 * 4;
      if (uVar5 >> 0x1e != 0) {
        iVar10 = -1;
      }
      iVar10 = FUN_101322b0(iVar10);
      if (iVar10 != 0) {
        FUN_101325a0(iVar10,*piVar1,((ulonglong)*puVar2 & 0x3fffffff) << 2);
        FUN_101322d0(*piVar1);
        *piVar1 = iVar10;
        *puVar2 = uVar5;
        goto LAB_100e35c8;
      }
    }
    else {
LAB_100e35c8:
      *(undefined4 **)(*piVar1 + *puVar3 * 4) = puVar8;
      *puVar3 = *puVar3 + 1;
      iVar11 = FUN_100e7190(puVar8,&DAT_1015e520,param_3);
      if (-1 < iVar11) goto LAB_100e3658;
      FUN_100d32f0(param_1 + -0x66b4,puVar8);
    }
    uVar9 = (*pcVar7)();
    (*extraout_w11_00)(uVar9);
    puVar8[7] = 0;
  }
  *puVar8 = &PTR_FUN_1015fb5c;
  FUN_10132260(puVar8,0x2c);
LAB_100e3658:
  if (bVar6) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar11;
}

