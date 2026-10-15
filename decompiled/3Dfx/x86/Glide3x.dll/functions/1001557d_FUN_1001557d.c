/*
 * FUN_1001557d at 1001557d
 * undefined __thiscall FUN_1001557d(void * this, int param_1, int param_2, undefined4 * param_3, int param_4, int param_5)
 * Address ranges: 1001557d-100157a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001557d(void *this,int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  HANDLE hEvent;
  undefined4 local_78 [28];
  undefined4 *local_8;
  
  local_8 = this;
  FUN_1001416a((int)this + 0x35c0);
  if ((param_2 != 0) && (param_2 != 1)) {
    if ((param_2 != 2) && (param_2 != 3)) {
      return;
    }
    iVar2 = *(int *)((int)this + 0x3308);
    piVar7 = (int *)(iVar2 + 0x11c0);
    FUN_1002acc0(piVar7);
    uVar5 = (param_5 - param_4) * 4;
    if (*(char *)(iVar2 + 0x12ec) != '\0') {
      local_8 = (undefined4 *)FUN_1002abe0(piVar7,uVar5 + 0x18);
      if (local_8 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
        UNLOCK();
        local_8[1] = uVar5 + 0x18;
        local_8[3] = this;
        local_8[4] = param_1;
        local_8[5] = param_2;
        local_8[6] = param_4;
        puVar6 = (undefined4 *)((int)local_8 + 0x23U & 0xfffffffc);
        local_8[7] = param_5;
        local_8[2] = puVar6;
        FUN_10052930(puVar6,param_3 + param_4,uVar5);
        puVar6[param_5 - param_4] = 0;
        *local_8 = FUN_100157cf;
        piVar7[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + (param_5 - param_4));
        if (*(char *)(iVar2 + 0x12ed) != '\0') {
          hEvent = *(HANDLE *)(iVar2 + 0x1220);
          *piVar7 = 0;
          goto LAB_10015759;
        }
        goto LAB_100156a6;
      }
      FUN_10014f4d(piVar7);
    }
    piVar1 = *(int **)(iVar2 + 0x12d0);
    *piVar1 = (int)(param_3 + param_4);
    piVar1[1] = (int)this;
    piVar1[2] = param_1;
    piVar1[3] = param_2;
    piVar1[4] = param_4;
    piVar1[5] = param_5;
    FUN_100157cf(piVar1);
LAB_100156a6:
    *piVar7 = 0;
    return;
  }
  puVar6 = local_78;
  for (iVar2 = 0x1c; puVar4 = local_8, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = local_8[0xcc2];
  piVar7 = (int *)(iVar2 + 0x11c0);
  FUN_1002acc0(piVar7);
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    puVar6 = (undefined4 *)FUN_1002abe0(piVar7,0x84);
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      puVar6[1] = 0x84;
      puVar6[2] = puVar4;
      puVar6[3] = param_1;
      puVar6[4] = param_2;
      puVar6[5] = param_4;
      puVar6[6] = param_5;
      puVar4 = local_78;
      puVar8 = puVar6 + 7;
      for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined4 *)((int)puVar6 + 0x8fU & 0xfffffffc);
      *puVar4 = 0;
      *puVar6 = FUN_100157a7;
      piVar7[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        hEvent = *(HANDLE *)(iVar2 + 0x1220);
        *piVar7 = 0;
LAB_10015759:
        SetEvent(hEvent);
        return;
      }
      goto LAB_1001579a;
    }
    FUN_10014f4d(piVar7);
  }
  puVar6 = *(undefined4 **)(iVar2 + 0x12d0);
  *puVar6 = puVar4;
  puVar6[1] = param_1;
  puVar6[2] = param_2;
  puVar6[3] = param_4;
  puVar6[4] = param_5;
  puVar4 = local_78;
  puVar8 = puVar6 + 5;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_100157a7(puVar6);
LAB_1001579a:
  *piVar7 = 0;
  return;
}

