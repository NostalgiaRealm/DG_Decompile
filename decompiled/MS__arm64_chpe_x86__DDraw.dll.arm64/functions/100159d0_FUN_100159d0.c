/*
 * FUN_100159d0 at 100159d0
 * undefined FUN_100159d0(void)
 * Address ranges: 100159d0-10015f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100159d0(int param_1,ulonglong param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  ulonglong extraout_x1_02;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 *extraout_w8;
  uint uVar15;
  uint uVar16;
  code *extraout_w11;
  undefined8 uVar17;
  undefined1 auStack_58 [24];
  
  uVar15 = (uint)param_2;
  piVar2 = (int *)(param_1 + 0x80);
  uVar9 = uVar15 + *(int *)(param_1 + 0x2c) * param_3;
  uVar17 = 0;
  uVar14 = param_2;
  if ((*piVar2 == 0) ||
     (iVar10 = (*(code *)PTR_FUN_100ba248)(*piVar2 + uVar9 * 0x1c + 0xc), uVar14 = extraout_x1,
     iVar10 != 0)) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar10 = param_1 + ((uVar9 >> 5) + 0x5b) * 4;
      if (((*(byte *)((uVar9 >> 3 & 3) + iVar10) >> (ulonglong)(uVar9 & 7) & 1) != 0) ||
         (iVar11 = (*(code *)PTR_FUN_100ba248)(*(int *)(param_1 + 0x100) + uVar9 * 0x1c + 0xc),
         uVar14 = extraout_x1_01, iVar11 == 0)) {
        if ((*(byte *)((uVar9 >> 3 & 3) + iVar10) >> (ulonglong)(uVar9 & 7) & 1) == 0) {
          iVar10 = *(int *)(param_1 + 0x100) + uVar9 * 0x1c;
          iVar11 = *(int *)(iVar10 + 0x10);
          uVar16 = *(uint *)(iVar10 + 0x14);
          uVar15 = *(uint *)(iVar10 + 0x18);
          iVar10 = *(int *)(iVar10 + 0xc);
        }
        else {
          iVar10 = 0;
          iVar11 = 0;
          uVar16 = *(uint *)(param_1 + 0x14) >> (ulonglong)(uVar15 & 0x1f);
          if (uVar16 == 0) {
            uVar16 = 1;
          }
          uVar15 = *(uint *)(param_1 + 0x18) >> (ulonglong)(uVar15 & 0x1f);
          if (uVar15 == 0) {
            uVar15 = 1;
          }
        }
        FUN_100154a0((float)iVar10,(float)iVar11,(float)(int)uVar16,(float)(int)uVar15,param_1,
                     param_2 & 0xffffffff,param_3,0);
        uVar17 = 1;
        uVar14 = extraout_x1_02;
      }
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0xf4);
    if ((iVar10 != 0) && (iVar11 = *(int *)(param_1 + 0x74), iVar11 != 0)) {
      uVar17 = 1;
      iVar4 = *piVar2 + uVar9 * 0x1c;
      piVar3 = (int *)(iVar4 + 0xc);
      iVar6 = *piVar3;
      iVar7 = *(int *)(iVar4 + 0x10);
      iVar8 = *(int *)(iVar4 + 0x14);
      iVar4 = *(int *)(iVar4 + 0x18);
      if (*(int *)(param_1 + 0x34) - 3U < 3) {
        FUN_10011ce0(param_1,iVar10,iVar11,uVar9,0,piVar3);
        FUN_10010380((float)iVar6 * *(float *)(param_1 + 0x148),
                     (float)iVar7 * *(float *)(param_1 + 0x14c),
                     (float)iVar8 * *(float *)(param_1 + 0x148),
                     (float)iVar4 * *(float *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0xa8),
                     *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x1c),
                     param_2 & 0xffffffff,param_3,param_2 & 0xffffffff,param_3,0,0);
        iVar10 = param_1 + (uVar9 >> 5) * 4;
        pbVar1 = (byte *)((uVar9 >> 3 & 3) + iVar10 + 0x154);
        *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
        pbVar1 = (byte *)((uVar9 >> 3 & 3) + iVar10 + 0x178);
        *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar9 & 7));
        pbVar1 = (byte *)((uVar9 >> 3 & 3) + iVar10 + 0x90);
        *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar9 & 7));
        (*(code *)PTR_FUN_100ba2b8)
                  (*(int *)(param_1 + 0x60) + uVar9 * 0x1c + 0xc,0,0,
                   *(uint *)(param_1 + 0x14) >> (ulonglong)(uVar15 & 0x1f),
                   *(uint *)(param_1 + 0x18) >> (ulonglong)(uVar15 & 0x1f));
      }
      else {
        FUN_10011ce0(param_1,iVar10,iVar11,param_2 & 0xffffffff,param_3,piVar3);
        FUN_100154a0((float)iVar6,(float)iVar7,(float)iVar8,(float)iVar4,param_1,
                     param_2 & 0xffffffff,param_3,0);
      }
    }
    (*(code *)PTR_FUN_100ba2bc)(*piVar2 + uVar9 * 0x1c + 0xc);
    uVar14 = extraout_x1_00;
  }
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    if (*(int *)(param_1 + 0x58) != 0) {
      if (param_4 == 2) {
        if (*(int *)(param_1 + 0x11c) == 0) {
          return uVar17;
        }
        if ((*(byte *)((uVar9 >> 3 & 3) + param_1 + ((uVar9 >> 5) + 0x5e) * 4) >>
             (ulonglong)(uVar9 & 7) & 1) != 0) {
          return uVar17;
        }
        uVar13 = 2;
      }
      else {
        if (param_4 != 1) {
          return uVar17;
        }
        if (*(int *)(param_1 + 0xc0) == 0) {
          return uVar17;
        }
        if ((*(byte *)((uVar9 >> 3 & 3) + param_1 + ((uVar9 >> 5) + 0x55) * 4) >>
             (ulonglong)(uVar9 & 7) & 1) != 0) {
          return uVar17;
        }
        uVar13 = 1;
      }
      FUN_100151d8(param_1,param_2 & 0xffffffff,param_3,uVar13);
    }
  }
  else if (((param_4 == 1) && (*(int *)(param_1 + 0x58) != 0)) &&
          ((*(byte *)((uVar9 >> 3 & 3) + param_1 + ((uVar9 >> 5) + 0x55) * 4) >>
            (ulonglong)(uVar9 & 7) & 1) == 0)) {
    FUN_1006e8d0(*(int *)(param_1 + 0x40),uVar14,param_1);
    if (*(char *)(param_1 + 0x150) == '\0') {
      iVar10 = FUN_10034140(param_1,auStack_58);
      puVar5 = (uint *)(iVar10 + 4);
    }
    else {
      iVar10 = 0x28;
      if (*(int *)(param_1 + 0x1c) == 0x15) {
        iVar10 = 0x38;
      }
      puVar5 = (uint *)(iVar10 + *(int *)(param_1 + 4));
    }
    uVar14 = (ulonglong)*puVar5;
    uVar12 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar12,*extraout_w8,uVar9,*(int *)(param_1 + 0x58),uVar9,uVar14 & 0xffffffff);
    pbVar1 = (byte *)((uVar9 >> 3 & 3) + param_1 + ((uVar9 >> 5) + 0x55) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar9 & 7));
    (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + 0x40) + 0x4a0);
  }
  return uVar17;
}

