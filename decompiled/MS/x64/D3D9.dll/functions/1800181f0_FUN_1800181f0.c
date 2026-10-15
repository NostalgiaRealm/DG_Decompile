/*
 * FUN_1800181f0 at 1800181f0
 * int __fastcall FUN_1800181f0(longlong param_1, uint param_2, int param_3, longlong * param_4, uint param_5)
 * Address ranges: 1800181f0-18001842c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800181f0(longlong param_1,uint param_2,int param_3,longlong *param_4,uint param_5)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  
  iVar13 = -0x7789f794;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = *(int *)(param_1 + 0x20);
  }
  pbVar8 = (byte *)(*(longlong *)(param_1 + 0x40) + -0x59c0);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    pbVar8 = &DAT_00000e78;
  }
  if (((*pbVar8 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar3 = false;
  }
  else {
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    bVar3 = true;
    if (BVar4 == 0) {
      FUN_1800044dc(0);
      bVar3 = true;
    }
  }
  if ((*(longlong *)(param_1 + 0x60) == 0) ||
     (((*(uint *)(param_1 + 0x50) & 0x200) == 0 && (*(char *)(param_1 + 0x8b) == '\0')))) {
    uVar7 = FUN_18002fc58(param_1);
    if ((int)uVar7 != 0) goto LAB_1800183ff;
    *param_4 = (ulonglong)param_2 + *(longlong *)(param_1 + 8);
    if ((*(int *)(param_1 + 0x5c) == 0) && ((param_5 & 0x2000) != 0)) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      uVar10 = param_2 + param_3;
      if (param_2 < *(uint *)(param_1 + 0x24)) {
        *(uint *)(param_1 + 0x24) = param_2;
      }
      if (*(uint *)(param_1 + 0x28) < uVar10) {
        *(uint *)(param_1 + 0x28) = uVar10;
        if (*(uint *)(param_1 + 0x20) < uVar10) {
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x20);
        }
      }
    }
    iVar13 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*plVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      uVar11 = 0;
      do {
        plVar6 = (longlong *)(lVar2 + -0x6838 + (longlong)(&DAT_000066c8 + uVar11 * 8));
        if (lVar2 == 0) {
          plVar6 = (longlong *)(&DAT_000066c8 + uVar11 * 8);
        }
        if (*plVar6 == param_1) {
          puVar9 = (undefined8 *)(lVar2 + -0x6810);
          if (lVar2 == 0) {
            puVar9 = (undefined8 *)&DAT_00000028;
          }
          (**(code **)(*(longlong *)*puVar9 + 0x28))();
          break;
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < 0x10);
      if ((((param_5 & 0x2000) == 0) || (*(char *)(param_1 + 0x89) == '\0')) ||
         (*(char *)(param_1 + 0x8a) != '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))
                        (*(longlong **)(param_1 + 0x60),uVar7,
                         CONCAT31((int3)((param_5 & 0x3000) >> 8),(param_5 & 0x3000) != 0),plVar1);
      if (iVar5 == 0) {
        if (*(int *)(param_1 + 0x84) != -1) {
          puVar12 = (uint *)(*(longlong *)(param_1 + 0x40) + -0x5c);
          if (*(longlong *)(param_1 + 0x40) == 0) {
            puVar12 = (uint *)&DAT_000067dc;
          }
          *puVar12 = *puVar12 | 1 << ((byte)*(int *)(param_1 + 0x84) & 0x1f);
        }
        *(bool *)(param_1 + 0x8a) = (param_5 & 0x2000) != 0;
        goto LAB_18001836b;
      }
    }
    else {
LAB_18001836b:
      iVar13 = 0;
    }
    *param_4 = (ulonglong)param_2 + *plVar1;
    if (iVar13 < 0) goto LAB_1800183ff;
  }
  iVar5 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = iVar5 + 1;
  if (iVar5 == 0) {
    FUN_1800fbea0(*(undefined1 **)(param_1 + 0x18),0,(ulonglong)*(uint *)(param_1 + 0x20));
  }
LAB_1800183ff:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return iVar13;
}

