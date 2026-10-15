/*
 * FUN_1800e2bd8 at 1800e2bd8
 * undefined FUN_1800e2bd8(void)
 * Address ranges: 1800e2bd8-1800e2c9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2bd8(longlong param_1,ulonglong param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar2 = 0;
  iVar4 = 0;
  if (param_3 != 0) {
    do {
      lVar3 = *(longlong *)(param_4 + uVar2 * 8);
      if (*(longlong *)(param_1 + 0xbc0 + uVar2 * 8) != lVar3) {
        *(longlong *)(param_1 + 0xbc0 + uVar2 * 8) = lVar3;
        iVar4 = iVar4 + 1;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (3 < param_3) goto LAB_1800e2c58;
  }
  func_0x000180222c50(param_1 + (ulonglong)param_3 * 8 + 0xbc0,0,(ulonglong)(4 - param_3) << 3);
LAB_1800e2c58:
  if ((iVar4 != 0) || (param_5 != *(longlong *)(param_1 + 0xbe0))) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x108))
              (*(longlong **)(param_1 + 0x6b8),param_3,param_4,param_5);
    *(longlong *)(param_1 + 0xbe0) = param_5;
  }
  return;
}

