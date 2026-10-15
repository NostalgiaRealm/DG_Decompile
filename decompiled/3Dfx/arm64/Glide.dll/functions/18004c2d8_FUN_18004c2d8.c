/*
 * FUN_18004c2d8 at 18004c2d8
 * undefined __cdecl FUN_18004c2d8(longlong param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 18004c2d8-18004c38b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c2d8(longlong param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x44);
    uVar2 = 0;
    do {
      uVar4 = 0;
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          if (*(longlong *)(param_1 + 0x48 + uVar4 * 8) == param_3[uVar2]) goto LAB_18004c330;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < uVar1);
      }
      if (uVar3 == uVar1) {
        FUN_18004b680(param_1);
        (**(code **)(**(longlong **)(param_1 + 0x688) + 0xe0))
                  (*(longlong **)(param_1 + 0x688),param_2,param_3);
        *(uint *)(param_1 + 0x44) = param_2;
        *(undefined1 *)(param_1 + 0x674) = 1;
        thunk_FUN_180001218((undefined8 *)(param_1 + 0x48),param_3,(ulonglong)param_2 << 3);
        return;
      }
LAB_18004c330:
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < param_2);
  }
  return;
}

