/*
 * FUN_180052f98 at 180052f98
 * undefined FUN_180052f98(void)
 * Address ranges: 180052f98-180052fd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180052f98(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  *(longlong *)(lVar1 + 0x18) = param_1[1];
  *(longlong *)(lVar1 + 0xa8) = param_1[2];
  *(longlong *)(lVar1 + 0xb0) = param_1[3];
  *(int *)(lVar1 + 0x5c) = (int)param_1[4];
  iVar2 = 8;
  puVar3 = (undefined8 *)(lVar1 + 0x60);
  puVar4 = (undefined8 *)((longlong)param_1 + 0x24);
  do {
    iVar2 = iVar2 + -1;
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != 0);
  return;
}

