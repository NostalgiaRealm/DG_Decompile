/*
 * FUN_1800b51c0 at 1800b51c0
 * undefined8 __fastcall FUN_1800b51c0(longlong param_1, uint param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 1800b51c0-1800b5332
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b51c0(longlong param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint local_res10 [2];
  
  uVar3 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x74)) && (param_2 + param_4 <= *(uint *)(param_1 + 0x74))) {
    if (param_4 != 0) {
      if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
        bVar1 = false;
        *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      }
      else {
        bVar1 = true;
        BVar2 = TryEnterCriticalSection(DAT_1801123a8);
        if (BVar2 == 0) {
          FUN_1800044dc(0);
        }
      }
      if (param_2 < 0x10) {
        if (0x10 < param_2 + param_4) {
          param_4 = 0x10 - param_2;
        }
      }
      else {
        param_4 = 0;
      }
      if (*(char *)(param_1 + -0x642c) == '\0') {
        FUN_1800fa780(local_res10);
        lVar4 = FUN_1800bed58(param_1 + 0x80,*(ulonglong *)(param_1 + 0x5c58));
        FUN_1800b663c(param_1 + -0x6838,lVar4,param_2,param_3,param_4);
        FUN_1800fa7bc();
      }
      else {
        puVar6 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                 + ((ulonglong)(param_2 * 4) + 0x140f) * 4);
        for (uVar5 = (ulonglong)(param_4 * 4); uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = *param_3;
          param_3 = param_3 + 1;
          puVar6 = puVar6 + 1;
        }
        if (param_4 != 0) {
          FUN_1800fbea0((undefined1 *)((ulonglong)param_2 + 0x268 + param_1),1,(ulonglong)param_4);
        }
      }
      if (bVar1) {
        LeaveCriticalSection(DAT_1801123a8);
      }
      else {
        *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

