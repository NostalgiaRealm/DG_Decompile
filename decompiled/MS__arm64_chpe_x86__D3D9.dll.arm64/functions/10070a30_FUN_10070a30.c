/*
 * FUN_10070a30 at 10070a30
 * undefined FUN_10070a30(void)
 * Address ranges: 10070a30-10070c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070a30(int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong extraout_x1;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  int *extraout_w13;
  int *piVar9;
  longlong extraout_x14;
  uint uVar10;
  ulonglong uVar11;
  int local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  
  if (*(char *)(param_1 + 0x81) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar10 = 0;
    if (uVar1 != 0) {
      piVar9 = (int *)(param_1 + 4);
      if (uVar1 == 0) {
        piVar8 = (int *)0x0;
        goto LAB_10070aa4;
      }
      do {
        piVar8 = (int *)(*(int *)(param_1 + 0x18) + uVar10 * 0x28 + 8);
LAB_10070aa4:
        iVar4 = *piVar8;
        local_44 = 0;
        local_68 = *(undefined8 *)(piVar8 + 2);
        uVar11 = *(ulonglong *)(piVar8 + 6);
        uVar5 = *(ulonglong *)(piVar8 + 4);
        uStack_60 = *(undefined8 *)(*(int *)(*piVar9 + 0x1304) + 0x938);
        local_48 = 0xffffffff;
        local_70[0] = iVar4;
        local_58 = uVar5;
        uStack_50 = uVar11;
        FUN_10070d48(param_1,local_70);
        if (*(int *)(iVar4 + 8) == 9) {
          FUN_10116500(*(undefined4 *)(*piVar9 + 0x1304),uVar5 & 0xffffffff,0,uVar11 & 0xffffffff);
          FUN_10116580(*(undefined4 *)(*piVar9 + 0x1304),uVar5 & 0xffffffff,0,uVar11 & 0xffffffff,1,
                       (int)(uVar5 >> 0x20),(uVar11 & 0x1fffffff) << 3);
          piVar8[4] = 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x1c));
    }
    *(char *)(param_1 + 0x81) = '\x01';
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    (*(code *)PTR_FUN_1016c074)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x34);
    if (iVar4 != -1) {
      uVar5 = (ulonglong)(param_1 + 0x28);
      uVar7 = 3;
      do {
        piVar9 = (int *)(*(int *)uVar5 + iVar4 * 0x30);
        if (*piVar9 == 0) break;
        if (((char)piVar9[0xb] != '\0') && (*(char *)((int)piVar9 + 0x2d) == '\0')) {
          iVar4 = FUN_1006f3d8(*piVar9);
          if (extraout_x14 == *(longlong *)(iVar4 + 0x20)) {
            piVar9 = (int *)(iVar4 + 0x34);
            do {
              iVar6 = *piVar9;
              if (iVar6 == 2) {
                iVar6 = (int)uVar7;
              }
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar9),0x10);
              if (bVar3) {
                *piVar9 = iVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
          }
          *(undefined4 *)(iVar4 + 0x38) = 0;
          uVar5 = extraout_x1;
          piVar9 = extraout_w13;
        }
        iVar4 = piVar9[10];
      } while (iVar4 != -1);
    }
    (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x60);
    (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(param_1 + 0x7c));
  }
  return;
}

