/*
 * FUN_140008804 at 140008804
 * undefined8 __fastcall FUN_140008804(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140008804-1400088f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140008804(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0x40c) {
    uVar1 = FUN_14000e460(param_1 + -0x70,0x40c);
    uVar5 = (ulonglong)uVar1;
    uVar2 = FUN_14000e270(param_1 + -0x70,0x40c,uVar5);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xeb) = uVar2;
    lVar3 = 0;
    do {
      *(undefined1 *)(lVar3 + 0x29d + *(longlong *)(param_1 + 8)) = 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2);
  }
  else {
    if (param_2 != 0x40d) {
      if (param_2 == 0x40e) {
        uVar1 = FUN_14000e460(param_1 + -0x70,0x40e);
        uVar2 = FUN_14000e270(param_1 + -0x70,0x40e,(ulonglong)uVar1);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xef) = uVar2;
      }
      goto LAB_1400088e0;
    }
    uVar1 = FUN_14000e460(param_1 + -0x70,0x40d);
    uVar5 = (ulonglong)uVar1;
    lVar3 = FUN_14000e270(param_1 + -0x70,0x40d,uVar5);
    *(int *)(*(longlong *)(param_1 + 8) + 0xe7) = (int)lVar3;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29e) = 1;
  }
  FUN_1400088fc(param_1 + -0x70,lVar3,uVar5,param_4);
LAB_1400088e0:
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}

