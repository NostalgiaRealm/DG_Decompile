/*
 * FUN_180040224 at 180040224
 * undefined FUN_180040224(void)
 * Address ranges: 180040224-18004025b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180040224(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_x19;
  longlong unaff_x20;
  undefined4 unaff_w21;
  ulonglong uVar5;
  undefined8 in_stack_00000010;
  
  (**(code **)(**(longlong **)(unaff_x20 + 0x688) + 0xd0))();
  *(undefined4 *)(unaff_x20 + 0xb28) = 0;
  iVar3 = *(int *)(unaff_x20 + 0x67c);
  *(int *)(unaff_x20 + 0x67c) = iVar3 + 1;
  if (((iVar3 == 0) && (*(longlong *)(unaff_x20 + 0xb10) != 0)) &&
     (*(int *)(unaff_x20 + 0xba8) != 0)) {
    uVar5 = 0;
    do {
      (**(code **)**(undefined8 **)(*(longlong *)(unaff_x20 + 0xba0) + uVar5 * 8))();
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(unaff_x20 + 0xba8));
  }
  (**(code **)(**(longlong **)(unaff_x20 + 0x688) + 0x60))
            (*(longlong **)(unaff_x20 + 0x688),unaff_w21,1,in_stack_00000010._4_4_,0);
  cVar2 = *(char *)(unaff_x20 + 0x674);
  *(undefined1 *)(unaff_x20 + 0x674) = 0;
  iVar3 = 8;
  if (cVar2 == '\0') {
    iVar3 = 1;
  }
  iVar3 = iVar3 + *(int *)(unaff_x20 + 0x678);
  *(int *)(unaff_x20 + 0x678) = iVar3;
  if (((*(int *)(unaff_x20 + 0x680) <= iVar3) && (*(longlong *)(unaff_x20 + 0xb10) != 0)) &&
     (*(int *)(unaff_x20 + 0x684) == 0)) {
    FUN_1800e8548(unaff_x20 + 8,0);
  }
  lVar4 = *(longlong *)(*(longlong *)(unaff_x19 + 0xf6e0) + 0x1508);
  iVar3 = *(int *)(lVar4 + 0x684) + -1;
  *(int *)(lVar4 + 0x684) = iVar3;
  if ((iVar3 == 0) && (*(int *)(lVar4 + 0x680) <= *(int *)(lVar4 + 0x678))) {
    FUN_1800e8548(lVar4 + 8,0);
  }
  FUN_18003fd40();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  return 0;
}

