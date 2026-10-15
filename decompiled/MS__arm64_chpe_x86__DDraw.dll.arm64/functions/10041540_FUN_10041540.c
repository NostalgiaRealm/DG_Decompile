/*
 * FUN_10041540 at 10041540
 * undefined FUN_10041540(void)
 * Address ranges: 10041540-1004159f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041540(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(param_1 + 0x14);
  if ((*(uint *)(param_1 + 0x10) >> 10 & 1) == 0) {
    uVar3 = 0;
    do {
      iVar4 = uVar3 * 4;
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(uint *)((int)param_2 + iVar1) = *(uint *)((int)puVar2 + iVar4) | 0xff000000;
    } while (uVar3 < 0x100);
  }
  else {
    iVar4 = 0x80;
    do {
      uVar5 = *puVar2;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 1;
      *param_2 = uVar5;
      param_2 = param_2 + 1;
    } while (iVar4 != 0);
  }
  return;
}

