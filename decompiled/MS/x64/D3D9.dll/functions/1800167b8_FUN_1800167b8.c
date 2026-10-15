/*
 * FUN_1800167b8 at 1800167b8
 * undefined __fastcall FUN_1800167b8(longlong * param_1)
 * Address ranges: 1800167b8-180016975
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800167b8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  if (param_1[0x20] != 0) {
    FUN_180015888(local_res8);
    puVar3 = DAT_180111f48;
    if ((DAT_180111f48 != (undefined8 *)0x0) && (uVar5 = *(uint *)(DAT_180111f48 + 3), uVar5 != 0))
    {
      uVar6 = 0;
      do {
        iVar4 = (int)uVar6;
        if (*(ulonglong *)(DAT_180111f48[2] + uVar6 * 8) ==
            (-(ulonglong)(param_1 != (longlong *)0x0) & (ulonglong)(param_1 + 9))) {
          if (iVar4 != -1) {
            uVar8 = iVar4 + 1;
            if (uVar8 < uVar5) {
              do {
                uVar6 = (ulonglong)uVar8;
                uVar5 = uVar8 - 1;
                uVar8 = uVar8 + 1;
                *(undefined8 *)(puVar3[2] + (ulonglong)uVar5 * 8) =
                     *(undefined8 *)(puVar3[2] + uVar6 * 8);
              } while (uVar8 < *(uint *)(puVar3 + 3));
            }
            *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + -1;
          }
          break;
        }
        uVar6 = (ulonglong)(iVar4 + 1U);
      } while (iVar4 + 1U < uVar5);
    }
    puVar3 = DAT_180111f48;
    LOCK();
    iVar4 = DAT_180111f38 + -1;
    UNLOCK();
    bVar9 = DAT_180111f38 == 1;
    DAT_180111f38 = iVar4;
    if ((bVar9) && (DAT_180111f48 != (undefined8 *)0x0)) {
      FUN_18002d8f0(DAT_180111f48);
      FUN_1800fbcf0(puVar3);
      DAT_180111f48 = (undefined8 *)0x0;
    }
    if (*(char *)((longlong)param_1 + 0xf9) == '\0') {
      FUN_180030cb4(param_1);
      (**(code **)(*(longlong *)param_1[0x10] + 0xf0))((longlong *)param_1[0x10],param_1[0x11]);
      plVar7 = param_1;
      FUN_180030cf0(param_1);
      uVar5 = *(uint *)(param_1 + 0x1d);
      FUN_18002f604(plVar7,uVar5,(&DAT_180112900)[(ulonglong)uVar5 * 0x96]);
      (&DAT_1801123d4)[(ulonglong)uVar5 * 0x28] = 0;
      FUN_180030d2c(param_1);
    }
    FUN_1800f8f74(DAT_180111f20,(HWND)param_1[0x11],(longlong)param_1);
    (**(code **)(*(longlong *)param_1[0x20] + 0x20))();
    param_1[0x20] = 0;
    (**(code **)(*(longlong *)param_1[0x10] + 200))((longlong *)param_1[0x10],param_1[0x11]);
    FUN_180015904();
  }
  lVar2 = DAT_180111f20;
  piVar1 = (int *)(DAT_180111f20 + 0x160);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(lVar2 + 0x825) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(lVar2 + 0x15c));
    *(undefined4 *)(lVar2 + 0x15c) = 0;
  }
  return;
}

