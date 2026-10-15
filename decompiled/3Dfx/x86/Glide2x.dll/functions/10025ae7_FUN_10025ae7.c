/*
 * FUN_10025ae7 at 10025ae7
 * undefined __thiscall FUN_10025ae7(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, undefined1 param_6)
 * Address ranges: 10025ae7-10025bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10025ae7(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
            undefined1 param_6)

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
    puVar2 = (undefined4 *)FUN_10035c70(this_00,0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x1c;
      puVar2[2] = this;
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_3;
      puVar2[6] = param_4;
      puVar2[7] = param_5;
      *(undefined1 *)(puVar2 + 8) = param_6;
      puVar3 = (undefined4 *)((int)puVar2 + 0x27U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_10025bdc;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10025bd0;
    }
    FUN_10021b34(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  puVar2[5] = param_5;
  *(undefined1 *)(puVar2 + 6) = param_6;
  FUN_10025bdc(puVar2);
LAB_10025bd0:
  *this_00 = 0;
  return;
}

