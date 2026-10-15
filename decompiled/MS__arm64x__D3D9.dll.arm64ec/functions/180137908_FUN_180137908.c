/*
 * FUN_180137908 at 180137908
 * undefined FUN_180137908(void)
 * Address ranges: 180137908-180137a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180137908(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong unaff_x19;
  code *unaff_x20;
  longlong lVar5;
  ulonglong in_stack_00000010;
  int in_stack_00000018;
  longlong in_stack_00000020;
  longlong in_stack_00000028;
  
  uVar3 = (*unaff_x20)(0x180224000);
  iVar2 = (*extraout_x11)(uVar3,*(undefined8 *)(unaff_x19 + 0x7710),0);
  if (-1 < iVar2) {
    if (*(longlong *)(in_stack_00000020 + 0x68) != *(longlong *)(in_stack_00000020 + 0x60)) {
      *(int *)(in_stack_00000020 + 0x78) =
           (int)*(longlong *)(in_stack_00000020 + 0x68) -
           (int)*(undefined8 *)(in_stack_00000020 + 0x58);
    }
    *(longlong *)(in_stack_00000020 + 0x68) = in_stack_00000028;
    *(longlong *)(in_stack_00000020 + 0x58) = in_stack_00000028;
    *(longlong *)(in_stack_00000020 + 0x88) = in_stack_00000028;
    if ((in_stack_00000010 & 1) == 0) {
      iVar2 = *(int *)(in_stack_00000020 + 0x74) + *(int *)(in_stack_00000020 + 0x70);
      uVar1 = *(uint *)(in_stack_00000020 + 0x78);
      *(int *)(in_stack_00000020 + 0x70) = iVar2;
      uVar4 = uVar1;
      if ((in_stack_00000018 != 0) && (in_stack_00000018 != *(int *)(in_stack_00000020 + 0x80))) {
        uVar4 = iVar2 * in_stack_00000018;
        if (uVar4 < uVar1) {
          *(uint *)(in_stack_00000020 + 0x7c) = uVar1 - uVar4;
          uVar4 = uVar1;
        }
        else {
          *(undefined4 *)(in_stack_00000020 + 0x7c) = 0;
        }
      }
      lVar5 = in_stack_00000028 + (ulonglong)uVar4;
      *(longlong *)(in_stack_00000020 + 0x68) = lVar5;
    }
    else {
      *(undefined4 *)(in_stack_00000020 + 0x70) = 0;
      *(undefined4 *)(in_stack_00000020 + 0x78) = 0;
      *(undefined4 *)(in_stack_00000020 + 0x7c) = 0;
      lVar5 = in_stack_00000028;
    }
    if (in_stack_00000018 != 0) {
      *(int *)(in_stack_00000020 + 0x80) = in_stack_00000018;
    }
    *(longlong *)(in_stack_00000020 + 0x60) = lVar5;
    *(undefined4 *)(in_stack_00000020 + 0x74) = 0;
    if ((in_stack_00000010 & 0x100000000) == 0) {
      uVar1 = *(int *)(in_stack_00000020 + 0x94) + *(int *)(in_stack_00000020 + 0x90);
      *(uint *)(in_stack_00000020 + 0x90) = uVar1;
      *(ulonglong *)(in_stack_00000020 + 0x88) = in_stack_00000028 + (ulonglong)uVar1 * 4;
    }
    else {
      *(undefined4 *)(in_stack_00000020 + 0x90) = 0;
    }
    *(undefined4 *)(in_stack_00000020 + 0x94) = 0;
    return 1;
  }
  uVar3 = (*unaff_x20)(0x180224000);
  (*extraout_x11_00)(uVar3,*(undefined8 *)(unaff_x19 + 0x7718),0);
  return 0;
}

