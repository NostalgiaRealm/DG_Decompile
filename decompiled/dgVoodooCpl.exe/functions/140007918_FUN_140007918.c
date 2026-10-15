/*
 * FUN_140007918 at 140007918
 * undefined8 __fastcall FUN_140007918(longlong param_1, int param_2)
 * Address ranges: 140007918-140007a5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140007918(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == 0x3eb) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x3eb);
    if (uVar1 <= *(uint *)(*(longlong *)(param_1 + 0x10) + 0x250)) {
      uVar2 = FUN_14000e270(param_1 + -0x78,0x3eb,(ulonglong)uVar1);
      **(undefined4 **)(param_1 + 0x10) = uVar2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x260) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x26a) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x286) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2b6) = 1;
      (**(code **)**(undefined8 **)(param_1 + 0x18))();
    }
    goto LAB_140007a43;
  }
  if (param_2 == 0x3ec) {
    iVar3 = FUN_14000e460(param_1 + -0x78,0x3ec);
    *(int *)(*(longlong *)(param_1 + 0x10) + 4) = iVar3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x260) = 1;
LAB_1400079cc:
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2b6) = 1;
  }
  else {
    if (param_2 == 0x3ee) {
      iVar3 = FUN_14000e460(param_1 + -0x78,0x3ee);
      *(int *)(*(longlong *)(param_1 + 0x10) + 8) = iVar3;
      goto LAB_1400079cc;
    }
    if (param_2 != 0x3ef) goto LAB_140007a43;
    uVar1 = FUN_14000e460(param_1 + -0x78,0x3ef);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x3ef,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1c) = uVar2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x28f) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x28e) = 1;
  }
  (**(code **)**(undefined8 **)(param_1 + 0x18))();
LAB_140007a43:
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}

