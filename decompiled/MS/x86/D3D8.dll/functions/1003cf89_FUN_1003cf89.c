/*
 * FUN_1003cf89 at 1003cf89
 * undefined __thiscall FUN_1003cf89(void * this, uint * param_1)
 * Address ranges: 1003cf89-1003d0e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003cf89(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_8;
  
  piVar4 = (int *)FUN_10007b93((void *)((int)this + 0xda34),param_1);
  if (piVar4 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *piVar4;
  }
  uVar1 = *param_1;
  uVar5 = FUN_10007d2a((void *)((int)this + 0xda34),uVar1,0);
  uVar6 = *(uint *)((int)this + 0xda3c);
  if (((uVar5 != uVar6) && (*(uint *)(*(int *)((int)this + 0xda38) + uVar5 * 0x10) == uVar1)) &&
     (*(int *)(*(int *)((int)this + 0xda38) + 4 + uVar5 * 0x10) == 0)) {
    uVar5 = uVar5 + 1;
    if (uVar5 < uVar6) {
      do {
        puVar8 = (undefined4 *)(uVar5 * 0x10 + *(int *)((int)this + 0xda38));
        uVar5 = uVar5 + 1;
        puVar8[-4] = *puVar8;
        puVar8[-3] = puVar8[1];
        puVar8[-2] = puVar8[2];
        puVar8[-1] = puVar8[3];
        uVar6 = *(uint *)((int)this + 0xda3c);
      } while (uVar5 < uVar6);
    }
    *(uint *)((int)this + 0xda3c) = uVar6 - 1;
  }
  iVar2 = *(int *)((int)this + 0xd9b8);
  piVar4 = (int *)(iVar2 + 0x11c0);
  *(undefined4 *)((int)this + 0xddc4) = 0;
  *(undefined4 *)((int)this + 0xddc8) = 0;
  uVar1 = *param_1;
  FUN_100abd50(piVar4);
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    puVar8 = (undefined4 *)FUN_100abc70(piVar4,0xc);
    if (puVar8 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      puVar8[1] = 0xc;
      puVar8[2] = this;
      puVar8[3] = local_8;
      puVar7 = (undefined4 *)((int)puVar8 + 0x17U & 0xfffffffc);
      puVar8[4] = uVar1;
      *puVar7 = 0;
      *puVar8 = FUN_1003d0e4;
      piVar4[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar7;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *piVar4 = 0;
        SetEvent(*(HANDLE *)(iVar2 + 0x1220));
        return;
      }
      goto LAB_1003d0d7;
    }
    FUN_1002f90d(piVar4);
  }
  piVar3 = *(int **)(iVar2 + 0x12d0);
  *piVar3 = (int)this;
  piVar3[1] = local_8;
  piVar3[2] = uVar1;
  FUN_1003d0e4(piVar3);
LAB_1003d0d7:
  *piVar4 = 0;
  return;
}

