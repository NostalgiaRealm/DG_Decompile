/*
 * FUN_1007df6f at 1007df6f
 * undefined __stdcall FUN_1007df6f(int param_1, char param_2)
 * Address ranges: 1007df6f-1007dfb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007df6f(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + -8);
  if (param_1 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  FUN_1000f8d0(puVar3 + 2);
  FUN_10081432((int)puVar3);
  if (param_2 == '\0') {
    LOCK();
    piVar1 = puVar3 + 0x39;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (puVar3[0x38] + iVar2 + -1 == 0) {
      FUN_10081469(puVar3);
    }
  }
  return;
}

