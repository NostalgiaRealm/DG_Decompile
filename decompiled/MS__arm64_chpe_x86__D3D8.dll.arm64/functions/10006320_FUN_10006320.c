/*
 * FUN_10006320 at 10006320
 * undefined FUN_10006320(void)
 * Address ranges: 10006320-100063cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006320(undefined4 param_1,int param_2,undefined8 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [64];
  
  iVar2 = (*(code *)PTR_FUN_101341cc)();
  param_2 = param_2 + param_5 * 0x34;
  iVar1 = *(int *)(param_2 + 0x18);
  if ((iVar1 != 0 && iVar1 != iVar2) || (uVar4 = 0x8876086c, param_4 != 0 && param_4 != iVar2)) {
    puVar3 = (undefined8 *)FUN_100041f0(param_1,auStack_70,param_2,param_4);
    uVar7 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    param_3[1] = puVar3[1];
    *param_3 = uVar7;
    param_3[3] = uVar6;
    param_3[2] = uVar5;
    uVar5 = puVar3[4];
    param_3[5] = puVar3[5];
    param_3[4] = uVar5;
    uVar4 = 0;
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar3 + 6);
  }
  return uVar4;
}

