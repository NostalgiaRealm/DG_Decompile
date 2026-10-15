/*
 * FUN_180035550 at 180035550
 * undefined __fastcall FUN_180035550(longlong param_1, int param_2, longlong param_3, uint param_4, int param_5)
 * Address ranges: 180035550-18003578c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035550(longlong param_1,int param_2,longlong param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)param_4;
  if (param_2 == 0) {
    lVar1 = 0x1020;
    *(undefined1 *)(param_1 + 0x3021) = 1;
    lVar8 = 0x1024;
    lVar10 = 0x1028;
    lVar11 = 0x102c;
  }
  else if (param_2 == 1) {
    lVar1 = 0x2020;
    *(undefined1 *)(param_1 + 0x3022) = 1;
    lVar8 = 0x2024;
    lVar10 = 0x2028;
    lVar11 = 0x202c;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    *(undefined1 *)(param_1 + 0x3020) = 1;
    lVar1 = 0x20;
    lVar8 = 0x24;
    lVar10 = 0x28;
    lVar11 = 0x2c;
  }
  lVar1 = lVar1 + param_1;
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_2 == 1)) {
      while ((int)param_4 < param_5) {
        uVar6 = (uint)uVar12;
        uVar2 = (ulonglong)((uint)(uVar12 >> 2) & 3);
        uVar12 = uVar12 >> 4;
        uVar3 = (ulonglong)(uVar6 & 3);
        iVar4 = ((int)(short)(*(short *)(param_3 + 0x28 + uVar3 * 6) << 7) >> 7) +
                ((int)(short)(*(short *)(param_3 + 0x10 + uVar2 * 6) << 7) >> 7) +
                (uint)*(byte *)(param_3 + uVar12);
        lVar9 = (longlong)(int)(uVar6 * 4);
        iVar7 = iVar4;
        if (iVar4 < 0) {
          iVar7 = 0;
        }
        if (0xff < iVar4) {
          iVar7 = 0xff;
        }
        *(float *)(lVar1 + lVar9 * 4) = (float)iVar7;
        iVar4 = ((int)(short)(*(short *)(param_3 + 0x2a + uVar3 * 6) << 7) >> 7) +
                ((int)(short)(*(short *)(param_3 + 0x12 + uVar2 * 6) << 7) >> 7) +
                (uint)*(byte *)(param_3 + uVar12);
        iVar7 = iVar4;
        if (iVar4 < 0) {
          iVar7 = 0;
        }
        if (0xff < iVar4) {
          iVar7 = 0xff;
        }
        *(float *)(lVar8 + param_1 + lVar9 * 4) = (float)iVar7;
        iVar4 = ((int)(short)(*(short *)(param_3 + 0x2c + uVar3 * 6) << 7) >> 7) +
                ((int)(short)(*(short *)(param_3 + 0x14 + uVar2 * 6) << 7) >> 7) +
                (uint)*(byte *)(param_3 + uVar12);
        iVar7 = iVar4;
        if (iVar4 < 0) {
          iVar7 = 0;
        }
        if (0xff < iVar4) {
          iVar7 = 0xff;
        }
        param_4 = uVar6 + 1;
        uVar12 = (ulonglong)param_4;
        *(float *)(lVar10 + param_1 + lVar9 * 4) = (float)iVar7;
        *(undefined4 *)(lVar11 + param_1 + lVar9 * 4) = 0x437f0000;
      }
    }
    else {
      while (iVar7 = (int)uVar12, iVar7 < param_5) {
        lVar9 = (longlong)iVar7;
        lVar5 = (longlong)(iVar7 * 4);
        *(float *)(lVar1 + lVar5 * 4) = (float)*(byte *)(param_3 + 2 + lVar9 * 4);
        *(float *)(lVar8 + param_1 + lVar5 * 4) = (float)*(byte *)(param_3 + 1 + lVar9 * 4);
        *(float *)(lVar10 + param_1 + lVar5 * 4) = (float)*(byte *)(param_3 + lVar9 * 4);
        *(undefined4 *)(lVar11 + param_1 + lVar5 * 4) = 0x437f0000;
        uVar12 = (ulonglong)(iVar7 + 1);
      }
    }
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x18) + 0x3176 + *(longlong *)(param_1 + 8)) = 1;
  }
  return;
}

