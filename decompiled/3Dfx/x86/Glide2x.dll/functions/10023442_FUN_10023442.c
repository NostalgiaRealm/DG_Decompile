/*
 * FUN_10023442 at 10023442
 * undefined __thiscall FUN_10023442(void * this, int * param_1, int * param_2)
 * Address ranges: 10023442-10023539
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10023442(void *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_80 [15];
  int local_44 [15];
  void *local_8;
  
  local_8 = this;
  FUN_10020d59((int)this + 0x3440);
  iVar4 = *(int *)((int)this + 0x3188);
  piVar5 = local_80;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_2;
    param_2 = param_2 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar5 = local_44;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar5 = (int *)(iVar4 + 0x11c0);
  FUN_10035d50(piVar5);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_10035c70(piVar5,0x7c);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x7c;
      puVar1[2] = local_8;
      piVar6 = local_44;
      piVar8 = puVar1 + 3;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      piVar6 = local_80;
      piVar8 = puVar1 + 0x12;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x87U & 0xfffffffc);
      *puVar3 = 0;
      *puVar1 = FUN_1002353a;
      piVar5[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *piVar5 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1002352d;
    }
    FUN_10021b34(piVar5);
  }
  piVar6 = *(int **)(iVar4 + 0x12d0);
  *piVar6 = (int)local_8;
  piVar7 = local_44;
  piVar8 = piVar6;
  for (iVar4 = 0xf; piVar8 = piVar8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
  }
  piVar8 = local_80;
  piVar7 = piVar6 + 0x10;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
  }
  FUN_1002353a(piVar6);
LAB_1002352d:
  *piVar5 = 0;
  return;
}

