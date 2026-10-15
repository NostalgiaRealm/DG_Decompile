/*
 * FUN_1800c7980 at 1800c7980
 * undefined FUN_1800c7980(void)
 * Address ranges: 1800c7980-1800c7b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c7980(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar6 = FUN_180001590((longlong)param_1 + 0x9c);
  if ((int)param_1[0x13] + iVar6 == 0) {
    puVar2 = (uint *)&DAT_00000e78;
    if (param_1[8] != 0) {
      puVar2 = (uint *)(param_1[8] + -0x59c0);
    }
    if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar5 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar5 = true;
      iVar6 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar6 == 0) {
        FUN_180003398();
      }
    }
    lVar11 = param_1[8];
    plVar1 = (longlong *)&DAT_00000f00;
    if (lVar11 != 0) {
      plVar1 = (longlong *)(lVar11 + -0x5938);
    }
    puVar2 = (uint *)&DAT_00000f08;
    if (lVar11 != 0) {
      puVar2 = (uint *)(lVar11 + -0x5930);
    }
    if (*puVar2 != 0) {
      uVar9 = 0;
      do {
        uVar8 = (uint)uVar9;
        if (*(longlong **)(*plVar1 + uVar9 * 8) == param_1) {
          if (uVar8 != 0xffffffff) {
            if (*(int *)((longlong)param_1 + 0x5c) == 0) {
              piVar3 = (int *)&DAT_00000e68;
              if (lVar11 != 0) {
                piVar3 = (int *)(lVar11 + -0x59d0);
              }
              if (*piVar3 == 1) {
                puVar4 = (uint *)&DAT_00000ea8;
                if (lVar11 != 0) {
                  puVar4 = (uint *)(lVar11 + -0x5990);
                }
                (&DAT_180253a70)[(ulonglong)*puVar4 * 0x4b] =
                     (&DAT_180253a70)[(ulonglong)*puVar4 * 0x4b] + (ulonglong)*(uint *)(param_1 + 4)
                ;
              }
            }
            uVar10 = *puVar2;
            if (uVar8 < uVar10) {
              while (uVar8 = (int)uVar9 + 1, uVar8 < uVar10) {
                *(undefined8 *)(*plVar1 + uVar9 * 8) =
                     *(undefined8 *)(*plVar1 + (ulonglong)uVar8 * 8);
                uVar9 = (ulonglong)uVar8;
                uVar10 = *puVar2;
              }
              *puVar2 = uVar10 - 1;
            }
          }
          break;
        }
        uVar9 = (ulonglong)(uVar8 + 1);
      } while (uVar8 + 1 < *puVar2);
    }
    puVar7 = (undefined8 *)param_1[0xc];
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    puVar7 = (undefined8 *)param_1[0xd];
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (param_1[1] != 0) {
      FUN_180103118(*(undefined8 *)(param_1[1] + -8));
    }
    param_1[1] = 0;
    (**(code **)(*param_1 + 8))(param_1,1);
    if (bVar5) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return;
}

