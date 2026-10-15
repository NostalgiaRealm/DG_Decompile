/*
 * FUN_10048fe7 at 10048fe7
 * undefined __thiscall FUN_10048fe7(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 10048fe7-100490c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10048fe7(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0xf6b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(this_00);
  uVar3 = (param_2 - param_1) * 0x10;
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_100ce540(this_00,uVar3 + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = uVar3 + 0x10;
      puVar2[3] = this;
      puVar2[4] = param_1;
      puVar4 = (undefined4 *)((int)puVar2 + 0x1bU & 0xfffffffc);
      puVar2[5] = param_2;
      puVar2[2] = puVar4;
      FUN_100cff00(puVar4,param_3,uVar3);
      puVar4[(param_2 - param_1) * 4] = 0;
      *puVar2 = FUN_100490ca;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar4 + (param_2 - param_1) * 4);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_100490bd;
    }
    FUN_1003971e(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = param_3;
  puVar2[1] = this;
  puVar2[2] = param_1;
  puVar2[3] = param_2;
  FUN_100490ca(puVar2);
LAB_100490bd:
  *this_00 = 0;
  return;
}

