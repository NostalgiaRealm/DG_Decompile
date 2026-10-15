/*
 * FUN_1800c1ba0 at 1800c1ba0
 * undefined __fastcall FUN_1800c1ba0(longlong param_1)
 * Address ranges: 1800c1ba0-1800c1c20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c1ba0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar3 + 0xac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 + *(int *)(puVar3 + 0x15) == 0) {
      FUN_1800c1164(puVar3);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar4 = 0;
  do {
    puVar3 = *(undefined8 **)(param_1 + 0x60 + lVar4 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xac);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 + -1 + *(int *)(puVar3 + 0x15) == 0) {
        FUN_1800c1164(puVar3);
      }
      *(undefined8 *)(param_1 + 0x60 + lVar4 * 8) = 0;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  return;
}

