/*
 * _guTexSource@4_native at 10005570
 * undefined _guTexSource@4_native(void)
 * Address ranges: 10005570-1000573b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexSource_4_native(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 local_40;
  
  iVar6 = FUN_1001beb0();
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
    if ((*(int *)(iVar6 + 0x5c) != 0 && param_1 != 0xffffffff) &&
       (param_1 < *(uint *)(iVar6 + 0x60))) {
      iVar3 = *(int *)(iVar6 + 0x5c) + param_1 * 0xc4;
      iVar2 = *(int *)(iVar3 + 0x44);
      if (iVar2 < *(int *)(*(int *)(iVar6 + 0x1c) + 0x797)) {
        FUN_1001c0c0(iVar6);
        local_50 = *(undefined4 *)(iVar3 + 0x3c);
        uStack_4c = *(undefined4 *)(iVar3 + 0x40);
        iStack_44 = *(int *)(iVar3 + 0x18);
        local_48 = *(undefined4 *)(iVar3 + 0x10);
        local_40 = *(undefined4 *)(iVar3 + 0x14);
        FUN_1001fa50(iVar6,iVar2,0,*(undefined4 *)(iVar3 + 0x4c),*(undefined4 *)(iVar3 + 0x48),
                     &local_50);
        if ((*(int *)(iVar3 + 0x18) - 1U & 0xfffffff7) == 0) {
          FUN_1001ed60(iVar6,iVar2,*(undefined1 *)(*(int *)(iVar6 + 0xc) + iVar2 + 0x137),
                       iVar3 + 0x54);
        }
        FUN_1001ea28(iVar6,iVar2,*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x2c));
        FUN_1001ec50(iVar6,iVar2,*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x20));
        FUN_1001f250(iVar6,iVar2,*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x50));
        FUN_1001eb38(*(undefined4 *)(iVar3 + 0x38),iVar6,iVar2);
        *(uint *)(iVar6 + iVar2 * 4 + 0x70) = param_1;
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

