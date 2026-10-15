/*
 * FUN_1004b3e6 at 1004b3e6
 * undefined __thiscall FUN_1004b3e6(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1004b3e6-1004b4c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b3e6(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0xf6b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(this_00);
  uVar4 = (param_2 - param_1) * 0x10;
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_100ce540(this_00,uVar4 + 0x10);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = uVar4 + 0x10;
      puVar3[3] = this;
      puVar3[4] = param_1;
      puVar5 = (undefined4 *)((int)puVar3 + 0x1bU & 0xfffffffc);
      puVar3[5] = param_2;
      puVar3[2] = puVar5;
      FUN_100cff00(puVar5,param_3,uVar4);
      puVar5[(param_2 - param_1) * 4] = 0;
      *puVar3 = FUN_1004b4c9;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar5 + (param_2 - param_1) * 4);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1004b4bc;
    }
    FUN_1003971e(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)param_3;
  piVar2[1] = (int)this;
  piVar2[2] = param_1;
  piVar2[3] = param_2;
  FUN_1004b4c9(piVar2);
LAB_1004b4bc:
  *this_00 = 0;
  return;
}

