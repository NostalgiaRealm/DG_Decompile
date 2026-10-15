/*
 * FUN_100012c0 at 100012c0
 * undefined FUN_100012c0(void)
 * Address ranges: 100012c0-1000135b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100012c0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar1 = &DAT_100be2b4;
  puVar2 = &DAT_100be2cc;
  puVar3 = &DAT_100be350;
  puVar4 = &DAT_100be35c;
  puVar5 = &DAT_100be368;
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
  FUN_100914f0(FUN_10095c60);
  return;
}

