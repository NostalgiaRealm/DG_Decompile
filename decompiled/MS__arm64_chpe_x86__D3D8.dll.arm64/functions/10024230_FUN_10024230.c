/*
 * FUN_10024230 at 10024230
 * undefined FUN_10024230(void)
 * Address ranges: 10024230-100242b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  if (*(char *)(param_1 + 0x9d5) == '\0') {
    iVar1 = *(int *)(param_1 + 0xabc);
    uVar2 = FUN_1002f6e0(iVar1,auStack_a0,iVar1 + 0x40);
    puVar3 = (undefined8 *)FUN_1002f6e0(uVar2,auStack_60,param_1 + 0xa54);
    iVar1 = *(int *)(param_1 + 0xabc);
    uVar6 = *puVar3;
    uVar5 = puVar3[3];
    uVar4 = puVar3[2];
    *(undefined8 *)(iVar1 + 0x8588) = puVar3[1];
    *(undefined8 *)(iVar1 + 0x8580) = uVar6;
    *(undefined8 *)(iVar1 + 0x8598) = uVar5;
    *(undefined8 *)(iVar1 + 0x8590) = uVar4;
    uVar6 = puVar3[4];
    uVar5 = puVar3[7];
    uVar4 = puVar3[6];
    *(undefined8 *)(iVar1 + 0x85a8) = puVar3[5];
    *(undefined8 *)(iVar1 + 0x85a0) = uVar6;
    *(undefined8 *)(iVar1 + 0x85b8) = uVar5;
    *(undefined8 *)(iVar1 + 0x85b0) = uVar4;
    *(char *)(param_1 + 0x9d5) = '\x01';
  }
  return;
}

