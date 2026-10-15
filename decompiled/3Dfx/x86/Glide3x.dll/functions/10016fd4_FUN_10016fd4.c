/*
 * FUN_10016fd4 at 10016fd4
 * undefined __thiscall FUN_10016fd4(void * this, int param_1, int param_2)
 * Address ranges: 10016fd4-10017094
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016fd4(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_1001416a((int)this + 0x35c0);
  iVar1 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_1002abe0(this_00,0xc);
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
      *puVar2 = FUN_10017095;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10017089;
    }
    FUN_10014f4d(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  FUN_10017095(puVar2);
LAB_10017089:
  *this_00 = 0;
  return;
}

