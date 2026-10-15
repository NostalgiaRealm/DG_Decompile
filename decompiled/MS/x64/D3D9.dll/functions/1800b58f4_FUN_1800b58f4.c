/*
 * FUN_1800b58f4 at 1800b58f4
 * undefined8 __fastcall FUN_1800b58f4(longlong param_1, uint param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 1800b58f4-1800b5a4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b58f4(longlong param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint local_res10 [2];
  
  uVar4 = 0x8876086c;
  if ((param_2 < 0x10) && (param_2 + param_4 < 0x11)) {
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
      if (*(char *)(param_1 + -0x642c) == '\0') {
        FUN_1800fa780(local_res10);
        lVar3 = FUN_1800bf32c(param_1 + 0xd8,*(ulonglong *)(param_1 + 0x5c50));
        FUN_1800b6a30(param_1 + -0x6838,lVar3,param_2,param_3,param_4);
        FUN_1800fa7bc();
      }
      else {
        puVar6 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                  + 0x517c + (ulonglong)(param_2 * 4) * 4);
        for (uVar5 = (ulonglong)(param_4 * 4); uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = *param_3;
          param_3 = param_3 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_1800fbea0((undefined1 *)((ulonglong)param_2 + 0x288 + param_1),1,(ulonglong)param_4);
      }
      if (bVar1) {
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

