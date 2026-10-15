/*
 * FUN_1800168c4 at 1800168c4
 * bool __fastcall FUN_1800168c4(longlong param_1, int param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, uint param_7, int param_8, undefined8 param_9, undefined1 param_10, undefined1 param_11)
 * Address ranges: 1800168c4-1800169fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800168c4(longlong param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                  int param_6,uint param_7,int param_8,undefined8 param_9,undefined1 param_10,
                  undefined1 param_11)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  cVar3 = '\0';
  if (*(char *)(param_1 + 100) == '\0') goto LAB_1800169ec;
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  UNLOCK();
  if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    uVar1 = *(uint *)(plVar2 + 0x15);
    if (((param_3 < uVar1) && (uVar5 = *(uint *)((longlong)plVar2 + 0xac), param_4 < uVar5)) &&
       (uVar4 = param_6 + param_3, param_3 < uVar4)) {
      if (uVar4 <= uVar1) {
        uVar1 = uVar4;
      }
      if (param_8 < 0) {
        uVar5 = param_4;
        if (param_7 <= param_4) {
          uVar5 = param_7;
        }
      }
      else {
        uVar4 = param_7 + param_4;
        if (uVar4 <= param_4) goto LAB_1800169e8;
        if (uVar4 <= uVar5) {
          uVar5 = uVar4;
        }
        uVar5 = uVar5 - param_4;
      }
      cVar3 = (**(code **)(*plVar2 + 0xf8))
                        (plVar2,param_2,param_3,param_4,param_5,uVar1 - param_3,uVar5,param_8,
                         param_9,param_10,param_11);
    }
  }
LAB_1800169e8:
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  UNLOCK();
LAB_1800169ec:
  return cVar3 != '\0';
}

