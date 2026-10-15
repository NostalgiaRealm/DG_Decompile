/*
 * FUN_18014e868 at 18014e868
 * undefined FUN_18014e868(void)
 * Address ranges: 18014e868-18014e967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18014e868(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong in_stack_00000010;
  int in_stack_00000018;
  longlong in_stack_00000020;
  longlong in_stack_00000028;
  longlong in_stack_00000038;
  
  FUN_180210af8(*(longlong *)(in_stack_00000028 + 0x7710) + 0x40,&stack0x00000030,
                in_stack_00000010._4_4_ + 1,0,0);
  if (in_stack_00000038 != 0) {
    if (*(longlong *)(in_stack_00000020 + 0x68) != *(longlong *)(in_stack_00000020 + 0x60)) {
      *(int *)(in_stack_00000020 + 0x78) =
           (int)*(longlong *)(in_stack_00000020 + 0x68) -
           (int)*(undefined8 *)(in_stack_00000020 + 0x58);
    }
    *(longlong *)(in_stack_00000020 + 0x68) = param_1;
    *(longlong *)(in_stack_00000020 + 0x58) = param_1;
    *(longlong *)(in_stack_00000020 + 0x88) = in_stack_00000038;
    if ((in_stack_00000010 & 1) == 0) {
      iVar1 = *(int *)(in_stack_00000020 + 0x74) + *(int *)(in_stack_00000020 + 0x70);
      uVar2 = *(uint *)(in_stack_00000020 + 0x78);
      *(int *)(in_stack_00000020 + 0x70) = iVar1;
      uVar3 = uVar2;
      if ((in_stack_00000018 != 0) && (in_stack_00000018 != *(int *)(in_stack_00000020 + 0x80))) {
        uVar3 = iVar1 * in_stack_00000018;
        if (uVar3 < uVar2) {
          *(uint *)(in_stack_00000020 + 0x7c) = uVar2 - uVar3;
          uVar3 = uVar2;
        }
        else {
          *(undefined4 *)(in_stack_00000020 + 0x7c) = 0;
        }
      }
      param_1 = param_1 + (ulonglong)uVar3;
      *(longlong *)(in_stack_00000020 + 0x68) = param_1;
    }
    else {
      *(undefined4 *)(in_stack_00000020 + 0x70) = 0;
      *(undefined4 *)(in_stack_00000020 + 0x78) = 0;
      *(undefined4 *)(in_stack_00000020 + 0x7c) = 0;
    }
    if (in_stack_00000018 != 0) {
      *(int *)(in_stack_00000020 + 0x80) = in_stack_00000018;
    }
    *(longlong *)(in_stack_00000020 + 0x60) = param_1;
    *(undefined4 *)(in_stack_00000020 + 0x74) = 0;
    if ((in_stack_00000010 & 0x100000000) == 0) {
      uVar2 = *(int *)(in_stack_00000020 + 0x94) + *(int *)(in_stack_00000020 + 0x90);
      *(uint *)(in_stack_00000020 + 0x90) = uVar2;
      *(ulonglong *)(in_stack_00000020 + 0x88) = in_stack_00000038 + (ulonglong)uVar2 * 4;
    }
    else {
      *(undefined4 *)(in_stack_00000020 + 0x90) = 0;
    }
    *(undefined4 *)(in_stack_00000020 + 0x94) = 0;
    return 1;
  }
  if (*(int *)(*(longlong *)(in_stack_00000028 + 0x7718) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(in_stack_00000028 + 0x7718) + 0x34) = 0;
  }
  return 0;
}

