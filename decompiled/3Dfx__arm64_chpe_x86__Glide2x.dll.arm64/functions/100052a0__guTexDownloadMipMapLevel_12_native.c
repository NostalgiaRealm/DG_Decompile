/*
 * _guTexDownloadMipMapLevel@12_native at 100052a0
 * undefined _guTexDownloadMipMapLevel@12_native(void)
 * Address ranges: 100052a0-10005423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexDownloadMipMapLevel_12_native(undefined8 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint extraout_w11;
  
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
        uVar8 = (ulonglong)*(uint *)(iVar3 + 0x18);
        uVar9 = (ulonglong)*(uint *)(iVar3 + 0x10);
        uVar10 = (ulonglong)*(uint *)(iVar3 + 0x48);
        iVar7 = FUN_1001ef08(uVar10,param_2,param_2,uVar9,uVar8);
        FUN_1001e2c8(iVar6,iVar2,*(undefined4 *)(iVar3 + 0x4c),param_2,*(undefined4 *)(iVar3 + 0x40)
                     ,uVar9 & 0xffffffff,uVar8 & 0xffffffff,uVar10 & 0xffffffff,*param_3);
        *param_3 = iVar7 + *param_3;
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

