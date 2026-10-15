/*
 * FUN_1800b5784 at 1800b5784
 * undefined8 __fastcall FUN_1800b5784(longlong param_1, uint param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 1800b5784-1800b58f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b5784(longlong param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint local_res10 [2];
  
  uVar5 = 0x8876086c;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 200);
  if ((param_2 < uVar1) && (param_2 + param_4 <= uVar1)) {
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
      if (*(char *)(param_1 + -0x642c) == '\0') {
        FUN_1800fa780(local_res10);
        if (*(char *)(param_1 + -0x6817) == '\0') {
          lVar4 = FUN_1800bf32c(param_1 + 0xd8,*(ulonglong *)(param_1 + 0x5c50));
        }
        else {
          lVar4 = 0;
        }
        FUN_1800b68cc(param_1 + -0x6838,lVar4,param_2,param_3,param_4);
        FUN_1800fa7bc();
      }
      else {
        puVar7 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                  + 0x5390 + (ulonglong)(param_2 * 4) * 4);
        for (uVar6 = (ulonglong)(param_4 * 4); uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = *param_3;
          param_3 = param_3 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_1800fbea0((undefined1 *)(((ulonglong)param_2 - 600) + param_1),1,(ulonglong)param_4);
      }
      if (bVar2) {
        LeaveCriticalSection(DAT_1801123a8);
      }
      else {
        *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

