/*
 * FUN_100482f8 at 100482f8
 * undefined __thiscall FUN_100482f8(void * this, int * param_1)
 * Address ranges: 100482f8-10048472
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10048452) */

void __thiscall FUN_100482f8(void *this,int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_88 [16];
  int local_48 [16];
  void *local_8;
  
  local_8 = this;
  if (param_1 == (int *)0x0) {
    iVar3 = *(int *)((int)this + 0xf6b8);
    piVar6 = (int *)(iVar3 + 0x11c0);
    FUN_100ce620(piVar6);
    if (*(char *)(iVar3 + 0x12ec) != '\0') {
      puVar2 = (undefined4 *)FUN_100ce540(piVar6,4);
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
        UNLOCK();
        puVar2[1] = 4;
        puVar5 = (undefined4 *)((int)puVar2 + 0xfU & 0xfffffffc);
        puVar2[2] = this;
        *puVar5 = 0;
        *puVar2 = FUN_10048486;
        piVar6[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
        if (*(char *)(iVar3 + 0x12ed) != '\0') {
          *piVar6 = 0;
          SetEvent(*(HANDLE *)(iVar3 + 0x1220));
          return;
        }
        goto LAB_1004846a;
      }
      FUN_1003971e(piVar6);
    }
    puVar2 = *(undefined4 **)(iVar3 + 0x12d0);
    *puVar2 = this;
    FUN_10048486(puVar2);
LAB_1004846a:
    *piVar6 = 0;
    return;
  }
  piVar6 = local_88;
  for (iVar3 = 0x20; pvVar1 = local_8, iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *param_1;
    param_1 = param_1 + 1;
    piVar6 = piVar6 + 1;
  }
  iVar3 = *(int *)((int)local_8 + 0xf6b8);
  piVar6 = (int *)(iVar3 + 0x11c0);
  FUN_100ce620(piVar6);
  if (*(char *)(iVar3 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_100ce540(piVar6,0x84);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x84;
      puVar2[2] = pvVar1;
      piVar7 = local_88;
      piVar9 = puVar2 + 3;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      piVar7 = local_48;
      piVar9 = puVar2 + 0x13;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      puVar5 = (undefined4 *)((int)puVar2 + 0x8fU & 0xfffffffc);
      *puVar5 = 0;
      *puVar2 = FUN_10048473;
      piVar6[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar3 + 0x12ed) != '\0') {
        *piVar6 = 0;
        SetEvent(*(HANDLE *)(iVar3 + 0x1220));
        return;
      }
      goto LAB_100483de;
    }
    FUN_1003971e(piVar6);
  }
  piVar7 = *(int **)(iVar3 + 0x12d0);
  *piVar7 = (int)pvVar1;
  piVar8 = local_88;
  piVar9 = piVar7;
  for (iVar3 = 0x10; piVar9 = piVar9 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
  }
  piVar9 = local_48;
  piVar8 = piVar7 + 0x11;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar8 = piVar8 + 1;
  }
  FUN_10048473(piVar7);
LAB_100483de:
  *piVar6 = 0;
  return;
}

