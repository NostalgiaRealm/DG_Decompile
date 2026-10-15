/*
 * FUN_140007038 at 140007038
 * undefined8 __cdecl FUN_140007038(longlong param_1, int param_2)
 * Address ranges: 140007038-14000703b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140007038(longlong param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_2 == 0x3eb) {
    uVar2 = FUN_14000ffb8(param_1 + -0x78,0x3eb);
    if (*(uint *)(*(longlong *)(param_1 + 0x10) + 0x250) < uVar2) goto LAB_140007150;
    uVar1 = FUN_14000fd78(param_1 + -0x78,0x3eb,(ulonglong)uVar2);
    **(undefined4 **)(param_1 + 0x10) = uVar1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x260) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x26a) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x286) = 1;
LAB_140007138:
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2b6) = 1;
  }
  else {
    if (param_2 == 0x3ec) {
      uVar1 = FUN_14000ffb8(param_1 + -0x78,0x3ec);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = uVar1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x260) = 1;
      goto LAB_140007138;
    }
    if (param_2 == 0x3ee) {
      uVar1 = FUN_14000ffb8(param_1 + -0x78,0x3ee);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2b6) = 1;
    }
    else {
      if (param_2 != 0x3ef) goto LAB_140007150;
      uVar3 = FUN_14000ffb8(param_1 + -0x78,0x3ef);
      uVar1 = FUN_14000fd78(param_1 + -0x78,0x3ef,uVar3 & 0xffffffff);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1c) = uVar1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x28f) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x28e) = 1;
    }
  }
  (**(code **)**(undefined8 **)(param_1 + 0x18))();
LAB_140007150:
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return 1;
}

