/*
 * FUN_10007aa0 at 10007aa0
 * undefined FUN_10007aa0(void)
 * Address ranges: 10007aa0-10007b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007aa0(int param_1,int param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [64];
  
  if ((*(int *)(param_2 + param_5 * 0x38 + 0x1c) != 0) || (uVar2 = 0x8876086c, param_4 != 0)) {
    puVar1 = (undefined8 *)FUN_10004b10(*(undefined4 *)(param_1 + 0xd90),auStack_50,param_2,param_4)
    ;
    uVar5 = *puVar1;
    uVar4 = puVar1[3];
    uVar3 = puVar1[2];
    param_3[1] = puVar1[1];
    *param_3 = uVar5;
    param_3[3] = uVar4;
    param_3[2] = uVar3;
    uVar3 = puVar1[4];
    param_3[5] = puVar1[5];
    param_3[4] = uVar3;
    uVar2 = 0;
    param_3[6] = puVar1[6];
  }
  return uVar2;
}

