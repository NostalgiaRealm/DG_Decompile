/*
 * FUN_1004ca84 at 1004ca84
 * undefined __thiscall FUN_1004ca84(void * this, int param_1, uint param_2)
 * Address ranges: 1004ca84-1004cce9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004ca84(void *this,int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  undefined4 *puVar9;
  int iStack_a4;
  char cStack_9d;
  void *local_9c;
  int iStack_98;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  uint local_80;
  int iStack_7c;
  uint local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_30 [11];
  
  piVar1 = *(int **)(param_1 + 0xd7c);
  local_9c = this;
  if (piVar1 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x28))(piVar1,&local_40);
    uVar6 = *(uint *)(param_1 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x18);
    puVar9 = auStack_90;
    for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    if (((local_80 == uVar6 / uVar2) && (iStack_7c == 0)) &&
       (local_78 == *(uint *)(param_1 + 0x14) / *(uint *)(param_1 + 0x1c))) {
      cVar4 = *(uint *)(param_1 + 0x20) < param_2;
    }
    else {
      cStack_9d = '\x01';
      FUN_1004ccea(local_9c,param_1);
      cVar4 = cStack_9d;
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  pvVar3 = local_9c;
  iVar8 = *(int *)(param_1 + 8) * 0x16c0;
  local_80 = *(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 0x18);
  local_74 = 1;
  local_78 = *(uint *)(param_1 + 0x14) / *(uint *)(param_1 + 0x1c);
  local_72 = 1;
  local_38 = 0x1688;
  uStack_70 = *(undefined4 *)(&DAT_10051e18 + *(int *)(param_1 + 0x2c) * 4);
  uStack_6c = 1;
  uStack_60 = 1;
  uStack_58 = *(undefined4 *)(&DAT_10051e08 + *(int *)(param_1 + 0x2c) * 4);
  uStack_54 = 4;
  uStack_3c = 4;
  puVar5 = local_30;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_30[3] = 0;
  auStack_90[0] = 3;
  uStack_88 = 0;
  iStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_30[0] = 0;
  local_30[1] = 0xffffffff;
  local_30[2] = 0;
  iStack_98 = iVar8;
  local_40 = uStack_58;
  if ((*(int *)(param_1 + 0x20) == 0) && (param_2 != 0)) {
    uVar6 = FUN_1003c646(*(void **)(iVar8 + 0x1c98 + (int)local_9c),2);
    *(uint *)(param_1 + 0xd84) = uVar6;
    uVar6 = FUN_1003c646(*(void **)(iVar8 + 0x1c9c + (int)pvVar3),2);
    *(uint *)(param_1 + 0xd88) = uVar6;
  }
  if ((*(int *)(param_1 + 0xd84) != -1) && (*(int *)(param_1 + 0xd88) != -1)) {
    for (uVar6 = *(uint *)(param_1 + 0x20); uVar6 < param_2; uVar6 = uVar6 + 1) {
      iVar7 = FUN_1003bde7((void *)((int)pvVar3 + 0x520),*(int *)(param_1 + 8),auStack_90);
      *(int *)(param_1 + 0xd7c + uVar6 * 4) = iVar7;
      if (iVar7 == 0) {
        return;
      }
      FUN_1003c902(*(void **)(iStack_98 + 0x1c98 + (int)pvVar3),(int *)&local_9c,
                   *(uint *)(param_1 + 0xd84),uVar6);
      piVar1 = *(int **)((int)pvVar3 + *(int *)(param_1 + 8) * 0x18 + 0x520);
      (**(code **)(*piVar1 + 0x48))
                (piVar1,*(undefined4 *)(param_1 + 0xd7c + uVar6 * 4),&local_40,local_9c);
      FUN_1003c902(*(void **)(unaff_EBX + 0x1c9c + (int)pvVar3),&iStack_a4,
                   *(uint *)(param_1 + 0xd88),uVar6);
      piVar1 = *(int **)((int)pvVar3 + *(int *)(param_1 + 8) * 0x18 + 0x520);
      (**(code **)(*piVar1 + 0x50))
                (piVar1,*(undefined4 *)(param_1 + 0xd7c + uVar6 * 4),&uStack_68,iStack_a4);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
  return;
}

