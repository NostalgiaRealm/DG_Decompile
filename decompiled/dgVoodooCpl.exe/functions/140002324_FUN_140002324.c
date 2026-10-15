/*
 * FUN_140002324 at 140002324
 * undefined4 __fastcall FUN_140002324(longlong param_1, int param_2)
 * Address ranges: 140002324-140002413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_140002324(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x40f) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x40f);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x40f,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1fb) = uVar2;
  }
  else if (param_2 == 0x410) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x410);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x410,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1ff) = uVar2;
  }
  else if (param_2 == 0x411) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x411);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x411,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x203) = uVar2;
  }
  else if (param_2 == 0x412) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x412);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x412,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x207) = uVar2;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

