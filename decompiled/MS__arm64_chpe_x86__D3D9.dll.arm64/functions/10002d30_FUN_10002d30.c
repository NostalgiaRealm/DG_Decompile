/*
 * FUN_10002d30 at 10002d30
 * undefined FUN_10002d30(void)
 * Address ranges: 10002d30-10003013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10002d30(int param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  pcVar1 = (char *)(param_2 + param_1 + 0x26);
  if (*pcVar1 != '\0') goto LAB_10002fec;
  piVar2 = &DAT_1017138c + param_2 * 0x8a;
  do {
    cVar7 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  } while (cVar7 != '\0');
  DataMemoryBarrier(2,3);
  piVar3 = &DAT_10171388 + param_2 * 0x8a;
  if (*piVar3 == 0) {
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar9 = (*extraout_w11)(uVar8);
    if (iVar9 == 0) {
      uVar8 = (&DAT_10171390)[param_2 * 0x8a];
      puVar10 = (undefined4 *)FUN_101321c0(0x154);
      if (puVar10 == (undefined4 *)0x0) {
LAB_10002f54:
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = &PTR_FUN_1015e8b4;
        *(undefined8 *)(puVar10 + 0x4f) = 0;
        *(undefined8 *)(puVar10 + 0x51) = 0;
        puVar10[0x53] = uVar8;
        puVar10[0x54] = 0;
        *(undefined8 *)(puVar10 + 3) = 0;
        *(undefined8 *)(puVar10 + 1) = 0;
        *(undefined8 *)(puVar10 + 7) = 0;
        *(undefined8 *)(puVar10 + 5) = 0;
        *(undefined8 *)(puVar10 + 0xb) = 0;
        *(undefined8 *)(puVar10 + 9) = 0;
        *(undefined8 *)(puVar10 + 0xf) = 0;
        *(undefined8 *)(puVar10 + 0xd) = 0;
        puVar10[0x11] = 0;
        *(undefined8 *)(puVar10 + 0x14) = 0;
        *(undefined8 *)(puVar10 + 0x12) = 0;
        *(undefined8 *)(puVar10 + 0x18) = 0;
        *(undefined8 *)(puVar10 + 0x16) = 0;
        *(undefined8 *)(puVar10 + 0x1c) = 0;
        *(undefined8 *)(puVar10 + 0x1a) = 0;
        *(undefined8 *)(puVar10 + 0x20) = 0;
        *(undefined8 *)(puVar10 + 0x1e) = 0;
        puVar10[0x22] = 0;
        *(undefined8 *)(puVar10 + 0x25) = 0;
        *(undefined8 *)(puVar10 + 0x23) = 0;
        *(undefined8 *)(puVar10 + 0x29) = 0;
        *(undefined8 *)(puVar10 + 0x27) = 0;
        *(undefined8 *)(puVar10 + 0x2d) = 0;
        *(undefined8 *)(puVar10 + 0x2b) = 0;
        *(undefined8 *)(puVar10 + 0x31) = 0;
        *(undefined8 *)(puVar10 + 0x2f) = 0;
        *(undefined8 *)(puVar10 + 0x33) = 0;
        *(undefined8 *)(puVar10 + 0x37) = 0;
        *(undefined8 *)(puVar10 + 0x35) = 0;
        *(undefined8 *)(puVar10 + 0x3b) = 0;
        *(undefined8 *)(puVar10 + 0x39) = 0;
        *(undefined8 *)(puVar10 + 0x3f) = 0;
        *(undefined8 *)(puVar10 + 0x3d) = 0;
        *(undefined8 *)(puVar10 + 0x43) = 0;
        *(undefined8 *)(puVar10 + 0x41) = 0;
        puVar10[0x45] = 0;
        *(undefined8 *)(puVar10 + 0x48) = 0;
        *(undefined8 *)(puVar10 + 0x46) = 0;
        *(undefined8 *)(puVar10 + 0x4a) = 0;
        puVar10[0x4c] = 0;
        puVar10[0x4d] = 0;
        puVar10[0x4e] = 0;
      }
LAB_10002f58:
      *piVar3 = (int)puVar10;
    }
    else if (iVar9 == 1) {
      uVar4 = *(undefined1 *)(DAT_10170ad0 + 0x95d);
      uVar8 = (&DAT_10171390)[param_2 * 0x8a];
      puVar10 = (undefined4 *)FUN_101321c0(0xf0);
      if (puVar10 == (undefined4 *)0x0) goto LAB_10002f54;
      *puVar10 = &PTR_FUN_1015eb7c;
      *(undefined8 *)(puVar10 + 0x30) = 0xffffffff;
      puVar10[0x32] = uVar8;
      *(undefined8 *)(puVar10 + 0x33) = 0;
      *(undefined8 *)(puVar10 + 0x35) = 0;
      *(undefined8 *)(puVar10 + 0x37) = 0;
      *(undefined8 *)(puVar10 + 0x39) = 0;
      *(undefined1 *)(puVar10 + 0x3b) = uVar4;
      *(undefined8 *)(puVar10 + 3) = 0;
      *(undefined8 *)(puVar10 + 1) = 0;
      *(undefined8 *)(puVar10 + 7) = 0;
      *(undefined8 *)(puVar10 + 5) = 0;
      *(undefined8 *)(puVar10 + 0xb) = 0;
      *(undefined8 *)(puVar10 + 9) = 0;
      *(undefined8 *)(puVar10 + 0xf) = 0;
      *(undefined8 *)(puVar10 + 0xd) = 0;
      *(undefined8 *)(puVar10 + 0x11) = 0;
      *(undefined8 *)(puVar10 + 0x15) = 0;
      *(undefined8 *)(puVar10 + 0x13) = 0;
      *(undefined8 *)(puVar10 + 0x19) = 0;
      *(undefined8 *)(puVar10 + 0x17) = 0;
      *(undefined8 *)(puVar10 + 0x1d) = 0;
      *(undefined8 *)(puVar10 + 0x1b) = 0;
      *(undefined8 *)(puVar10 + 0x21) = 0;
      *(undefined8 *)(puVar10 + 0x1f) = 0;
      puVar10[0x23] = 0;
      *(undefined8 *)(puVar10 + 0x26) = 0;
      *(undefined8 *)(puVar10 + 0x24) = 0;
      *(undefined8 *)(puVar10 + 0x28) = 0;
      puVar10[0x2a] = 0;
      puVar10[0x2c] = 0;
      puVar10[0x2b] = 0;
      *(undefined8 *)(puVar10 + 0x2d) = 0;
      puVar10[0x2f] = 0;
      goto LAB_10002f58;
    }
    if (*piVar3 != 0) {
      uVar8 = (*pcVar6)();
      cVar7 = (*extraout_w11_00)(uVar8);
      if (cVar7 == '\0') {
        if (*piVar3 != 0) {
          uVar8 = (*pcVar6)();
          (*extraout_w11_01)(uVar8,1);
        }
        *piVar3 = 0;
        do {
          cVar7 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
      }
    }
  }
  if (*piVar3 != 0) {
    *pcVar1 = '\x01';
  }
LAB_10002fec:
  return (&DAT_10171388)[param_2 * 0x8a] != 0;
}

