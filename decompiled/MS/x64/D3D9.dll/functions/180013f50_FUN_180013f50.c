/*
 * FUN_180013f50 at 180013f50
 * undefined8 __fastcall FUN_180013f50(longlong * param_1, longlong * param_2, undefined8 * param_3, uint * param_4)
 * Address ranges: 180013f50-180014015
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180013f50(longlong *param_1,longlong *param_2,undefined8 *param_3,uint *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x8876086c;
  if (param_4 != (uint *)0x0) {
    uVar5 = 0x88760866;
    if (*(uint *)(param_1 + 1) != 0) {
      lVar1 = *param_1;
      uVar4 = 0;
      do {
        if ((*(longlong *)(lVar1 + uVar4 * 0x28) == *param_2) &&
           (*(longlong *)(lVar1 + 8 + uVar4 * 0x28) == param_2[1])) {
          uVar3 = *(uint *)(lVar1 + 0x18 + uVar4 * 0x28);
          if (uVar3 == 0) {
            if (*param_4 < 8) {
              *param_4 = 8;
              return 0x88760867;
            }
            if (param_3 == (undefined8 *)0x0) {
              return 0x8876086c;
            }
            plVar2 = *(longlong **)(lVar1 + 0x10 + uVar4 * 0x28);
            *param_3 = plVar2;
            (**(code **)(*plVar2 + 8))();
          }
          else {
            if (*param_4 < uVar3) {
              *param_4 = uVar3;
              return 0x88760867;
            }
            if (param_3 == (undefined8 *)0x0) {
              return 0x8876086c;
            }
            FUN_1800fbec0(param_3,*(undefined8 **)(lVar1 + 0x10 + uVar4 * 0x28),(ulonglong)uVar3);
          }
          return 0;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 1));
    }
  }
  return uVar5;
}

