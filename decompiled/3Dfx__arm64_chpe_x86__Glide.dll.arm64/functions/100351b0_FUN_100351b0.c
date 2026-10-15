/*
 * FUN_100351b0 at 100351b0
 * undefined FUN_100351b0(void)
 * Address ranges: 100351b0-1003547b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100351b0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  code *extraout_w11;
  int local_c0 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar9 = (*extraout_w11)(uVar8,local_c0,0);
  if ((((-1 < iVar9) && (local_c0[0] == 4)) && (*(int *)(*(int *)(param_1 + 0x3188) + 0x12e8) == 0))
     && (uVar11 = FUN_10059fd0(*(undefined4 *)(*(int *)(param_1 + 0x3180) + 0x172c0),
                               *(undefined4 *)(param_1 + 0x31a8)), (uVar11 & 1) != 0)) {
    uVar12 = 3;
    bVar7 = *(int *)(param_1 + 0x3968) != *(int *)(param_1 + 0x3978);
    if (*(int *)(param_1 + 0x3968) == *(int *)(param_1 + 0x3978)) {
      for (; uVar12 < 3; uVar12 = uVar12 + 1) {
        bVar7 = false;
      }
    }
    if (!bVar7) {
      FUN_10063a90(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),
                   *(undefined4 *)(param_1 + 0x31a8),param_3,param_3 + param_4,param_2,0);
      return;
    }
  }
  iVar9 = *(int *)(param_1 + 0x3188);
  FUN_10063bd0(*(undefined4 *)(iVar9 + 0x1304),&local_70,iVar9 + 0x1430,param_4,param_2);
  if (iStack_6c == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(iVar9 + 0x11c0);
  FUN_100552f0(puVar2);
  bVar7 = true;
  local_a0 = CONCAT44(iStack_6c,local_70);
  local_80 = local_50;
  cVar4 = *(char *)(iVar9 + 0x12ec);
  uStack_98 = uStack_68;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  if (cVar4 == '\0') {
LAB_10035400:
    if (cVar4 != '\0') goto LAB_1003543c;
  }
  else {
    puVar10 = (undefined4 *)FUN_10055198(puVar2,0x34);
    if (puVar10 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar9 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar10[1] = 0x34;
      puVar10[2] = param_1;
      *(undefined8 *)(puVar10 + 5) = uStack_98;
      *(undefined8 *)(puVar10 + 3) = local_a0;
      *(undefined8 *)(puVar10 + 9) = uStack_88;
      *(undefined8 *)(puVar10 + 7) = uStack_90;
      *(undefined8 *)(puVar10 + 0xb) = local_80;
      puVar10[0xd] = param_3;
      puVar10[0xe] = param_4;
      puVar3 = (undefined4 *)((int)puVar10 + 0x3fU & 0xfffffffc);
      *puVar3 = 0;
      *puVar10 = FUN_10035480;
      puVar2[*(int *)(iVar9 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar9 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar9 + 0x1220));
        bVar7 = false;
      }
      goto LAB_10035400;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_100552f0(puVar2);
  }
  piVar1 = *(int **)(iVar9 + 0x12d0);
  *piVar1 = param_1;
  *(undefined8 *)(piVar1 + 3) = uStack_98;
  *(undefined8 *)(piVar1 + 1) = local_a0;
  *(undefined8 *)(piVar1 + 7) = uStack_88;
  *(undefined8 *)(piVar1 + 5) = uStack_90;
  *(undefined8 *)(piVar1 + 9) = local_80;
  piVar1[0xb] = param_3;
  piVar1[0xc] = param_4;
  FUN_10035480(piVar1);
LAB_1003543c:
  if (bVar7) {
    *puVar2 = 0;
  }
  return;
}

