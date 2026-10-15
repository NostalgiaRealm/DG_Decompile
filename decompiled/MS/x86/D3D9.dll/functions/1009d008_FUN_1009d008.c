/*
 * FUN_1009d008 at 1009d008
 * undefined __fastcall FUN_1009d008(int param_1)
 * Address ranges: 1009d008-1009d01c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009d008(int param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  undefined4 uStack_8;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x78);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x74) + iVar2 + -1 != 0) {
    return;
  }
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + 0x80) + 0xdd0) >> 2) & 1);
  if ((*(int *)(param_1 + 0x8c) == 0) && (*(int *)(param_1 + 0x88) == 0)) {
    this = *(void **)(param_1 + 0x80);
    FUN_10092150(this,param_1);
    FUN_10006fc5(this,param_1);
  }
  else {
    FUN_10092150(*(void **)(param_1 + 0x80),param_1);
  }
  FUN_10012425(param_1);
  FUN_1009cfe8((undefined4 *)param_1);
  FUN_100cfd6c((LPVOID)param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

