/*
 * FUN_1800bd990 at 1800bd990
 * undefined8 __fastcall FUN_1800bd990(longlong param_1, uint param_2, uint * param_3)
 * Address ranges: 1800bd990-1800bdaad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bd990(longlong param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar11;
  ulonglong uVar9;
  
  lpCriticalSection = DAT_1801123a8;
  uVar7 = (ulonglong)param_2;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar3 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar3 = true;
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    lpCriticalSection = DAT_1801123a8;
    if (BVar4 == 0) {
      FUN_1800044dc(0);
      lpCriticalSection = DAT_1801123a8;
    }
  }
  uVar10 = 0x8876086c;
  if ((param_3 != (uint *)0x0) && (uVar6 = *(uint *)(param_1 + -0x6510), uVar6 != 0)) {
    lVar1 = *(longlong *)(param_1 + -0x6518);
    uVar11 = 0;
    uVar5 = uVar6;
    do {
      uVar8 = uVar5 + uVar11 >> 1;
      uVar9 = (ulonglong)uVar8;
      uVar2 = *(ulonglong *)(lVar1 + uVar9 * 0x78);
      if (uVar2 <= uVar7) {
        if (uVar7 <= uVar2) break;
        uVar11 = uVar8 + 1;
        uVar9 = (ulonglong)uVar11;
        uVar8 = uVar5;
      }
      uVar5 = uVar8;
    } while (uVar5 != uVar11);
    if ((((uint)uVar9 != uVar6) && (*(ulonglong *)(uVar9 * 0x78 + lVar1) == uVar7)) &&
       (lVar1 + 0xc + uVar9 * 0x78 != 0)) {
      if (*(uint *)(param_1 + -0x64d8) != 0) {
        uVar7 = 0;
        do {
          if (*(uint *)(*(longlong *)(param_1 + -0x64e0) + uVar7 * 4) == param_2)
          goto LAB_1800bda7a;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1 + -0x64d8));
      }
      uVar7 = 0xffffffff;
LAB_1800bda7a:
      uVar10 = 0;
      *param_3 = (uint)((int)uVar7 != -1);
    }
  }
  if (bVar3) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
  }
  return uVar10;
}

