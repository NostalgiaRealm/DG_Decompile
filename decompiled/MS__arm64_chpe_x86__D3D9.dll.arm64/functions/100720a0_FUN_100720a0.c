/*
 * FUN_100720a0 at 100720a0
 * undefined FUN_100720a0(void)
 * Address ranges: 100720a0-1007212b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100720a0(int param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)FUN_10072a50(param_1,param_3);
  uVar6 = *puVar2;
  uVar5 = puVar2[3];
  uVar4 = puVar2[2];
  uVar3 = puVar2[4];
  param_2[1] = puVar2[1];
  *param_2 = uVar6;
  param_2[3] = uVar5;
  param_2[2] = uVar4;
  uVar7 = *(undefined8 *)((int)puVar2 + 0x34);
  uVar6 = *(undefined8 *)((int)puVar2 + 0x2c);
  uVar5 = *(undefined8 *)((int)puVar2 + 0x44);
  uVar4 = *(undefined8 *)((int)puVar2 + 0x3c);
  param_2[4] = uVar3;
  uVar1 = *(undefined4 *)(puVar2 + 5);
  *(undefined8 *)((int)param_2 + 0x34) = uVar7;
  *(undefined8 *)((int)param_2 + 0x2c) = uVar6;
  *(undefined8 *)((int)param_2 + 0x44) = uVar5;
  *(undefined8 *)((int)param_2 + 0x3c) = uVar4;
  *(undefined4 *)(param_2 + 5) = uVar1;
  *(undefined8 *)((int)param_2 + 0x4c) = *(undefined8 *)((int)puVar2 + 0x4c);
  *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)((int)puVar2 + 0x54);
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x84);
  return param_2;
}

