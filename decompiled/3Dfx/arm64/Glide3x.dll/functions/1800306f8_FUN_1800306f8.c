/*
 * FUN_1800306f8 at 1800306f8
 * undefined __cdecl FUN_1800306f8(longlong param_1, byte param_2)
 * Address ranges: 1800306f8-18003087b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800306f8(longlong param_1,byte param_2)

{
  uint uVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong extraout_x10;
  longlong extraout_x12;
  longlong extraout_x12_00;
  longlong extraout_x12_01;
  longlong extraout_x12_02;
  int iVar9;
  undefined8 uVar10;
  undefined8 extraout_x13;
  longlong lVar11;
  longlong extraout_x14;
  longlong extraout_x15;
  longlong extraout_x15_00;
  longlong lVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  
  lVar7 = 0xf0;
  if (param_2 == 0) {
    lVar7 = 0xb8;
  }
  lVar7 = lVar7 + param_1;
  lVar8 = param_1 + (ulonglong)param_2;
  lVar11 = 0xfa;
  if (param_2 == 0) {
    lVar11 = 0xc2;
  }
  lVar5 = FUN_180030640(param_1,0,(uint)*(ushort *)(param_1 + lVar11));
  uVar4 = *(ushort *)(lVar5 + extraout_x10);
  lVar11 = 0x129;
  uVar10 = 1;
  if ((uVar4 & 0xf0) == 0xf0) {
    lVar12 = 0x129;
    if ((uVar4 & 0x1000) == 0) {
      lVar12 = extraout_x15;
    }
    *(byte *)(lVar5 + lVar12) = (byte)(1 << (ulonglong)(uVar4 & 0xf)) | *(byte *)(lVar5 + lVar12);
  }
  uVar6 = 0;
  lVar12 = extraout_x15;
  do {
    auVar14._8_8_ = uVar6;
    auVar14._0_8_ = lVar5;
    auVar13 = auVar14._0_12_;
    iVar9 = (int)uVar10;
    if ((iVar9 << (ulonglong)((uint)uVar6 & 0x1f) & (uint)*(byte *)(lVar8 + 0x128)) != 0) {
      puVar2 = (ushort *)(lVar7 + uVar6 * 0xe);
      uVar4 = *puVar2;
      if ((uVar4 & 0xf0) == 0xf0) {
        lVar3 = lVar11;
        if ((uVar4 & 0x1000) == 0) {
          lVar3 = lVar12;
        }
        *(byte *)(lVar5 + lVar3) =
             (byte)(iVar9 << (ulonglong)(uVar4 & 0xf)) | *(byte *)(lVar5 + lVar3);
      }
      uVar4 = puVar2[1];
      if ((uVar4 & 0xf0) == 0xf0) {
        lVar3 = lVar11;
        if ((uVar4 & 0x1000) == 0) {
          lVar3 = lVar12;
        }
        *(byte *)(lVar5 + lVar3) =
             (byte)(iVar9 << (ulonglong)(uVar4 & 0xf)) | *(byte *)(lVar5 + lVar3);
      }
      uVar4 = puVar2[2];
      if ((uVar4 & 0xf0) == 0xf0) {
        lVar3 = lVar11;
        if ((uVar4 & 0x1000) == 0) {
          lVar3 = lVar12;
        }
        *(byte *)(lVar5 + lVar3) =
             (byte)(iVar9 << (ulonglong)(uVar4 & 0xf)) | *(byte *)(lVar5 + lVar3);
      }
      uVar4 = puVar2[3];
      if ((uVar4 & 0xf0) == 0xf0) {
        if ((uVar4 & 0x1000) == 0) {
          lVar11 = lVar12;
        }
        *(byte *)(lVar5 + lVar11) =
             (byte)(iVar9 << (ulonglong)(uVar4 & 0xf)) | *(byte *)(lVar5 + lVar11);
      }
      auVar13 = FUN_180030640(lVar5,(uint)uVar6,(uint)*puVar2);
      auVar13 = FUN_180030640(auVar13._0_8_,auVar13._8_4_,(uint)*(ushort *)(extraout_x12 + 2));
      auVar13 = FUN_180030640(auVar13._0_8_,auVar13._8_4_,(uint)*(ushort *)(extraout_x12_00 + 4));
      auVar13 = FUN_180030640(auVar13._0_8_,auVar13._8_4_,(uint)*(ushort *)(extraout_x12_01 + 6));
      auVar14 = FUN_180030640(auVar13._0_8_,auVar13._8_4_,(uint)*(ushort *)(extraout_x12_02 + 10));
      auVar13 = auVar14._0_12_;
      uVar10 = extraout_x13;
      lVar11 = extraout_x14;
      lVar12 = extraout_x15_00;
    }
    lVar5 = auVar13._0_8_;
    uVar1 = auVar13._8_4_ + 1;
    uVar6 = (ulonglong)uVar1;
  } while (uVar1 < 4);
  return;
}

