/*
 * FUN_18003fd8c at 18003fd8c
 * undefined FUN_18003fd8c(void)
 * Address ranges: 18003fd8c-18003fe6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003fd8c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong unaff_x19;
  ulonglong unaff_x20;
  uint unaff_w21;
  longlong unaff_x22;
  int unaff_w23;
  longlong in_stack_00000018;
  
  FUN_1800eef60(*(longlong *)(unaff_x22 + 0x7710) + 0x40,&stack0x00000010,unaff_w21 + 1,0,0);
  if (in_stack_00000018 != 0) {
    if (*(longlong *)(unaff_x19 + 0x68) != *(longlong *)(unaff_x19 + 0x60)) {
      *(int *)(unaff_x19 + 0x78) =
           (int)*(longlong *)(unaff_x19 + 0x68) - (int)*(undefined8 *)(unaff_x19 + 0x58);
    }
    *(longlong *)(unaff_x19 + 0x68) = param_1;
    *(longlong *)(unaff_x19 + 0x58) = param_1;
    *(longlong *)(unaff_x19 + 0x88) = in_stack_00000018;
    if ((unaff_x20 & 1) == 0) {
      iVar1 = *(int *)(unaff_x19 + 0x74) + *(int *)(unaff_x19 + 0x70);
      uVar2 = *(uint *)(unaff_x19 + 0x78);
      *(int *)(unaff_x19 + 0x70) = iVar1;
      uVar3 = uVar2;
      if ((unaff_w23 != 0) && (unaff_w23 != *(int *)(unaff_x19 + 0x80))) {
        uVar3 = iVar1 * unaff_w23;
        if (uVar3 < uVar2) {
          *(uint *)(unaff_x19 + 0x7c) = uVar2 - uVar3;
          uVar3 = uVar2;
        }
        else {
          *(undefined4 *)(unaff_x19 + 0x7c) = 0;
        }
      }
      param_1 = param_1 + (ulonglong)uVar3;
      *(longlong *)(unaff_x19 + 0x68) = param_1;
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x70) = 0;
      *(undefined4 *)(unaff_x19 + 0x78) = 0;
      *(undefined4 *)(unaff_x19 + 0x7c) = 0;
    }
    if (unaff_w23 != 0) {
      *(int *)(unaff_x19 + 0x80) = unaff_w23;
    }
    *(longlong *)(unaff_x19 + 0x60) = param_1;
    *(undefined4 *)(unaff_x19 + 0x74) = 0;
    if ((unaff_w21 & 1) == 0) {
      uVar2 = *(int *)(unaff_x19 + 0x94) + *(int *)(unaff_x19 + 0x90);
      *(uint *)(unaff_x19 + 0x90) = uVar2;
      *(ulonglong *)(unaff_x19 + 0x88) = in_stack_00000018 + (ulonglong)uVar2 * 4;
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x90) = 0;
    }
    *(undefined4 *)(unaff_x19 + 0x94) = 0;
    return 1;
  }
  if (*(int *)(*(longlong *)(unaff_x22 + 0x7718) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(unaff_x22 + 0x7718) + 0x34) = 0;
  }
  return 0;
}

