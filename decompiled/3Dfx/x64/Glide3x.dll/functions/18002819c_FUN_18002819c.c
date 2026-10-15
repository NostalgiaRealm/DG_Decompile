/*
 * FUN_18002819c at 18002819c
 * undefined __fastcall FUN_18002819c(longlong param_1, int param_2, longlong param_3, uint param_4, int param_5)
 * Address ranges: 18002819c-1800284a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002819c(longlong param_1,int param_2,longlong param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar10;
  uint uVar12;
  ulonglong uVar14;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar13;
  
  uVar14 = (ulonglong)param_4;
  if (param_2 == 0) {
    lVar1 = 0x1020;
    *(undefined1 *)(param_1 + 0x3021) = 1;
    uVar8 = 0x1024;
    uVar10 = 0x1028;
    uVar12 = 0x102c;
  }
  else {
    if (param_2 != 1) {
      if ((param_2 != 2) && (param_2 != 3)) {
        return;
      }
      lVar1 = 0x20;
      *(undefined1 *)(param_1 + 0x3020) = 1;
      uVar11 = 0x28;
      uVar13 = 0x2c;
      uVar9 = 0x24;
      goto LAB_18002823e;
    }
    lVar1 = 0x2020;
    *(undefined1 *)(param_1 + 0x3022) = 1;
    uVar8 = 0x2024;
    uVar10 = 0x2028;
    uVar12 = 0x202c;
  }
  uVar13 = (ulonglong)uVar12;
  uVar11 = (ulonglong)uVar10;
  uVar9 = (ulonglong)uVar8;
LAB_18002823e:
  lVar1 = lVar1 + param_1;
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_2 == 1)) {
      while ((int)param_4 < param_5) {
        uVar8 = (uint)uVar14;
        uVar2 = (ulonglong)((uint)(uVar14 >> 2) & 3);
        uVar14 = uVar14 >> 4;
        uVar3 = (ulonglong)(uVar8 & 3);
        iVar5 = ((int)(short)(*(short *)(param_3 + 0x28 + uVar3 * 6) << 7) >> 7) +
                ((int)(short)(*(short *)(param_3 + 0x10 + uVar2 * 6) << 7) >> 7) +
                (uint)*(byte *)(uVar14 + param_3);
        lVar4 = (longlong)(int)(uVar8 * 4);
        iVar7 = iVar5;
        if (iVar5 < 0) {
          iVar7 = 0;
        }
        if (0xff < iVar5) {
          iVar7 = 0xff;
        }
        *(float *)(lVar1 + lVar4 * 4) = (float)iVar7;
        iVar5 = ((int)(short)(*(short *)(param_3 + 0x2a + uVar3 * 6) << 7) >> 7) +
                ((int)(short)(*(short *)(param_3 + 0x12 + uVar2 * 6) << 7) >> 7) +
                (uint)*(byte *)(uVar14 + param_3);
        iVar7 = iVar5;
        if (iVar5 < 0) {
          iVar7 = 0;
        }
        if (0xff < iVar5) {
          iVar7 = 0xff;
        }
        *(float *)(uVar9 + param_1 + lVar4 * 4) = (float)iVar7;
        iVar5 = ((int)(short)(*(short *)(param_3 + 0x2c + uVar3 * 6) << 7) >> 7) +
                ((int)(short)(*(short *)(param_3 + 0x14 + uVar2 * 6) << 7) >> 7) +
                (uint)*(byte *)(uVar14 + param_3);
        iVar7 = iVar5;
        if (iVar5 < 0) {
          iVar7 = 0;
        }
        if (0xff < iVar5) {
          iVar7 = 0xff;
        }
        param_4 = uVar8 + 1;
        uVar14 = (ulonglong)param_4;
        *(float *)(uVar11 + param_1 + lVar4 * 4) = (float)iVar7;
        *(undefined4 *)(uVar13 + param_1 + lVar4 * 4) = 0x437f0000;
      }
    }
    else if (param_2 == 3) {
      while ((int)param_4 < param_5) {
        iVar7 = (int)uVar14;
        lVar4 = (longlong)iVar7;
        lVar6 = (longlong)(iVar7 * 4);
        param_4 = iVar7 + 1;
        uVar14 = (ulonglong)param_4;
        *(float *)(lVar1 + lVar6 * 4) = (float)*(byte *)(param_3 + 2 + lVar4 * 4);
        *(float *)(uVar9 + param_1 + lVar6 * 4) = (float)*(byte *)(param_3 + 1 + lVar4 * 4);
        *(float *)(uVar11 + param_1 + lVar6 * 4) = (float)*(byte *)(param_3 + lVar4 * 4);
        *(float *)(param_1 + uVar13 + lVar6 * 4) = (float)*(byte *)(param_3 + 3 + lVar4 * 4);
      }
    }
    else {
      while ((int)param_4 < param_5) {
        iVar7 = (int)uVar14;
        lVar4 = (longlong)iVar7;
        lVar6 = (longlong)(iVar7 * 4);
        param_4 = iVar7 + 1;
        uVar14 = (ulonglong)param_4;
        *(float *)(lVar1 + lVar6 * 4) = (float)*(byte *)(param_3 + 2 + lVar4 * 4);
        *(float *)(uVar9 + param_1 + lVar6 * 4) = (float)*(byte *)(param_3 + 1 + lVar4 * 4);
        *(float *)(uVar11 + param_1 + lVar6 * 4) = (float)*(byte *)(param_3 + lVar4 * 4);
        *(undefined4 *)(uVar13 + param_1 + lVar6 * 4) = 0x437f0000;
      }
    }
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x18) + 0x32f6 + *(longlong *)(param_1 + 8)) = 1;
  }
  return;
}

