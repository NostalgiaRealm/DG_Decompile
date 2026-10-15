/*
 * FUN_18008c3f0 at 18008c3f0
 * undefined8 __fastcall FUN_18008c3f0(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4, longlong param_5, int * param_6, int param_7, int param_8, int param_9)
 * Address ranges: 18008c3f0-18008c4c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18008c3f0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             longlong param_5,int *param_6,int param_7,int param_8,int param_9)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar3 = (undefined8 *)(param_4 + 0x20);
  local_3c = (param_6[3] - *param_6) + param_7;
  local_44 = param_8;
  local_38 = (param_6[4] - param_6[1]) + param_8;
  local_40 = param_9;
  local_48 = param_7;
  local_34 = (param_6[5] - param_6[2]) + param_9;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  puVar4 = (undefined8 *)(param_5 + 0x20);
  if (param_5 == 0) {
    puVar4 = (undefined8 *)&DAT_00000040;
  }
  if (param_4 == 0) {
    puVar3 = (undefined8 *)&DAT_00000040;
  }
  uVar2 = (**(code **)(*plVar1 + 0x170))
                    (plVar1,*puVar3,param_2,*param_6,param_6[1],param_6[2],*puVar4,param_3,&local_48
                    );
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

