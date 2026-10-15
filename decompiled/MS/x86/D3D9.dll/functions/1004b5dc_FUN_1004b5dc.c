/*
 * FUN_1004b5dc at 1004b5dc
 * undefined __thiscall FUN_1004b5dc(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1004b5dc-1004b69d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b5dc(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0xf6b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_100ce540(this_00,0x10);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x10;
      puVar2[2] = this;
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_3;
      puVar3 = (undefined4 *)((int)puVar2 + 0x1bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_1004b69e;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1004b692;
    }
    FUN_1003971e(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  FUN_1004b69e(puVar2);
LAB_1004b692:
  *this_00 = 0;
  return;
}

