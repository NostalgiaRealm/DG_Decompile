/*
 * FUN_100259d6 at 100259d6
 * undefined __thiscall FUN_100259d6(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100259d6-10025aac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100259d6(void *this,int param_1,int param_2,int param_3,int param_4)

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
    puVar2 = (undefined4 *)FUN_10035c70(this_00,0x14);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x14;
      puVar3 = (undefined4 *)((int)puVar2 + 0x1fU & 0xfffffffc);
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_3;
      puVar2[6] = param_4;
      puVar2[2] = this;
      *puVar3 = 0;
      *puVar2 = FUN_10025aad;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10025aa1;
    }
    FUN_10021b34(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  *puVar2 = this;
  FUN_10025aad(puVar2);
LAB_10025aa1:
  *this_00 = 0;
  return;
}

