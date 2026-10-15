/*
 * _grLfbWriteRegion@32 at 1800041d0
 * bool __cdecl _grLfbWriteRegion@32(uint param_1, uint param_2, uint param_3, undefined4 param_4, int param_5, uint param_6, int param_7, undefined8 param_8)
 * Address ranges: 1800041d0-18000431f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbWriteRegion_32
               (uint param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,uint param_6,
               int param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  
                    /* 0x41d0  59  _grLfbWriteRegion@32
                       0x41d0  216  grLfbWriteRegion */
  lVar5 = FUN_180016878();
  cVar4 = '\0';
  cVar7 = '\0';
  if (*(char *)(lVar5 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar5 + 0x60));
    if (param_1 < 3) {
      plVar6 = *(longlong **)(lVar5 + 0x18);
      uVar2 = *(uint *)(plVar6 + 0x15);
      if (((param_2 < uVar2) && (uVar3 = *(uint *)((longlong)plVar6 + 0xac), param_3 < uVar3)) &&
         (uVar1 = param_2 + param_5, param_2 < uVar1)) {
        if (uVar2 < uVar1) {
          uVar1 = uVar2;
        }
        if (param_7 < 0) {
          if (param_3 < param_6) {
            param_6 = param_3;
          }
          cVar4 = (**(code **)(*plVar6 + 0xf8))
                            (plVar6,param_1,param_2,param_3,param_4,uVar1 - param_2,param_6,param_7,
                             param_8,0,0);
        }
        else {
          uVar2 = param_3 + param_6;
          if (param_3 < uVar2) {
            if (uVar3 < uVar2) {
              uVar2 = uVar3;
            }
            cVar4 = (**(code **)(*plVar6 + 0xf8))
                              (plVar6,param_1,param_2,param_3,param_4,uVar1 - param_2,
                               uVar2 - param_3,param_7,param_8,0,0);
          }
        }
      }
    }
    FUN_1800608a0((uint *)(lVar5 + 0x60));
    cVar7 = cVar4;
  }
  return cVar7 != '\0';
}

