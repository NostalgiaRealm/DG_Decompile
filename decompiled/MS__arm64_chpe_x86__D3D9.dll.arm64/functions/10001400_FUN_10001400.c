/*
 * FUN_10001400 at 10001400
 * undefined FUN_10001400(void)
 * Address ranges: 10001400-10001447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001400(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar1 = &DAT_10170f78;
  puVar2 = &DAT_10170f84;
  iVar3 = 0x20;
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(puVar2 + 1) = 0;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (iVar3 != 0);
  FUN_101322f0(FUN_101365e0);
  return;
}

