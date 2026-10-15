/*
 * FUN_1800142e0 at 1800142e0
 * undefined8 __fastcall FUN_1800142e0(longlong param_1, uint param_2, int param_3, longlong * param_4, uint param_5)
 * Address ranges: 1800142e0-1800144cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800142e0(longlong param_1,uint param_2,int param_3,longlong *param_4,uint param_5)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  
  uVar14 = (ulonglong)param_2;
  uVar13 = 0x8876086c;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = *(int *)(param_1 + 0x20);
  }
  pbVar10 = (byte *)(*(longlong *)(param_1 + 0x40) + -0x59c0);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    pbVar10 = &DAT_00000e78;
  }
  if (((*pbVar10 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar3 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar3 = true;
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar4 == 0) {
      FUN_1800044dc(0);
    }
  }
  if ((*(longlong *)(param_1 + 0x60) == 0) ||
     (((*(uint *)(param_1 + 0x50) & 0x200) == 0 && (*(char *)(param_1 + 0x73) == '\0')))) {
    uVar9 = FUN_18002fc58(param_1);
    if ((int)uVar9 != 0) goto LAB_1800144a0;
    *param_4 = uVar14 + *(longlong *)(param_1 + 8);
    uVar6 = param_2 + param_3;
    if (param_2 < *(uint *)(param_1 + 0x24)) {
      *(uint *)(param_1 + 0x24) = param_2;
    }
    if (*(uint *)(param_1 + 0x28) < uVar6) {
      *(uint *)(param_1 + 0x28) = uVar6;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x20);
      }
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x40);
    pcVar7 = (char *)(lVar2 + -0x6818);
    if (lVar2 == 0) {
      pcVar7 = &DAT_00000020;
    }
    if (*pcVar7 != '\0') {
      plVar1 = (longlong *)(param_1 + 0x18);
      if (*plVar1 == 0) {
        if (lVar2 == 0) {
          plVar8 = (longlong *)&DAT_000066c0;
          puVar11 = (undefined8 *)&DAT_00000028;
        }
        else {
          plVar8 = (longlong *)(lVar2 + -0x178);
          puVar11 = (undefined8 *)(lVar2 + -0x6810);
        }
        if (*plVar8 == param_1) {
          (**(code **)(*(longlong *)*puVar11 + 0x28))();
        }
        if ((((param_5 & 0x2000) == 0) || (*(char *)(param_1 + 0x71) == '\0')) ||
           (*(char *)(param_1 + 0x72) != '\0')) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))
                          (*(longlong **)(param_1 + 0x60),uVar9,
                           CONCAT31((int3)((param_5 & 0x3000) >> 8),(param_5 & 0x3000) != 0),plVar1)
        ;
        if (iVar5 == 0) {
          if (*(char *)(param_1 + 0x70) != '\0') {
            puVar12 = (uint *)(*(longlong *)(param_1 + 0x40) + -0x54);
            if (*(longlong *)(param_1 + 0x40) == 0) {
              puVar12 = (uint *)&DAT_000067e4;
            }
            *puVar12 = *puVar12 | 1;
          }
          *(bool *)(param_1 + 0x72) = (param_5 & 0x2000) != 0;
          goto LAB_180014443;
        }
      }
      else {
LAB_180014443:
        uVar13 = 0;
      }
      *param_4 = uVar14 + *plVar1;
      goto LAB_1800144a0;
    }
    uVar9 = FUN_18002fc58(param_1);
    if ((int)uVar9 != 0) goto LAB_1800144a0;
    *param_4 = uVar14 + *(longlong *)(param_1 + 8);
  }
  uVar13 = 0;
LAB_1800144a0:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar13;
}

