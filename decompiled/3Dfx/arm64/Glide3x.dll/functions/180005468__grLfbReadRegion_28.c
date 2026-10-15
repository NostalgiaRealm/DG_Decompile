/*
 * _grLfbReadRegion@28 at 180005468
 * bool __cdecl _grLfbReadRegion@28(uint param_1, uint param_2, uint param_3, int param_4, int param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 180005468-18000558b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbReadRegion_28(uint param_1,uint param_2,uint param_3,int param_4,int param_5,
                        undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
                    /* 0x5468  53  _grLfbReadRegion@28
                       0x5468  153  grLfbReadRegion */
  lVar3 = FUN_180008ce0();
  cVar2 = '\0';
  cVar8 = '\0';
  if (*(char *)(lVar3 + 100) == '\0') goto LAB_180005568;
  FUN_1800643e0((uint *)(lVar3 + 0x60));
  plVar4 = *(longlong **)(lVar3 + 0x18);
  if (param_1 < 3) {
    uVar6 = *(uint *)(plVar4 + 0x15);
    uVar7 = *(uint *)((longlong)plVar4 + 0xac);
LAB_180005500:
    if ((param_2 < uVar6 && param_3 < uVar7) && (uVar1 = param_2 + param_4, param_2 < uVar1)) {
      if (uVar6 < uVar1) {
        uVar1 = uVar6;
      }
      uVar6 = param_3 + param_5;
      if (param_3 < uVar6) {
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
        cVar2 = (**(code **)(*plVar4 + 0x120))
                          (plVar4,param_1,param_2,param_3,uVar1 - param_2,uVar6 - param_3,param_6,
                           param_7);
      }
    }
  }
  else {
    if (param_1 == 6) {
      uVar6 = *(uint *)((longlong)plVar4 + 0x166);
      puVar5 = (uint *)((longlong)plVar4 + 0x16a);
LAB_1800054f4:
      uVar7 = *puVar5;
      goto LAB_180005500;
    }
    if (param_1 == 7) {
      uVar6 = *(uint *)((longlong)plVar4 + 0x17a);
      puVar5 = (uint *)((longlong)plVar4 + 0x17e);
      goto LAB_1800054f4;
    }
  }
  FUN_1800643d0((uint *)(lVar3 + 0x60));
  cVar8 = cVar2;
LAB_180005568:
  return cVar8 != '\0';
}

