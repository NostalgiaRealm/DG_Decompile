/*
 * FUN_180016a00 at 180016a00
 * bool __fastcall FUN_180016a00(longlong param_1, int param_2, uint param_3, uint param_4, int param_5, int param_6, undefined4 param_7, undefined8 param_8)
 * Address ranges: 180016a00-180016ac9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180016a00(longlong param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                  undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  
  cVar4 = '\0';
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
      plVar3 = *(longlong **)(param_1 + 0x18);
      uVar1 = *(uint *)(plVar3 + 0x15);
      if (((param_3 < uVar1) && (uVar2 = *(uint *)((longlong)plVar3 + 0xac), param_4 < uVar2)) &&
         (uVar5 = param_5 + param_3, param_3 < uVar5)) {
        if (uVar5 <= uVar1) {
          uVar1 = uVar5;
        }
        uVar5 = param_6 + param_4;
        if (param_4 < uVar5) {
          if (uVar5 <= uVar2) {
            uVar2 = uVar5;
          }
          cVar4 = (**(code **)(*plVar3 + 0x100))
                            (plVar3,param_2,param_3,param_4,uVar1 - param_3,uVar2 - param_4,param_7,
                             param_8);
        }
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return cVar4 != '\0';
}

