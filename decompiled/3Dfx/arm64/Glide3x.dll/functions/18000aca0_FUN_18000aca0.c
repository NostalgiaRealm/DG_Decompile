/*
 * FUN_18000aca0 at 18000aca0
 * bool __cdecl FUN_18000aca0(longlong param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, uint param_7, int param_8, undefined8 param_9, undefined1 param_10, undefined1 param_11)
 * Address ranges: 18000aca0-18000adff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000aca0(longlong param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                  int param_6,uint param_7,int param_8,undefined8 param_9,undefined1 param_10,
                  undefined1 param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auVar7 [16];
  uint local_60;
  uint auStack_5c [3];
  
  cVar4 = '\0';
  cVar6 = '\0';
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    local_60 = 0;
    auStack_5c[0] = 0;
    auVar7 = FUN_18000d440(*(longlong *)(param_1 + 0x18),param_2,&local_60,auStack_5c);
    plVar5 = auVar7._0_8_;
    if ((param_3 < local_60 && param_4 < auStack_5c[0]) &&
       (uVar1 = param_3 + param_6, param_3 < uVar1)) {
      uVar2 = local_60;
      if (uVar1 <= local_60) {
        uVar2 = uVar1;
      }
      if (param_8 < 0) {
        if (param_4 < param_7) {
          param_7 = param_4;
        }
        cVar4 = (**(code **)(*plVar5 + 0x118))
                          (plVar5,param_2,param_3,param_4,param_5,uVar2 - param_3,param_7,param_8,
                           param_9,param_10,param_11);
      }
      else {
        uVar1 = param_4 + param_7;
        if (param_4 < uVar1) {
          uVar3 = auStack_5c[0];
          if (uVar1 <= auStack_5c[0]) {
            uVar3 = uVar1;
          }
          cVar4 = (**(code **)(*plVar5 + 0x118))
                            (plVar5,auVar7._8_8_,param_3,param_4,param_5,uVar2 - param_3,
                             uVar3 - param_4,param_8,param_9,param_10,param_11);
        }
      }
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
    cVar6 = cVar4;
  }
  return cVar6 != '\0';
}

