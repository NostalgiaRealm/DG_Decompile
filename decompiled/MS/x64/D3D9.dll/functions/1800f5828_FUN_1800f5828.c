/*
 * FUN_1800f5828 at 1800f5828
 * undefined __fastcall FUN_1800f5828(longlong * param_1)
 * Address ranges: 1800f5828-1800f58f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f5828(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((int)param_1[0xb] != 0) {
    uVar3 = 0;
    if ((int)param_1[0xb] == 0) {
      plVar5 = (longlong *)&DAT_00000008;
      goto LAB_1800f585b;
    }
    do {
      plVar5 = (longlong *)(param_1[10] + uVar3 * 0x18 + 0x10);
LAB_1800f585b:
      plVar4 = (longlong *)*plVar5;
      if ((int)plVar4[1] != 0) {
        uVar2 = 0;
        do {
          (**(code **)(*param_1 + 8))(param_1,*(undefined8 *)(*plVar4 + uVar2 * 0x10));
          plVar4 = (longlong *)*plVar5;
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(plVar4 + 1));
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1800fbcf0((LPVOID)*plVar4);
        FUN_1800fbcf0(plVar4);
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb));
  }
  FUN_1800fbcf0((LPVOID)param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1800fbcf0((LPVOID)param_1[0xc]);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001800f58f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}

