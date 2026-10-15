/*
 * FUN_100e57d0 at 100e57d0
 * undefined FUN_100e57d0(void)
 * Address ranges: 100e57d0-100e5ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e57d0(int *param_1,int *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar4 = *puVar1;
  uVar13 = (ulonglong)*param_2;
  uVar11 = 0;
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar8 = uVar4;
    do {
      uVar11 = uVar8 + uVar9 >> 1;
      uVar10 = *(ulonglong *)(param_1[1] + uVar11 * 0x238);
      uVar12 = uVar11;
      if (uVar10 <= uVar13) {
        if (uVar13 <= uVar10) break;
        uVar9 = uVar11 + 1;
        uVar11 = uVar9;
        uVar12 = uVar8;
      }
      uVar8 = uVar12;
    } while (uVar8 != uVar9);
  }
  puVar2 = (uint *)(param_1 + 1);
  if ((uVar11 == uVar4) || (puVar6 = (ulonglong *)(*puVar2 + uVar11 * 0x238), *puVar6 != uVar13)) {
    puVar3 = (uint *)(param_1 + 3);
    uVar9 = *puVar3;
    if (uVar9 == uVar4) {
      uVar4 = 0x10;
      if (uVar9 != 0) {
        uVar4 = uVar9 << 1;
      }
      iVar7 = FUN_101322b0(uVar4 * 0x238 + 0x7f);
      if (iVar7 != 0) {
        uVar9 = iVar7 + 0x7fU & 0xffffff80;
        if (*puVar1 == 0) {
          uVar8 = 0;
        }
        else {
          uVar12 = 0;
          do {
            *(undefined4 *)(uVar9 + 0x10 + uVar12 * 0x238) = 0;
            *(undefined4 *)(uVar9 + 0x14 + uVar12 * 0x238) = 0;
            *(undefined4 *)(uVar9 + 0x18 + uVar12 * 0x238) = 0;
            *(undefined4 *)(uVar9 + 0x228 + uVar12 * 0x238) = 0;
            *(undefined4 *)(uVar9 + 0x22c + uVar12 * 0x238) = 0;
            *(undefined8 *)(uVar9 + 0x230 + uVar12 * 0x238) = 0;
            FUN_101325a0(uVar9 + uVar12 * 0x238,*puVar2 + uVar12 * 0x238,0x238);
            uVar12 = uVar12 + 1;
            uVar8 = *puVar1;
          } while (uVar12 < uVar8);
        }
        if (uVar8 < uVar4) {
          do {
            *(undefined4 *)(uVar9 + 0x10 + uVar8 * 0x238) = 0;
            *(undefined4 *)(uVar9 + 0x14 + uVar8 * 0x238) = 0;
            *(undefined4 *)(uVar9 + 0x18 + uVar8 * 0x238) = 0;
            *(undefined4 *)(uVar9 + 0x228 + uVar8 * 0x238) = 0;
            *(undefined4 *)(uVar9 + 0x22c + uVar8 * 0x238) = 0;
            iVar5 = uVar8 * 0x238;
            uVar8 = uVar8 + 1;
            *(undefined8 *)(uVar9 + 0x230 + iVar5) = 0;
          } while (uVar8 < uVar4);
        }
        FUN_101322d0(*param_1);
        *puVar3 = uVar4;
        *param_1 = iVar7;
        *puVar2 = uVar9;
      }
    }
    uVar4 = *puVar1;
    if (*puVar3 != uVar4) {
      for (; uVar11 < uVar4; uVar4 = uVar4 - 1) {
        iVar7 = *puVar2 + uVar4 * 0x238;
        FUN_101325a0(iVar7,iVar7 + -0x238,0x238);
      }
      *puVar1 = *puVar1 + 1;
      *(int *)(*puVar2 + uVar11 * 0x238 + 8) = *param_2;
      FUN_101325a0(*puVar2 + uVar11 * 0x238 + 0x10,param_3,0x228);
      *(ulonglong *)(*puVar2 + uVar11 * 0x238) = uVar13;
    }
  }
  else {
    FUN_101325a0(puVar6 + 2,param_3,0x228);
  }
  return *puVar2 + uVar11 * 0x238 + 8;
}

