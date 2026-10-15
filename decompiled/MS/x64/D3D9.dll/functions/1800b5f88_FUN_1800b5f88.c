/*
 * FUN_1800b5f88 at 1800b5f88
 * undefined __fastcall FUN_1800b5f88(longlong param_1, longlong param_2)
 * Address ranges: 1800b5f88-1800b5fe2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b5f88(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_2 != *(longlong *)(param_1 + 0xc498)) {
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      UNLOCK();
    }
    puVar3 = *(undefined8 **)(param_1 + 0xc498);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 + -1 + *(int *)(puVar3 + 1) == 0) {
        FUN_1800c2d6c(puVar3);
      }
    }
    *(longlong *)(param_1 + 0xc498) = param_2;
    *(undefined1 *)(param_1 + 0xc50a) = 1;
  }
  return;
}

