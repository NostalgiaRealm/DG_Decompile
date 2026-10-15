/*
 * FUN_10022dec at 10022dec
 * undefined __thiscall FUN_10022dec(void * this, int * param_1, int * param_2, int * param_3, undefined1 param_4)
 * Address ranges: 10022dec-10022f31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022dec(void *this,int *param_1,int *param_2,int *param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_bc [15];
  int local_80 [15];
  int local_44 [15];
  void *local_8;
  
  local_8 = this;
  FUN_100210e5((int)this + 0x3440);
  iVar4 = *(int *)((int)this + 0x3188);
  piVar5 = local_bc;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_3;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
  }
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
  FUN_100360e0(piVar5);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_10036000(piVar5,0xbc);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0xbc;
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
      piVar6 = local_bc;
      piVar8 = puVar1 + 0x21;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      *(undefined1 *)(puVar1 + 0x30) = param_4;
      puVar3 = (undefined4 *)((int)puVar1 + 199U & 0xfffffffc);
      *puVar3 = 0;
      *puVar1 = FUN_10022f32;
      piVar5[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *piVar5 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_10022f25;
    }
    FUN_10021ec0(piVar5);
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
  piVar8 = local_bc;
  piVar7 = piVar6 + 0x1f;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
  }
  *(undefined1 *)(piVar6 + 0x2e) = param_4;
  FUN_10022f32(piVar6);
LAB_10022f25:
  *piVar5 = 0;
  return;
}

