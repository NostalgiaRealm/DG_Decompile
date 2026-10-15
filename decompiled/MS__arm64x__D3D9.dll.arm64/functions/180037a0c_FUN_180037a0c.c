/*
 * FUN_180037a0c at 180037a0c
 * undefined FUN_180037a0c(void)
 * Address ranges: 180037a0c-180037a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180037a0c(longlong param_1,undefined8 param_2,longlong param_3,int param_4,longlong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_x19;
  undefined4 unaff_w20;
  longlong unaff_x21;
  longlong unaff_x22;
  longlong lVar3;
  longlong in_stack_00000010;
  longlong in_stack_00000018;
  int in_stack_00000020;
  longlong in_stack_00000028;
  longlong in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000048;
  
  do {
    *(undefined4 *)(param_3 + unaff_x22 * 4) = unaff_w20;
    lVar3 = *(longlong *)(*(longlong *)(unaff_x21 + 0x76e0) + 0x1930);
    plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x50) + param_5);
    (**(code **)(*plVar2 + 0x48))(plVar2,&stack0x00000018);
    lVar1 = in_stack_00000030;
    in_stack_00000018 = in_stack_00000018 + (ulonglong)(uint)(*(int *)(lVar3 + 0x20) * param_4);
    *(longlong *)(unaff_x19 + param_1 + unaff_x22 * 8) = in_stack_00000018;
    unaff_x22 = unaff_x22 + 1;
  } while (unaff_x22 != 0x10);
  in_stack_00000038 = in_stack_00000030;
  *(undefined4 *)(in_stack_00000030 + 0x3bc0) = unaff_w20;
  in_stack_00000028 = *(longlong *)(*(longlong *)(unaff_x21 + 0x76e0) + 0x1930);
  in_stack_00000018 = in_stack_00000010;
  plVar2 = *(longlong **)(*(longlong *)(in_stack_00000028 + 0x50) + in_stack_00000010);
  (**(code **)(*plVar2 + 0x48))(plVar2,&stack0x00000010);
  in_stack_00000010 =
       in_stack_00000010 + (ulonglong)(uint)(*(int *)(in_stack_00000028 + 0x20) * in_stack_00000020)
  ;
  *(longlong *)(unaff_x21 + 0x7bd8) = in_stack_00000010;
  *(undefined4 *)(lVar1 + 0x3bc4) = unaff_w20;
  in_stack_00000028 = *(longlong *)(*(longlong *)(unaff_x21 + 0x76e0) + 0x1930);
  plVar2 = *(longlong **)(*(longlong *)(in_stack_00000028 + 0x50) + in_stack_00000018);
  (**(code **)(*plVar2 + 0x48))(plVar2,&stack0x00000010);
  in_stack_00000010 =
       in_stack_00000010 + (ulonglong)(uint)(*(int *)(in_stack_00000028 + 0x20) * in_stack_00000020)
  ;
  *(longlong *)(unaff_x21 + 0x7be0) = in_stack_00000010;
  *(undefined4 *)(lVar1 + 0x3bc8) = unaff_w20;
  in_stack_00000028 = *(longlong *)(*(longlong *)(unaff_x21 + 0x76e0) + 0x1930);
  plVar2 = *(longlong **)(*(longlong *)(in_stack_00000028 + 0x50) + in_stack_00000018);
  (**(code **)(*plVar2 + 0x48))(plVar2,&stack0x00000010);
  in_stack_00000010 =
       in_stack_00000010 + (ulonglong)(uint)(*(int *)(in_stack_00000028 + 0x20) * in_stack_00000020)
  ;
  *(longlong *)(unaff_x21 + 0x7be8) = in_stack_00000010;
  *(undefined4 *)(lVar1 + 0x3bcc) = unaff_w20;
  lVar3 = *(longlong *)(*(longlong *)(unaff_x21 + 0x76e0) + 0x1930);
  plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x50) + in_stack_00000018);
  (**(code **)(*plVar2 + 0x48))(plVar2,&stack0x00000010);
  lVar1 = in_stack_00000038;
  in_stack_00000010 =
       in_stack_00000010 + (ulonglong)(uint)(*(int *)(lVar3 + 0x20) * in_stack_00000020);
  *(longlong *)(unaff_x21 + 0x7bf0) = in_stack_00000010;
  *(undefined4 *)(in_stack_00000038 + 0x3bd0) = unaff_w20;
  lVar3 = *(longlong *)(*(longlong *)(unaff_x21 + 0x76e0) + 0x1930);
  plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x50) + in_stack_00000018);
  (**(code **)(*plVar2 + 0x48))(plVar2,&stack0x00000010);
  *(ulonglong *)(unaff_x21 + 0x7bf8) =
       in_stack_00000010 + (ulonglong)(uint)(*(int *)(lVar3 + 0x20) * in_stack_00000020);
  *(undefined4 *)(lVar1 + 0x3950) = 1;
  *(undefined8 *)(unaff_x21 + 0x7958) = 0;
  *(undefined8 *)(unaff_x21 + 0x7960) = 0;
  *(undefined8 *)(unaff_x21 + 0x7968) = 0;
  *(undefined8 *)(unaff_x21 + 0x7970) = 0;
  lVar3 = *(longlong *)(unaff_x21 + 0x7718);
  *(undefined4 *)(lVar1 + 0x3fc4) = 0;
  *(longlong *)(unaff_x21 + 0x7f38) = lVar3;
  *(undefined8 *)(unaff_x21 + 0x7fb8) = *(undefined8 *)(unaff_x21 + 0x7710);
  *(undefined8 *)(unaff_x21 + 0x7788) = *(undefined8 *)(unaff_x21 + 0x76e0);
  FUN_1800eef60(lVar3 + 0x40,&stack0x00000040,2,0,0);
  lVar1 = in_stack_00000048;
  if (in_stack_00000048 != 0) {
    FUN_1800eef60(*(longlong *)(unaff_x21 + 0x7710) + 0x40,&stack0x00000040,2,0,0);
    if (in_stack_00000048 != 0) {
      *(longlong *)(unaff_x19 + 0x68) = lVar1;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      *(undefined4 *)(unaff_x19 + 0x78) = 0;
      *(undefined4 *)(unaff_x19 + 0x7c) = 0;
      *(longlong *)(unaff_x19 + 0x58) = lVar1;
      *(longlong *)(unaff_x19 + 0x60) = lVar1;
      *(longlong *)(unaff_x19 + 0x88) = in_stack_00000048;
      *(undefined8 *)(unaff_x19 + 0x90) = 0;
      return 1;
    }
    if (*(int *)(*(longlong *)(unaff_x21 + 0x7718) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(unaff_x21 + 0x7718) + 0x34) = 0;
    }
  }
  return 1;
}

