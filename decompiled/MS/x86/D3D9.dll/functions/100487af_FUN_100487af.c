/*
 * FUN_100487af at 100487af
 * undefined __thiscall FUN_100487af(void * this, int param_1, undefined1 param_2)
 * Address ranges: 100487af-10048864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100487af(void *this,int param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0xf6b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_100ce540(this_00,0xc);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0xc;
      puVar2[2] = this;
      puVar2[3] = param_1;
      *(undefined1 *)(puVar2 + 4) = param_2;
      puVar3 = (undefined4 *)((int)puVar2 + 0x17U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_10048865;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10048859;
    }
    FUN_1003971e(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  *(undefined1 *)(puVar2 + 2) = param_2;
  FUN_10048865(puVar2);
LAB_10048859:
  *this_00 = 0;
  return;
}

