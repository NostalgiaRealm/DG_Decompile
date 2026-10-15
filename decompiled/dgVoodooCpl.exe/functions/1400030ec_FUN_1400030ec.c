/*
 * FUN_1400030ec at 1400030ec
 * undefined8 __fastcall FUN_1400030ec(longlong param_1, int param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 1400030ec-14000336a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400030ec(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (0x41b < param_2) {
    if (param_2 == 0x41c) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x41c);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x41c,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1d3) = uVar2;
    }
    else if (param_2 == 0x41d) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x41d);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x41d,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1d7) = uVar2;
    }
    else if (param_2 == 0x41e) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x41e);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x41e,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1db) = uVar2;
    }
    else if (param_2 == 0x41f) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x41f);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x41f,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1eb) = uVar2;
    }
    goto LAB_14000334c;
  }
  if (param_2 == 0x41b) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x41b);
    uVar5 = (ulonglong)uVar1;
    lVar4 = FUN_14000e270(param_1 + -0x78,0x41b,uVar5);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x1cb) = (int)lVar4;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a9) = 1;
  }
  else {
    if (param_2 == 0x3f6) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x3f6);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x3f6,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xfb) = uVar2;
      goto LAB_14000334c;
    }
    if (param_2 == 0x3fa) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x3fa);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x3fa,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1df) = uVar2;
      goto LAB_14000334c;
    }
    if (param_2 == 0x410) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x410);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x410,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1e7) = uVar2;
      goto LAB_14000334c;
    }
    if (param_2 != 0x411) {
      if (param_2 == 0x419) {
        uVar1 = FUN_14000e460(param_1 + -0x78,0x419);
        uVar2 = FUN_14000e270(param_1 + -0x78,0x419,(ulonglong)uVar1);
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xf7) = uVar2;
      }
      goto LAB_14000334c;
    }
    uVar1 = FUN_14000e460(param_1 + -0x78,0x411);
    uVar5 = (ulonglong)uVar1;
    uVar2 = FUN_14000e270(param_1 + -0x78,0x411,uVar5);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1cf) = uVar2;
    lVar4 = 0;
    do {
      *(undefined1 *)(lVar4 + 0x2a8 + *(longlong *)(param_1 + 0x10)) = 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2);
  }
  FUN_1400034d8(param_1 + -0x78,lVar4,uVar5,param_4);
LAB_14000334c:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

