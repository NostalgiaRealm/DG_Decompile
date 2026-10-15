/*
 * FUN_180145d68 at 180145d68
 * undefined FUN_180145d68(void)
 * Address ranges: 180145d68-180145de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180145d68(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong in_x9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong unaff_x19;
  int unaff_w20;
  code *unaff_x21;
  undefined4 unaff_w22;
  longlong unaff_x25;
  longlong unaff_x26;
  longlong lVar3;
  longlong in_stack_00000018;
  undefined8 in_stack_00000020;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  longlong in_stack_00000048;
  
  lStack0000000000000030 = param_1;
  lStack0000000000000038 = in_x9;
  do {
    *(undefined4 *)(lStack0000000000000038 + param_2 * 4) = unaff_w22;
    lVar3 = *(longlong *)(*(longlong *)(unaff_x25 + 0x76e0) + 0x1930);
    uVar1 = (*unaff_x21)(0x180224000);
    (*extraout_x11)(uVar1,&stack0x00000018);
    in_stack_00000018 = in_stack_00000018 + (ulonglong)(uint)(*(int *)(lVar3 + 0x20) * unaff_w20);
    *(longlong *)(lStack0000000000000030 + param_2 * 8) = in_stack_00000018;
    param_2 = param_2 + 1;
  } while (param_2 != 0x10);
  *(undefined4 *)(unaff_x26 + 0x3bc0) = unaff_w22;
  lVar3 = *(longlong *)(*(longlong *)(unaff_x25 + 0x76e0) + 0x1930);
  uVar1 = (*unaff_x21)(0x180224000);
  (*extraout_x11_00)(uVar1,&stack0x00000010);
  lVar3 = unaff_x19 + (ulonglong)(uint)(*(int *)(lVar3 + 0x20) * unaff_w20);
  *(longlong *)(unaff_x25 + 0x7bd8) = lVar3;
  *(undefined4 *)(unaff_x26 + 0x3bc4) = unaff_w22;
  lVar2 = *(longlong *)(*(longlong *)(unaff_x25 + 0x76e0) + 0x1930);
  uVar1 = (*unaff_x21)(0x180224000);
  (*extraout_x11_01)(uVar1,&stack0x00000010);
  lVar3 = lVar3 + (ulonglong)(uint)(*(int *)(lVar2 + 0x20) * unaff_w20);
  *(longlong *)(unaff_x25 + 0x7be0) = lVar3;
  *(undefined4 *)(unaff_x26 + 0x3bc8) = unaff_w22;
  lVar2 = *(longlong *)(*(longlong *)(unaff_x25 + 0x76e0) + 0x1930);
  uVar1 = (*unaff_x21)(0x180224000);
  (*extraout_x11_02)(uVar1,&stack0x00000010);
  lVar3 = lVar3 + (ulonglong)(uint)(*(int *)(lVar2 + 0x20) * unaff_w20);
  *(longlong *)(unaff_x25 + 0x7be8) = lVar3;
  *(undefined4 *)(unaff_x26 + 0x3bcc) = unaff_w22;
  lVar2 = *(longlong *)(*(longlong *)(unaff_x25 + 0x76e0) + 0x1930);
  uVar1 = (*unaff_x21)(0x180224000);
  (*extraout_x11_03)(uVar1,&stack0x00000010);
  lVar3 = lVar3 + (ulonglong)(uint)(*(int *)(lVar2 + 0x20) * unaff_w20);
  *(longlong *)(unaff_x25 + 0x7bf0) = lVar3;
  *(undefined4 *)(unaff_x26 + 0x3bd0) = unaff_w22;
  lVar2 = *(longlong *)(*(longlong *)(unaff_x25 + 0x76e0) + 0x1930);
  uVar1 = (*unaff_x21)(0x180224000);
  (*extraout_x11_04)(uVar1,&stack0x00000010);
  *(ulonglong *)(unaff_x25 + 0x7bf8) = lVar3 + (ulonglong)(uint)(*(int *)(lVar2 + 0x20) * unaff_w20)
  ;
  *(undefined4 *)(unaff_x26 + 0x3950) = 1;
  *(undefined8 *)(unaff_x25 + 0x7958) = 0;
  *(undefined8 *)(unaff_x25 + 0x7960) = 0;
  *(undefined8 *)(unaff_x25 + 0x7968) = 0;
  *(undefined8 *)(unaff_x25 + 0x7970) = 0;
  lVar3 = *(longlong *)(unaff_x25 + 0x7718);
  *(undefined4 *)(unaff_x26 + 0x3fc4) = 0;
  *(longlong *)(unaff_x25 + 0x7f38) = lVar3;
  *(undefined8 *)(unaff_x25 + 0x7fb8) = *(undefined8 *)(unaff_x25 + 0x7710);
  *(undefined8 *)(unaff_x25 + 0x7788) = *(undefined8 *)(unaff_x25 + 0x76e0);
  FUN_180210af8(lVar3 + 0x40,&stack0x00000040,2,0,0);
  lVar3 = in_stack_00000048;
  if (in_stack_00000048 != 0) {
    FUN_180210af8(*(longlong *)(unaff_x25 + 0x7710) + 0x40,&stack0x00000040,2,0,0);
    if (in_stack_00000048 != 0) {
      *(longlong *)(unaff_x19 + 0x68) = lVar3;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      *(undefined4 *)(unaff_x19 + 0x78) = 0;
      *(undefined4 *)(unaff_x19 + 0x7c) = 0;
      *(longlong *)(unaff_x19 + 0x58) = lVar3;
      *(longlong *)(unaff_x19 + 0x60) = lVar3;
      *(longlong *)(unaff_x19 + 0x88) = in_stack_00000048;
      *(undefined8 *)(unaff_x19 + 0x90) = 0;
      return 1;
    }
    if (*(int *)(*(longlong *)(unaff_x25 + 0x7718) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(unaff_x25 + 0x7718) + 0x34) = 0;
    }
  }
  return 1;
}

