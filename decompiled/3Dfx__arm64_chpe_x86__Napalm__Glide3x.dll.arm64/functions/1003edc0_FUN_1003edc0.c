/*
 * FUN_1003edc0 at 1003edc0
 * undefined FUN_1003edc0(void)
 * Address ranges: 1003edc0-1003ef9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003edc0(int param_1,byte param_2)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ushort *puVar11;
  ushort *extraout_w11;
  int extraout_w11_00;
  undefined8 uVar12;
  undefined8 extraout_x12;
  int iVar13;
  undefined8 extraout_x13;
  undefined8 extraout_x13_00;
  undefined8 uVar14;
  undefined2 *extraout_w14;
  undefined2 *extraout_w15;
  undefined1 auVar15 [16];
  
  iVar4 = 0xe8;
  if (param_2 == 0) {
    iVar4 = 0xb0;
  }
  uVar6 = (ulonglong)(uint)(iVar4 + param_1);
  uVar7 = (ulonglong)(param_2 + 0x120 + param_1);
  iVar4 = FUN_1003ed00(param_1,0,*(undefined2 *)(iVar4 + param_1 + 10));
  uVar3 = *extraout_w11;
  uVar10 = 0x121;
  uVar12 = 1;
  if ((uVar3 & 0xf0) == 0xf0) {
    iVar8 = 0x121;
    if ((uVar3 & 0x1000) == 0) {
      iVar8 = (int)extraout_x13;
    }
    *(byte *)(iVar8 + iVar4) = (byte)(1 << (ulonglong)(uVar3 & 0xf)) | *(byte *)(iVar8 + iVar4);
  }
  uVar5 = 0;
  uVar14 = extraout_x13;
  do {
    iVar8 = (int)uVar12;
    if ((iVar8 << (ulonglong)(uVar5 & 0x1f) & (uint)*(byte *)uVar7) != 0) {
      puVar1 = (ushort *)((int)uVar6 + uVar5 * 0xe);
      uVar3 = *puVar1;
      iVar9 = (int)uVar10;
      iVar13 = (int)uVar14;
      if ((uVar3 & 0xf0) == 0xf0) {
        iVar2 = iVar9;
        if ((uVar3 & 0x1000) == 0) {
          iVar2 = iVar13;
        }
        *(byte *)(iVar2 + iVar4) =
             (byte)(iVar8 << (ulonglong)(uVar3 & 0xf)) | *(byte *)(iVar2 + iVar4);
      }
      puVar11 = puVar1 + 1;
      uVar3 = *puVar11;
      if ((uVar3 & 0xf0) == 0xf0) {
        iVar2 = iVar9;
        if ((uVar3 & 0x1000) == 0) {
          iVar2 = iVar13;
        }
        *(byte *)(iVar2 + iVar4) =
             (byte)(iVar8 << (ulonglong)(uVar3 & 0xf)) | *(byte *)(iVar2 + iVar4);
      }
      uVar3 = puVar1[2];
      if ((uVar3 & 0xf0) == 0xf0) {
        iVar2 = iVar9;
        if ((uVar3 & 0x1000) == 0) {
          iVar2 = iVar13;
        }
        *(byte *)(iVar2 + iVar4) =
             (byte)(iVar8 << (ulonglong)(uVar3 & 0xf)) | *(byte *)(iVar2 + iVar4);
      }
      uVar3 = puVar1[3];
      if ((uVar3 & 0xf0) == 0xf0) {
        if ((uVar3 & 0x1000) == 0) {
          iVar9 = iVar13;
        }
        *(byte *)(iVar9 + iVar4) =
             (byte)(iVar8 << (ulonglong)(uVar3 & 0xf)) | *(byte *)(iVar9 + iVar4);
      }
      auVar15 = FUN_1003ed00(iVar4,uVar5,*puVar1);
      auVar15 = FUN_1003ed00(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,*puVar11);
      auVar15 = FUN_1003ed00(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,*extraout_w15);
      auVar15 = FUN_1003ed00(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,*extraout_w14);
      iVar4 = FUN_1003ed00(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,
                           *(undefined2 *)(extraout_w11_00 + 10));
      uVar5 = 0;
      uVar12 = extraout_x12;
      uVar14 = extraout_x13_00;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return;
}

