/*
 * FUN_100af800 at 100af800
 * undefined FUN_100af800(void)
 * Address ranges: 100af800-100af8eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100af800(int param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1 = param_1 + -0x70;
  iVar1 = FUN_100061f0(param_1,param_2,param_3,param_4);
  if (-1 < iVar1) {
    puVar2 = (undefined8 *)FUN_10004650(param_1,param_3);
    uVar7 = *puVar2;
    uVar6 = puVar2[3];
    uVar5 = puVar2[2];
    param_4[1] = puVar2[1];
    *param_4 = uVar7;
    param_4[3] = uVar6;
    param_4[2] = uVar5;
    uVar7 = puVar2[4];
    uVar6 = puVar2[7];
    uVar5 = puVar2[6];
    param_4[5] = puVar2[5];
    param_4[4] = uVar7;
    param_4[7] = uVar6;
    param_4[6] = uVar5;
    uVar7 = puVar2[8];
    uVar6 = puVar2[0xb];
    uVar5 = puVar2[10];
    param_4[9] = puVar2[9];
    param_4[8] = uVar7;
    param_4[0xb] = uVar6;
    param_4[10] = uVar5;
    uVar7 = puVar2[0xc];
    uVar6 = puVar2[0xf];
    uVar5 = puVar2[0xe];
    param_4[0xd] = puVar2[0xd];
    param_4[0xc] = uVar7;
    param_4[0xf] = uVar6;
    param_4[0xe] = uVar5;
    uVar7 = puVar2[0x10];
    uVar6 = puVar2[0x13];
    uVar5 = puVar2[0x12];
    param_4[0x11] = puVar2[0x11];
    param_4[0x10] = uVar7;
    param_4[0x13] = uVar6;
    param_4[0x12] = uVar5;
    uVar7 = puVar2[0x14];
    uVar6 = puVar2[0x17];
    uVar5 = puVar2[0x16];
    param_4[0x15] = puVar2[0x15];
    param_4[0x14] = uVar7;
    param_4[0x17] = uVar6;
    param_4[0x16] = uVar5;
    uVar5 = puVar2[0x18];
    param_4[0x19] = puVar2[0x19];
    param_4[0x18] = uVar5;
    *(undefined4 *)(param_4 + 0x1a) = *(undefined4 *)(puVar2 + 0x1a);
    *(undefined4 *)((int)param_4 + 4) = param_2;
    *(undefined4 *)param_4 = param_3;
    uVar3 = FUN_100035c0(param_1,param_3);
    *(undefined4 *)(param_4 + 0x19) = uVar3;
    uVar4 = FUN_10003510(param_1,param_2);
    if ((uVar4 & 1) == 0) {
      *(uint *)((int)param_4 + 0x1c) = *(uint *)((int)param_4 + 0x1c) & 0xfeffffff;
    }
  }
  return iVar1;
}

