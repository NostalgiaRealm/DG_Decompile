/*
 * FUN_1800b87b8 at 1800b87b8
 * ulonglong __fastcall FUN_1800b87b8(longlong param_1, int param_2, uint param_3, longlong param_4, undefined4 param_5)
 * Address ranges: 1800b87b8-1800b89c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b87b8(longlong param_1,int param_2,uint param_3,longlong param_4,
                       undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  byte bVar11;
  uint local_res8 [2];
  int local_res10;
  
  uVar8 = 0x8876086c;
  local_res10 = param_2;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar3 = false;
  }
  else {
    BVar5 = TryEnterCriticalSection(DAT_1801123a8);
    bVar3 = true;
    if (BVar5 == 0) {
      FUN_1800044dc(0);
      bVar3 = true;
    }
  }
  cVar10 = '\x01';
  uVar9 = 0x8876086c;
  if ((((param_2 - 1U < 6) && (uVar9 = uVar8, param_4 != 0)) &&
      (param_3 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xb4))) &&
     (*(char *)(param_1 + -0x6568) != '\0')) {
    uVar8 = param_1 - 0x6838;
    bVar11 = *(int *)(param_1 + -0x63a4) != 0;
    uVar9 = uVar8;
    uVar7 = FUN_1800b7338(uVar8);
    uVar6 = FUN_1800b7380(uVar9,(byte)uVar7,bVar11);
    cVar4 = FUN_1800b0b54(uVar8,uVar6);
    uVar9 = 0;
    if (cVar4 != '\0') {
      bVar11 = FUN_1800b73e4(uVar8);
      if (bVar11 != 0) {
        cVar4 = FUN_1800b78f4(uVar8);
        uVar9 = 0;
        if (cVar4 != '\0') {
          cVar4 = FUN_1800b0e84(uVar8);
          if (cVar4 != '\0') {
            uVar9 = 0x8876086c;
            plVar1 = (longlong *)(param_1 + 0x5cb0);
            if ((*(uint *)(*plVar1 + 0x10) & *(uint *)(param_1 + -0x6c)) == 1) {
              uVar9 = 0;
              if ((*(char *)(param_1 + -0x1f) == '\0') && (*(longlong *)(param_1 + -0x6808) != 0)) {
                FUN_1800fa780(local_res8);
                if ((*(int *)(param_1 + -0x61a0) != 0) ||
                   (cVar4 = '\0', *(char *)(param_1 + -0x1d) == '\0')) {
                  cVar4 = cVar10;
                }
                if ((*(int *)(param_1 + -0x63a4) == 0) && (*(int *)(*plVar1 + 4) == 0)) {
                  cVar10 = '\0';
                }
                FUN_18001b6a8(uVar8,cVar4,*(int *)(param_1 + -0x61a0) != 0,cVar10);
                lVar2 = *(longlong *)(param_1 + 0x5c50);
                FUN_1800b1124(uVar8);
                FUN_180006a48(uVar8,lVar2 == 0);
                uVar9 = FUN_180009c8c(uVar8,plVar1,local_res10,param_3,param_4,param_5);
                uVar9 = uVar9 & 0xffffffff;
                FUN_1800fa7bc();
              }
            }
          }
        }
      }
    }
  }
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar9;
}

