/*
 * FUN_1004b2eb at 1004b2eb
 * undefined __thiscall FUN_1004b2eb(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1004b2eb-1004b3cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b2eb(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0xf6b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(this_00);
  uVar3 = (param_2 - param_1) * 4;
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
      puVar4[param_2 - param_1] = 0;
      *puVar2 = FUN_1004b3ce;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar4 + (param_2 - param_1));
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1004b3c1;
    }
    FUN_1003971e(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = param_3;
  puVar2[1] = this;
  puVar2[2] = param_1;
  puVar2[3] = param_2;
  FUN_1004b3ce(puVar2);
LAB_1004b3c1:
  *this_00 = 0;
  return;
}

