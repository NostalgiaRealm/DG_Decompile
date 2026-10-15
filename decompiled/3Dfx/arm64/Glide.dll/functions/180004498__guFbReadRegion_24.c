/*
 * _guFbReadRegion@24 at 180004498
 * undefined __cdecl _guFbReadRegion@24(uint param_1, uint param_2, int param_3, int param_4, undefined8 param_5, undefined4 param_6)
 * Address ranges: 180004498-18000457b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFbReadRegion_24(uint param_1,uint param_2,int param_3,int param_4,undefined8 param_5,
                       undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  
                    /* 0x4498  118  _guFbReadRegion@24
                       0x4498  279  guFbReadRegion */
  uVar4 = (uint)DAT_18006c8c0;
  lVar5 = FUN_180017788();
  if (*(char *)(lVar5 + 100) != '\0') {
    FUN_180061700((uint *)(lVar5 + 0x60));
    if (uVar4 < 3) {
      plVar6 = *(longlong **)(lVar5 + 0x18);
      uVar2 = *(uint *)(plVar6 + 0x15);
      if (((param_1 < uVar2) && (uVar3 = *(uint *)((longlong)plVar6 + 0xac), param_2 < uVar3)) &&
         (uVar1 = param_1 + param_3, param_1 < uVar1)) {
        if (uVar2 < uVar1) {
          uVar1 = uVar2;
        }
        uVar2 = param_2 + param_4;
        if (param_2 < uVar2) {
          if (uVar3 < uVar2) {
            uVar2 = uVar3;
          }
          (**(code **)(*plVar6 + 0x100))
                    (plVar6,uVar4,param_1,param_2,uVar1 - param_1,uVar2 - param_2,param_6,param_5);
        }
      }
    }
    FUN_1800616f0((uint *)(lVar5 + 0x60));
  }
  return;
}

