/*
 * FUN_180046c48 at 180046c48
 * uint __fastcall FUN_180046c48(longlong param_1, uint param_2)
 * Address ranges: 180046c48-180046f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180046c48(longlong param_1,uint param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong *puVar17;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar13 = 0xffffffff;
  if (*(uint *)(param_1 + 0x18) < param_2) {
    return 0xffffffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_180046a50(param_1);
  uVar15 = 0;
  uVar10 = 0xffffffff;
  if (*(int *)(param_1 + 0x58) < 1) {
LAB_180046db1:
    local_48 = *(undefined4 *)(param_1 + 0x14);
    local_44 = *(undefined4 *)(param_1 + 0x18);
    local_40 = *(undefined4 *)(param_1 + 0x1c);
    local_3c = 0;
    plVar2 = *(longlong **)
              ((ulonglong)*(uint *)(param_1 + 0x10) * 0x20 + *(longlong *)(param_1 + 8));
    iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_48,&DAT_180064250);
    if (iVar5 < 0) goto LAB_180046f45;
    puVar6 = (undefined1 *)thunk_FUN_18005db9c((ulonglong)(*(uint *)(param_1 + 0x18) >> 3));
    if (puVar6 == (undefined1 *)0x0) {
LAB_180046f3a:
      (**(code **)(lRam0000000000000000 + 0x10))();
      goto LAB_180046f45;
    }
    iVar5 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x58) == iVar5) {
      uVar15 = 0x10;
      if (iVar5 != 0) {
        uVar15 = iVar5 * 2;
      }
      uVar7 = SUB168(ZEXT816(0x10) * ZEXT416(uVar15),0);
      if (SUB168(ZEXT816(0x10) * ZEXT416(uVar15),8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      puVar8 = (undefined8 *)thunk_FUN_18005db9c(uVar7);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_18005dbc0(puVar6);
        goto LAB_180046f3a;
      }
      FUN_18005f1b0(puVar8,*(undefined8 **)(param_1 + 0x50),
                    (ulonglong)*(uint *)(param_1 + 0x5c) << 4);
      FUN_18005dbc0(*(LPVOID *)(param_1 + 0x50));
      *(undefined8 **)(param_1 + 0x50) = puVar8;
      *(uint *)(param_1 + 0x5c) = uVar15;
    }
    uVar15 = *(uint *)(param_1 + 0x58);
    lVar3 = *(longlong *)(param_1 + 0x50);
    *(undefined8 *)(lVar3 + (ulonglong)uVar15 * 0x10) = 0;
    *(undefined1 **)(lVar3 + 8 + (ulonglong)uVar15 * 0x10) = puVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    FUN_18005f814(puVar6,0,(ulonglong)(*(uint *)(param_1 + 0x18) >> 3));
    uVar15 = *(uint *)(param_1 + 0x58);
    if (uVar15 == 0) goto LAB_180046f45;
    uVar10 = 0;
  }
  else {
    do {
      if (uVar10 != 0xffffffff) goto LAB_180046ec1;
      uVar16 = *(uint *)(param_1 + 0x18);
      pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)uVar15 * 0x10);
      uVar11 = 0;
      uVar9 = (ulonglong)-(uint)((*pbVar1 & 1) != 0);
      uVar10 = 0xffffffff;
      if (uVar16 != 0) {
        do {
          uVar10 = (uint)uVar9;
          if (uVar10 == 0xffffffff) {
            uVar12 = -1L << ((byte)uVar11 & 0x3f);
            uVar10 = (uint)uVar11 & 0xffffffc0;
            for (puVar17 = (ulonglong *)(pbVar1 + (uVar11 >> 6) * 8); uVar9 = (ulonglong)uVar10,
                puVar17 < pbVar1 + (uVar16 >> 3); puVar17 = puVar17 + 1) {
              uVar12 = ~*puVar17 & uVar12;
              lVar3 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
                }
              }
              if (uVar12 != 0) {
                uVar9 = (ulonglong)(uVar10 + (int)lVar3);
                break;
              }
              uVar10 = uVar10 + 0x40;
              uVar12 = 0xffffffffffffffff;
            }
          }
          else {
            uVar12 = -1L << ((byte)uVar9 & 0x3f);
            uVar11 = (ulonglong)(uVar10 & 0xffffffc0);
            for (puVar17 = (ulonglong *)(pbVar1 + (uVar9 >> 6) * 8);
                puVar17 < pbVar1 + (uVar16 >> 3); puVar17 = puVar17 + 1) {
              uVar12 = *puVar17 & uVar12;
              lVar3 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
                }
              }
              if (uVar12 != 0) {
                uVar11 = (ulonglong)(uint)((int)uVar11 + (int)lVar3);
                break;
              }
              uVar14 = (int)uVar11 + 0x40;
              uVar11 = (ulonglong)uVar14;
              if (uVar16 < uVar14 - uVar10) break;
              uVar12 = 0xffffffffffffffff;
            }
            if (param_2 <= (int)uVar11 - uVar10) break;
            uVar9 = 0xffffffff;
          }
          uVar10 = 0xffffffff;
        } while ((uint)uVar11 < uVar16);
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < *(int *)(param_1 + 0x58));
    if (uVar10 == 0xffffffff) goto LAB_180046db1;
  }
LAB_180046ec1:
  uVar13 = uVar10 + param_2;
  if (uVar10 < uVar13) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)(uVar15 - 1) * 0x10);
    uVar16 = uVar10;
    do {
      bVar4 = (byte)uVar16;
      uVar14 = uVar16 >> 6;
      uVar16 = (uVar16 & 0xffffffc0) + 0x40;
      uVar11 = -1L << (bVar4 & 0x3f);
      uVar9 = 0xffffffffffffffffU >> (0x40 - ((byte)uVar13 & 0x3f) & 0x3f) & uVar11;
      if (uVar16 <= uVar13) {
        uVar9 = uVar11;
      }
      puVar17 = (ulonglong *)(lVar3 + (ulonglong)uVar14 * 8);
      *puVar17 = *puVar17 | uVar9;
    } while (uVar16 < uVar13);
  }
  uVar13 = (uVar15 - 1) * 0x10000 | uVar10;
LAB_180046f45:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar13;
}

