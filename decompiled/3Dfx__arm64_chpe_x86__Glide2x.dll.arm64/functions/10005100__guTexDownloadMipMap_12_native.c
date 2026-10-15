/*
 * _guTexDownloadMipMap@12_native at 10005100
 * undefined _guTexDownloadMipMap@12_native(void)
 * Address ranges: 10005100-1000529b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexDownloadMipMap_12_native(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint extraout_w11;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 local_50;
  
  iVar6 = FUN_1001ba50();
  if (*(char *)(iVar6 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar6 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if ((*(int *)(iVar6 + 0x5c) != 0 && extraout_w11 != 0xffffffff) &&
       (extraout_w11 < *(uint *)(iVar6 + 0x60))) {
      iVar3 = *(int *)(iVar6 + 0x5c) + extraout_w11 * 0xc4;
      iVar2 = *(int *)(iVar3 + 0x44);
      if (iVar2 < *(int *)(*(int *)(iVar6 + 0x1c) + 0x797)) {
        if (((extraout_w11 == *(uint *)(iVar6 + 0x70)) || (extraout_w11 == *(uint *)(iVar6 + 0x74)))
           || (extraout_w11 == *(uint *)(iVar6 + 0x78))) {
          FUN_1001bc60(iVar6);
        }
        local_60 = *(undefined4 *)(iVar3 + 0x3c);
        uStack_5c = *(undefined4 *)(iVar3 + 0x40);
        iStack_54 = *(int *)(iVar3 + 0x18);
        local_58 = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(iVar3 + 0x14) = param_2;
        local_50 = param_2;
        FUN_1001efe0(iVar6,iVar2,*(undefined4 *)(iVar3 + 0x4c),*(undefined4 *)(iVar3 + 0x48),
                     &local_60);
        if (((*(int *)(iVar3 + 0x18) - 1U & 0xfffffff7) == 0) && (param_3 != (undefined8 *)0x0)) {
          uVar9 = *param_3;
          uVar8 = param_3[3];
          uVar7 = param_3[2];
          *(undefined8 *)(iVar3 + 0x5c) = param_3[1];
          *(undefined8 *)(iVar3 + 0x54) = uVar9;
          *(undefined8 *)(iVar3 + 0x6c) = uVar8;
          *(undefined8 *)(iVar3 + 100) = uVar7;
          uVar9 = param_3[4];
          uVar8 = param_3[7];
          uVar7 = param_3[6];
          *(undefined8 *)(iVar3 + 0x7c) = param_3[5];
          *(undefined8 *)(iVar3 + 0x74) = uVar9;
          *(undefined8 *)(iVar3 + 0x8c) = uVar8;
          *(undefined8 *)(iVar3 + 0x84) = uVar7;
          uVar9 = param_3[8];
          uVar8 = param_3[0xb];
          uVar7 = param_3[10];
          *(undefined8 *)(iVar3 + 0x9c) = param_3[9];
          *(undefined8 *)(iVar3 + 0x94) = uVar9;
          *(undefined8 *)(iVar3 + 0xac) = uVar8;
          *(undefined8 *)(iVar3 + 0xa4) = uVar7;
          uVar7 = param_3[0xc];
          *(undefined8 *)(iVar3 + 0xbc) = param_3[0xd];
          *(undefined8 *)(iVar3 + 0xb4) = uVar7;
        }
      }
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

