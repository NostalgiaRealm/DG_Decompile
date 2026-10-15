/*
 * FUN_1004847a at 1004847a
 * undefined4 __thiscall FUN_1004847a(void * this, int param_1)
 * Address ranges: 1004847a-10048870
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004847a(void *this,int param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *this_00;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined *puVar11;
  char *pcVar12;
  void *pvVar13;
  undefined4 uVar14;
  int *piVar15;
  ushort in_FPUControlWord;
  uint local_1c;
  undefined *local_18;
  int *local_14;
  uint *local_10;
  uint local_c;
  void *local_8;
  
  local_10 = &local_1c;
  local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_1c = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_1c = (uint)in_FPUControlWord;
    local_c = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  if (*(char *)((int)this + 0x1efc) != '\0') {
    return 0x88760005;
  }
  local_8 = this;
  cVar2 = (**(code **)(**(int **)((int)this + 0x90) + 0x30))();
  iVar5 = 0;
  if (cVar2 == '\0') {
    do {
      if (*(int *)(param_1 + iVar5 * 4) != (&DAT_1005d120)[iVar5]) {
        return 0x80004002;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
  }
  else {
    do {
      if (*(int *)(param_1 + iVar5 * 4) != (&DAT_1005d0f0)[iVar5]) {
        iVar5 = 0;
        goto LAB_10048509;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
  }
  goto LAB_1004854b;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_10048509:
    if (*(int *)(param_1 + iVar5 * 4) != (&DAT_1005d100)[iVar5]) {
      iVar5 = 0;
      do {
        if (*(int *)(param_1 + iVar5 * 4) != (&DAT_1005d110)[iVar5]) {
          return 0x80004002;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      break;
    }
  }
LAB_1004854b:
  iVar5 = (**(code **)(**(int **)((int)this + 0x90) + 0x44))();
  iVar5 = *(int *)(iVar5 + 0x7bc);
  cVar2 = (**(code **)(**(int **)((int)this + 0x90) + 0x34))();
  iVar6 = 0;
  if (cVar2 == '\0') {
    iVar6 = iVar5;
  }
  *(int *)((int)this + 0x98) = iVar6;
  local_10 = (uint *)((int)this + 0x1594);
  local_c = 0;
  do {
    iVar5 = local_c * 0xfc;
    local_14 = (int *)((int)this + iVar5 + 0xe8);
    FUN_1005c9cc(local_14,0,0xfc);
    piVar9 = (int *)((int)this + iVar5 + 0x7cc);
    FUN_1005c9cc(piVar9,0,0xfc);
    piVar10 = (int *)((int)this + iVar5 + 0xeb0);
    FUN_1005c9cc(piVar10,0,0xfc);
    piVar15 = (int *)(local_c * 0xec + (int)local_10);
    FUN_1005c9cc(piVar15,0,0xec);
    local_18 = (undefined *)(local_c * 0x298);
    FUN_1003cba7((&PTR_DAT_1005dcec)[iVar6] + (int)local_18,local_14);
    puVar1 = local_18;
    FUN_1003cc8f((&PTR_DAT_1005dcec)[iVar6] + (int)local_18,piVar9);
    FUN_1003cd2c((&PTR_DAT_1005dcec)[iVar6] + (int)puVar1,piVar10);
    puVar11 = (&PTR_DAT_1005dcec)[iVar6] + (int)puVar1;
    local_18 = puVar11;
    FUN_1003ce53(puVar11,piVar15);
    pvVar13 = local_8;
    pcVar12 = puVar11 + 0x136;
    pcVar7 = *(char **)(local_18 + 0x28);
    if ((pcVar7 != pcVar12) && (pcVar8 = pcVar12, pcVar7 != (char *)0x0)) {
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar8 = cVar2;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      *(char **)(local_18 + 0x28) = pcVar12;
    }
    puVar11 = (&PTR_DAT_1005dcec)[iVar6];
    pcVar12 = puVar11 + (int)puVar1 + 0x176;
    pcVar7 = *(char **)(puVar11 + (int)puVar1 + 0x24);
    if ((pcVar7 != pcVar12) && (pcVar8 = pcVar12, pcVar7 != (char *)0x0)) {
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar8 = cVar2;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      *(char **)(puVar11 + (int)puVar1 + 0x24) = pcVar12;
    }
    puVar11 = (&PTR_DAT_1005dcec)[iVar6];
    pcVar12 = puVar11 + (int)puVar1 + 0x1b6;
    pcVar7 = *(char **)(puVar11 + (int)puVar1 + 0x2c);
    if ((pcVar7 != pcVar12) && (pcVar8 = pcVar12, pcVar7 != (char *)0x0)) {
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar8 = cVar2;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      *(char **)(puVar11 + (int)puVar1 + 0x2c) = pcVar12;
    }
    local_c = local_c + 1;
    this = local_8;
  } while (local_c < 7);
  piVar9 = (int *)((int)local_8 + 0x1c08);
  FUN_1005c9cc(piVar9,0,0xfc);
  piVar10 = (int *)((int)pvVar13 + 0x1d04);
  FUN_1005c9cc(piVar10,0,0xfc);
  piVar15 = (int *)((int)pvVar13 + 0x1e00);
  FUN_1005c9cc(piVar15,0,0xfc);
  pvVar13 = local_8;
  *piVar9 = *(int *)((int)local_8 + 0xe8);
  *(undefined4 *)((int)local_8 + 0x1c24) = 0x10;
  *piVar10 = *(int *)((int)local_8 + 0x7cc);
  *(undefined4 *)((int)local_8 + 0x1d20) = 0x10;
  *(undefined4 *)((int)local_8 + 0x1e1c) = 0x10;
  *(undefined4 *)((int)local_8 + 0x1c34) = 0x38;
  *(undefined4 *)((int)local_8 + 0x1c6c) = 0x38;
  *(undefined4 *)((int)local_8 + 0x1d30) = 0x38;
  *(undefined4 *)((int)local_8 + 0x1d68) = 0x38;
  *piVar15 = *(int *)((int)local_8 + 0xeb0);
  *(undefined4 *)((int)local_8 + 0x1e2c) = 0x38;
  *(undefined4 *)((int)local_8 + 0x1e64) = 0x38;
  uVar3 = FUN_100058d6((int *)((int)local_8 + 0x7c));
  if ((char)uVar3 == '\0') {
    uVar14 = 0x80004005;
  }
  else {
    piVar9 = (int *)(*(int *)((int)pvVar13 + 0x94) + 0xc);
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
    if ((*(undefined4 **)((int)pvVar13 + 0x94))[2] == 0) {
      iVar5 = (**(code **)(*(int *)**(undefined4 **)((int)pvVar13 + 0x94) + 0x1c))();
      if (iVar5 == 0) {
        uVar14 = *(undefined4 *)(*(int *)((int)pvVar13 + 0x94) + 0x10);
        this_00 = (void *)FUN_1005c755(0x13c);
        if (this_00 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_10013fb5(this_00,uVar14);
        }
        *(undefined4 **)(*(int *)((int)pvVar13 + 0x94) + 8) = puVar4;
      }
      else if (iVar5 == 1) {
        iVar5 = *(int *)((int)pvVar13 + 0x94);
        puVar4 = FUN_1001b034(*(undefined4 *)(*(int *)((int)local_8 + 0x94) + 0x10));
        *(undefined4 **)(iVar5 + 8) = puVar4;
        pvVar13 = local_8;
      }
      piVar9 = *(int **)(*(int *)((int)pvVar13 + 0x94) + 8);
      if ((piVar9 != (int *)0x0) && (cVar2 = (**(code **)(*piVar9 + 4))(), cVar2 == '\0')) {
        puVar4 = *(undefined4 **)(*(int *)((int)pvVar13 + 0x94) + 8);
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        *(undefined4 *)(*(int *)((int)pvVar13 + 0x94) + 8) = 0;
      }
    }
    if (*(int *)(*(int *)((int)pvVar13 + 0x94) + 8) == 0) {
      LOCK();
      piVar9 = (int *)(*(int *)((int)pvVar13 + 0x94) + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      uVar14 = 0x80004005;
    }
    else {
      *(undefined1 *)((int)pvVar13 + 0x1efc) = 1;
      uVar14 = 0;
    }
  }
  return uVar14;
}

