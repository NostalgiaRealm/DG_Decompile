/*
 * FUN_180057778 at 180057778
 * undefined __fastcall FUN_180057778(longlong param_1, ulonglong param_2)
 * Address ranges: 180057778-180057840
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057778(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong local_res10;
  
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((*(int *)(param_2 + 0x50) != 0) && (uVar2 = *(uint *)(param_1 + 0x78), uVar2 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar7 = 0;
    uVar8 = uVar2;
    do {
      uVar5 = uVar8 + uVar7 >> 1;
      uVar6 = *(ulonglong *)(lVar3 + (ulonglong)uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar6 <= param_2) {
        if (param_2 <= uVar6) break;
        uVar7 = uVar5 + 1;
        uVar4 = uVar8;
        uVar5 = uVar7;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar7);
    if (uVar5 != uVar2) {
      uVar6 = (ulonglong)uVar5;
      if ((*(ulonglong *)(lVar3 + uVar6 * 0x18) == param_2) &&
         (puVar1 = (uint *)(lVar3 + 0x10 + uVar6 * 0x18), puVar1 != (uint *)0x0)) {
        FUN_180056ca4(uVar6 * 3,
                      (longlong *)((ulonglong)*puVar1 * 0x40 + *(longlong *)(param_1 + 0x40)));
        *(undefined1 *)((ulonglong)*puVar1 * 0x40 + 0x3d + *(longlong *)(param_1 + 0x40)) = 1;
        FUN_180057844(param_1 + 0x68,&local_res10);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018005783a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}

