/*
 * FUN_18007ec50 at 18007ec50
 * undefined FUN_18007ec50(void)
 * Address ranges: 18007ec50-18007ed7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18007ec50(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_60 [20];
  int local_4c;
  
  plVar2 = *(longlong **)(param_4 + 0x80);
  iVar6 = 1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(param_4 + 0x78);
  }
  (**(code **)(*plVar2 + 0x50))(plVar2,auStack_60);
  iVar1 = 1;
  if (local_4c != 1) {
    if (local_4c == 2) {
      uVar3 = 0x10;
      goto LAB_18007ecc8;
    }
    if (local_4c == 4) {
      uVar3 = 0x11;
      goto LAB_18007ecc8;
    }
    if (local_4c == 8) {
      uVar3 = 0x12;
      goto LAB_18007ecc8;
    }
    if (local_4c == 0x10) {
      uVar3 = 0x13;
      goto LAB_18007ecc8;
    }
    iVar1 = 0;
  }
  iVar6 = iVar1;
  uVar3 = 0xf;
LAB_18007ecc8:
  if (*(longlong *)(param_4 + 0x88) == 0) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x80);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_3 + 0x78);
    }
    uVar5 = (ulonglong)
            (uint)(*(int *)(param_2 + 0x20) + *(int *)(param_3 + 0x3c) * *(int *)(param_2 + 0x24));
    if (*(longlong *)(*(longlong *)(param_3 + 0x90) + uVar5 * 0x28 + 8) == 0) {
      iVar6 = 0;
    }
    else {
      *(longlong *)(param_2 + 0x60) = lVar4;
      *(undefined8 *)(param_2 + 0x68) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x90) + uVar5 * 0x28 + 8);
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_4 + 0x88);
      FUN_18007c448(param_1,param_2,*(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_4 + 0x2c),
                    uVar3,0,0);
    }
  }
  return iVar6;
}

