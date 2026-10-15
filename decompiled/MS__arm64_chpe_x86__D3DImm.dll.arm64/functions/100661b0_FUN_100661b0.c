/*
 * FUN_100661b0 at 100661b0
 * undefined FUN_100661b0(void)
 * Address ranges: 100661b0-1006624f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100661b0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x50)) {
    uVar5 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    *(undefined8 *)(param_1 + 0xb8) = uVar4;
    *(undefined8 *)(param_1 + 0xb0) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    *(undefined1 *)(param_1 + 0xd4) = 1;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

