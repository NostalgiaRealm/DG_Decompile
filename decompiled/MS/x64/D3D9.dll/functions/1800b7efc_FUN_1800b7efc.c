/*
 * FUN_1800b7efc at 1800b7efc
 * ulonglong __fastcall FUN_1800b7efc(longlong param_1, uint param_2, RECT * param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 1800b7efc-1800b8171
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b7efc(longlong param_1,uint param_2,RECT *param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar3 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar3 = true;
    BVar5 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar5 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar8 = 0;
  if (*(char *)(param_1 + -0x6568) == '\0') goto LAB_1800b8138;
  if ((((param_4 & 1) == 0) || ((param_4 & 6) == 0)) || (*(longlong *)(param_1 + -0x67e8) == 0)) {
LAB_1800b80c8:
    lVar1 = param_1 + -0x6838;
    uVar6 = FUN_1800b7380(lVar1,(byte)param_4 & 1,(param_4 & 6) != 0);
    cVar4 = FUN_1800b0b54(lVar1,uVar6);
    uVar8 = 0;
    if ((cVar4 == '\0') || (cVar4 = FUN_1800b78f4(lVar1), cVar4 == '\0')) goto LAB_1800b8138;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + -0x67e8) + 8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + -0x6808) + 8);
    if (((*(int *)(lVar1 + 0x8c) == *(int *)(lVar2 + 0x8c)) &&
        (*(int *)(lVar1 + 0x90) == *(int *)(lVar2 + 0x90))) &&
       (*(int *)(lVar1 + 0x9c) == *(int *)(lVar2 + 0x9c))) goto LAB_1800b80c8;
    lVar1 = param_1 + -0x6838;
    cVar4 = FUN_1800b0b54(lVar1,2);
    if ((cVar4 != '\0') && (cVar4 = FUN_1800b78f4(lVar1), cVar4 != '\0')) {
      uVar7 = FUN_1800098a4(lVar1,param_2,param_3,param_4 & 0xfffffffe,param_5,param_6,param_7,
                            (RECT *)(param_1 + 0x730));
      uVar8 = uVar7 & 0xffffffff;
      if ((int)uVar7 < 0) goto LAB_1800b8138;
    }
    if (((*(int *)(*(longlong *)(param_1 + -0x6808) + 0x48) == 0x4c4c554e) ||
        (cVar4 = FUN_1800b0b54(lVar1,1), cVar4 == '\0')) ||
       (cVar4 = FUN_1800b78f4(lVar1), cVar4 == '\0')) goto LAB_1800b8138;
    param_4 = 1;
  }
  uVar8 = FUN_1800098a4(param_1 + -0x6838,param_2,param_3,param_4,param_5,param_6,param_7,
                        (RECT *)(param_1 + 0x730));
  uVar8 = uVar8 & 0xffffffff;
LAB_1800b8138:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar8;
}

