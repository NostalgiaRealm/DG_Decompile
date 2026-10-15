/*
 * FUN_10017b86 at 10017b86
 * undefined __thiscall FUN_10017b86(void * this, int param_1, int param_2, undefined4 * param_3, int param_4, int param_5)
 * Address ranges: 10017b86-10017daf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10017b86(void *this,int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

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
  FUN_10015782((int)this + 0x3940);
  if ((param_2 != 0) && (param_2 != 1)) {
    if ((param_2 != 2) && (param_2 != 3)) {
      return;
    }
    iVar2 = *(int *)((int)this + 0x3688);
    piVar7 = (int *)(iVar2 + 0x11c0);
    FUN_1002e0d0(piVar7);
    uVar5 = (param_5 - param_4) * 4;
    if (*(char *)(iVar2 + 0x12ec) != '\0') {
      local_8 = (undefined4 *)FUN_1002dff0(piVar7,uVar5 + 0x18);
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
        FUN_10055d40(puVar6,param_3 + param_4,uVar5);
        puVar6[param_5 - param_4] = 0;
        *local_8 = FUN_10017dd8;
        piVar7[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + (param_5 - param_4));
        if (*(char *)(iVar2 + 0x12ed) != '\0') {
          hEvent = *(HANDLE *)(iVar2 + 0x1220);
          *piVar7 = 0;
          goto LAB_10017d62;
        }
        goto LAB_10017caf;
      }
      FUN_100165f0(piVar7);
    }
    piVar1 = *(int **)(iVar2 + 0x12d0);
    *piVar1 = (int)(param_3 + param_4);
    piVar1[1] = (int)this;
    piVar1[2] = param_1;
    piVar1[3] = param_2;
    piVar1[4] = param_4;
    piVar1[5] = param_5;
    FUN_10017dd8(piVar1);
LAB_10017caf:
    *piVar7 = 0;
    return;
  }
  puVar6 = local_78;
  for (iVar2 = 0x1c; puVar4 = local_8, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = local_8[0xda2];
  piVar7 = (int *)(iVar2 + 0x11c0);
  FUN_1002e0d0(piVar7);
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    puVar6 = (undefined4 *)FUN_1002dff0(piVar7,0x84);
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
      *puVar6 = FUN_10017db0;
      piVar7[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        hEvent = *(HANDLE *)(iVar2 + 0x1220);
        *piVar7 = 0;
LAB_10017d62:
        SetEvent(hEvent);
        return;
      }
      goto LAB_10017da3;
    }
    FUN_100165f0(piVar7);
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
  FUN_10017db0(puVar6);
LAB_10017da3:
  *piVar7 = 0;
  return;
}

