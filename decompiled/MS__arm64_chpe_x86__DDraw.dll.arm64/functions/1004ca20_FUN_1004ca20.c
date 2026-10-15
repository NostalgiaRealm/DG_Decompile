/*
 * FUN_1004ca20 at 1004ca20
 * undefined FUN_1004ca20(void)
 * Address ranges: 1004ca20-1004ca9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004ca20(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x6c)) {
    uVar1 = 1;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xe] = 0;
    *(undefined4 *)(param_2 + 0xf) = 0;
    uVar4 = *(undefined8 *)param_1;
    uVar3 = *(undefined8 *)(param_1 + 6);
    uVar2 = *(undefined8 *)(param_1 + 4);
    param_2[1] = *(undefined8 *)(param_1 + 2);
    *param_2 = uVar4;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0xe);
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    param_2[5] = *(undefined8 *)(param_1 + 10);
    param_2[4] = uVar4;
    param_2[7] = uVar3;
    param_2[6] = uVar2;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x16);
    uVar2 = *(undefined8 *)(param_1 + 0x14);
    param_2[9] = *(undefined8 *)(param_1 + 0x12);
    param_2[8] = uVar4;
    param_2[0xb] = uVar3;
    param_2[10] = uVar2;
    param_2[0xc] = *(undefined8 *)(param_1 + 0x18);
    *(int *)(param_2 + 0xd) = param_1[0x1a];
    *(undefined4 *)param_2 = 0x7c;
  }
  return uVar1;
}

