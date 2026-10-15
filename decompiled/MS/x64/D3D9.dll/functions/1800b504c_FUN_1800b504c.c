/*
 * FUN_1800b504c at 1800b504c
 * undefined8 __fastcall FUN_1800b504c(longlong param_1, uint param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 1800b504c-1800b51bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b504c(longlong param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  BOOL BVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint local_res10 [2];
  
  uVar4 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x70)) && (param_2 + param_4 <= *(uint *)(param_1 + 0x70))) {
    if (param_4 != 0) {
      if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
      uVar1 = *(uint *)(param_1 + -0x59bc);
      if (param_2 < uVar1) {
        if (uVar1 < param_2 + param_4) {
          param_4 = uVar1 - param_2;
        }
      }
      else {
        param_4 = 0;
      }
      if (*(char *)(param_1 + -0x642c) == '\0') {
        FUN_1800fa780(local_res10);
        lVar5 = FUN_1800bed58(param_1 + 0x80,*(ulonglong *)(param_1 + 0x5c58));
        FUN_1800b646c(param_1 + -0x6838,lVar5,param_2,param_3,param_4);
        FUN_1800fa7bc();
      }
      else {
        puVar7 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                 + ((ulonglong)(param_2 * 4) + 0x1864) * 4);
        for (uVar6 = (ulonglong)(param_4 * 4); uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = *param_3;
          param_3 = param_3 + 1;
          puVar7 = puVar7 + 1;
        }
        if (param_4 != 0) {
          FUN_1800fbea0((undefined1 *)(((ulonglong)param_2 - 0x658) + param_1),1,(ulonglong)param_4)
          ;
        }
      }
      if (bVar2) {
        LeaveCriticalSection(DAT_1801123a8);
      }
      else {
        *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

