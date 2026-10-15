/*
 * FUN_100e5ac8 at 100e5ac8
 * undefined FUN_100e5ac8(void)
 * Address ranges: 100e5ac8-100e5e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e5ac8(int *param_1,int *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar5 = *puVar1;
  uVar12 = (ulonglong)*param_2;
  uVar11 = 0;
  if (uVar5 != 0) {
    uVar9 = 0;
    uVar7 = uVar5;
    do {
      uVar11 = uVar7 + uVar9 >> 1;
      uVar10 = *(ulonglong *)(param_1[1] + uVar11 * 0x880);
      uVar8 = uVar11;
      if (uVar10 <= uVar12) {
        if (uVar12 <= uVar10) break;
        uVar9 = uVar11 + 1;
        uVar11 = uVar9;
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
    } while (uVar7 != uVar9);
  }
  puVar2 = (uint *)(param_1 + 1);
  if ((uVar11 == uVar5) || (puVar4 = (ulonglong *)(*puVar2 + uVar11 * 0x880), *puVar4 != uVar12)) {
    puVar3 = (uint *)(param_1 + 3);
    uVar9 = *puVar3;
    if (uVar9 == uVar5) {
      uVar5 = 0x10;
      if (uVar9 != 0) {
        uVar5 = uVar9 << 1;
      }
      iVar6 = FUN_101322b0(uVar5 * 0x880 + 0x7f);
      if (iVar6 != 0) {
        uVar7 = iVar6 + 0x7fU & 0xffffff80;
        uVar9 = 0;
        uVar8 = 0;
        if (*puVar1 != 0) {
          do {
            *(undefined4 *)(uVar7 + 0x10 + uVar9 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x14 + uVar9 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x18 + uVar9 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x868 + uVar9 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x86c + uVar9 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x870 + uVar9 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x874 + uVar9 * 0x880) = 0;
            *(undefined8 *)(uVar7 + 0x878 + uVar9 * 0x880) = 0;
            *(undefined2 *)(uVar7 + 0x1c + uVar9 * 0x880) = 0xffff;
            FUN_101325a0(uVar7 + uVar9 * 0x880,*puVar2 + uVar9 * 0x880,0x880);
            uVar9 = uVar9 + 1;
            uVar8 = *puVar1;
          } while (uVar9 < uVar8);
        }
        if (uVar8 < uVar5) {
          do {
            uVar9 = uVar8 + 1;
            *(undefined4 *)(uVar7 + 0x10 + uVar8 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x14 + uVar8 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x18 + uVar8 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x868 + uVar8 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x86c + uVar8 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x870 + uVar8 * 0x880) = 0;
            *(undefined4 *)(uVar7 + 0x874 + uVar8 * 0x880) = 0;
            *(undefined8 *)(uVar7 + 0x878 + uVar8 * 0x880) = 0;
            *(undefined2 *)(uVar7 + 0x1c + uVar8 * 0x880) = 0xffff;
            uVar8 = uVar9;
          } while (uVar9 < uVar5);
        }
        FUN_101322d0(*param_1);
        *param_1 = iVar6;
        *puVar2 = uVar7;
        *puVar3 = uVar5;
      }
    }
    uVar5 = *puVar1;
    if (*puVar3 != uVar5) {
      for (; uVar11 < uVar5; uVar5 = uVar5 - 1) {
        iVar6 = *puVar2 + uVar5 * 0x880;
        FUN_101325a0(iVar6,iVar6 + -0x880,0x880);
      }
      *puVar1 = *puVar1 + 1;
      *(int *)(*puVar2 + uVar11 * 0x880 + 8) = *param_2;
      FUN_101325a0(*puVar2 + uVar11 * 0x880 + 0x10,param_3,0x870);
      *(ulonglong *)(*puVar2 + uVar11 * 0x880) = uVar12;
    }
  }
  else {
    FUN_101325a0(puVar4 + 2,param_3,0x870);
  }
  return *puVar2 + uVar11 * 0x880 + 8;
}

