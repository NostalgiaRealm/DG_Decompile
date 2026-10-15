/*
 * FUN_100249f0 at 100249f0
 * undefined __fastcall FUN_100249f0(int param_1)
 * Address ranges: 100249f0-10024a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100249f0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  
  iVar1 = *(int *)(param_1 + 0x1d54);
  this = (int *)(iVar1 + 0x11c0);
  FUN_1005c1d0(this);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_1005c0f0(this,4);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 4;
      puVar4 = (undefined4 *)((int)puVar3 + 0xfU & 0xfffffffc);
      puVar3[2] = param_1;
      *puVar4 = 0;
      *puVar3 = FUN_10024a84;
      this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10024a7b;
    }
    FUN_1001b0b6(this);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = param_1;
  FUN_10024a84(piVar2);
LAB_10024a7b:
  *this = 0;
  return;
}

