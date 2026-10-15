/*
 * FUN_18003b7bc at 18003b7bc
 * undefined __fastcall FUN_18003b7bc(longlong * param_1, int param_2, longlong param_3, longlong param_4, longlong param_5, uint param_6, undefined4 param_7, uint * param_8, uint param_9, int param_10, char param_11)
 * Address ranges: 18003b7bc-18003b8ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b7bc(longlong *param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                  uint param_6,undefined4 param_7,uint *param_8,uint param_9,int param_10,
                  char param_11)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong local_res8;
  undefined4 in_stack_ffffffffffffffa4;
  
  lVar3 = 0;
  do {
    plVar1 = (longlong *)param_1[lVar3 + 0x1f36];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)((longlong)param_1 + lVar3 * 4 + 0xf9d8),
                 *(undefined4 *)((longlong)param_1 + lVar3 * 4 + 0xf9e8));
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  plVar1 = (longlong *)param_1[0x1f3a];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))
              (plVar1,(int)param_1[7999],*(undefined4 *)((longlong)param_1 + 0xf9fc));
  }
  puVar2 = (undefined1 *)(param_4 + 0x1c);
  local_res8 = -(ulonglong)(param_4 != 0) & param_4 - 0x30U;
  if (param_4 == 0) {
    puVar2 = &DAT_0000004c;
  }
  FUN_180060c98(param_1,param_2,param_3,'\0',&local_res8,param_5,param_6,
                CONCAT44(in_stack_ffffffffffffffa4,param_7),param_8,param_9,param_10,param_11,'\0',0
                ,*puVar2);
  return;
}

