/*
 * FUN_10098b24 at 10098b24
 * undefined __stdcall FUN_10098b24(int param_1, char param_2)
 * Address ranges: 10098b24-10098b6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10098b24(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + -8);
  if (param_1 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  FUN_100136b0(puVar3 + 2);
  FUN_1009d6b8((int)puVar3);
  if (param_2 == '\0') {
    LOCK();
    piVar1 = puVar3 + 0x3a;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (puVar3[0x39] + iVar2 + -1 == 0) {
      FUN_1009d6ef(puVar3);
    }
  }
  return;
}

