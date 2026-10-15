/*
 * FUN_10059d90 at 10059d90
 * undefined FUN_10059d90(void)
 * Address ranges: 10059d90-10059e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059d90(int *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  *(undefined8 *)(*param_1 + param_2 * 0xc0) = param_3;
  *(undefined4 *)(*param_1 + param_2 * 0xc0 + 8) = *param_4;
  FUN_1004b440(*param_4,(char)param_1[3],&local_c0);
  iVar1 = *param_1 + param_2 * 0xc0;
  *(undefined8 *)(iVar1 + 0x14) = uStack_b8;
  *(undefined8 *)(iVar1 + 0xc) = local_c0;
  *(undefined8 *)(iVar1 + 0x24) = uStack_a8;
  *(undefined8 *)(iVar1 + 0x1c) = uStack_b0;
  *(undefined8 *)(iVar1 + 0x34) = uStack_98;
  *(undefined8 *)(iVar1 + 0x2c) = local_a0;
  *(undefined8 *)(iVar1 + 0x44) = uStack_88;
  *(undefined8 *)(iVar1 + 0x3c) = uStack_90;
  *(undefined8 *)(iVar1 + 0x54) = uStack_78;
  *(undefined8 *)(iVar1 + 0x4c) = local_80;
  *(undefined8 *)(iVar1 + 100) = uStack_68;
  *(undefined8 *)(iVar1 + 0x5c) = uStack_70;
  *(undefined8 *)(iVar1 + 0x74) = uStack_58;
  *(undefined8 *)(iVar1 + 0x6c) = local_60;
  *(undefined8 *)(iVar1 + 0x84) = uStack_48;
  *(undefined8 *)(iVar1 + 0x7c) = uStack_50;
  *(undefined8 *)(iVar1 + 0x94) = uStack_38;
  *(undefined8 *)(iVar1 + 0x8c) = local_40;
  *(undefined8 *)(iVar1 + 0xa4) = uStack_28;
  *(undefined8 *)(iVar1 + 0x9c) = uStack_30;
  *(undefined8 *)(iVar1 + 0xb4) = uStack_18;
  *(undefined8 *)(iVar1 + 0xac) = local_20;
  return;
}

