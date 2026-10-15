/*
 * FUN_1800b856c at 1800b856c
 * undefined4 __fastcall FUN_1800b856c(longlong param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, uint param_7)
 * Address ranges: 1800b856c-1800b87b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800b856c(longlong param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
             uint param_7)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  byte bVar12;
  uint local_res10 [2];
  int local_res18;
  
  uVar11 = 0x8876086c;
  local_res18 = param_3;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  uVar8 = 0x8876086c;
  if ((((param_2 - 1U < 6) &&
       (uVar8 = uVar11, param_7 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xb4))) &&
      (*(char *)(param_1 + -0x6568) != '\0')) && (*(longlong *)(param_1 + -0x178) != 0)) {
    uVar1 = param_1 - 0x6838;
    bVar12 = *(int *)(param_1 + -0x63a4) != 0;
    uVar10 = uVar1;
    uVar9 = FUN_1800b7338(uVar1);
    uVar7 = FUN_1800b7380(uVar10,(byte)uVar9,bVar12);
    cVar5 = FUN_1800b0b54(uVar1,uVar7);
    uVar8 = 0;
    if (((cVar5 != '\0') && (bVar12 = FUN_1800b73e4(uVar1), bVar12 != 0)) &&
       ((cVar5 = FUN_1800b78f4(uVar1), uVar8 = 0, cVar5 != '\0' &&
        (cVar5 = FUN_1800b0e84(uVar1), cVar5 != '\0')))) {
      uVar8 = 0x8876086c;
      plVar2 = (longlong *)(param_1 + 0x5cb0);
      uVar7 = *(uint *)(*plVar2 + 0x10) & *(uint *)(param_1 + -0x6c);
      if ((*(uint *)(param_1 + -0x70) & uVar7) == uVar7) {
        uVar8 = 0;
        cVar5 = '\0';
        if ((*(char *)(param_1 + -0x1f) == '\0') && (*(longlong *)(param_1 + -0x6808) != 0)) {
          FUN_1800fa780(local_res10);
          if (((*(int *)(*plVar2 + 4) != 0) ||
              ((*(longlong *)(param_1 + -0x170) == 0 ||
               (*(char *)(*(longlong *)(param_1 + -0x170) + 0x8c) != '\0')))) &&
             ((*(int *)(param_1 + -0x61a0) != 0 || (*(char *)(param_1 + -0x1d) == '\0')))) {
            cVar5 = '\x01';
          }
          FUN_18001b6a8(uVar1,cVar5,*(int *)(param_1 + -0x61a0) != 0,'\x01');
          lVar3 = *(longlong *)(param_1 + 0x5c50);
          FUN_1800b1124(uVar1);
          FUN_180006a48(uVar1,lVar3 == 0);
          uVar8 = FUN_18000a550(uVar1,plVar2,local_res18,param_2,param_4,param_5,param_6,param_7);
          FUN_1800fa7bc();
        }
      }
    }
  }
  if (bVar4) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar8;
}

