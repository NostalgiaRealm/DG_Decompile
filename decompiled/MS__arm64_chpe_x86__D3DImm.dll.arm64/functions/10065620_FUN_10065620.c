/*
 * FUN_10065620 at 10065620
 * undefined FUN_10065620(void)
 * Address ranges: 10065620-100657ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10065620(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [16];
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_40);
  iVar2 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x98);
    if (*param_2 == 0x50) {
      uVar6 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      uVar3 = 1;
      *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 0x4c) = uVar6;
      *(undefined8 *)(param_1 + 100) = uVar5;
      *(undefined8 *)(param_1 + 0x5c) = uVar4;
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)(param_2 + 0xe);
      uVar4 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 0x6c) = uVar6;
      *(undefined8 *)(param_1 + 0x84) = uVar5;
      *(undefined8 *)(param_1 + 0x7c) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x8c) = uVar4;
    }
    else {
      if (*param_2 != 0x4c) goto LAB_100657d0;
      *(undefined4 *)(param_1 + 0x4c) = 0x50;
      *(int *)(param_1 + 0x50) = param_2[1];
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 0x54) = uVar4;
      *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 6);
      *(int *)(param_1 + 0x6c) = param_2[8];
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 9);
      *(int *)(param_1 + 0x78) = param_2[0xb];
      *(int *)(param_1 + 0x7c) = param_2[0xc];
      *(int *)(param_1 + 0x80) = param_2[0xd];
      *(int *)(param_1 + 0x84) = param_2[0xe];
      *(int *)(param_1 + 0x88) = param_2[0xf];
      *(int *)(param_1 + 0x8c) = param_2[0x10];
      *(int *)(param_1 + 0x90) = param_2[0x11];
      *(int *)(param_1 + 0x94) = param_2[0x12];
      *(uint *)(param_1 + 0x98) = 1;
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0xa0) = uVar3;
    iVar2 = FUN_100655e0(param_1,param_2);
    if ((-1 < iVar2) && (*(int *)(param_1 + 0x9c) != 0)) {
      FUN_100680b0(*(int *)(param_1 + 0x9c),param_1,uVar1 & 1);
    }
  }
LAB_100657d0:
  FUN_10096790(auStack_40);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar2;
}

