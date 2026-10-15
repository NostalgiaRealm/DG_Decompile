/*
 * FUN_100fd2d8 at 100fd2d8
 * undefined FUN_100fd2d8(void)
 * Address ranges: 100fd2d8-100fd47f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100fd2d8(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  piVar1 = param_1 + 1;
  *param_1 = *param_2;
  iVar5 = *piVar1;
  if (iVar5 != 0) {
    piVar7 = (int *)(iVar5 + -4);
    iVar6 = *piVar7;
    iVar5 = iVar5 + iVar6 * 0x1c;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_101322d0(*(undefined4 *)(iVar5 + -0xc));
      FUN_101322d0(*(undefined4 *)(iVar5 + -0x18));
      iVar5 = iVar5 + -0x1c;
    }
    FUN_101322e0(piVar7,*piVar7 * 0x1c + 4);
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  puVar2 = param_2 + 2;
  param_1[3] = 0;
  if (*puVar2 != 0) {
    uVar10 = param_2[3];
    uVar9 = (uint)((ulonglong)uVar10 * 0x1c);
    if ((ulonglong)uVar10 * 0x1c >> 0x20 != 0) {
      uVar9 = 0xffffffff;
    }
    iVar5 = uVar9 + 4;
    if (0xfffffffb < uVar9) {
      iVar5 = -1;
    }
    puVar8 = (uint *)FUN_101322b0(iVar5);
    if (puVar8 == (uint *)0x0) {
      *piVar1 = 0;
    }
    else {
      *puVar8 = uVar10;
      puVar3 = puVar8 + 1;
      if (uVar10 != 0) {
        puVar4 = puVar8 + 2;
        puVar8 = puVar8 + 5;
        do {
          puVar4[0] = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar8[0] = 0;
          puVar8[1] = 0;
          uVar10 = uVar10 - 1;
          puVar8[2] = 0;
          puVar4 = puVar4 + 7;
          puVar8 = puVar8 + 7;
        } while (uVar10 != 0);
      }
      *piVar1 = (int)puVar3;
      if (puVar3 != (uint *)0x0) {
        iVar5 = param_2[1];
        uVar10 = *puVar2;
        uVar9 = 0;
        if (uVar10 != 0) {
          do {
            FUN_100fd480(puVar3 + uVar9 * 7,iVar5 + uVar9 * 0x1c);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        param_1[2] = *puVar2;
        param_1[3] = param_2[3];
      }
    }
  }
  return param_1;
}

