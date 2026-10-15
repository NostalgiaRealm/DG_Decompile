/*
 * FUN_180167a08 at 180167a08
 * undefined FUN_180167a08(void)
 * Address ranges: 180167a08-180167ac7;180167b5c-180167bdf;180167c14-180167cef;180167d10-180167d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180167a08(longlong param_1,uint param_2,int param_3,float param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  code *extraout_x11;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar8 = (ulonglong)param_2;
  uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar6,0);
  if (param_3 - 1U < 0xb) {
    iVar1 = (int)param_2 >> 3;
    switch(param_3) {
    case 1:
      if ((uint)param_4 < 6) {
        lVar7 = param_1 + uVar8 * 0x34;
        uVar4 = *(undefined4 *)(&DAT_18022bf08 + (ulonglong)(uint)param_4 * 4);
        *(undefined4 *)(lVar7 + 0xb4) = uVar4;
        *(byte *)(param_1 + 0xf684 + (longlong)iVar1) =
             *(byte *)(param_1 + 0xf684 + (longlong)iVar1) | (byte)(1 << (ulonglong)(param_2 & 7));
        *(undefined4 *)(lVar7 + 0x3f4) = uVar4;
        return;
      }
      break;
    case 2:
      if ((uint)param_4 < 6) {
        lVar7 = param_1 + uVar8 * 0x34;
        uVar4 = *(undefined4 *)(&DAT_18022bf08 + (ulonglong)(uint)param_4 * 4);
        *(undefined4 *)(lVar7 + 0xb8) = uVar4;
        *(byte *)(param_1 + 0xf684 + (longlong)iVar1) =
             *(byte *)(param_1 + 0xf684 + (longlong)iVar1) | (byte)(1 << (ulonglong)(param_2 & 7));
        *(undefined4 *)(lVar7 + 0x3f8) = uVar4;
        return;
      }
      break;
    case 3:
      if ((uint)param_4 < 6) {
        param_1 = param_1 + uVar8 * 0x34;
        uVar4 = *(undefined4 *)(&DAT_18022bf08 + (ulonglong)(uint)param_4 * 4);
        *(undefined4 *)(param_1 + 0xbc) = uVar4;
        *(undefined4 *)(param_1 + 0x3fc) = uVar4;
        FUN_180167d78(1);
        return;
      }
      break;
    case 4:
      lVar7 = param_1 + uVar8 * 0x34;
      fVar9 = (float)((uint)param_4 >> 0x10 & 0xff) / 255.0;
      fVar10 = (float)((uint)param_4 >> 8 & 0xff) / 255.0;
      fVar11 = (float)((uint)param_4 & 0xff) / 255.0;
      *(float *)(lVar7 + 0xcc) = fVar9;
      *(float *)(lVar7 + 0xd0) = fVar10;
      fVar12 = (float)((uint)param_4 >> 0x18) / 255.0;
      *(float *)(lVar7 + 0xd4) = fVar11;
      *(float *)(lVar7 + 0xd8) = fVar12;
      *(byte *)(param_1 + 0xf684 + (longlong)iVar1) =
           *(byte *)(param_1 + 0xf684 + (longlong)iVar1) | (byte)(1 << (ulonglong)(param_2 & 7));
      *(float *)(lVar7 + 0x40c) = fVar9;
      *(float *)(lVar7 + 0x410) = fVar10;
      *(float *)(lVar7 + 0x414) = fVar11;
      *(float *)(lVar7 + 0x418) = fVar12;
      return;
    case 5:
      uVar2 = 2;
      if (param_4 != 4.2039e-45) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(param_1 + uVar8 * 8 + 0x731) = uVar2;
      FUN_180167d78(1);
      return;
    case 6:
      uVar2 = 2;
      if (param_4 != 4.2039e-45) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(param_1 + uVar8 * 8 + 0x732) = uVar2;
      FUN_180167d78(1);
      return;
    case 7:
      uVar2 = 2;
      if (param_4 != 0.0) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(param_1 + uVar8 * 8 + 0x730) = uVar2;
      FUN_180167d78(1);
      return;
    case 8:
      fVar9 = 15.99;
      if (((param_4 <= 15.99) && (fVar9 = -16.0, -16.0 <= param_4)) &&
         (fVar9 = 0.0, (uint)ABS(param_4) < 0x7f800001)) {
        fVar9 = param_4;
      }
      lVar7 = param_1 + uVar8 * 0x34;
      *(float *)(lVar7 + 0xc0) = fVar9;
      *(byte *)(param_1 + 0xf684 + (longlong)iVar1) =
           *(byte *)(param_1 + 0xf684 + (longlong)iVar1) | (byte)(1 << (ulonglong)(param_2 & 7));
      *(float *)(lVar7 + 0x400) = fVar9;
      return;
    case 9:
      *(char *)(param_1 + uVar8 * 8 + 0x733) = SUB41(param_4,0);
      FUN_180167d78(1);
      return;
    case 10:
      param_1 = param_1 + uVar8 * 0x34;
      if (0x10 < (uint)param_4) {
        param_4 = 1.4013e-45;
      }
      *(float *)(param_1 + 0xc4) = param_4;
      *(float *)(param_1 + 0x404) = param_4;
      FUN_180167d78(1);
      return;
    case 0xb:
      uVar5 = 1 << (ulonglong)(param_2 & 0x1f);
      uVar3 = *(uint *)(param_1 + 0xe94) & (uVar5 ^ 0xffffffff);
      if (param_4 != 0.0) {
        uVar3 = *(uint *)(param_1 + 0xe94) | uVar5;
      }
      *(uint *)(param_1 + 0xe94) = uVar3;
      *(undefined1 *)(param_1 + 0xf689) = 1;
      *(byte *)(param_1 + 0xf680 + (longlong)iVar1) =
           *(byte *)(param_1 + 0xf680 + (longlong)iVar1) | (byte)(1 << (ulonglong)(param_2 & 7));
    }
  }
  return;
}

