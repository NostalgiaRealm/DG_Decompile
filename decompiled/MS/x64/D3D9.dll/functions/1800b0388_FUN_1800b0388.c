/*
 * FUN_1800b0388 at 1800b0388
 * longlong __fastcall FUN_1800b0388(longlong * param_1)
 * Address ranges: 1800b0388-1800b04ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800b0388(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint local_res8 [2];
  
  lVar1 = -(longlong)param_1;
  uVar4 = 0;
  if ((int)param_1[0xd06] != 0) {
    do {
      lVar1 = (**(code **)(**(longlong **)(param_1[0xd05] + uVar4 * 8) + 8))();
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0xd06));
  }
  if (param_1[5] != 0) {
    FUN_1800fa780(local_res8);
    *(undefined1 *)(param_1 + 0x5a) = 0;
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((int)param_1[0x1e6] != 0) {
      uVar4 = 0;
      if ((int)param_1[0x1e6] == 0) {
        puVar2 = (undefined8 *)&DAT_00000008;
        goto LAB_1800b0424;
      }
      do {
        puVar2 = (undefined8 *)(param_1[0x1e5] + uVar4 * 0x18 + 0x10);
LAB_1800b0424:
        FUN_1800fbcf0((LPVOID)*puVar2);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x1e6));
    }
    FUN_1800fbcf0((LPVOID)param_1[0x1e4]);
    param_1[0x1e4] = 0;
    param_1[0x1e5] = 0;
    param_1[0x1e6] = 0;
    FUN_180004c30(param_1,0);
    (**(code **)(*(longlong *)param_1[5] + 0x18))();
    (**(code **)(*(longlong *)param_1[5] + 8))();
    param_1[5] = 0;
    FUN_1800fbdd4(*(LPVOID *)(param_1[0x1c2] + -8));
    param_1[0x1c2] = 0;
    if ((HICON)param_1[0x1d2] != (HICON)0x0) {
      DestroyIcon((HICON)param_1[0x1d2]);
      param_1[0x1d2] = 0;
    }
    lVar1 = FUN_1800fa7bc();
    if ((*(byte *)(param_1 + 0x1cf) & 2) == 0) {
      lVar1 = FUN_1800fa7e7();
    }
  }
  return lVar1;
}

