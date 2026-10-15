/*
 * FUN_1005e2d0 at 1005e2d0
 * undefined FUN_1005e2d0(void)
 * Address ranges: 1005e2d0-1005e36b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e2d0(int *param_1,int param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong local_d0;
  undefined1 auStack_c8 [184];
  
  *(undefined8 *)(*param_1 + param_2 * 0xc0) = param_3;
  *(uint *)(*param_1 + param_2 * 0xc0 + 8) = *param_4;
  local_d0 = (ulonglong)*param_4;
  puVar2 = (undefined8 *)FUN_10011fa0(param_1,auStack_c8,&local_d0);
  uVar5 = *puVar2;
  uVar4 = puVar2[3];
  uVar3 = puVar2[2];
  iVar1 = *param_1 + param_2 * 0xc0;
  *(undefined8 *)(iVar1 + 0x14) = puVar2[1];
  *(undefined8 *)(iVar1 + 0xc) = uVar5;
  *(undefined8 *)(iVar1 + 0x24) = uVar4;
  *(undefined8 *)(iVar1 + 0x1c) = uVar3;
  uVar5 = puVar2[4];
  uVar4 = puVar2[7];
  uVar3 = puVar2[6];
  *(undefined8 *)(iVar1 + 0x34) = puVar2[5];
  *(undefined8 *)(iVar1 + 0x2c) = uVar5;
  *(undefined8 *)(iVar1 + 0x44) = uVar4;
  *(undefined8 *)(iVar1 + 0x3c) = uVar3;
  uVar5 = puVar2[8];
  uVar4 = puVar2[0xb];
  uVar3 = puVar2[10];
  *(undefined8 *)(iVar1 + 0x54) = puVar2[9];
  *(undefined8 *)(iVar1 + 0x4c) = uVar5;
  *(undefined8 *)(iVar1 + 100) = uVar4;
  *(undefined8 *)(iVar1 + 0x5c) = uVar3;
  uVar5 = puVar2[0xc];
  uVar4 = puVar2[0xf];
  uVar3 = puVar2[0xe];
  *(undefined8 *)(iVar1 + 0x74) = puVar2[0xd];
  *(undefined8 *)(iVar1 + 0x6c) = uVar5;
  *(undefined8 *)(iVar1 + 0x84) = uVar4;
  *(undefined8 *)(iVar1 + 0x7c) = uVar3;
  uVar5 = puVar2[0x10];
  uVar4 = puVar2[0x13];
  uVar3 = puVar2[0x12];
  *(undefined8 *)(iVar1 + 0x94) = puVar2[0x11];
  *(undefined8 *)(iVar1 + 0x8c) = uVar5;
  *(undefined8 *)(iVar1 + 0xa4) = uVar4;
  *(undefined8 *)(iVar1 + 0x9c) = uVar3;
  uVar3 = puVar2[0x14];
  *(undefined8 *)(iVar1 + 0xb4) = puVar2[0x15];
  *(undefined8 *)(iVar1 + 0xac) = uVar3;
  return;
}

