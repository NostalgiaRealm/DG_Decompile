/*
 * FUN_18000b2d8 at 18000b2d8
 * undefined FUN_18000b2d8(void)
 * Address ranges: 18000b2d8-18000b3cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18000b2d8(longlong *param_1,undefined8 param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar6 = 0x8876086c;
  if (param_4 != (uint *)0x0) {
    uVar3 = *(uint *)(param_1 + 1);
    uVar6 = 0x88760866;
    if (uVar3 != 0) {
      lVar8 = *param_1;
      uVar7 = 0;
      do {
        lVar2 = lVar8 + uVar7 * 0x28;
        iVar4 = func_0x000180222c00(lVar2,param_2,0x10);
        if (iVar4 == 0) {
          uVar3 = *(uint *)(lVar2 + 0x18);
          if (uVar3 == 0) {
            if (*param_4 < 8) {
              *param_4 = 8;
              return 0x88760867;
            }
            if (param_3 == (undefined8 *)0x0) {
              return 0x8876086c;
            }
            plVar5 = *(longlong **)(lVar2 + 0x10);
            *param_3 = plVar5;
            (**(code **)(*plVar5 + 8))();
          }
          else {
            if (*param_4 < uVar3) {
              *param_4 = uVar3;
              return 0x88760867;
            }
            if (param_3 == (undefined8 *)0x0) {
              return 0x8876086c;
            }
            thunk_FUN_180001218(param_3,*(undefined8 *)(lVar2 + 0x10));
          }
          return 0;
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  return uVar6;
}

