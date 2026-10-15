/*
 * FUN_180017be0 at 180017be0
 * bool __cdecl FUN_180017be0(longlong param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, uint param_7, int param_8, undefined8 param_9, undefined1 param_10, undefined1 param_11)
 * Address ranges: 180017be0-180017d3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180017be0(longlong param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                  int param_6,uint param_7,int param_8,undefined8 param_9,undefined1 param_10,
                  undefined1 param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  char cVar6;
  
  cVar4 = '\0';
  cVar6 = '\0';
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800608b0((uint *)(param_1 + 0x60));
    if (param_2 < 3) {
      plVar5 = *(longlong **)(param_1 + 0x18);
      uVar2 = *(uint *)(plVar5 + 0x15);
      if (((param_3 < uVar2) && (uVar3 = *(uint *)((longlong)plVar5 + 0xac), param_4 < uVar3)) &&
         (uVar1 = param_3 + param_6, param_3 < uVar1)) {
        if (uVar2 < uVar1) {
          uVar1 = uVar2;
        }
        if (param_8 < 0) {
          if (param_4 < param_7) {
            param_7 = param_4;
          }
          cVar4 = (**(code **)(*plVar5 + 0xf8))
                            (plVar5,param_2,param_3,param_4,param_5,uVar1 - param_3,param_7,param_8,
                             param_9,param_10,param_11);
        }
        else {
          uVar2 = param_4 + param_7;
          if (param_4 < uVar2) {
            if (uVar3 < uVar2) {
              uVar2 = uVar3;
            }
            cVar4 = (**(code **)(*plVar5 + 0xf8))
                              (plVar5,param_2,param_3,param_4,param_5,uVar1 - param_3,
                               uVar2 - param_4,param_8,param_9,param_10,param_11);
          }
        }
      }
    }
    FUN_1800608a0((uint *)(param_1 + 0x60));
    cVar6 = cVar4;
  }
  return cVar6 != '\0';
}

