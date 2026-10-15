/*
 * FUN_1005e050 at 1005e050
 * undefined FUN_1005e050(void)
 * Address ranges: 1005e050-1005e297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e050(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  code *extraout_w11;
  
  puVar1 = param_1 + 0x12;
  *param_1 = &PTR_FUN_10095174;
  uVar10 = *puVar1;
  if (uVar10 != 0) {
    piVar2 = param_1 + 0x11;
    piVar13 = piVar2;
    uVar12 = uVar10;
    do {
      uVar6 = uVar12 - 1;
      if (uVar6 < uVar10) {
        piVar13 = param_1 + 0x11;
        piVar11 = (int *)(*piVar13 + uVar6 * 0x10 + 0xc);
      }
      else {
        piVar11 = (int *)&DAT_00000004;
      }
      piVar11 = (int *)*piVar11;
      iVar5 = piVar11[3];
      while (iVar5 != -1) {
        iVar9 = iVar5 * 3;
        piVar3 = (int *)(*piVar11 + iVar5 * 0x18);
        iVar5 = *piVar3;
        piVar13 = piVar2;
        if (iVar5 == -1) break;
        param_1 = (undefined4 *)FUN_1005e298(param_1,iVar5,piVar3[1]);
        iVar5 = *(int *)(*piVar11 + iVar9 * 8 + 0x10);
      }
      FUN_1007a060(*piVar11);
      FUN_10079ff0(piVar11,0x14);
      uVar10 = *puVar1;
      uVar12 = uVar12 + 1;
      if (uVar12 < uVar10) {
        do {
          puVar4 = (undefined8 *)(*piVar13 + uVar12 * 0x10);
          uVar12 = uVar12 + 1;
          puVar4[-1] = puVar4[1];
          puVar4[-2] = *puVar4;
          uVar10 = *puVar1;
        } while (uVar12 < uVar10);
      }
      else {
        piVar13 = param_1 + 0x11;
      }
      uVar10 = uVar10 - 1;
      *puVar1 = uVar10;
      uVar12 = uVar6;
    } while (uVar6 != 0);
  }
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar10 = 0;
  piVar2 = param_1 + 0xd;
  if (param_1[0xe] != 0) {
    do {
      if (*(int *)(*piVar2 + uVar10 * 8) != 0) {
        uVar8 = (*pcVar7)();
        (*extraout_w11)(uVar8);
      }
      FUN_10079ff0(*(undefined4 *)(*piVar2 + uVar10 * 8 + 4),1);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)param_1[0xe]);
  }
  FUN_1007a060(*piVar2);
  piVar2[0] = 0;
  piVar2[1] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  (*(code *)PTR_FUN_1009d034)(param_1 + 7);
  FUN_1007a060(param_1[0x10]);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_1007a060(*piVar2);
  return;
}

