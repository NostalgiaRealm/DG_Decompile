/*
 * FUN_1004f028 at 1004f028
 * undefined FUN_1004f028(void)
 * Address ranges: 1004f028-1004f193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004f028(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar9 = *puVar1;
  if (*puVar2 == uVar9) {
    uVar5 = uVar9 << 1;
    if (uVar9 == 0) {
      uVar5 = 0x10;
    }
    uVar9 = uVar5 * 0x10;
    if (uVar5 >> 0x1c != 0) {
      uVar9 = 0xffffffff;
    }
    iVar11 = uVar9 + 4;
    if (0xfffffffb < uVar9) {
      iVar11 = -1;
    }
    puVar7 = (uint *)FUN_10083400(iVar11);
    if (puVar7 != (uint *)0x0) {
      *puVar7 = uVar5;
      puVar3 = puVar7 + 1;
      if (uVar5 != 0) {
        puVar7 = puVar7 + 2;
        uVar9 = uVar5;
        do {
          puVar7[0] = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 4;
        } while (uVar9 != 0);
      }
      if (puVar3 != (uint *)0x0) {
        iVar11 = *param_1;
        uVar4 = *puVar1;
        uVar9 = 0;
        if (uVar4 != 0) {
          do {
            FUN_1004f228(puVar3 + uVar9 * 4,iVar11 + uVar9 * 0x10);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar4);
        }
        iVar11 = *param_1;
        if (iVar11 != 0) {
          piVar6 = (int *)(iVar11 + -4);
          iVar10 = *piVar6;
          if (iVar10 != 0) {
            iVar11 = iVar11 + iVar10 * 0x10 + 4;
            do {
              iVar11 = iVar11 + -0x10;
              iVar10 = iVar10 + -1;
              FUN_1004f1a0(iVar11);
            } while (iVar10 != 0);
          }
          FUN_10083430(piVar6,*piVar6 * 0x10 + 4);
        }
        *param_1 = (int)puVar3;
        *puVar1 = uVar5;
        goto LAB_1004f150;
      }
    }
    uVar8 = 0;
  }
  else {
LAB_1004f150:
    uVar9 = *puVar2;
    *puVar2 = uVar9 + 1;
    FUN_1004f228(*param_1 + uVar9 * 0x10,param_2);
    uVar8 = 1;
  }
  return uVar8;
}

