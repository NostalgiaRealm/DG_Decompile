/*
 * FUN_18014610c at 18014610c
 * undefined FUN_18014610c(void)
 * Address ranges: 18014610c-18014617f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18014610c(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  longlong lVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  longlong unaff_x19;
  longlong *unaff_x20;
  code *unaff_x21;
  uint unaff_w22;
  longlong unaff_x25;
  longlong unaff_x26;
  longlong lVar6;
  
  do {
    (*unaff_x21)();
    (*extraout_x11)();
    (*unaff_x21)();
    (*extraout_x11_00)();
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 < *(uint *)(unaff_x26 + 0x18));
  FUN_1802229d8(*(undefined8 *)(unaff_x26 + 0x10));
  *(undefined8 *)(unaff_x26 + 0x10) = 0;
  *(undefined8 *)(unaff_x26 + 0x18) = 0;
  thunk_FUN_180223824(*(undefined8 *)(unaff_x26 + 0x30));
  *(undefined8 *)(unaff_x26 + 0x30) = 0;
  FUN_1802229d8(*(undefined8 *)(unaff_x26 + 0x10));
  FUN_1802229d8();
  *(undefined8 *)(unaff_x25 + 0x7828) = 0;
  lVar6 = *(longlong *)(unaff_x25 + 0x7820);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      uVar1 = *(uint *)(lVar6 + 0x20);
      lVar5 = *(longlong *)(lVar6 + 0x10) + (ulonglong)uVar1 * 0x30;
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        (*unaff_x21)(0x180224000);
        uVar3 = (*extraout_x11_01)();
        if (uVar3 < *(ulonglong *)(lVar5 + 0x28)) {
          lVar5 = *(longlong *)(lVar6 + 0x10) + (ulonglong)uVar1 * 0x30;
          uVar4 = (*unaff_x21)(0x180224000);
          (*extraout_x11_02)(uVar4,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar6 + 0x30));
          thunk_FUN_1802238ec(*(undefined8 *)(lVar6 + 0x30),0xffffffff);
        }
      }
      uVar3 = 0;
      if (*(int *)(lVar6 + 0x18) != 0) {
        uVar4 = 0x180224000;
        do {
          (*unaff_x21)(*(undefined8 *)(uVar3 * 0x30 + *(longlong *)(lVar6 + 0x10) + 8),uVar4);
          (*extraout_x11_03)();
          (*unaff_x21)();
          (*extraout_x11_04)();
          uVar1 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar1;
          uVar4 = extraout_x1;
        } while (uVar1 < *(uint *)(lVar6 + 0x18));
      }
      FUN_1802229d8(*(undefined8 *)(lVar6 + 0x10));
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      thunk_FUN_180223824(*(undefined8 *)(lVar6 + 0x30));
      *(undefined8 *)(lVar6 + 0x30) = 0;
    }
    FUN_1802229d8(*(undefined8 *)(lVar6 + 0x10));
    FUN_1802229d8(lVar6,0x38);
  }
  *(undefined8 *)(unaff_x25 + 0x7820) = 0;
  FUN_1801517e0(unaff_x19);
  (*unaff_x21)(0x180224000);
  (*extraout_x11_05)();
  *(undefined8 *)(unaff_x25 + 0x7730) = 0;
  if (*(longlong *)(unaff_x25 + 0x7738) != 0) {
    FUN_180146480(*(longlong *)(unaff_x25 + 0x7738),1);
  }
  *(undefined8 *)(unaff_x25 + 0x7738) = 0;
  if (*(longlong *)(unaff_x25 + 0x7728) != 0) {
    FUN_180146480(*(longlong *)(unaff_x25 + 0x7728),1);
  }
  *(undefined8 *)(unaff_x25 + 0x7728) = 0;
  if (*(longlong *)(unaff_x25 + 0x7710) != 0) {
    FUN_180146480(*(longlong *)(unaff_x25 + 0x7710),1);
  }
  *(undefined8 *)(unaff_x25 + 0x7710) = 0;
  if (*(longlong *)(unaff_x25 + 0x7718) != 0) {
    FUN_180146480(*(longlong *)(unaff_x25 + 0x7718),1);
  }
  *(undefined8 *)(unaff_x25 + 0x7718) = 0;
  if (*(longlong *)(unaff_x25 + 0x7708) != 0) {
    FUN_180146600();
  }
  *(undefined8 *)(unaff_x25 + 0x7708) = 0;
  if (*(longlong *)(unaff_x25 + 0x7700) != 0) {
    FUN_180146600();
  }
  *(undefined8 *)(unaff_x25 + 0x7700) = 0;
  FUN_1802229d8(*(undefined8 *)(unaff_x19 + 0x28));
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  FUN_1802229d8(*(undefined8 *)(unaff_x19 + 0x20));
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  lVar6 = *unaff_x20;
  if ((lVar6 != 0) && (iVar2 = FUN_1801042d0(lVar6 + 8), iVar2 == 0)) {
    if (*(short *)(lVar6 + 0xc) != 0) {
      uVar4 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(lVar6 + 0xc),uVar4);
      if (*(longlong *)(lVar6 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(lVar6 + 0x10) = 0;
      }
    }
    (*unaff_x21)(0x180224000);
    (*extraout_x11_06)(lVar6);
  }
  *unaff_x20 = 0;
  return 0;
}

