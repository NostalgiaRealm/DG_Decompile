/*
 * FUN_180091690 at 180091690
 * undefined FUN_180091690(void)
 * Address ranges: 180091690-18009176f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180091690(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  lVar4 = *(longlong *)(param_1 + 0x130);
  if (uVar2 < 0xe) {
    lVar3 = (**(code **)(**(longlong **)(lVar4 + 0x1cf20) + 0x58))();
    lVar1 = lVar4 + (ulonglong)uVar2 * 4;
    *param_2 = lVar3 + (longlong)((int)*(char *)(lVar1 + 0x58) << 10) * 4;
    lVar3 = (**(code **)(**(longlong **)(lVar4 + 0x1cf20) + 0x58))();
    *param_3 = lVar3 + (longlong)((int)*(char *)(lVar1 + 0x59) << 10) * 4;
    lVar3 = (**(code **)(**(longlong **)(lVar4 + 0x1cf20) + 0x58))();
    *param_4 = lVar3 + (longlong)((int)*(char *)(lVar1 + 0x5a) << 10) * 4;
    lVar3 = (**(code **)(**(longlong **)(lVar4 + 0x1cf20) + 0x58))();
    *param_5 = lVar3 + (longlong)((int)*(char *)(lVar1 + 0x5b) << 10) * 4;
  }
  return *(undefined8 *)(lVar4 + 0x1cf20);
}

