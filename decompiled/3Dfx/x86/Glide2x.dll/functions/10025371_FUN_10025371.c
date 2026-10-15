/*
 * FUN_10025371 at 10025371
 * undefined __thiscall FUN_10025371(void * this, int param_1)
 * Address ranges: 10025371-1002541a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025371(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_10035d50(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_10035c70(this_00,8);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 8;
      puVar3[2] = this;
      puVar3[3] = param_1;
      puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
      *puVar4 = 0;
      *puVar3 = FUN_1002541b;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1002540f;
    }
    FUN_10021b34(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)this;
  piVar2[1] = param_1;
  FUN_1002541b(piVar2);
LAB_1002540f:
  *this_00 = 0;
  return;
}

