/*
 * FUN_100e8e50 at 100e8e50
 * undefined FUN_100e8e50(void)
 * Address ranges: 100e8e50-100e91bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e8e50(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  code *extraout_w11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  char *pcVar15;
  char *local_50;
  int iStack_4c;
  
  uVar13 = 0x8876086c;
  if (param_2 == (int *)0x0) {
    return 0x8876086c;
  }
  if (*(int *)(param_1 + -0x28) == 3) {
    return 0x8876086c;
  }
  if (((*(int *)(param_1 + -0x28) == 0) && ((*(uint *)(param_1 + -0x2c) >> 9 & 1) == 0)) &&
     ((*(uint *)(*(int *)(param_1 + -0x58) + 0xb8) >> 10 & 1) == 0)) {
    return 0x8876086c;
  }
  piVar3 = (int *)(param_1 + -0x58);
  iVar2 = *piVar3;
  if ((*(uint *)(iVar2 + 0xb8) >> 0xb & 1) != 0) {
    return 0x8876086c;
  }
  uVar6 = *(uint *)(param_1 + -0x34);
  if ((uVar6 < 0x21) && ((0x102200000U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((2 < uVar6 - 0x16 && uVar6 != 0x14) && (!bVar4)) {
    return 0x8876086c;
  }
  FUN_10040cf0(iVar2);
  local_50 = *(char **)(iVar2 + 0x90);
  uVar6 = FUN_100402b0(iVar2 + 0x4c,*(int *)(iVar2 + 0xb4),
                       *(int *)(iVar2 + 0x10) * 0x40 + 0xfffU & 0xfffff000);
  *(undefined1 *)(iVar2 + 0xaf) = 0;
  if ((*(int *)(iVar2 + 0xb4) == 0) && ((*(uint *)(iVar2 + 0x34) >> 5 & 1) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((local_50 == (char *)0x0) && ((uVar6 & 1) != 0)) && (bVar4)) {
    puVar9 = (undefined4 *)(iVar2 + 0x70);
    puVar10 = (undefined4 *)(iVar2 + 0x6c);
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar5 = (*extraout_w11)(uVar7,*puVar10,*puVar9);
    if (cVar5 == '\0') {
      bVar11 = 1;
      goto LAB_100e8fdc;
    }
  }
  bVar11 = 0;
LAB_100e8fdc:
  *(byte *)(iVar2 + 0xae) = *(byte *)(iVar2 + 0xae) | bVar11;
  if ((uVar6 & 1) != 0) {
    iVar2 = *piVar3;
    iVar8 = (*(code *)PTR_FUN_1016c004)(0);
    piVar1 = (int *)(iVar2 + 0x94);
    *piVar1 = iVar8;
    if (iVar8 != 0) {
      uVar7 = (*(code *)PTR_FUN_1016c034)(iVar8,*(undefined4 *)(iVar2 + 0x90));
      *(undefined4 *)(iVar2 + 0x98) = uVar7;
      if (((*(int *)(param_1 + -0x14) == 0) || ((*(uint *)(param_1 + -0x2c) >> 10 & 1) == 0)) &&
         (iVar8 = FUN_1001e800(param_1 + -0x5c,&local_50,0,0,1), -1 < iVar8)) {
        iVar2 = *piVar3;
        *(int *)(iVar2 + 0x9c) = iStack_4c;
        *(char **)(iVar2 + 0xa0) = local_50;
        *param_2 = *piVar1;
        if (iStack_4c != 0) {
          iVar2 = *piVar3;
          pcVar15 = (char *)(iVar2 + 0xae);
          if ((*pcVar15 == '\0') && (*(char *)(iVar2 + 0xac) == '\0')) {
            iVar8 = *(int *)(iVar2 + 0x9c);
            iVar12 = *(int *)(iVar2 + 0xa4);
            uVar6 = *(uint *)(iVar2 + 0x68);
            if (*(int *)(iVar2 + 0xa8) == *(int *)(iVar2 + 0xa0)) {
              FUN_101325a0(iVar12,iVar8,
                           (*(uint *)(iVar2 + 0x80) >> 3) * *(int *)(iVar2 + 100) * uVar6);
            }
            else {
              uVar14 = 0;
              if (uVar6 != 0) {
                local_50 = pcVar15;
                do {
                  FUN_101325a0(iVar12,iVar8,
                               (uint)(*(int *)(iVar2 + 0x80) * *(int *)(iVar2 + 100)) >> 3);
                  uVar14 = uVar14 + 1;
                  iVar8 = *(int *)(iVar2 + 0xa0) + iVar8;
                  iVar12 = *(int *)(iVar2 + 0xa8) + iVar12;
                  pcVar15 = local_50;
                } while (uVar14 < *(uint *)(iVar2 + 0x68));
              }
            }
          }
          *pcVar15 = '\x01';
        }
        uVar13 = 0;
      }
      else {
        (*(code *)PTR_FUN_1016c034)(*piVar1,*(undefined4 *)(iVar2 + 0x98));
        (*(code *)PTR_FUN_1016c014)(*piVar1);
        *piVar1 = 0;
      }
    }
  }
  return uVar13;
}

