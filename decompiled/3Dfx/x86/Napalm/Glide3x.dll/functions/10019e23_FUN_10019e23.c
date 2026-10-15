/*
 * FUN_10019e23 at 10019e23
 * undefined __fastcall FUN_10019e23(int param_1)
 * Address ranges: 10019e23-10019ebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10019e23(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this;
  
  iVar1 = *(int *)(param_1 + 0x3688);
  this = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10019e9f:
    **(int **)(iVar1 + 0x12d0) = param_1;
  }
  else {
    puVar2 = (undefined4 *)FUN_1002dff0(this,4);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_100165f0(this);
      goto LAB_10019e9f;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 4;
    puVar3 = (undefined4 *)((int)puVar2 + 0xfU & 0xfffffffc);
    puVar2[2] = param_1;
    *puVar3 = 0;
    *puVar2 = &LAB_1000b4ef;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10019ead;
    }
  }
  *this = 0;
LAB_10019ead:
  FUN_1002ea00(*(int *)(param_1 + 0x3688) + 0x11c0);
  return;
}

