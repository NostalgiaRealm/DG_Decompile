/*
 * FUN_180058054 at 180058054
 * undefined8 * __fastcall FUN_180058054(undefined8 * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 180058054-1800580bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180058054(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_180058bcc(param_1,param_3);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar1;
  uVar1 = puVar5[4];
  uVar4 = puVar5[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  uVar1 = puVar5[7];
  param_2[6] = puVar5[6];
  param_2[7] = uVar1;
  uVar1 = puVar5[10];
  uVar4 = puVar5[0xb];
  param_2[0xc] = param_1[0x15];
  param_2[0xd] = param_1[0x16];
  param_2[8] = uVar2;
  param_2[9] = uVar3;
  param_2[10] = uVar1;
  param_2[0xb] = uVar4;
  return param_2;
}

