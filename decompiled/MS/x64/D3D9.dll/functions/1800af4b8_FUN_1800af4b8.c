/*
 * FUN_1800af4b8 at 1800af4b8
 * undefined __fastcall FUN_1800af4b8(longlong param_1, int param_2, int param_3)
 * Address ranges: 1800af4b8-1800af505
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800af4b8(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = param_2 * 0x10 + param_3;
  puVar3 = *(undefined8 **)(param_1 + 0xb0 + (ulonglong)uVar4 * 8);
  LOCK();
  piVar1 = (int *)((longlong)puVar3 + 0xac);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 + *(int *)(puVar3 + 0x15) == 0) {
    FUN_1800c1164(puVar3);
  }
  *(undefined8 *)(param_1 + 0xb0 + (ulonglong)uVar4 * 8) = 0;
  return;
}

