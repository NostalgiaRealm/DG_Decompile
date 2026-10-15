/*
 * FUN_100bd770 at 100bd770
 * undefined FUN_100bd770(void)
 * Address ranges: 100bd770-100bdb87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bd770(int *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  int extraout_w1;
  int extraout_w1_00;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong extraout_x12;
  ulonglong uVar17;
  ulonglong extraout_x13;
  ulonglong uVar18;
  ulonglong extraout_x14;
  ulonglong uVar19;
  ulonglong extraout_x15;
  uint uVar20;
  ulonglong uVar21;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar4 = *puVar1;
  uVar21 = (ulonglong)*param_2;
  uVar20 = 0;
  if (uVar4 != 0) {
    uVar15 = 0;
    uVar14 = uVar4;
    do {
      uVar20 = uVar14 + uVar15 >> 1;
      uVar16 = *(ulonglong *)(param_1[1] + uVar20 * 0x9a0);
      uVar7 = uVar20;
      if (uVar16 <= uVar21) {
        if (uVar21 <= uVar16) break;
        uVar15 = uVar20 + 1;
        uVar20 = uVar15;
        uVar7 = uVar14;
      }
      uVar14 = uVar7;
    } while (uVar14 != uVar15);
  }
  puVar2 = (uint *)(param_1 + 1);
  if ((uVar20 == uVar4) || (puVar5 = (ulonglong *)(*puVar2 + uVar20 * 0x9a0), *puVar5 != uVar21)) {
    puVar3 = (uint *)(param_1 + 3);
    uVar15 = *puVar3;
    if (uVar15 == uVar4) {
      uVar4 = 0x10;
      if (uVar15 != 0) {
        uVar4 = uVar15 << 1;
      }
      iVar6 = FUN_100fece0(uVar4 * 0x9a0 + 0x7f);
      if (iVar6 != 0) {
        uVar14 = iVar6 + 0x7fU & 0xffffff80;
        uVar15 = 0;
        if (*puVar1 == 0) {
          uVar7 = 0;
        }
        else {
          do {
            *(undefined4 *)(uVar14 + 0x10 + uVar15 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x174 + uVar15 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x178 + uVar15 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x980 + uVar15 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x984 + uVar15 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x988 + uVar15 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x98c + uVar15 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x990 + uVar15 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x994 + uVar15 * 0x9a0) = 0;
            *(undefined8 *)(uVar14 + 0x998 + uVar15 * 0x9a0) = 0;
            *(undefined2 *)(uVar14 + 0x17c + uVar15 * 0x9a0) = 0xffff;
            FUN_10083260(uVar14 + 0x14 + uVar15 * 0x9a0);
            FUN_10083260(uVar14 + 0xc4 + uVar15 * 0x9a0);
            FUN_100ff660(uVar14 + uVar15 * 0x9a0,*puVar2 + uVar15 * 0x9a0,0x9a0);
            uVar15 = uVar15 + 1;
            uVar7 = *puVar1;
          } while (uVar15 < uVar7);
        }
        if (uVar7 < uVar4) {
          uVar19 = (ulonglong)(uVar14 + 0x980);
          uVar18 = (ulonglong)(uVar14 + 0x984);
          uVar17 = (ulonglong)(uVar14 + 0x988);
          uVar16 = (ulonglong)(uVar14 + 0x98c);
          uVar13 = (ulonglong)(uVar14 + 0x990);
          uVar12 = (ulonglong)(uVar14 + 0x994);
          uVar11 = (ulonglong)(uVar14 + 0x998);
          uVar10 = (ulonglong)(uVar14 + 0x17c);
          uVar9 = (ulonglong)(uVar14 + 0x14);
          uVar8 = (ulonglong)(uVar14 + 0xc4);
          do {
            *(undefined4 *)(uVar14 + 0x10 + uVar7 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x174 + uVar7 * 0x9a0) = 0;
            *(undefined4 *)(uVar14 + 0x178 + uVar7 * 0x9a0) = 0;
            *(undefined4 *)((int)uVar19 + uVar7 * 0x9a0) = 0;
            *(undefined4 *)((int)uVar18 + uVar7 * 0x9a0) = 0;
            *(undefined4 *)((int)uVar17 + uVar7 * 0x9a0) = 0;
            *(undefined4 *)((int)uVar16 + uVar7 * 0x9a0) = 0;
            *(undefined4 *)((int)uVar13 + uVar7 * 0x9a0) = 0;
            *(undefined4 *)((int)uVar12 + uVar7 * 0x9a0) = 0;
            *(undefined8 *)((int)uVar11 + uVar7 * 0x9a0) = 0;
            *(undefined2 *)((int)uVar10 + uVar7 * 0x9a0) = 0xffff;
            FUN_10083260((int)uVar9 + uVar7 * 0x9a0);
            FUN_10083260((int)uVar8 + extraout_w1 * 0x9a0);
            uVar7 = extraout_w1_00 + 1;
            uVar16 = extraout_x12;
            uVar17 = extraout_x13;
            uVar18 = extraout_x14;
            uVar19 = extraout_x15;
          } while (uVar7 < uVar4);
        }
        FUN_100fed00(*param_1);
        *param_1 = iVar6;
        *puVar2 = uVar14;
        *puVar3 = uVar4;
      }
    }
    uVar4 = *puVar1;
    if (*puVar3 != uVar4) {
      for (; uVar20 < uVar4; uVar4 = uVar4 - 1) {
        iVar6 = *puVar2 + uVar4 * 0x9a0;
        FUN_100ff660(iVar6,iVar6 + -0x9a0,0x9a0);
      }
      *puVar1 = *puVar1 + 1;
      *(uint *)(*puVar2 + uVar20 * 0x9a0 + 8) = *param_2;
      FUN_100ff660(*puVar2 + uVar20 * 0x9a0 + 0x10,param_3,0x990);
      *(ulonglong *)(*puVar2 + uVar20 * 0x9a0) = uVar21;
    }
  }
  else {
    FUN_100ff660(puVar5 + 2,param_3,0x990);
  }
  return *puVar2 + uVar20 * 0x9a0 + 8;
}

