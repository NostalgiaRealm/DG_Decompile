/*
 * FUN_1004fe70 at 1004fe70
 * undefined FUN_1004fe70(void)
 * Address ranges: 1004fe70-1004ff17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004fe70(int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x108);
  if ((iVar3 != 0) && (*(int *)(param_2 + 0x108) != 0)) {
    puVar1 = (undefined8 *)(*(int *)(param_2 + 0x108) + 0x14);
    iVar4 = 0x80;
    puVar2 = (undefined8 *)(iVar3 + 0x14);
    do {
      uVar5 = *puVar1;
      iVar4 = iVar4 + -1;
      puVar1 = puVar1 + 1;
      *puVar2 = uVar5;
      puVar2 = puVar2 + 1;
    } while (iVar4 != 0);
    FUN_10039698(*(undefined4 *)(iVar3 + 0xc),iVar3);
    FUN_10041288(iVar3);
  }
  if ((*(uint *)(param_2 + 0x154) >> 0x10 & 1) != 0) {
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x10000;
  }
  return;
}

