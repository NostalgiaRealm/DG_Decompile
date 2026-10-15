/*
 * FUN_1800088b8 at 1800088b8
 * undefined8 __fastcall FUN_1800088b8(longlong param_1, char param_2, uint param_3, longlong param_4)
 * Address ranges: 1800088b8-180008aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800088b8(longlong param_1,char param_2,uint param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 local_res8;
  uint local_res18 [4];
  
  uVar11 = (ulonglong)param_3;
  local_res18[0] = param_3;
  if (((*(byte *)(param_1 + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar4 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar4 = true;
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar15 = *(uint *)(param_1 + 0xf30);
  uVar7 = 0;
  if (uVar15 != 0) {
    uVar8 = 0;
    uVar9 = uVar15;
    do {
      uVar7 = uVar9 + uVar8 >> 1;
      uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0xf28) + (ulonglong)uVar7 * 0x18);
      uVar5 = uVar7;
      if (uVar12 <= uVar11) {
        if (uVar11 <= uVar12) break;
        uVar7 = uVar7 + 1;
        uVar5 = uVar9;
        uVar8 = uVar7;
      }
      uVar9 = uVar5;
    } while (uVar9 != uVar8);
  }
  if (((uVar7 == uVar15) ||
      (puVar14 = (ulonglong *)(*(longlong *)(param_1 + 0xf28) + (ulonglong)uVar7 * 0x18),
      *puVar14 != uVar11)) || (puVar14 == (ulonglong *)0xfffffffffffffff0)) {
    local_res8 = FUN_1800fbccc(0x408);
    uVar7 = *(uint *)(param_1 + 0xf30);
    uVar12 = 0;
    if (uVar7 != 0) {
      uVar9 = 0;
      uVar15 = uVar7;
      do {
        uVar8 = uVar15 + uVar9 >> 1;
        uVar12 = (ulonglong)uVar8;
        uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xf28) + (ulonglong)uVar8 * 0x18);
        if (uVar2 <= uVar11) {
          if (uVar11 <= uVar2) break;
          uVar9 = uVar8 + 1;
          uVar12 = (ulonglong)uVar9;
          uVar8 = uVar15;
        }
        uVar15 = uVar8;
      } while (uVar15 != uVar9);
    }
    lVar16 = uVar12 * 0x18;
    if (((uint)uVar12 == uVar7) ||
       (*(ulonglong *)(lVar16 + *(longlong *)(param_1 + 0xf28)) != uVar11)) {
      FUN_180009308((longlong *)(param_1 + 0xf20),(uint)uVar12,uVar11,local_res18,&local_res8);
    }
    else {
      *(undefined8 *)(lVar16 + 0x10 + *(longlong *)(param_1 + 0xf28)) = local_res8;
    }
    puVar14 = (ulonglong *)(lVar16 + *(longlong *)(param_1 + 0xf28));
    FUN_1800fbea0((undefined1 *)puVar14[2],0,0x408);
  }
  uVar11 = 0;
  if (param_2 == '\0') {
    do {
      if (*(char *)(param_4 + 3 + uVar11 * 4) != -1) break;
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
    } while (uVar7 < 0x100);
    uVar13 = 0x8007000e;
    if ((int)uVar11 != 0x100) goto LAB_180008ac2;
  }
  uVar11 = puVar14[2];
  bVar3 = false;
  lVar16 = 0;
  do {
    iVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_4 + 3 + lVar16 * 4),
                                        *(undefined1 *)(param_4 + lVar16 * 4)),
                               *(undefined1 *)(param_4 + 1 + lVar16 * 4)),
                      *(undefined1 *)(param_4 + 2 + lVar16 * 4));
    iVar1 = *(int *)(uVar11 + lVar16 * 4);
    *(int *)(uVar11 + lVar16 * 4) = iVar10;
    lVar16 = lVar16 + 1;
    bVar3 = (bool)(bVar3 | iVar10 != iVar1);
  } while (lVar16 != 0x100);
  if (bVar3) {
    *(longlong *)(uVar11 + 0x400) = *(longlong *)(uVar11 + 0x400) + 1;
    *(undefined4 *)(param_1 + 0x67f8) = 0xffff;
    *(undefined4 *)(param_1 + 0x6804) = 0x1f;
  }
  uVar13 = 0;
LAB_180008ac2:
  if (bVar4) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar13;
}

