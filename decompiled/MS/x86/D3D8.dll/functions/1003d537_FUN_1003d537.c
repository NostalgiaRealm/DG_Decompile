/*
 * FUN_1003d537 at 1003d537
 * undefined __thiscall FUN_1003d537(void * this, int param_1, undefined1 param_2)
 * Address ranges: 1003d537-1003d5f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d537(void *this,int param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0xd9b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100abd50(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_100abc70(this_00,0xc);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0xc;
      puVar2[3] = param_1;
      puVar2[2] = this;
      *(undefined1 *)(puVar2 + 4) = param_2;
      puVar3 = (undefined4 *)((int)puVar2 + 0x17U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_1003d5f5;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1003d5e9;
    }
    FUN_1002f90d(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  *(undefined1 *)(puVar2 + 2) = param_2;
  FUN_1003d5f5(puVar2);
LAB_1003d5e9:
  *this_00 = 0;
  return;
}

