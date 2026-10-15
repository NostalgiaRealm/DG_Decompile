/*
 * FUN_1800efb38 at 1800efb38
 * undefined FUN_1800efb38(void)
 * Address ranges: 1800efb38-1800efe4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800efb38(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 uVar16;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x80) == 0) {
      puVar7 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)&DAT_00000008;
      goto LAB_1800efb8c;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x78) + uVar8 * 0x18;
      puVar7 = (undefined8 *)(lVar2 + 8);
      puVar9 = (undefined8 *)(lVar2 + 0x10);
LAB_1800efb8c:
      uVar6 = (**(code **)(*(longlong *)*puVar7 + 0x40))();
      plVar10 = (longlong *)*puVar9;
      iVar15 = -1;
      uVar14 = 0xffffffff;
      uVar1 = *(uint *)(plVar10 + 2);
      while (uVar1 != 0xffffffff) {
        puVar7 = (undefined8 *)(*plVar10 + (ulonglong)uVar1 * 0x20);
        iVar13 = *(int *)(puVar7 + 3);
        if (iVar13 == 0 || (iVar13 == 0 || iVar15 == 0)) break;
        if (uVar6 < (ulonglong)puVar7[2]) {
          uVar3 = *(uint *)((longlong)puVar7 + 0x1c);
          uVar14 = (ulonglong)uVar1;
        }
        else {
          FUN_1800efec0(param_1,iVar13,*puVar7,puVar7[1]);
          uVar3 = *(uint *)((longlong)puVar7 + 0x1c);
          *(undefined4 *)(puVar7 + 3) = 0;
          iVar13 = (int)uVar14;
          if ((uVar3 == 0xffffffff) || (*(int *)(*plVar10 + (ulonglong)uVar3 * 0x20 + 0x18) == 0)) {
            if (iVar13 != -1) {
              *(int *)((longlong)plVar10 + 0x14) = iVar13;
            }
          }
          else {
            if (iVar13 == -1) {
              *(uint *)(plVar10 + 2) = uVar3;
            }
            else {
              *(uint *)(*plVar10 + uVar14 * 0x20 + 0x1c) = uVar3;
            }
            *(undefined4 *)((longlong)puVar7 + 0x1c) =
                 *(undefined4 *)
                  (*plVar10 + (ulonglong)*(uint *)((longlong)plVar10 + 0x14) * 0x20 + 0x1c);
            *(uint *)(*plVar10 + (ulonglong)*(uint *)((longlong)plVar10 + 0x14) * 0x20 + 0x1c) =
                 uVar1;
          }
        }
        iVar15 = iVar15 + -1;
        uVar1 = uVar3;
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x80));
  }
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar3 = uVar1;
  do {
    if (uVar3 == 0) {
      if (*(int *)(param_1 + 0x68) != 0) {
        uVar8 = 0;
        if (*(int *)(param_1 + 0x68) == 0) {
          puVar7 = (undefined8 *)&DAT_00000018;
          puVar9 = (undefined8 *)&DAT_00000008;
          puVar12 = (undefined8 *)&DAT_00000020;
          puVar11 = (undefined8 *)&DAT_00000028;
          goto LAB_1800efdb4;
        }
        do {
          lVar2 = *(longlong *)(param_1 + 0x60) + uVar8 * 0x48;
          puVar7 = (undefined8 *)(lVar2 + 0x20);
          puVar9 = (undefined8 *)(lVar2 + 0x10);
          puVar12 = (undefined8 *)(lVar2 + 0x28);
          puVar11 = (undefined8 *)(lVar2 + 0x30);
LAB_1800efdb4:
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)*puVar7;
          FUN_1800f1570(*(undefined8 *)(param_1 + 0x38),*puVar9,1);
          (**(code **)(*(longlong *)*puVar9 + 0x10))();
          thunk_FUN_180102fc0(*puVar12);
          thunk_FUN_180102fc0(*puVar11);
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x68));
      }
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x58));
      pcVar5 = __imp_KERNEL32_dll_LeaveCriticalSection;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      (*pcVar5)(param_1 + 0x10);
      (*__imp_KERNEL32_dll_DeleteCriticalSection)(param_1 + 0x10);
      return;
    }
    uVar4 = uVar3 - 1;
    if (uVar4 < uVar1) {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar4 * 0x18 + 0x10);
    }
    else {
      puVar7 = (undefined8 *)&DAT_00000008;
    }
    plVar10 = (longlong *)*puVar7;
    for (uVar1 = *(uint *)(plVar10 + 2); uVar1 != 0xffffffff;
        uVar1 = *(uint *)(*plVar10 + (ulonglong)uVar1 * 0x20 + 0x1c)) {
      puVar7 = (undefined8 *)(*plVar10 + (ulonglong)uVar1 * 0x20);
      if (*(int *)(puVar7 + 3) == 0) break;
      FUN_1800efec0(param_1,*(int *)(puVar7 + 3),*puVar7,puVar7[1]);
    }
    thunk_FUN_180102fc0(*plVar10);
    FUN_180102fc0(plVar10,0x18);
    while( true ) {
      uVar1 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x80) <= uVar1) break;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar3 * 0x18);
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar1 * 0x18);
      uVar16 = *puVar9;
      puVar7[1] = puVar9[1];
      *puVar7 = uVar16;
      puVar7[2] = puVar9[2];
      uVar3 = uVar1;
    }
    uVar1 = *(uint *)(param_1 + 0x80) - 1;
    *(uint *)(param_1 + 0x80) = uVar1;
    uVar3 = uVar4;
  } while( true );
}

