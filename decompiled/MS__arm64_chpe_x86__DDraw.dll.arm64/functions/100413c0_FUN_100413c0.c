/*
 * FUN_100413c0 at 100413c0
 * undefined FUN_100413c0(void)
 * Address ranges: 100413c0-10041537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100413c0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar3 = *piVar1 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar7) {
      *piVar1 = iVar3;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar3 == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    uVar9 = *(uint *)(iVar5 + 0x138);
    if (*(char *)(iVar5 + 0x14f) == '\0') {
      uVar8 = 0;
      if (uVar9 != 0) {
        do {
          piVar1 = (int *)(*(int *)(iVar5 + 0x134) + uVar8 * 4);
          if (*piVar1 == param_1) {
            *piVar1 = 0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(iVar5 + 0x138));
      }
    }
    else {
      if (uVar9 != 0) {
        uVar8 = 0;
        do {
          if (*(int *)(*(int *)(iVar5 + 0x134) + uVar8 * 4) == param_1) {
            puVar2 = (uint *)(iVar5 + 0x138);
            uVar9 = *puVar2;
            if (uVar8 < uVar9) {
              uVar8 = uVar8 + 1;
              if (uVar8 < uVar9) {
                do {
                  puVar4 = (undefined4 *)(*(int *)(iVar5 + 0x134) + uVar8 * 4);
                  uVar8 = uVar8 + 1;
                  puVar4[-1] = *puVar4;
                  uVar9 = *puVar2;
                } while (uVar8 < uVar9);
              }
              *puVar2 = uVar9 - 1;
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      uVar9 = 0;
      if (*(uint *)(iVar5 + 300) != 0) {
        do {
          piVar1 = (int *)(*(int *)(*(int *)(iVar5 + 0x128) + uVar9 * 4) + 0x108);
          if (*piVar1 == param_1) {
            *piVar1 = 0;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(iVar5 + 300));
      }
    }
    FUN_10041230(param_1);
    FUN_10091460(param_1,0x414);
  }
  return iVar3;
}

