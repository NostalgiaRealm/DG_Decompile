/*
 * FUN_10017fa1 at 10017fa1
 * undefined __thiscall FUN_10017fa1(void * this, int param_1, int param_2)
 * Address ranges: 10017fa1-10018068
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10017fa1(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *this_00;
  
  iVar1 = (int)this + -0xc0;
  cVar4 = FUN_10015f1f(iVar1);
  if (cVar4 != '\0') {
    return;
  }
  iVar2 = *(int *)((int)this + -0x7c);
  this_00 = (int *)(iVar2 + 0x11c0);
  FUN_1005f770(this_00);
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    puVar5 = (undefined4 *)FUN_1005f690(this_00,0xc);
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      puVar5[1] = 0xc;
      puVar5[2] = iVar1;
      puVar5[3] = param_1;
      puVar5[4] = param_2;
      puVar6 = (undefined4 *)((int)puVar5 + 0x17U & 0xfffffffc);
      *puVar6 = 0;
      *puVar5 = FUN_10018069;
      this_00[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar6;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar2 + 0x1220));
        return;
      }
      goto LAB_1001805d;
    }
    FUN_1000f2b0(this_00);
  }
  piVar3 = *(int **)(iVar2 + 0x12d0);
  *piVar3 = iVar1;
  piVar3[1] = param_1;
  piVar3[2] = param_2;
  FUN_10018069(piVar3);
LAB_1001805d:
  *this_00 = 0;
  return;
}

