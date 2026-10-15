/*
 * _grLfbReadRegion@28 at 180004320
 * bool __cdecl _grLfbReadRegion@28(uint param_1, uint param_2, uint param_3, int param_4, int param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 180004320-180004417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbReadRegion_28(uint param_1,uint param_2,uint param_3,int param_4,int param_5,
                        undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  
                    /* 0x4320  55  _grLfbReadRegion@28
                       0x4320  212  grLfbReadRegion */
  lVar5 = FUN_180016878();
  cVar4 = '\0';
  cVar7 = '\0';
  if (*(char *)(lVar5 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar5 + 0x60));
    if (param_1 < 3) {
      plVar6 = *(longlong **)(lVar5 + 0x18);
      uVar2 = *(uint *)(plVar6 + 0x15);
      if (((param_2 < uVar2) && (uVar3 = *(uint *)((longlong)plVar6 + 0xac), param_3 < uVar3)) &&
         (uVar1 = param_2 + param_4, param_2 < uVar1)) {
        if (uVar2 < uVar1) {
          uVar1 = uVar2;
        }
        uVar2 = param_3 + param_5;
        if (param_3 < uVar2) {
          if (uVar3 < uVar2) {
            uVar2 = uVar3;
          }
          cVar4 = (**(code **)(*plVar6 + 0x100))
                            (plVar6,param_1,param_2,param_3,uVar1 - param_2,uVar2 - param_3,param_6,
                             param_7);
        }
      }
    }
    FUN_1800608a0((uint *)(lVar5 + 0x60));
    cVar7 = cVar4;
  }
  return cVar7 != '\0';
}

