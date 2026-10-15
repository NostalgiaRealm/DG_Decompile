/*
 * FUN_180049818 at 180049818
 * char __fastcall FUN_180049818(longlong param_1, longlong * param_2, uint param_3, uint param_4, undefined8 * param_5, char param_6)
 * Address ranges: 180049818-1800498fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180049818(longlong param_1,longlong *param_2,uint param_3,uint param_4,undefined8 *param_5,
                  char param_6)

{
  char cVar1;
  int iVar2;
  longlong local_res10 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_48 = 0;
  local_40 = 0;
  local_res10[0] = 0;
  cVar1 = '\0';
  iVar2 = (**(code **)(*param_2 + 0x40))(param_2,0,&local_48,local_res10);
  if (-1 < iVar2) {
    cVar1 = FUN_18004367c(*(longlong **)(param_1 + 0xb18),(ulonglong)param_2);
    if (cVar1 != '\0') {
      FUN_18005ed10((undefined8 *)(local_res10[0] + (ulonglong)param_3),param_5,
                    (ulonglong)(param_4 - param_3));
    }
    local_48 = (ulonglong)param_3;
    local_40 = (ulonglong)param_4;
    (**(code **)(*param_2 + 0x48))(param_2,0);
    if (param_6 != '\0') {
      (**(code **)(*param_2 + 0x48))(param_2,0);
    }
    FUN_180047a5c(param_1,(ulonglong)param_2,0,1,0);
  }
  return cVar1;
}

