/*
 * FUN_18014ee14 at 18014ee14
 * undefined FUN_18014ee14(void)
 * Address ranges: 18014ee14-18014eee3;18014ef34-18014ef4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18014ee14(void)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  code *extraout_x11;
  longlong unaff_x19;
  longlong unaff_x20;
  code *unaff_x26;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uVar2 = (*unaff_x26)(0x180225000);
  (*extraout_x11)(uVar2,uStack0000000000000018,1,uStack000000000000001c,0);
  cVar1 = *(char *)(unaff_x20 + 0x674);
  *(undefined1 *)(unaff_x20 + 0x674) = 0;
  iVar3 = 8;
  if (cVar1 == '\0') {
    iVar3 = 1;
  }
  iVar3 = iVar3 + *(int *)(unaff_x20 + 0x678);
  *(int *)(unaff_x20 + 0x678) = iVar3;
  if (((*(int *)(unaff_x20 + 0x680) <= iVar3) && (*(longlong *)(unaff_x20 + 0xb10) != 0)) &&
     (*(int *)(unaff_x20 + 0x684) == 0)) {
    FUN_180207560(unaff_x20 + 8,0);
  }
  lVar4 = *(longlong *)(*(longlong *)(unaff_x19 + 0xf6e0) + 0x1508);
  iVar3 = *(int *)(lVar4 + 0x684) + -1;
  *(int *)(lVar4 + 0x684) = iVar3;
  if ((iVar3 == 0) && (*(int *)(lVar4 + 0x680) <= *(int *)(lVar4 + 0x678))) {
    FUN_180207560(lVar4 + 8,0);
  }
  FUN_18014e820();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  return 0;
}

