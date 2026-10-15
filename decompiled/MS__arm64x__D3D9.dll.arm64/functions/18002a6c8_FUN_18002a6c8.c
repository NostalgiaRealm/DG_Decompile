/*
 * FUN_18002a6c8 at 18002a6c8
 * undefined FUN_18002a6c8(void)
 * Address ranges: 18002a6c8-18002a7bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002a6c8(void)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong unaff_x19;
  longlong unaff_x20;
  ulonglong unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  longlong lVar5;
  longlong in_stack_00000010;
  
  lVar5 = in_stack_00000010;
  plVar3 = *(longlong **)(*(longlong *)(unaff_x20 + 0x76d8) + 8);
  iVar2 = (**(code **)(*plVar3 + 0x70))
                    (plVar3,*(undefined8 *)(unaff_x20 + 0x7710),0,unaff_w22 ^ 1 | 4,0,
                     &stack0x00000010);
  if (-1 < iVar2) {
    if (*(longlong *)(unaff_x19 + 0x68) != *(longlong *)(unaff_x19 + 0x60)) {
      *(int *)(unaff_x19 + 0x78) =
           (int)*(longlong *)(unaff_x19 + 0x68) - (int)*(undefined8 *)(unaff_x19 + 0x58);
    }
    *(longlong *)(unaff_x19 + 0x68) = lVar5;
    *(longlong *)(unaff_x19 + 0x58) = lVar5;
    *(longlong *)(unaff_x19 + 0x88) = in_stack_00000010;
    if ((unaff_x21 & 1) == 0) {
      iVar2 = *(int *)(unaff_x19 + 0x74) + *(int *)(unaff_x19 + 0x70);
      uVar1 = *(uint *)(unaff_x19 + 0x78);
      *(int *)(unaff_x19 + 0x70) = iVar2;
      uVar4 = uVar1;
      if ((unaff_w23 != 0) && (unaff_w23 != *(int *)(unaff_x19 + 0x80))) {
        uVar4 = iVar2 * unaff_w23;
        if (uVar4 < uVar1) {
          *(uint *)(unaff_x19 + 0x7c) = uVar1 - uVar4;
          uVar4 = uVar1;
        }
        else {
          *(undefined4 *)(unaff_x19 + 0x7c) = 0;
        }
      }
      lVar5 = lVar5 + (ulonglong)uVar4;
      *(longlong *)(unaff_x19 + 0x68) = lVar5;
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x70) = 0;
      *(undefined4 *)(unaff_x19 + 0x78) = 0;
      *(undefined4 *)(unaff_x19 + 0x7c) = 0;
    }
    if (unaff_w23 != 0) {
      *(int *)(unaff_x19 + 0x80) = unaff_w23;
    }
    *(longlong *)(unaff_x19 + 0x60) = lVar5;
    *(undefined4 *)(unaff_x19 + 0x74) = 0;
    if ((unaff_w22 & 1) == 0) {
      uVar1 = *(int *)(unaff_x19 + 0x94) + *(int *)(unaff_x19 + 0x90);
      *(uint *)(unaff_x19 + 0x90) = uVar1;
      *(ulonglong *)(unaff_x19 + 0x88) = in_stack_00000010 + (ulonglong)uVar1 * 4;
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x90) = 0;
    }
    *(undefined4 *)(unaff_x19 + 0x94) = 0;
    return 1;
  }
  plVar3 = *(longlong **)(*(longlong *)(unaff_x20 + 0x76d8) + 8);
  (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(unaff_x20 + 0x7718),0);
  return 0;
}

