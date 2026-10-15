/*
 * FUN_1800b8174 at 1800b8174
 * ulonglong __fastcall FUN_1800b8174(longlong param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 1800b8174-1800b856a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b8174(longlong param_1,int param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  char cVar17;
  byte bVar18;
  uint local_res10 [2];
  int local_res18;
  longlong local_148;
  uint auStack_140 [66];
  
  cVar12 = '\0';
  local_res18 = param_3;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    cVar17 = cVar12;
  }
  else {
    cVar17 = '\x01';
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar10 = 0x8876086c;
  if (((5 < param_2 - 1U) ||
      (uVar10 = 0x8876086c, *(uint *)(*(longlong *)(param_1 + 0x60) + 0xb4) <= param_4)) ||
     (*(char *)(param_1 + -0x6568) == '\0')) goto LAB_1800b8530;
  bVar18 = *(int *)(param_1 + -0x63a4) != 0;
  uVar15 = param_1 - 0x6838;
  uVar14 = 0;
  uVar10 = uVar15;
  uVar9 = FUN_1800b7338(uVar15);
  uVar7 = FUN_1800b7380(uVar10,(byte)uVar9,bVar18);
  cVar5 = FUN_1800b0b54(uVar15,uVar7);
  uVar10 = 0;
  if (((cVar5 == '\0') || (bVar18 = FUN_1800b73e4(uVar15), uVar10 = uVar14, bVar18 == 0)) ||
     ((cVar5 = FUN_1800b78f4(uVar15), cVar5 == '\0' ||
      (cVar5 = FUN_1800b0e84(uVar15), cVar5 == '\0')))) goto LAB_1800b8530;
  plVar1 = (longlong *)(param_1 + 0x5cb0);
  uVar7 = *(uint *)(*plVar1 + 0x10) & *(uint *)(param_1 + -0x6c);
  uVar10 = 0x8876086c;
  if ((((*(uint *)(param_1 + -0x70) & uVar7) != uVar7) ||
      (uVar9 = 0, uVar10 = uVar9, *(char *)(param_1 + -0x1f) != '\0')) ||
     (*(longlong *)(param_1 + -0x6808) == 0)) goto LAB_1800b8530;
  FUN_1800fa780(local_res10);
  if (((*(int *)(*plVar1 + 4) == 0) && (*(longlong *)(param_1 + -0x170) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + -0x170) + 0x8c) == '\0')) {
    iVar8 = *(int *)(param_1 + -0x61a0);
  }
  else {
    iVar8 = *(int *)(param_1 + -0x61a0);
    if ((iVar8 != 0) || (*(char *)(param_1 + -0x1d) == '\0')) {
      cVar12 = '\x01';
    }
  }
  FUN_18001b6a8(uVar15,cVar12,iVar8 != 0,'\x01');
  lVar11 = *(longlong *)(param_1 + 0x5c50);
  FUN_1800b1124(uVar15);
  FUN_180006a48(uVar15,lVar11 == 0);
  uVar10 = 0;
  if (*(char *)(param_1 + 0x5cd0) == '\0') {
    uVar10 = FUN_18000a024(uVar15,plVar1,param_2,local_res18,param_4);
    uVar10 = uVar10 & 0xffffffff;
  }
  else {
    lVar11 = *plVar1;
    if (*(int *)(lVar11 + 8) != 0) {
      do {
        uVar13 = (int)uVar10 + 1;
        uVar15 = (ulonglong)*(byte *)(lVar11 + 0x214 + uVar10);
        lVar16 = (longlong)*(char *)(lVar11 + 0x14 + uVar15 * 8);
        lVar3 = *(longlong *)(param_1 + -0x170 + lVar16 * 8);
        uVar7 = *(uint *)(param_1 + -0xf0 + lVar16 * 4);
        auStack_140[uVar10 * 4] = uVar7;
        uVar2 = *(uint *)(param_1 + -0xb0 + lVar16 * 4);
        bVar18 = *(byte *)(lVar11 + 0x17 + uVar15 * 8);
        lVar3 = *(longlong *)(lVar3 + 8);
        auStack_140[uVar10 * 4 + 1] = *(uint *)(param_1 + 0x5c68 + lVar16 * 4) & 0x3fffffff;
        (&local_148)[uVar10 * 2] =
             (ulonglong)(uVar7 * local_res18) + (ulonglong)uVar2 + (ulonglong)bVar18 * 4 + lVar3;
        uVar10 = (ulonglong)uVar13;
      } while (uVar13 < *(uint *)(lVar11 + 8));
    }
    lVar11 = (longlong)*(int *)(&DAT_1800fda90 + (longlong)param_2 * 4);
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x150))
              (*(longlong **)(param_1 + -0x6810),lVar11,*(undefined8 *)(param_1 + 0x5cb8),
               *(undefined8 *)(param_1 + 0x5cc0),&local_148,
               param_4 * *(int *)(&DAT_1800fda58 + lVar11 * 8) +
               *(int *)(&DAT_1800fda5c + lVar11 * 8));
    if ((*(char *)(param_1 + -0x5a17) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f2) == '\0')) {
      bVar4 = false;
      if (*(char *)(param_1 + -0x656b) != '\0') goto LAB_1800b849d;
    }
    else {
      bVar4 = true;
LAB_1800b849d:
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x28))();
      (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x28))
                (*(longlong **)(param_1 + -0x6808),*(undefined4 *)(param_1 + -0x6574),
                 *(undefined4 *)(param_1 + -0x6570));
      if ((bVar4) &&
         ((**(code **)(**(longlong **)(param_1 + -0x6808) + 0x28))
                    (*(longlong **)(param_1 + -0x6808),*(undefined4 *)(param_1 + -0x6574),
                     *(undefined4 *)(param_1 + -0x6570)),
         *(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f3) != '\0')) {
        DebugBreak();
      }
    }
    if (*(char *)(param_1 + -0x656a) == '\0') {
      (**(code **)(**(longlong **)(param_1 + -0x6808) + 0x18))();
      if (*(longlong **)(param_1 + -0x67e8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + -0x67e8) + 0x18))();
      }
      *(undefined1 *)(param_1 + -0x656a) = 1;
    }
    uVar10 = 0;
    if (*(char *)(param_1 + -0x6569) != '\0') {
      if (*(int *)(param_1 + -0x6358) != 0) {
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + -0x6808) + 8) + 0x70);
        (**(code **)(*plVar1 + 0x40))
                  (plVar1,*(undefined4 *)(param_1 + -0x6574),*(undefined4 *)(param_1 + -0x6570),1);
      }
      *(undefined1 *)(param_1 + -0x6569) = 0;
      uVar10 = uVar9;
    }
  }
  FUN_1800fa7bc();
LAB_1800b8530:
  if (cVar17 == '\0') {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  else {
    LeaveCriticalSection(DAT_1801123a8);
  }
  return uVar10;
}

