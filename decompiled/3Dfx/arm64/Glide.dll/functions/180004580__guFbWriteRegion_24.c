/*
 * _guFbWriteRegion@24 at 180004580
 * undefined __cdecl _guFbWriteRegion@24(uint param_1, uint param_2, int param_3, uint param_4, undefined8 param_5, int param_6)
 * Address ranges: 180004580-1800046c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFbWriteRegion_24(uint param_1,uint param_2,int param_3,uint param_4,undefined8 param_5,
                        int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar5 = DAT_18006c8c0._4_4_;
                    /* 0x4580  119  _guFbWriteRegion@24
                       0x4580  280  guFbWriteRegion */
  uVar4 = DAT_18006c884;
  lVar6 = FUN_180017788();
  if (*(char *)(lVar6 + 100) != '\0') {
    FUN_180061700((uint *)(lVar6 + 0x60));
    if (uVar5 < 3) {
      plVar7 = *(longlong **)(lVar6 + 0x18);
      uVar2 = *(uint *)(plVar7 + 0x15);
      if (((param_1 < uVar2) && (uVar3 = *(uint *)((longlong)plVar7 + 0xac), param_2 < uVar3)) &&
         (uVar1 = param_1 + param_3, param_1 < uVar1)) {
        if (uVar2 < uVar1) {
          uVar1 = uVar2;
        }
        if (param_6 < 0) {
          if (param_2 < param_4) {
            param_4 = param_2;
          }
          (**(code **)(*plVar7 + 0xf8))
                    (plVar7,uVar5,param_1,param_2,uVar4,uVar1 - param_1,param_4,param_6,param_5,0,0)
          ;
        }
        else {
          uVar2 = param_2 + param_4;
          if (param_2 < uVar2) {
            if (uVar3 < uVar2) {
              uVar2 = uVar3;
            }
            (**(code **)(*plVar7 + 0xf8))
                      (plVar7,uVar5,param_1,param_2,uVar4,uVar1 - param_1,uVar2 - param_2,param_6,
                       param_5,0,0);
          }
        }
      }
    }
    FUN_1800616f0((uint *)(lVar6 + 0x60));
  }
  return;
}

