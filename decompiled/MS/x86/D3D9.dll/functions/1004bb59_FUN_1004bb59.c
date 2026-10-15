/*
 * FUN_1004bb59 at 1004bb59
 * undefined4 __thiscall FUN_1004bb59(void * this, void * param_1, uint param_2, uint param_3)
 * Address ranges: 1004bb59-1004bcf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004bb59(void *this,void *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  int *piVar7;
  int local_14;
  undefined4 local_10 [3];
  
  cVar6 = '\0';
  if ((param_3 & 2) == 0) {
    cVar2 = FUN_1004c155((int)param_1);
    if ((param_2 == 8) && (*(char *)((int)param_1 + 0x3c) != '\0')) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
  }
  else {
    uVar3 = FUN_1004c106((int)param_1);
    cVar2 = (char)uVar3;
  }
  if (cVar2 == '\0') {
    return 0x80004005;
  }
  if (param_2 == 0xc) {
    piVar7 = *(int **)(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1300) + 8);
    (**(code **)(*piVar7 + 0x40))(piVar7,local_10);
    FUN_1004c05e(param_1,(uint)this,local_14,*(int *)((int)param_1 + 0x20),
                 *(int *)((int)param_1 + 0x24),'\x01');
    return 0;
  }
  if (cVar6 != '\0') {
    LOCK();
    if (*(int *)((int)param_1 + 0x34) == 2) {
      *(int *)((int)param_1 + 0x34) = 3;
    }
    UNLOCK();
  }
  uVar3 = *(undefined4 *)((int)param_1 + 0x20);
  local_10[0] = *(undefined4 *)((int)param_1 + 0x24);
  iVar1 = *(int *)((int)this + 0xf6b8);
  piVar7 = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(piVar7);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar4 = (undefined4 *)FUN_100ce540(piVar7,0x1c);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar4[1] = 0x1c;
      puVar4[2] = this;
      puVar4[3] = param_1;
      puVar4[4] = param_2;
      puVar4[5] = param_3;
      puVar4[6] = uVar3;
      puVar4[7] = local_10[0];
      *(char *)(puVar4 + 8) = cVar6;
      puVar5 = (undefined4 *)((int)puVar4 + 0x27U & 0xfffffffc);
      *puVar5 = 0;
      *puVar4 = FUN_1004bcf6;
      piVar7[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *piVar7 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return 0;
      }
      goto LAB_1004bcac;
    }
    FUN_1003971e(piVar7);
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar4 = this;
  puVar4[1] = param_1;
  puVar4[2] = param_2;
  puVar4[3] = param_3;
  puVar4[4] = uVar3;
  puVar4[5] = local_10[0];
  *(char *)(puVar4 + 6) = cVar6;
  FUN_1004bcf6(puVar4);
LAB_1004bcac:
  *piVar7 = 0;
  return 0;
}

