/*
 * FUN_1800e3368 at 1800e3368
 * undefined __fastcall FUN_1800e3368(longlong param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 1800e3368-1800e33fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3368(longlong param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x44);
    uVar4 = 0;
    do {
      uVar3 = 0;
      uVar2 = 0;
      if (uVar1 != 0) {
        do {
          if (*(longlong *)(param_1 + 0x48 + uVar3 * 8) == param_3[uVar4]) goto LAB_1800e33ab;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < uVar1);
      }
      if (uVar2 == uVar1) {
        FUN_1800e2604(param_1);
        (**(code **)(**(longlong **)(param_1 + 0x688) + 0xe0))
                  (*(longlong **)(param_1 + 0x688),(ulonglong)param_2,param_3);
        *(undefined1 *)(param_1 + 0x674) = 1;
        *(uint *)(param_1 + 0x44) = param_2;
        FUN_1800fbec0((undefined8 *)(param_1 + 0x48),param_3,(ulonglong)param_2 << 3);
        return;
      }
LAB_1800e33ab:
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < param_2);
  }
  return;
}

