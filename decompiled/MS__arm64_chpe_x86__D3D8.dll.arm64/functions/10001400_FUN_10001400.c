/*
 * FUN_10001400 at 10001400
 * undefined FUN_10001400(void)
 * Address ranges: 10001400-1000149b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001400(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar1 = &DAT_10138924;
  puVar2 = &DAT_1013893c;
  puVar3 = &DAT_101389c0;
  puVar4 = &DAT_101389cc;
  puVar5 = &DAT_101389d8;
  iVar6 = 0x20;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar2 = 0;
    iVar6 = iVar6 + -1;
    *puVar3 = 0;
    puVar1 = puVar1 + 0x45;
    *puVar4 = 0;
    puVar2 = puVar2 + 0x45;
    *puVar5 = 0;
    puVar3 = puVar3 + 0x45;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar4 = puVar4 + 0x45;
    puVar5 = puVar5 + 0x45;
  } while (iVar6 != 0);
  FUN_100fed70(FUN_10103010);
  return;
}

