/*
 * FUN_1008109d at 1008109d
 * undefined __fastcall FUN_1008109d(int param_1)
 * Address ranges: 1008109d-100810b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1008109d(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_8;
  
  LOCK();
  piVar1 = (int *)(param_1 + 100);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x60) + iVar2 + -1 != 0) {
    return;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + 0x6c) + 0xb0c) >> 2) & 1);
  if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    FUN_100066bc(*(void **)(param_1 + 0x6c),param_1);
  }
  FUN_1000e69c(param_1);
  FUN_1008108b((undefined4 *)param_1);
  FUN_100ad48c((LPVOID)param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

