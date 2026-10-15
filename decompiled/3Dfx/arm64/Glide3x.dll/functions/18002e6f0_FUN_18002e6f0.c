/*
 * FUN_18002e6f0 at 18002e6f0
 * undefined __cdecl FUN_18002e6f0(longlong * param_1, int param_2, uint param_3, longlong param_4, uint param_5, int param_6)
 * Address ranges: 18002e6f0-18002e9c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e6f0(longlong *param_1,int param_2,uint param_3,longlong param_4,uint param_5,
                  int param_6)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  
  uVar21 = (ulonglong)param_5;
  (**(code **)(*param_1 + 0x2e0))();
  lVar13 = param_1[(longlong)param_2 + 0x662];
  if (param_3 == 0) {
    *(undefined1 *)(lVar13 + 0x3021) = 1;
    lVar17 = 0x1024;
    lVar14 = 0x1020;
    lVar16 = 0x1028;
    lVar15 = 0x102c;
    lVar6 = 0x1024;
    lVar7 = 0x1028;
    lVar18 = 0x102c;
    lVar9 = 0x1024;
    lVar11 = 0x1028;
    lVar19 = 0x102c;
  }
  else if (param_3 == 1) {
    *(undefined1 *)(lVar13 + 0x3022) = 1;
    lVar17 = 0x2024;
    lVar14 = 0x2020;
    lVar16 = 0x2028;
    lVar15 = 0x202c;
    lVar6 = 0x2024;
    lVar7 = 0x2028;
    lVar18 = 0x202c;
    lVar9 = 0x2024;
    lVar11 = 0x2028;
    lVar19 = 0x202c;
  }
  else {
    if ((param_3 != 2) && (param_3 != 3)) {
      return;
    }
    *(undefined1 *)(lVar13 + 0x3020) = 1;
    lVar17 = 0x24;
    lVar14 = 0x20;
    lVar16 = 0x28;
    lVar15 = 0x2c;
    lVar6 = 0x24;
    lVar7 = 0x28;
    lVar18 = 0x2c;
    lVar9 = 0x24;
    lVar11 = 0x28;
    lVar19 = 0x2c;
  }
  lVar14 = lVar14 + lVar13;
  if (lVar14 != 0) {
    if (param_3 < 2) {
      if ((int)param_5 < param_6) {
        do {
          uVar10 = uVar21 >> 2 & 3;
          uVar12 = uVar21 >> 4;
          uVar8 = (uint)*(short *)(param_4 + 0x28 + (uVar21 & 3) * 6);
          uVar8 = (((int)*(short *)(param_4 + 0x10 + uVar10 * 6) << 0x17) >> 0x17) +
                  ((int)(-(uVar8 >> 8 & 1) & 0xffff0000 | (uVar8 & 0x1ff) << 7) >> 7) +
                  (uint)*(byte *)(param_4 + uVar12);
          uVar5 = 0xff;
          if ((int)uVar8 < 0x100) {
            uVar5 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
          }
          lVar6 = param_4 + (uVar21 & 3) * 6;
          iVar4 = (int)uVar21 << 2;
          lVar7 = param_4 + uVar10 * 6;
          uVar8 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar8;
          *(float *)(lVar14 + (longlong)iVar4 * 4) = (float)(int)uVar5;
          uVar5 = (uint)*(short *)(lVar6 + 0x2a);
          uVar5 = (((int)*(short *)(lVar7 + 0x12) << 0x17) >> 0x17) +
                  ((int)(-(uVar5 >> 8 & 1) & 0xffff0000 | (uVar5 & 0x1ff) << 7) >> 7) +
                  (uint)*(byte *)(param_4 + uVar12);
          uVar2 = 0xff;
          if ((int)uVar5 < 0x100) {
            uVar2 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          }
          *(float *)(lVar17 + lVar13 + (longlong)iVar4 * 4) = (float)(int)uVar2;
          uVar5 = (uint)*(short *)(lVar7 + 0x14);
          uVar5 = (((int)*(short *)(lVar6 + 0x2c) << 0x17) >> 0x17) +
                  ((int)(-(uVar5 >> 8 & 1) & 0xffff0000 | (uVar5 & 0x1ff) << 7) >> 7) +
                  (uint)*(byte *)(param_4 + uVar12);
          uVar2 = 0xff;
          if ((int)uVar5 < 0x100) {
            uVar2 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          }
          *(float *)(lVar16 + lVar13 + (longlong)iVar4 * 4) = (float)(int)uVar2;
          *(undefined4 *)(lVar15 + lVar13 + (longlong)iVar4 * 4) = 0x437f0000;
        } while ((int)uVar8 < param_6);
      }
    }
    else if (param_3 == 3) {
      if ((int)param_5 < param_6) {
        do {
          iVar20 = (int)uVar21;
          pbVar1 = (byte *)(param_4 + (longlong)iVar20 * 4);
          iVar4 = iVar20 << 2;
          uVar21 = (ulonglong)(iVar20 + 1U);
          *(float *)(lVar14 + (longlong)iVar4 * 4) = (float)pbVar1[2];
          *(float *)(lVar6 + lVar13 + (longlong)iVar4 * 4) = (float)pbVar1[1];
          *(float *)(lVar7 + lVar13 + (longlong)iVar4 * 4) = (float)*pbVar1;
          *(float *)(lVar18 + lVar13 + (longlong)iVar4 * 4) = (float)pbVar1[3];
        } while ((int)(iVar20 + 1U) < param_6);
      }
    }
    else if ((int)param_5 < param_6) {
      do {
        uVar12 = -(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2;
        iVar4 = (int)uVar21 << 2;
        pbVar1 = (byte *)(param_4 + uVar12);
        uVar8 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar8;
        *(float *)(lVar14 + (longlong)iVar4 * 4) = (float)*(byte *)(param_4 + 2 + uVar12);
        *(float *)(lVar9 + lVar13 + (longlong)iVar4 * 4) = (float)pbVar1[1];
        bVar3 = *pbVar1;
        *(undefined4 *)(lVar19 + lVar13 + (longlong)iVar4 * 4) = 0x437f0000;
        *(float *)(lVar11 + lVar13 + (longlong)iVar4 * 4) = (float)bVar3;
      } while ((int)uVar8 < param_6);
    }
    *(undefined1 *)(*(longlong *)(lVar13 + 8) + (ulonglong)*(uint *)(lVar13 + 0x18) + 0x32f6) = 1;
  }
  return;
}

