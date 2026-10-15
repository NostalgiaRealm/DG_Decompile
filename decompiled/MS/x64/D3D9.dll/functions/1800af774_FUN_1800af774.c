/*
 * FUN_1800af774 at 1800af774
 * undefined4 __fastcall FUN_1800af774(longlong param_1, int param_2)
 * Address ranges: 1800af774-1800af8c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800af774(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar3;
  byte *pbVar4;
  longlong *plVar5;
  undefined4 uVar6;
  uint local_48 [10];
  
  uVar6 = 0x8876086c;
  if ((((param_2 != 0) &&
       ((((uVar6 = 0x8876086c, param_2 == 1 || (param_2 == 2)) || (param_2 == 3)) ||
        ((param_2 == 6 || (param_2 == 7)))))) && (param_2 != 0)) &&
     (uVar6 = 0, param_2 != *(int *)(param_1 + 0x378))) {
    lVar1 = *(longlong *)(param_1 + -0x80);
    local_48[0] = 0;
    local_48[1] = 0x100;
    local_48[2] = 0x200;
    plVar5 = (longlong *)(lVar1 + 0x60);
    local_48[3] = 0x400;
    if (lVar1 == 0) {
      plVar5 = (longlong *)&DAT_00006898;
    }
    local_48[4] = 0x800;
    local_48[5] = 0x1000;
    uVar6 = 0x8876086c;
    if ((*(uint *)(*plVar5 + 0x44) & local_48[param_2]) != 0) {
      pbVar4 = (byte *)(lVar1 + -0x59c0);
      if (lVar1 == 0) {
        pbVar4 = &DAT_00000e78;
      }
      if (((*pbVar4 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
        bVar2 = false;
        *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      }
      else {
        bVar2 = true;
        BVar3 = TryEnterCriticalSection(DAT_1801123a8);
        if (BVar3 == 0) {
          FUN_1800044dc(0);
        }
      }
      if (1 < *(int *)(DAT_180111f20 + 0x87c) - 2U) {
        (**(code **)(**(longlong **)(param_1 + -0x40) + 0x98))
                  (*(longlong **)(param_1 + -0x40),param_2 != 1);
      }
      lpCriticalSection = DAT_1801123a8;
      uVar6 = 0;
      *(int *)(param_1 + 0x378) = param_2;
      if (bVar2) {
        LeaveCriticalSection(lpCriticalSection);
        uVar6 = 0;
      }
      else {
        *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
      }
    }
  }
  return uVar6;
}

