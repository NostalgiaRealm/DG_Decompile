/*
 * FUN_180007fa8 at 180007fa8
 * bool __fastcall FUN_180007fa8(longlong param_1, int param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, uint param_7, int param_8, undefined8 param_9, undefined1 param_10, undefined1 param_11)
 * Address ranges: 180007fa8-18000810e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180007fa8(longlong param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                  int param_6,uint param_7,int param_8,undefined8 param_9,undefined1 param_10,
                  undefined1 param_11)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [2];
  uint local_28 [4];
  
  cVar2 = '\0';
  if (*(char *)(param_1 + 100) == '\0') goto LAB_1800080f2;
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  UNLOCK();
  plVar1 = *(longlong **)(param_1 + 0x18);
  local_res8[0] = 0;
  local_28[0] = 0;
  cVar2 = '\0';
  FUN_18000ad08((longlong)plVar1,param_2,local_res8,local_28);
  if (((param_3 < local_res8[0]) && (param_4 < local_28[0])) &&
     (uVar3 = param_6 + param_3, param_3 < uVar3)) {
    if (local_res8[0] < uVar3) {
      uVar3 = local_res8[0];
    }
    if (param_8 < 0) {
      uVar4 = param_4;
      if (param_7 <= param_4) {
        uVar4 = param_7;
      }
    }
    else {
      uVar4 = param_7 + param_4;
      if (uVar4 <= param_4) goto LAB_1800080ee;
      if (local_28[0] < uVar4) {
        uVar4 = local_28[0];
      }
      uVar4 = uVar4 - param_4;
    }
    cVar2 = (**(code **)(*plVar1 + 0x118))
                      (plVar1,param_2,param_3,param_4,param_5,uVar3 - param_3,uVar4,param_8,param_9,
                       param_10,param_11);
  }
LAB_1800080ee:
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  UNLOCK();
LAB_1800080f2:
  return cVar2 != '\0';
}

