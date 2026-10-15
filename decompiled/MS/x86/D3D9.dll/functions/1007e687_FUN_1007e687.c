/*
 * FUN_1007e687 at 1007e687
 * undefined4 __thiscall FUN_1007e687(void * this, int param_1, int param_2, int param_3, int param_4, int * param_5, int param_6, int param_7, int param_8)
 * Address ranges: 1007e687-1007e7bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1007e687(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_24 [6];
  int *local_c;
  void *local_8;
  
  iVar4 = *(int *)((int)this + 0x1cf04);
  piVar5 = local_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_5;
    param_5 = param_5 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar5 = (int *)(iVar4 + 0x11c0);
  local_c = piVar5;
  local_8 = this;
  FUN_100ce620(piVar5);
  if (*(char *)(iVar4 + 0x12ec) == '\0') {
LAB_1007e765:
    puVar1 = *(undefined4 **)(iVar4 + 0x12d0);
    *puVar1 = local_8;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = param_4;
    piVar5 = local_24;
    piVar6 = puVar1 + 5;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    puVar1[0xb] = param_6;
    puVar1[0xc] = param_7;
    puVar1[0xd] = param_8;
    iVar2 = FUN_1007e7be(puVar1);
    piVar5 = local_c;
  }
  else {
    puVar1 = (undefined4 *)FUN_100ce540(piVar5,0x38);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1003971e(piVar5);
      goto LAB_1007e765;
    }
    LOCK();
    *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
    UNLOCK();
    puVar1[1] = 0x38;
    puVar1[2] = local_8;
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
    piVar6 = local_24;
    piVar7 = puVar1 + 7;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    puVar1[0xd] = param_6;
    puVar1[0xe] = param_7;
    puVar1[0xf] = param_8;
    puVar3 = (undefined4 *)((int)puVar1 + 0x43U & 0xfffffffc);
    *puVar3 = 0;
    *puVar1 = FUN_1007e7be;
    iVar2 = *(int *)(iVar4 + 0x12e4) * 0x14;
    piVar5[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar4 + 0x12ed) != '\0') {
      *piVar5 = 0;
      iVar2 = SetEvent(*(HANDLE *)(iVar4 + 0x1220));
      goto LAB_1007e7b5;
    }
  }
  *piVar5 = 0;
LAB_1007e7b5:
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

