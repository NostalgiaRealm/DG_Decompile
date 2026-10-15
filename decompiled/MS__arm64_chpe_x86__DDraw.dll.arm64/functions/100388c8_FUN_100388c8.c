/*
 * FUN_100388c8 at 100388c8
 * undefined FUN_100388c8(void)
 * Address ranges: 100388c8-100389bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100388c8(undefined4 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [32];
  
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
  iVar1 = param_3[5];
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined4 *)param_2 = 0x7c;
  *(int *)((int)param_2 + 0xc) = *param_3;
  *(int *)(param_2 + 1) = param_3[1];
  *(int *)(param_2 + 3) = param_3[4];
  *(undefined4 *)(param_2 + 0xd) = 0x8200;
  uVar2 = FUN_1004cc90(param_1,iVar1);
  puVar3 = (undefined8 *)FUN_10038b50(param_1,auStack_50,uVar2);
  iVar1 = param_3[5];
  uVar6 = *puVar3;
  uVar5 = puVar3[3];
  uVar4 = puVar3[2];
  param_2[10] = puVar3[1];
  param_2[9] = uVar6;
  param_2[0xc] = uVar5;
  param_2[0xb] = uVar4;
  *(uint *)(param_2 + 2) = (uint)(iVar1 * *param_3) >> 3;
  uVar2 = 0x4100f;
  if (*(int *)(param_2 + 3) == 0) {
    uVar2 = 0x100f;
  }
  *(undefined4 *)((int)param_2 + 4) = uVar2;
  return param_2;
}

