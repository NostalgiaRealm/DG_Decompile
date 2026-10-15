/*
 * FUN_180050930 at 180050930
 * undefined __cdecl FUN_180050930(longlong param_1, ulonglong param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 180050930-1800509f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050930(longlong param_1,ulonglong param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar2 = 0;
  iVar5 = 0;
  if (param_3 != 0) {
    do {
      lVar3 = *(longlong *)(param_4 + uVar2 * 8);
      if (*(longlong *)(lVar4 + 0xbc0 + uVar2 * 8) != lVar3) {
        *(longlong *)(lVar4 + 0xbc0 + uVar2 * 8) = lVar3;
        iVar5 = iVar5 + 1;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (3 < param_3) goto LAB_1800509b0;
  }
  FUN_180060360((undefined1 *)(lVar4 + (ulonglong)param_3 * 8 + 0xbc0),0,
                (ulonglong)(4 - param_3) << 3);
LAB_1800509b0:
  if ((iVar5 != 0) || (param_5 != *(longlong *)(lVar4 + 0xbe0))) {
    (**(code **)(**(longlong **)(lVar4 + 0x6b8) + 0x108))
              (*(longlong **)(lVar4 + 0x6b8),param_3,param_4,param_5);
    *(longlong *)(lVar4 + 0xbe0) = param_5;
  }
  return;
}

