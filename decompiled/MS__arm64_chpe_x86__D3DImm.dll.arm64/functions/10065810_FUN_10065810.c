/*
 * FUN_10065810 at 10065810
 * undefined FUN_10065810(void)
 * Address ranges: 10065810-10065987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10065810(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [16];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_30);
  uVar2 = 0x80070057;
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0x50) {
      uVar5 = *(undefined8 *)(param_1 + 0x4c);
      uVar4 = *(undefined8 *)(param_1 + 100);
      uVar3 = *(undefined8 *)(param_1 + 0x5c);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x54);
      *(undefined8 *)param_2 = uVar5;
      *(undefined8 *)(param_2 + 6) = uVar4;
      *(undefined8 *)(param_2 + 4) = uVar3;
      uVar5 = *(undefined8 *)(param_1 + 0x6c);
      uVar4 = *(undefined8 *)(param_1 + 0x84);
      uVar3 = *(undefined8 *)(param_1 + 0x7c);
      *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 0x74);
      *(undefined8 *)(param_2 + 8) = uVar5;
      *(undefined8 *)(param_2 + 0xe) = uVar4;
      *(undefined8 *)(param_2 + 0xc) = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x8c);
      *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0x94);
      *(undefined8 *)(param_2 + 0x10) = uVar3;
    }
    else {
      if (*param_2 != 0x4c) goto LAB_1006595c;
      *param_2 = 0x4c;
      param_2[1] = *(int *)(param_1 + 0x50);
      uVar3 = *(undefined8 *)(param_1 + 0x54);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x5c);
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 100);
      param_2[8] = *(int *)(param_1 + 0x6c);
      *(undefined8 *)(param_2 + 9) = *(undefined8 *)(param_1 + 0x70);
      param_2[0xb] = *(int *)(param_1 + 0x78);
      param_2[0xc] = *(int *)(param_1 + 0x7c);
      param_2[0xd] = *(int *)(param_1 + 0x80);
      param_2[0xe] = *(int *)(param_1 + 0x84);
      param_2[0xf] = *(int *)(param_1 + 0x88);
      param_2[0x10] = *(int *)(param_1 + 0x8c);
      param_2[0x11] = *(int *)(param_1 + 0x90);
      param_2[0x12] = *(int *)(param_1 + 0x94);
    }
    uVar2 = 0;
  }
LAB_1006595c:
  FUN_10096790(auStack_30);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

