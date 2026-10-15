/*
 * FUN_18005d058 at 18005d058
 * undefined __fastcall FUN_18005d058(longlong * param_1)
 * Address ranges: 18005d058-18005d126
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d058(longlong *param_1)

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
      goto LAB_18005d08b;
    }
    do {
      plVar5 = (longlong *)(param_1[10] + uVar3 * 0x18 + 0x10);
LAB_18005d08b:
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
        FUN_18005dbc0((LPVOID)*plVar4);
        FUN_18005dbc0(plVar4);
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb));
  }
  FUN_18005dbc0((LPVOID)param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_18005dbc0((LPVOID)param_1[0xc]);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00018005d120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}

