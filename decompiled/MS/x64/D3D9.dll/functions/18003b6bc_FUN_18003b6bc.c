/*
 * FUN_18003b6bc at 18003b6bc
 * undefined __fastcall FUN_18003b6bc(longlong * param_1, int param_2, longlong param_3, longlong param_4, undefined8 * param_5, uint param_6, uint param_7)
 * Address ranges: 18003b6bc-18003b7b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b6bc(longlong *param_1,int param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5,uint param_6,uint param_7)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong local_res8;
  
  lVar2 = 0;
  do {
    plVar1 = (longlong *)param_1[lVar2 + 0x1f36];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)((longlong)param_1 + lVar2 * 4 + 0xf9d8),
                 *(undefined4 *)((longlong)param_1 + lVar2 * 4 + 0xf9e8));
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  plVar1 = (longlong *)param_1[0x1f3a];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))
              (plVar1,(int)param_1[7999],*(undefined4 *)((longlong)param_1 + 0xf9fc));
  }
  local_res8 = -(ulonglong)(param_4 != 0) & param_4 - 0x30U;
  FUN_18005fc10(param_1,param_2,param_3,'\0',&local_res8,param_5,param_6,param_7,'\0',0);
  return;
}

