/*
 * FUN_18014ed88 at 18014ed88
 * undefined FUN_18014ed88(void)
 * Address ranges: 18014ed88-18014edcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18014ed88(void)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  int iVar4;
  longlong lVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong unaff_x19;
  longlong unaff_x20;
  ulonglong uVar6;
  code *unaff_x26;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  (*unaff_x26)(0x180224000);
  (*extraout_x11)();
  *(undefined4 *)(unaff_x20 + 0xb28) = 0;
  iVar4 = *(int *)(unaff_x20 + 0x67c);
  *(int *)(unaff_x20 + 0x67c) = iVar4 + 1;
  if (((iVar4 == 0) && (*(longlong *)(unaff_x20 + 0xb10) != 0)) &&
     (*(int *)(unaff_x20 + 0xba8) != 0)) {
    uVar3 = 0x180224000;
    uVar6 = 0;
    do {
      (*unaff_x26)(*(undefined8 *)(*(longlong *)(unaff_x20 + 0xba0) + uVar6 * 8),uVar3);
      (*extraout_x11_00)();
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
      uVar3 = extraout_x1;
    } while (uVar1 < *(uint *)(unaff_x20 + 0xba8));
  }
  uVar3 = (*unaff_x26)(0x180225000);
  (*extraout_x11_01)(uVar3,uStack0000000000000018,1,uStack000000000000001c,0);
  cVar2 = *(char *)(unaff_x20 + 0x674);
  *(undefined1 *)(unaff_x20 + 0x674) = 0;
  iVar4 = 8;
  if (cVar2 == '\0') {
    iVar4 = 1;
  }
  iVar4 = iVar4 + *(int *)(unaff_x20 + 0x678);
  *(int *)(unaff_x20 + 0x678) = iVar4;
  if (((*(int *)(unaff_x20 + 0x680) <= iVar4) && (*(longlong *)(unaff_x20 + 0xb10) != 0)) &&
     (*(int *)(unaff_x20 + 0x684) == 0)) {
    FUN_180207560(unaff_x20 + 8,0);
  }
  lVar5 = *(longlong *)(*(longlong *)(unaff_x19 + 0xf6e0) + 0x1508);
  iVar4 = *(int *)(lVar5 + 0x684) + -1;
  *(int *)(lVar5 + 0x684) = iVar4;
  if ((iVar4 == 0) && (*(int *)(lVar5 + 0x680) <= *(int *)(lVar5 + 0x678))) {
    FUN_180207560(lVar5 + 8,0);
  }
  FUN_18014e820();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  return 0;
}

