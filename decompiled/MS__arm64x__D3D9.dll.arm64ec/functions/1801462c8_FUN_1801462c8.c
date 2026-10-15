/*
 * FUN_1801462c8 at 1801462c8
 * undefined FUN_1801462c8(void)
 * Address ranges: 1801462c8-180146303;180146340-18014644b;180146454-18014646f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801462c8(void)

{
  int iVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong unaff_x19;
  longlong lVar3;
  longlong *unaff_x20;
  code *unaff_x21;
  longlong unaff_x25;
  longlong unaff_x26;
  
  FUN_1802229d8(*(undefined8 *)(unaff_x26 + 0x10));
  *(undefined8 *)(unaff_x26 + 0x10) = 0;
  *(undefined8 *)(unaff_x26 + 0x18) = 0;
  thunk_FUN_180223824(*(undefined8 *)(unaff_x26 + 0x30));
  *(undefined8 *)(unaff_x26 + 0x30) = 0;
  FUN_1802229d8(*(undefined8 *)(unaff_x26 + 0x10));
  FUN_1802229d8();
  *(undefined8 *)(unaff_x25 + 0x7820) = 0;
  FUN_1801517e0();
  (*unaff_x21)(0x180224000);
  (*extraout_x11)();
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
  lVar3 = *unaff_x20;
  if ((lVar3 != 0) && (iVar1 = FUN_1801042d0(lVar3 + 8), iVar1 == 0)) {
    if (*(short *)(lVar3 + 0xc) != 0) {
      uVar2 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(lVar3 + 0xc),uVar2);
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
    }
    (*unaff_x21)(0x180224000);
    (*extraout_x11_00)(lVar3);
  }
  *unaff_x20 = 0;
  return 0;
}

