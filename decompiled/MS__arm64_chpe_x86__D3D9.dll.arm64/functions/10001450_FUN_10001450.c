/*
 * FUN_10001450 at 10001450
 * undefined FUN_10001450(void)
 * Address ranges: 10001450-100014eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001450(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar1 = &DAT_101714e4;
  puVar2 = &DAT_101714fc;
  puVar3 = &DAT_10171580;
  puVar4 = &DAT_1017158c;
  puVar5 = &DAT_10171598;
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
  FUN_101322f0(FUN_10136630);
  return;
}

