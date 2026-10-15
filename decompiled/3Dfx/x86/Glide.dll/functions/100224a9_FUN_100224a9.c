/*
 * FUN_100224a9 at 100224a9
 * undefined __thiscall FUN_100224a9(void * this, int param_1, int param_2, int * param_3, int param_4, int param_5)
 * Address ranges: 100224a9-100226cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100224a9(void *this,int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  HANDLE hEvent;
  int local_78 [28];
  void *local_8;
  
  local_8 = this;
  FUN_100210e5((int)this + 0x3440);
  if ((param_2 != 0) && (param_2 != 1)) {
    if (param_2 != 2) {
      return;
    }
    iVar3 = *(int *)((int)this + 0x3188);
    piVar8 = (int *)(iVar3 + 0x11c0);
    FUN_100360e0(piVar8);
    uVar5 = (param_5 - param_4) * 4;
    if (*(char *)(iVar3 + 0x12ec) != '\0') {
      puVar2 = (undefined4 *)FUN_10036000(piVar8,uVar5 + 0x18);
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
        UNLOCK();
        puVar2[1] = uVar5 + 0x18;
        puVar2[3] = this;
        puVar2[4] = param_1;
        puVar2[5] = 2;
        puVar2[6] = param_4;
        puVar6 = (undefined4 *)((int)puVar2 + 0x23U & 0xfffffffc);
        puVar2[7] = param_5;
        puVar2[2] = puVar6;
        FUN_100500b0(puVar6,param_3 + param_4,uVar5);
        puVar6[param_5 - param_4] = 0;
        *puVar2 = FUN_100226f8;
        piVar8[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + (param_5 - param_4));
        if (*(char *)(iVar3 + 0x12ed) != '\0') {
          hEvent = *(HANDLE *)(iVar3 + 0x1220);
          *piVar8 = 0;
          goto LAB_10022682;
        }
        goto LAB_100225cf;
      }
      FUN_10021ec0(piVar8);
    }
    piVar7 = *(int **)(iVar3 + 0x12d0);
    *piVar7 = (int)(param_3 + param_4);
    piVar7[1] = (int)this;
    piVar7[2] = param_1;
    piVar7[3] = 2;
    piVar7[4] = param_4;
    piVar7[5] = param_5;
    FUN_100226f8(piVar7);
LAB_100225cf:
    *piVar8 = 0;
    return;
  }
  piVar8 = local_78;
  for (iVar3 = 0x1c; pvVar1 = local_8, iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = *param_3;
    param_3 = param_3 + 1;
    piVar8 = piVar8 + 1;
  }
  iVar3 = *(int *)((int)local_8 + 0x3188);
  piVar8 = (int *)(iVar3 + 0x11c0);
  FUN_100360e0(piVar8);
  if (*(char *)(iVar3 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_10036000(piVar8,0x84);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x84;
      puVar2[2] = pvVar1;
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_4;
      puVar2[6] = param_5;
      piVar7 = local_78;
      piVar9 = puVar2 + 7;
      for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      puVar6 = (undefined4 *)((int)puVar2 + 0x8fU & 0xfffffffc);
      *puVar6 = 0;
      *puVar2 = FUN_100226d0;
      piVar8[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar6;
      if (*(char *)(iVar3 + 0x12ed) != '\0') {
        hEvent = *(HANDLE *)(iVar3 + 0x1220);
        *piVar8 = 0;
LAB_10022682:
        SetEvent(hEvent);
        return;
      }
      goto LAB_100226c3;
    }
    FUN_10021ec0(piVar8);
  }
  puVar2 = *(undefined4 **)(iVar3 + 0x12d0);
  *puVar2 = pvVar1;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_4;
  puVar2[4] = param_5;
  piVar7 = local_78;
  piVar9 = puVar2 + 5;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  FUN_100226d0(puVar2);
LAB_100226c3:
  *piVar8 = 0;
  return;
}

