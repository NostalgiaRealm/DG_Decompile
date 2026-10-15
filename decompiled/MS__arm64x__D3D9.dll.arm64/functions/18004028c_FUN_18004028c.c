/*
 * FUN_18004028c at 18004028c
 * undefined FUN_18004028c(void)
 * Address ranges: 18004028c-180040353;1800403a4-1800403bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004028c(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_x19;
  longlong unaff_x20;
  undefined4 unaff_w21;
  undefined8 in_stack_00000010;
  
  (**(code **)(**(longlong **)(unaff_x20 + 0x688) + 0x60))
            (*(longlong **)(unaff_x20 + 0x688),unaff_w21,1,in_stack_00000010._4_4_,0);
  cVar1 = *(char *)(unaff_x20 + 0x674);
  *(undefined1 *)(unaff_x20 + 0x674) = 0;
  iVar2 = 8;
  if (cVar1 == '\0') {
    iVar2 = 1;
  }
  iVar2 = iVar2 + *(int *)(unaff_x20 + 0x678);
  *(int *)(unaff_x20 + 0x678) = iVar2;
  if (((*(int *)(unaff_x20 + 0x680) <= iVar2) && (*(longlong *)(unaff_x20 + 0xb10) != 0)) &&
     (*(int *)(unaff_x20 + 0x684) == 0)) {
    FUN_1800e8548(unaff_x20 + 8,0);
  }
  lVar3 = *(longlong *)(*(longlong *)(unaff_x19 + 0xf6e0) + 0x1508);
  iVar2 = *(int *)(lVar3 + 0x684) + -1;
  *(int *)(lVar3 + 0x684) = iVar2;
  if ((iVar2 == 0) && (*(int *)(lVar3 + 0x680) <= *(int *)(lVar3 + 0x678))) {
    FUN_1800e8548(lVar3 + 8,0);
  }
  FUN_18003fd40();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  return 0;
}

