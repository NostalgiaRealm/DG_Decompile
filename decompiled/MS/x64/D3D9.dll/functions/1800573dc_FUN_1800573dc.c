/*
 * FUN_1800573dc at 1800573dc
 * undefined __fastcall FUN_1800573dc(longlong param_1, ulonglong param_2, undefined8 param_3)
 * Address ranges: 1800573dc-1800574a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800573dc(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong local_res10 [3];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_res10[0] = param_2;
  local_58 = param_3;
  if (*(int *)(param_2 + 0x10) == 9) {
    cVar1 = FUN_1800ec420(*(longlong **)(param_1 + 0x18),
                          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18)
                          ,*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78),&local_50);
    if (cVar1 == '\0') {
      return;
    }
    FUN_1800e41fc(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508),local_50,0,(undefined4)local_40
                 );
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0xb) {
      return;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
  }
  FUN_180057ad8((longlong *)(param_1 + 0x28),local_res10,&local_58);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  FUN_180057064(param_1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}

