/*
 * FUN_10045f1e at 10045f1e
 * undefined __fastcall FUN_10045f1e(int param_1)
 * Address ranges: 10045f1e-10045fb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10045f1e(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  
  iVar1 = *(int *)(param_1 + 0xf6b8);
  this = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(this);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_100ce540(this,4);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 4;
      puVar4 = (undefined4 *)((int)puVar3 + 0xfU & 0xfffffffc);
      puVar3[2] = param_1;
      *puVar4 = 0;
      *puVar3 = FUN_10045fb2;
      this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10045fa9;
    }
    FUN_1003971e(this);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = param_1;
  FUN_10045fb2(piVar2);
LAB_10045fa9:
  *this = 0;
  return;
}

