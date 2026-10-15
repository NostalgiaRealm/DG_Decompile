/*
 * FUN_100442e0 at 100442e0
 * undefined FUN_100442e0(void)
 * Address ranges: 100442e0-100443a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100442e0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x7c)) {
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    uVar4 = *(undefined8 *)(param_1 + 0x168);
    uVar3 = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)param_2 = uVar5;
    *(undefined8 *)(param_2 + 6) = uVar4;
    *(undefined8 *)(param_2 + 4) = uVar3;
    uVar5 = *(undefined8 *)(param_1 + 0x170);
    uVar4 = *(undefined8 *)(param_1 + 0x188);
    uVar3 = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 0x178);
    *(undefined8 *)(param_2 + 8) = uVar5;
    *(undefined8 *)(param_2 + 0xe) = uVar4;
    *(undefined8 *)(param_2 + 0xc) = uVar3;
    uVar5 = *(undefined8 *)(param_1 + 400);
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    *(undefined8 *)(param_2 + 0x16) = uVar4;
    *(undefined8 *)(param_2 + 0x14) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c0);
    param_2[0x1e] = *(int *)(param_1 + 0x1c8);
    if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) == 0) {
      param_2[9] = 0;
    }
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

