/*
 * FUN_18020f0a8 at 18020f0a8
 * undefined FUN_18020f0a8(void)
 * Address ranges: 18020f0a8-18020f3db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020f0a8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 0x80) != 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x80) == 0) {
      puVar7 = (undefined8 *)&DAT_00000008;
      goto LAB_18020f108;
    }
    do {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar8 * 0x18 + 0x10);
LAB_18020f108:
      (*(code *)puVar5)();
      uVar6 = (*extraout_x11)();
      plVar9 = (longlong *)*puVar7;
      iVar14 = -1;
      uVar12 = 0xffffffff;
      uVar1 = *(uint *)(plVar9 + 2);
      while (uVar1 != 0xffffffff) {
        puVar7 = (undefined8 *)(*plVar9 + (ulonglong)uVar1 * 0x20);
        iVar11 = *(int *)(puVar7 + 3);
        if (iVar11 == 0 || (iVar11 == 0 || iVar14 == 0)) break;
        if (uVar6 < (ulonglong)puVar7[2]) {
          uVar3 = *(uint *)((longlong)puVar7 + 0x1c);
          uVar12 = (ulonglong)uVar1;
        }
        else {
          FUN_18020f450(param_1,iVar11,*puVar7,puVar7[1]);
          uVar3 = *(uint *)((longlong)puVar7 + 0x1c);
          *(undefined4 *)(puVar7 + 3) = 0;
          iVar11 = (int)uVar12;
          if ((uVar3 == 0xffffffff) || (*(int *)(*plVar9 + (ulonglong)uVar3 * 0x20 + 0x18) == 0)) {
            if (iVar11 != -1) {
              *(int *)((longlong)plVar9 + 0x14) = iVar11;
            }
          }
          else {
            if (iVar11 == -1) {
              *(uint *)(plVar9 + 2) = uVar3;
            }
            else {
              *(uint *)(*plVar9 + uVar12 * 0x20 + 0x1c) = uVar3;
            }
            *(undefined4 *)((longlong)puVar7 + 0x1c) =
                 *(undefined4 *)
                  (*plVar9 + (ulonglong)*(uint *)((longlong)plVar9 + 0x14) * 0x20 + 0x1c);
            *(uint *)(*plVar9 + (ulonglong)*(uint *)((longlong)plVar9 + 0x14) * 0x20 + 0x1c) = uVar1
            ;
          }
        }
        iVar14 = iVar14 + -1;
        uVar1 = uVar3;
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x80));
  }
  thunk_FUN_1802236f8(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar3 = uVar1;
  do {
    if (uVar3 == 0) {
      if (*(int *)(param_1 + 0x68) != 0) {
        uVar8 = 0;
        if (*(int *)(param_1 + 0x68) == 0) {
          puVar7 = (undefined8 *)&DAT_00000018;
          puVar10 = (undefined8 *)&DAT_00000008;
          puVar15 = (undefined8 *)&DAT_00000020;
          puVar13 = (undefined8 *)&DAT_00000028;
          goto LAB_18020f34c;
        }
        do {
          lVar2 = *(longlong *)(param_1 + 0x60) + uVar8 * 0x48;
          puVar7 = (undefined8 *)(lVar2 + 0x20);
          puVar10 = (undefined8 *)(lVar2 + 0x10);
          puVar15 = (undefined8 *)(lVar2 + 0x28);
          puVar13 = (undefined8 *)(lVar2 + 0x30);
LAB_18020f34c:
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)*puVar7;
          FUN_18020dc08(*(undefined8 *)(param_1 + 0x38),*puVar10,1);
          (*(code *)puVar5)();
          (*extraout_x11_00)();
          FUN_1802229d8(*puVar15);
          FUN_1802229d8(*puVar13);
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x68));
      }
      FUN_1802229d8(*(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      thunk_FUN_18022370c(param_1 + 0x10);
      thunk_FUN_180223860(param_1 + 0x10);
      return;
    }
    uVar4 = uVar3 - 1;
    if (uVar4 < uVar1) {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar4 * 0x18 + 0x10);
    }
    else {
      puVar7 = (undefined8 *)&DAT_00000008;
    }
    plVar9 = (longlong *)*puVar7;
    for (uVar1 = *(uint *)(plVar9 + 2); uVar1 != 0xffffffff;
        uVar1 = *(uint *)(*plVar9 + (ulonglong)uVar1 * 0x20 + 0x1c)) {
      puVar7 = (undefined8 *)(*plVar9 + (ulonglong)uVar1 * 0x20);
      if (*(int *)(puVar7 + 3) == 0) break;
      FUN_18020f450(param_1,*(int *)(puVar7 + 3),*puVar7,puVar7[1]);
    }
    FUN_1802229d8(*plVar9);
    FUN_1802229d8(plVar9,0x18);
    while( true ) {
      uVar1 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x80) <= uVar1) break;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar3 * 0x18);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar1 * 0x18);
      uVar16 = *puVar10;
      puVar7[1] = puVar10[1];
      *puVar7 = uVar16;
      puVar7[2] = puVar10[2];
      uVar3 = uVar1;
    }
    uVar1 = *(uint *)(param_1 + 0x80) - 1;
    *(uint *)(param_1 + 0x80) = uVar1;
    uVar3 = uVar4;
  } while( true );
}

