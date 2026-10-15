/*
 * FUN_10084a3d at 10084a3d
 * undefined __thiscall FUN_10084a3d(void * this, int param_1, int param_2)
 * Address ranges: 10084a3d-10084b04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10084a3d(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *this_00;
  
  iVar1 = (int)this + -0xc0;
  iVar3 = FUN_10082974(iVar1);
  if ((char)iVar3 != '\0') {
    return;
  }
  iVar3 = *(int *)((int)this + -0x7c);
  this_00 = (int *)(iVar3 + 0x11c0);
  FUN_100ce620(this_00);
  if (*(char *)(iVar3 + 0x12ec) != '\0') {
    puVar4 = (undefined4 *)FUN_100ce540(this_00,0xc);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
      UNLOCK();
      puVar4[1] = 0xc;
      puVar4[2] = iVar1;
      puVar4[3] = param_1;
      puVar4[4] = param_2;
      puVar5 = (undefined4 *)((int)puVar4 + 0x17U & 0xfffffffc);
      *puVar5 = 0;
      *puVar4 = FUN_10084b05;
      this_00[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar3 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar3 + 0x1220));
        return;
      }
      goto LAB_10084af9;
    }
    FUN_1003971e(this_00);
  }
  piVar2 = *(int **)(iVar3 + 0x12d0);
  *piVar2 = iVar1;
  piVar2[1] = param_1;
  piVar2[2] = param_2;
  FUN_10084b05(piVar2);
LAB_10084af9:
  *this_00 = 0;
  return;
}

