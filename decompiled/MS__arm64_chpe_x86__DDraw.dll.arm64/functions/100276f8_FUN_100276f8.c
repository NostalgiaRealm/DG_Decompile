/*
 * FUN_100276f8 at 100276f8
 * undefined FUN_100276f8(void)
 * Address ranges: 100276f8-10027e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100276f8(int param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int extraout_w11;
  undefined4 *extraout_w15;
  undefined4 *puVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [24];
  
  piVar2 = (int *)(param_1 + 0x150);
  uVar12 = param_2 + param_3 * *(int *)(param_1 + 0x2c);
  if ((*piVar2 == 0) ||
     (iVar14 = (*(code *)PTR_FUN_100ba248)(*piVar2 + uVar12 * 0x20 + 0x10), iVar14 != 0)) {
    uVar18 = 0;
    if ((*(int *)(param_1 + 0x1c) == 0) &&
       (((*(byte *)((uVar12 >> 3 & 3) + param_1 + ((uVar12 >> 5) + 0x76) * 4) >>
          (ulonglong)(uVar12 & 7) & 1) != 0 && (*piVar2 != 0)))) {
      uVar10 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_2 & 0x1f);
      uVar11 = *(uint *)(param_1 + 0x18) >> (ulonglong)(param_2 & 0x1f);
      if (uVar11 == 0) {
        uVar11 = 1;
      }
      if (uVar10 == 0) {
        uVar10 = 1;
      }
      FUN_10027030(0,0,(float)(int)uVar10,(float)(int)uVar11,param_1,param_2,param_3,0);
      uVar18 = 1;
    }
  }
  else {
    uVar18 = 1;
    iVar14 = *piVar2 + uVar12 * 0x20;
    fVar19 = (float)*(int *)(iVar14 + 0x10);
    fVar20 = (float)*(int *)(iVar14 + 0x14);
    fVar21 = (float)*(int *)(iVar14 + 0x18);
    fVar22 = (float)*(int *)(iVar14 + 0x1c);
    if (*(int *)(param_1 + 0x34) - 3U < 3) {
      piVar3 = (int *)(param_1 + 0x44);
      FUN_10073b50(*(undefined4 *)(*piVar3 + 0x15e0),auStack_70,*(undefined4 *)(param_1 + 0x68),
                   uVar12);
      FUN_10073b50(*(undefined4 *)(*piVar3 + 0x15d8),auStack_6c,*(undefined4 *)(param_1 + 400),0);
      FUN_10073b50(*(undefined4 *)(*piVar3 + 0x15d8),auStack_68,*(undefined4 *)(param_1 + 0x154),0);
      fVar24 = *(float *)(param_1 + 0x1b8);
      fVar23 = *(float *)(param_1 + 0x1b4);
      piVar4 = (int *)(param_1 + 0x1c);
      FUN_1001c4c0(fVar19 * fVar23,fVar20 * fVar24,fVar21 * fVar23,fVar22 * fVar24,
                   *(undefined4 *)(param_1 + 0xe0),*piVar4,*piVar4,param_2,uVar12,param_2,param_3,
                   uVar12,0);
      if (((*(char *)(*piVar4 + 0x100b37f0) != '\0') &&
          (iVar14 = FUN_10025ff8(param_1), *(char *)(iVar14 + extraout_w11) != '\0')) &&
         (*(char *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x18 + 0x531) != '\0')) {
        iVar13 = param_2 + (*(int *)(param_1 + 0x24) + param_3) * *(int *)(param_1 + 0x2c);
        uVar5 = *(undefined4 *)(param_1 + 400);
        uVar6 = *(undefined4 *)(*piVar3 + 0x15d8);
        uVar7 = *(undefined4 *)(param_1 + 0x154);
        uVar8 = *(undefined4 *)(*piVar3 + 0x15d8);
        fVar24 = *(float *)(param_1 + 0x1b8);
        fVar23 = *(float *)(param_1 + 0x1b4);
        iVar14 = *piVar4;
        uVar9 = *(undefined4 *)(param_1 + 0xe0);
        FUN_10073b50(*(undefined4 *)(*piVar3 + 0x15e0),auStack_64,*(undefined4 *)(param_1 + 0x68),
                     uVar12);
        FUN_10073b50(uVar6,auStack_60,uVar5,1);
        FUN_10073b50(uVar8,auStack_5c,uVar7,1);
        FUN_1001c4c0(fVar19 * fVar23,fVar20 * fVar24,fVar21 * fVar23,fVar22 * fVar24,uVar9,iVar14,
                     iVar14,param_2,iVar13,param_2,param_3,iVar13,0);
      }
      iVar14 = param_1 + (uVar12 >> 5) * 4;
      pbVar1 = (byte *)((uVar12 >> 3 & 3) + iVar14 + 0x1c0);
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
      pbVar1 = (byte *)((uVar12 >> 3 & 3) + iVar14 + 0x1e4);
      *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar12 & 7));
    }
    else {
      FUN_10027030(fVar19,fVar20,fVar21,fVar22,param_1,param_2,param_3,0);
    }
    (*(code *)PTR_FUN_100ba2bc)(*piVar2 + uVar12 * 0x20 + 0x10);
  }
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    if (*(int *)(param_1 + 0x58) != 0) {
      if (param_4 == 2) {
        if (*(int *)(param_1 + 0x184) == 0) {
          return uVar18;
        }
        if ((*(byte *)((uVar12 >> 3 & 3) + param_1 + ((uVar12 >> 5) + 0x79) * 4) >>
             (ulonglong)(uVar12 & 7) & 1) != 0) {
          return uVar18;
        }
        uVar16 = 2;
      }
      else {
        if (param_4 != 1) {
          return uVar18;
        }
        if (*(int *)(param_1 + 0xfc) == 0) {
          return uVar18;
        }
        if ((*(byte *)((uVar12 >> 3 & 3) + param_1 + ((uVar12 >> 5) + 0x70) * 4) >>
             (ulonglong)(uVar12 & 7) & 1) != 0) {
          return uVar18;
        }
        uVar16 = 1;
      }
      FUN_10026a50(param_1,param_2,param_3,uVar16);
    }
  }
  else if (((param_4 == 1) &&
           (uVar15 = (ulonglong)*(uint *)(param_1 + 0x58), *(uint *)(param_1 + 0x58) != 0)) &&
          ((*(byte *)((uVar12 >> 3 & 3) + param_1 + ((uVar12 >> 5) + 0x70) * 4) >>
            (ulonglong)(uVar12 & 7) & 1) == 0)) {
    puVar17 = (undefined4 *)(param_1 + 0xe0);
    if (*(char *)(param_1 + 0x1bc) == '\0') {
      FUN_10034140(param_1,auStack_58);
      puVar17 = extraout_w15;
    }
    FUN_1001c660(*puVar17,param_1 + 0x48,param_1 + 0x48,uVar15 & 0xffffffff,
                 *(undefined4 *)(param_1 + 0x54),0,0,uVar12,0);
    pbVar1 = (byte *)((uVar12 >> 3 & 3) + param_1 + ((uVar12 >> 5) + 0x70) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar12 & 7));
  }
  return uVar18;
}

