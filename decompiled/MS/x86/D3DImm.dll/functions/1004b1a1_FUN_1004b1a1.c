/*
 * FUN_1004b1a1 at 1004b1a1
 * undefined __fastcall FUN_1004b1a1(LPVOID param_1)
 * Address ranges: 1004b1a1-1004b20e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004b1a1(LPVOID param_1)

{
  void *this;
  undefined4 *puVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  this = *(void **)(*(int *)((int)param_1 + 0x7c) + 0xc);
  if (this != (void *)0x0) {
    FUN_10049570(this,(int)param_1);
  }
  uVar4 = 0;
  do {
    iVar3 = uVar4 * 0x1c;
    puVar1 = *(undefined4 **)((int)param_1 + iVar3 + 0x20);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1004b046((int)param_1 + iVar3 + 8,puVar1);
      *(undefined4 *)((int)param_1 + iVar3 + 0x20) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  FUN_1005c76c(param_1);
  LeaveCriticalSection(DAT_1006bbd0);
  return;
}

