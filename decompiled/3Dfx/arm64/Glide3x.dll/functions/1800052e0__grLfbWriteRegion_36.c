/*
 * _grLfbWriteRegion@36 at 1800052e0
 * bool __cdecl _grLfbWriteRegion@36(uint param_1, uint param_2, uint param_3, undefined4 param_4, int param_5, uint param_6, int param_7, int param_8, undefined8 param_9)
 * Address ranges: 1800052e0-180005467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbWriteRegion_36
               (uint param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,uint param_6,
               int param_7,int param_8,undefined8 param_9)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
                    /* 0x52e0  57  _grLfbWriteRegion@36
                       0x52e0  157  grLfbWriteRegion */
  lVar3 = FUN_180008ce0();
  cVar2 = '\0';
  cVar8 = '\0';
  if (*(char *)(lVar3 + 100) == '\0') goto LAB_180005440;
  FUN_1800643e0((uint *)(lVar3 + 0x60));
  plVar4 = *(longlong **)(lVar3 + 0x18);
  if (param_1 < 3) {
    uVar6 = *(uint *)(plVar4 + 0x15);
    uVar7 = *(uint *)((longlong)plVar4 + 0xac);
LAB_180005384:
    if ((param_2 < uVar6 && param_3 < uVar7) && (uVar1 = param_2 + param_5, param_2 < uVar1)) {
      if (uVar6 < uVar1) {
        uVar1 = uVar6;
      }
      if (param_8 < 0) {
        if (param_3 < param_6) {
          param_6 = param_3;
        }
        cVar2 = (**(code **)(*plVar4 + 0x118))
                          (plVar4,param_1,param_2,param_3,param_4,uVar1 - param_2,param_6,param_8,
                           param_9,param_7 != 0,0);
      }
      else {
        uVar6 = param_3 + param_6;
        if (param_3 < uVar6) {
          if (uVar7 < uVar6) {
            uVar6 = uVar7;
          }
          cVar2 = (**(code **)(*plVar4 + 0x118))
                            (plVar4,param_1,param_2,param_3,param_4,uVar1 - param_2,uVar6 - param_3,
                             param_8,param_9,param_7 != 0,0);
        }
      }
    }
  }
  else {
    if (param_1 == 6) {
      uVar6 = *(uint *)((longlong)plVar4 + 0x166);
      puVar5 = (uint *)((longlong)plVar4 + 0x16a);
LAB_180005378:
      uVar7 = *puVar5;
      goto LAB_180005384;
    }
    if (param_1 == 7) {
      uVar6 = *(uint *)((longlong)plVar4 + 0x17a);
      puVar5 = (uint *)((longlong)plVar4 + 0x17e);
      goto LAB_180005378;
    }
  }
  FUN_1800643d0((uint *)(lVar3 + 0x60));
  cVar8 = cVar2;
LAB_180005440:
  return cVar8 != '\0';
}

