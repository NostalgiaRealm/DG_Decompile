/*
 * FUN_100192a8 at 100192a8
 * undefined __thiscall FUN_100192a8(void * this, int param_1, int param_2)
 * Address ranges: 100192a8-1001935b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100192a8(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_1002dff0(this_00,0xc);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 0xc;
      puVar4 = (undefined4 *)((int)puVar3 + 0x17U & 0xfffffffc);
      puVar3[3] = param_1;
      puVar3[4] = param_2;
      puVar3[2] = this;
      *puVar4 = 0;
      *puVar3 = FUN_1001935c;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10019350;
    }
    FUN_100165f0(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  piVar2[1] = param_1;
  piVar2[2] = param_2;
  *piVar2 = (int)this;
  FUN_1001935c(piVar2);
LAB_10019350:
  *this_00 = 0;
  return;
}

