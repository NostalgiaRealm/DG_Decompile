/*
 * FUN_18009b47c at 18009b47c
 * undefined8 __fastcall FUN_18009b47c(longlong param_1, longlong * param_2, longlong * param_3, longlong * param_4, longlong * param_5)
 * Address ranges: 18009b47c-18009b53d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18009b47c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x2c);
  lVar1 = *(longlong *)(param_1 + 0x130);
  if (*(uint *)(param_1 + 0x2c) < 0xe) {
    lVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1cf20) + 0x58))();
    *param_2 = lVar2 + (longlong)((int)*(char *)(lVar1 + 0x58 + uVar3 * 4) << 10) * 4;
    lVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1cf20) + 0x58))();
    *param_3 = lVar2 + (longlong)((int)*(char *)(lVar1 + 0x59 + uVar3 * 4) << 10) * 4;
    lVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1cf20) + 0x58))();
    *param_4 = lVar2 + (longlong)((int)*(char *)(lVar1 + 0x5a + uVar3 * 4) << 10) * 4;
    lVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1cf20) + 0x58))();
    *param_5 = lVar2 + (longlong)((int)*(char *)(lVar1 + 0x5b + uVar3 * 4) << 10) * 4;
  }
  return *(undefined8 *)(lVar1 + 0x1cf20);
}

