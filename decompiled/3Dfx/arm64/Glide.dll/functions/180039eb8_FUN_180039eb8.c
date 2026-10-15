/*
 * FUN_180039eb8 at 180039eb8
 * undefined __cdecl FUN_180039eb8(longlong * param_1, int param_2, uint param_3, longlong param_4, uint param_5, int param_6)
 * Address ranges: 180039eb8-18003a0ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039eb8(longlong *param_1,int param_2,uint param_3,longlong param_4,uint param_5,
                  int param_6)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  uVar17 = (ulonglong)param_5;
  (**(code **)(*param_1 + 0x2a0))();
  lVar10 = param_1[(longlong)param_2 + 0x632];
  if (param_3 == 0) {
    *(undefined1 *)(lVar10 + 0x3021) = 1;
    lVar15 = 0x1024;
    lVar11 = 0x1020;
    lVar14 = 0x1028;
    lVar13 = 0x102c;
    lVar8 = 0x1024;
    lVar16 = 0x1028;
    lVar12 = 0x102c;
  }
  else if (param_3 == 1) {
    *(undefined1 *)(lVar10 + 0x3022) = 1;
    lVar15 = 0x2024;
    lVar11 = 0x2020;
    lVar14 = 0x2028;
    lVar13 = 0x202c;
    lVar8 = 0x2024;
    lVar16 = 0x2028;
    lVar12 = 0x202c;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    *(undefined1 *)(lVar10 + 0x3020) = 1;
    lVar15 = 0x24;
    lVar11 = 0x20;
    lVar14 = 0x28;
    lVar13 = 0x2c;
    lVar8 = 0x24;
    lVar16 = 0x28;
    lVar12 = 0x2c;
  }
  lVar11 = lVar11 + lVar10;
  if (lVar11 != 0) {
    if (param_3 < 2) {
      if ((int)param_5 < param_6) {
        do {
          uVar7 = uVar17 >> 2 & 3;
          uVar9 = uVar17 >> 4;
          uVar6 = (uint)*(short *)(param_4 + 0x28 + (uVar17 & 3) * 6);
          uVar6 = (((int)*(short *)(param_4 + 0x10 + uVar7 * 6) << 0x17) >> 0x17) +
                  ((int)(-(uVar6 >> 8 & 1) & 0xffff0000 | (uVar6 & 0x1ff) << 7) >> 7) +
                  (uint)*(byte *)(param_4 + uVar9);
          uVar5 = 0xff;
          if ((int)uVar6 < 0x100) {
            uVar5 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          }
          lVar8 = param_4 + (uVar17 & 3) * 6;
          iVar4 = (int)uVar17 << 2;
          lVar12 = param_4 + uVar7 * 6;
          uVar6 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar6;
          *(float *)(lVar11 + (longlong)iVar4 * 4) = (float)(int)uVar5;
          uVar5 = (uint)*(short *)(lVar8 + 0x2a);
          uVar5 = (((int)*(short *)(lVar12 + 0x12) << 0x17) >> 0x17) +
                  ((int)(-(uVar5 >> 8 & 1) & 0xffff0000 | (uVar5 & 0x1ff) << 7) >> 7) +
                  (uint)*(byte *)(param_4 + uVar9);
          uVar2 = 0xff;
          if ((int)uVar5 < 0x100) {
            uVar2 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          }
          *(float *)(lVar15 + lVar10 + (longlong)iVar4 * 4) = (float)(int)uVar2;
          uVar5 = (uint)*(short *)(lVar12 + 0x14);
          uVar5 = (((int)*(short *)(lVar8 + 0x2c) << 0x17) >> 0x17) +
                  ((int)(-(uVar5 >> 8 & 1) & 0xffff0000 | (uVar5 & 0x1ff) << 7) >> 7) +
                  (uint)*(byte *)(param_4 + uVar9);
          uVar2 = 0xff;
          if ((int)uVar5 < 0x100) {
            uVar2 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          }
          *(float *)(lVar14 + lVar10 + (longlong)iVar4 * 4) = (float)(int)uVar2;
          *(undefined4 *)(lVar13 + lVar10 + (longlong)iVar4 * 4) = 0x437f0000;
        } while ((int)uVar6 < param_6);
      }
    }
    else if ((int)param_5 < param_6) {
      do {
        uVar9 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
        iVar4 = (int)uVar17 << 2;
        pbVar1 = (byte *)(param_4 + uVar9);
        uVar6 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar6;
        *(float *)(lVar11 + (longlong)iVar4 * 4) = (float)*(byte *)(param_4 + 2 + uVar9);
        *(float *)(lVar8 + lVar10 + (longlong)iVar4 * 4) = (float)pbVar1[1];
        bVar3 = *pbVar1;
        *(undefined4 *)(lVar12 + lVar10 + (longlong)iVar4 * 4) = 0x437f0000;
        *(float *)(lVar16 + lVar10 + (longlong)iVar4 * 4) = (float)bVar3;
      } while ((int)uVar6 < param_6);
    }
    *(undefined1 *)(*(longlong *)(lVar10 + 8) + (ulonglong)*(uint *)(lVar10 + 0x18) + 0x3176) = 1;
  }
  return;
}

