/*
 * FUN_1003d238 at 1003d238
 * undefined __thiscall FUN_1003d238(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1003d238-1003d423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d238(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar5 = param_2;
  if (0x200 < (uint)(param_2 - param_1)) {
    iVar5 = param_1 + 0x200;
  }
  iVar1 = *(int *)((int)this + 0xd9b8);
  piVar7 = (int *)(iVar1 + 0x11c0);
  FUN_100abd50(piVar7);
  uVar2 = (iVar5 - param_1) * 0x10;
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_1003d30b:
    puVar4 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar4 = param_3;
    puVar4[1] = this;
    puVar4[2] = param_1;
    puVar4[3] = iVar5;
    FUN_1003d424(puVar4);
LAB_1003d329:
    *piVar7 = 0;
  }
  else {
    iVar3 = uVar2 + 0x10;
    puVar4 = (undefined4 *)FUN_100abc70(piVar7,iVar3);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_1002f90d(piVar7);
      goto LAB_1003d30b;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar4[1] = iVar3;
    puVar4[3] = this;
    puVar4[4] = param_1;
    puVar6 = (undefined4 *)((int)puVar4 + 0x1bU & 0xfffffffc);
    puVar4[5] = iVar5;
    puVar4[2] = puVar6;
    FUN_100adac0(puVar6,param_3,uVar2);
    puVar6[(iVar5 - param_1) * 4] = 0;
    *puVar4 = FUN_1003d424;
    piVar7[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + (iVar5 - param_1) * 4);
    if (*(char *)(iVar1 + 0x12ed) == '\0') goto LAB_1003d329;
    *piVar7 = 0;
    SetEvent(*(HANDLE *)(iVar1 + 0x1220));
  }
  if (iVar5 == param_2) {
    return;
  }
  iVar1 = *(int *)((int)this + 0xd9b8);
  piVar7 = (int *)(iVar1 + 0x11c0);
  FUN_100abd50(piVar7);
  uVar2 = (param_2 - iVar5) * 0x10;
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    iVar3 = uVar2 + 0x10;
    puVar4 = (undefined4 *)FUN_100abc70(piVar7,iVar3);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar4[1] = iVar3;
      puVar4[3] = this;
      puVar4[4] = iVar5;
      puVar4[5] = param_2;
      puVar6 = (undefined4 *)((int)puVar4 + 0x1bU & 0xfffffffc);
      puVar4[2] = puVar6;
      FUN_100adac0(puVar6,param_3 + iVar5 * 4,uVar2);
      puVar6[(param_2 - iVar5) * 4] = 0;
      *puVar4 = FUN_1003d424;
      piVar7[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + (param_2 - iVar5) * 4);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *piVar7 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1003d417;
    }
    FUN_1002f90d(piVar7);
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar4 = param_3 + iVar5 * 4;
  puVar4[1] = this;
  puVar4[2] = iVar5;
  puVar4[3] = param_2;
  FUN_1003d424(puVar4);
LAB_1003d417:
  *piVar7 = 0;
  return;
}

