/*
 * FUN_18004d8a0 at 18004d8a0
 * undefined __fastcall FUN_18004d8a0(longlong param_1, ulonglong param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 18004d8a0-18004d941
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d8a0(longlong param_1,ulonglong param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  lVar4 = (param_2 & 0xffffffff) * 0x18c0 + param_1;
  if (param_3 != 0) {
    do {
      lVar1 = *(longlong *)(param_4 + uVar3 * 8);
      if (*(longlong *)(lVar4 + 0xbc0 + uVar3 * 8) != lVar1) {
        *(longlong *)(lVar4 + 0xbc0 + uVar3 * 8) = lVar1;
        iVar5 = iVar5 + 1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_3);
    if (3 < param_3) goto LAB_18004d906;
  }
  FUN_18005f814((undefined1 *)(lVar4 + ((ulonglong)param_3 + 0x178) * 8),0,
                (ulonglong)(4 - param_3) << 3);
LAB_18004d906:
  if ((iVar5 != 0) || (param_5 != *(longlong *)(lVar4 + 0xbe0))) {
    (**(code **)(**(longlong **)(lVar4 + 0x6b8) + 0x108))
              (*(longlong **)(lVar4 + 0x6b8),(ulonglong)param_3,param_4,param_5);
    *(longlong *)(lVar4 + 0xbe0) = param_5;
  }
  return;
}

