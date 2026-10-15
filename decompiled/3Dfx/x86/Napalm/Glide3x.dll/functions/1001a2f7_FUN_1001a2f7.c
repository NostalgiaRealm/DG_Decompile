/*
 * FUN_1001a2f7 at 1001a2f7
 * undefined __fastcall FUN_1001a2f7(int param_1)
 * Address ranges: 1001a2f7-1001a38a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a2f7(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  
  iVar1 = *(int *)(param_1 + 0x3688);
  this = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_1002dff0(this,4);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 4;
      puVar4 = (undefined4 *)((int)puVar3 + 0xfU & 0xfffffffc);
      puVar3[2] = param_1;
      *puVar4 = 0;
      *puVar3 = FUN_1001a38b;
      this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1001a382;
    }
    FUN_100165f0(this);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = param_1;
  FUN_1001a38b(piVar2);
LAB_1001a382:
  *this = 0;
  return;
}

