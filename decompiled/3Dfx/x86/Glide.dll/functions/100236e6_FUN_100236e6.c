/*
 * FUN_100236e6 at 100236e6
 * undefined __thiscall FUN_100236e6(void * this, int * param_1)
 * Address ranges: 100236e6-100237b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100236e6(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *this_00;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_44 [15];
  void *local_8;
  
  local_8 = this;
  FUN_100210e5((int)this + 0x3440);
  iVar4 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar4 + 0x11c0);
  piVar5 = local_44;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  FUN_100360e0(this_00);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_10036000(this_00,0x40);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x40;
      puVar1[2] = local_8;
      piVar5 = local_44;
      piVar7 = puVar1 + 3;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x4bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar1 = FUN_100237b8;
      this_00[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_100237ab;
    }
    FUN_10021ec0(this_00);
  }
  piVar5 = *(int **)(iVar4 + 0x12d0);
  *piVar5 = (int)local_8;
  piVar6 = local_44;
  piVar7 = piVar5;
  for (iVar4 = 0xf; piVar7 = piVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
  }
  FUN_100237b8(piVar5);
LAB_100237ab:
  *this_00 = 0;
  return;
}

