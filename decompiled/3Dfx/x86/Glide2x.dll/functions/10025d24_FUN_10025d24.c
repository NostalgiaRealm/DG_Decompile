/*
 * FUN_10025d24 at 10025d24
 * undefined __thiscall FUN_10025d24(void * this, undefined1 param_1, undefined1 param_2)
 * Address ranges: 10025d24-10025de4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025d24(void *this,undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_10020d59((int)this + 0x3440);
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_10035d50(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_10035c70(this_00,0xc);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0xc;
      puVar2[2] = this;
      *(undefined1 *)(puVar2 + 3) = param_1;
      *(undefined1 *)(puVar2 + 4) = param_2;
      puVar3 = (undefined4 *)((int)puVar2 + 0x17U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_10025de5;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10025dd9;
    }
    FUN_10021b34(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  *(undefined1 *)(puVar2 + 1) = param_1;
  *(undefined1 *)(puVar2 + 2) = param_2;
  FUN_10025de5(puVar2);
LAB_10025dd9:
  *this_00 = 0;
  return;
}

