/*
 * FUN_10005740 at 10005740
 * undefined FUN_10005740(void)
 * Address ranges: 10005740-100058c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005740(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar8;
  
  FUN_100fed00(*(undefined4 *)(param_1 + 0x10));
  FUN_100fed00(*(undefined4 *)(param_1 + 0xc));
  FUN_100fed00(*(undefined4 *)(param_1 + 0x14));
  FUN_100fed00(*(undefined4 *)(param_1 + 0x18));
  uVar7 = FUN_100fed00(*(undefined4 *)(param_1 + 0x1c));
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(uint *)(param_1 + 0x4c) != 0) {
    do {
      if (*(char *)(param_1 + 0x26 + uVar8) != '\0') {
        piVar2 = &DAT_101387cc + uVar8 * 0x8a;
        if ((&DAT_101387cc)[uVar8 * 0x8a] != 0) {
          do {
            iVar1 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
            if (bVar4) {
              *piVar2 = iVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          DataMemoryBarrier(2,3);
          if (iVar1 + -1 == 0) {
            uVar6 = (*pcVar5)();
            (*extraout_w11)(uVar6);
            uVar7 = (ulonglong)(uint)(&DAT_101387c8)[uVar8 * 0x8a];
            if ((&DAT_101387c8)[uVar8 * 0x8a] != 0) {
              uVar6 = (*pcVar5)();
              uVar7 = (*extraout_w11_00)(uVar6,1);
            }
            (&DAT_101387c8)[uVar8 * 0x8a] = 0;
          }
        }
      }
      uVar7 = FUN_10030538(uVar7,*(undefined4 *)(*(int *)(param_1 + 0x48) + uVar8 * 4));
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x4c));
  }
  FUN_10031780();
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

