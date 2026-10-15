/*
 * FUN_100bbb20 at 100bbb20
 * undefined FUN_100bbb20(void)
 * Address ranges: 100bbb20-100bbbff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bbb20(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x14);
    uVar6 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    param_2[1] = puVar1[1];
    *param_2 = uVar6;
    param_2[3] = uVar5;
    param_2[2] = uVar4;
    uVar6 = puVar1[4];
    uVar5 = puVar1[7];
    uVar4 = puVar1[6];
    param_2[5] = puVar1[5];
    param_2[4] = uVar6;
    param_2[7] = uVar5;
    param_2[6] = uVar4;
    uVar6 = puVar1[8];
    uVar5 = puVar1[0xb];
    uVar4 = puVar1[10];
    param_2[9] = puVar1[9];
    param_2[8] = uVar6;
    param_2[0xb] = uVar5;
    param_2[10] = uVar4;
    uVar6 = puVar1[0xc];
    uVar5 = puVar1[0xf];
    uVar4 = puVar1[0xe];
    param_2[0xd] = puVar1[0xd];
    param_2[0xc] = uVar6;
    param_2[0xf] = uVar5;
    param_2[0xe] = uVar4;
    uVar6 = puVar1[0x10];
    uVar5 = puVar1[0x13];
    uVar4 = puVar1[0x12];
    param_2[0x11] = puVar1[0x11];
    param_2[0x10] = uVar6;
    param_2[0x13] = uVar5;
    param_2[0x12] = uVar4;
    uVar6 = puVar1[0x14];
    uVar5 = puVar1[0x17];
    uVar4 = puVar1[0x16];
    param_2[0x15] = puVar1[0x15];
    param_2[0x14] = uVar6;
    param_2[0x17] = uVar5;
    param_2[0x16] = uVar4;
    uVar4 = puVar1[0x18];
    param_2[0x19] = puVar1[0x19];
    param_2[0x18] = uVar4;
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(puVar1 + 0x1a);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + -0x4de0);
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + -0x4ddc);
    *(undefined4 *)(param_2 + 0x19) = *(undefined4 *)(param_1 + -0x4dd0);
    uVar3 = FUN_10003510(*(undefined4 *)(param_1 + -0x4e14),*(undefined4 *)(param_1 + -0x4db4));
    if ((uVar3 & 1) == 0) {
      *(uint *)((int)param_2 + 0x1c) = *(uint *)((int)param_2 + 0x1c) & 0xfeffffff;
    }
    uVar2 = 0;
  }
  return uVar2;
}

