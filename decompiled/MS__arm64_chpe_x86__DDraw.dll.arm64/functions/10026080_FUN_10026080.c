/*
 * FUN_10026080 at 10026080
 * undefined FUN_10026080(void)
 * Address ranges: 10026080-1002672f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026080(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int extraout_w11;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [16];
  
  puVar2 = (uint *)(param_1 + 0x24);
  uVar16 = 0;
  if (*puVar2 != 0) {
    do {
      uVar15 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        piVar3 = (int *)(param_1 + 0x2c);
        do {
          uVar10 = *(uint *)(param_1 + 0x14) >> (ulonglong)(uVar15 & 0x1f);
          if (uVar10 == 0) {
            uVar10 = 1;
          }
          uVar11 = *(uint *)(param_1 + 0x18) >> (ulonglong)(uVar15 & 0x1f);
          if (uVar11 == 0) {
            uVar11 = 1;
          }
          uVar12 = uVar15 + *piVar3 * uVar16;
          if (*(int *)(param_1 + 0x34) - 3U < 3) {
            piVar4 = (int *)(param_1 + 0x44);
            FUN_10073b50(*(undefined4 *)(*piVar4 + 0x15e0),auStack_5c,
                         *(undefined4 *)(param_3 + 0x20),uVar12);
            FUN_10073b50(*(undefined4 *)(*piVar4 + 0x15d8),auStack_58,
                         *(undefined4 *)(param_2 + 0x18),0);
            fVar18 = *(float *)(param_1 + 0x1b8);
            piVar5 = (int *)(param_1 + 0x1c);
            fVar17 = *(float *)(param_1 + 0x1b4);
            FUN_1001c4c0(fVar17 * 0.0,fVar18 * 0.0,(float)(int)uVar10 * fVar17,
                         (float)(int)uVar11 * fVar18,0,0,*(undefined4 *)(param_1 + 0xe0),*piVar5,
                         *piVar5,uVar15,uVar12,uVar15,uVar16,uVar12,0);
            if (((*(char *)(*piVar5 + 0x100b37f0) != '\0') &&
                (iVar14 = FUN_10025ff8(param_1), *(char *)(iVar14 + extraout_w11) != '\0')) &&
               (*(char *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x18 + 0x531) !=
                '\0')) {
              iVar9 = uVar15 + (uVar16 + *puVar2) * *piVar3;
              iVar14 = *piVar5;
              uVar6 = *(undefined4 *)(param_1 + 0xe0);
              uVar7 = *(undefined4 *)(param_2 + 0x18);
              uVar8 = *(undefined4 *)(*piVar4 + 0x15d8);
              fVar18 = *(float *)(param_1 + 0x1b8);
              fVar17 = *(float *)(param_1 + 0x1b4);
              FUN_10073b50(*(undefined4 *)(*piVar4 + 0x15e0),auStack_54,
                           *(undefined4 *)(param_3 + 0x20),uVar12);
              FUN_10073b50(uVar8,auStack_50,uVar7,1);
              FUN_1001c4c0(fVar17 * 0.0,fVar18 * 0.0,(float)(int)uVar10 * fVar17,
                           (float)(int)uVar11 * fVar18,0,0,uVar6,iVar14,iVar14,uVar15,iVar9,uVar15,
                           uVar16,iVar9,0);
            }
          }
          else {
            if (*(int *)(param_1 + 0x1c) == 0) {
              FUN_1001c0d0(*(undefined4 *)(param_1 + 0xe0),1,*(undefined4 *)(param_1 + 8));
            }
            iVar14 = *(int *)(param_3 + 0x10);
            if (iVar14 == 0) {
              iVar14 = *(int *)(param_3 + 0xc);
            }
            uVar6 = *(undefined4 *)(param_1 + 0xe0);
            iVar13 = uVar15 + uVar16 * *piVar3;
            uVar7 = *(undefined4 *)(param_3 + 0x1c);
            uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15dc);
            fVar18 = *(float *)(param_1 + 0x1b8);
            fVar17 = *(float *)(param_1 + 0x1b4);
            iVar9 = *(int *)(param_1 + 0x1c);
            FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15d8),auStack_64,
                         *(undefined4 *)(param_2 + 0x18),0);
            FUN_10073b50(uVar8,auStack_60,uVar7,uVar12);
            FUN_1001c4c0(fVar17 * 0.0,fVar18 * 0.0,(float)(int)uVar10 * fVar17,
                         (float)(int)uVar11 * fVar18,0,0,uVar6,iVar9,iVar9,uVar15,iVar13,uVar15,
                         uVar16,iVar13,iVar14);
          }
          uVar15 = uVar15 + 1;
          pbVar1 = (byte *)((uVar12 >> 3 & 3) + param_1 + 0x1c0 + (uVar12 >> 5) * 4);
          *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
          pbVar1 = (byte *)((uVar12 >> 3 & 3) + param_1 + 0x1e4 + (uVar12 >> 5) * 4);
          *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
        } while (uVar15 < *(uint *)(param_1 + 0x20));
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *puVar2);
  }
  return;
}

