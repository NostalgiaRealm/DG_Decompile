/*
 * FUN_10022b22 at 10022b22
 * undefined __thiscall FUN_10022b22(void * this, int param_1, int param_2)
 * Address ranges: 10022b22-10022be2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022b22(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_100210e5((int)this + 0x3440);
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100360e0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_10036000(this_00,0xc);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0xc;
      puVar2[2] = this;
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar3 = (undefined4 *)((int)puVar2 + 0x17U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_10022be3;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10022bd7;
    }
    FUN_10021ec0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  FUN_10022be3(puVar2);
LAB_10022bd7:
  *this_00 = 0;
  return;
}

