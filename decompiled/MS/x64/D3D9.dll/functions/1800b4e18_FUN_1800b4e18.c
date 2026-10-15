/*
 * FUN_1800b4e18 at 1800b4e18
 * ulonglong __fastcall FUN_1800b4e18(longlong param_1, int param_2, uint param_3, uint param_4, undefined8 param_5, longlong param_6, uint param_7)
 * Address ranges: 1800b4e18-1800b5048
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b4e18(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5,
                       longlong param_6,uint param_7)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  BOOL BVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong in_stack_ffffffffffffffb8;
  undefined4 in_stack_ffffffffffffffc0;
  
  uVar17 = 0x8876086c;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar6 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    lVar5 = param_5;
  }
  else {
    bVar6 = true;
    BVar9 = TryEnterCriticalSection(DAT_1801123a8);
    lVar5 = param_5;
    if (BVar9 == 0) {
      FUN_1800044dc(0);
      lVar5 = param_5;
    }
  }
  uVar7 = param_7;
  param_5 = lVar5;
  if ((lVar5 == 0) || (1 < param_7)) goto LAB_1800b500c;
  bVar8 = FUN_1800b73e4(param_1 + -0x6838);
  if (bVar8 == 0) goto LAB_1800b500c;
  lVar10 = 0;
  lVar11 = param_5;
  if (*(ulonglong *)(param_1 + 0x5c58) != 0) {
    lVar10 = FUN_1800bed58(param_1 + 0x80,*(ulonglong *)(param_1 + 0x5c58));
    lVar11 = param_5;
  }
  param_5._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
  if (param_6 == 0) {
    param_5._0_4_ = *(uint *)(lVar5 + -0x3c);
    if ((uint)param_5 == 0) goto LAB_1800b500c;
    uVar3 = *(uint *)(param_1 + -0x5ae4);
    plVar1 = (longlong *)(param_1 + -0x5af0);
    uVar14 = 0;
    uVar16 = (ulonglong)(uint)param_5;
    if (uVar3 == 0) {
LAB_1800b4f87:
      FUN_1800b5c64(plVar1,(uint)uVar14,uVar16,(uint *)&param_5);
    }
    else {
      uVar13 = 0;
      uVar12 = uVar3;
      do {
        uVar15 = uVar12 + uVar13 >> 1;
        uVar14 = (ulonglong)uVar15;
        uVar4 = *(ulonglong *)(*plVar1 + uVar14 * 0x260);
        if (uVar4 <= uVar16) {
          if (uVar16 <= uVar4) break;
          uVar13 = uVar15 + 1;
          uVar14 = (ulonglong)uVar13;
          uVar15 = uVar12;
        }
        uVar12 = uVar15;
      } while (uVar12 != uVar13);
      if (((uint)uVar14 == uVar3) || (*(ulonglong *)(uVar14 * 0x260 + *plVar1) != uVar16))
      goto LAB_1800b4f87;
    }
    lVar11 = (uVar14 * 0x260 | 0xc) + *plVar1;
  }
  else {
    if ((lVar10 == 0) || (*(char *)(*(longlong *)(lVar10 + 0x868) + 1) != '\x03')) {
      cVar2 = *(char *)(param_6 + 0x290);
    }
    else {
      cVar2 = *(char *)(param_6 + 0x291);
    }
    param_5 = lVar11;
    if (cVar2 == '\0') goto LAB_1800b500c;
    lVar11 = param_6 + 0x20;
  }
  if (lVar11 != 0) {
    uVar17 = FUN_180005bf0(param_1 + -0x6838,param_2,param_3,param_4,lVar5 + -0x90,param_1 + 0x748,
                           *(longlong *)(param_1 + 0x5cb0),lVar11,uVar7,lVar10,
                           in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0);
    uVar17 = uVar17 & 0xffffffff;
  }
LAB_1800b500c:
  if (bVar6) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar17;
}

