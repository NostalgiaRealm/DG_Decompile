/*
 * FUN_1001785f at 1001785f
 * undefined __fastcall FUN_1001785f(int param_1)
 * Address ranges: 1001785f-100178fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001785f(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this;
  
  iVar1 = *(int *)(param_1 + 0x3308);
  this = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_100178db:
    **(int **)(iVar1 + 0x12d0) = param_1;
  }
  else {
    puVar2 = (undefined4 *)FUN_1002abe0(this,4);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10014f4d(this);
      goto LAB_100178db;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 4;
    puVar3 = (undefined4 *)((int)puVar2 + 0xfU & 0xfffffffc);
    puVar2[2] = param_1;
    *puVar3 = 0;
    *puVar2 = &LAB_1000ac8b;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_100178e9;
    }
  }
  *this = 0;
LAB_100178e9:
  FUN_1002b5f0(*(int *)(param_1 + 0x3308) + 0x11c0);
  return;
}

