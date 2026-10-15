/*
 * FUN_18004fa04 at 18004fa04
 * undefined __fastcall FUN_18004fa04(longlong param_1, ulonglong param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 18004fa04-18004faa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fa04(longlong param_1,ulonglong param_2,uint param_3,longlong param_4,longlong param_5
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
    if (3 < param_3) goto LAB_18004fa6a;
  }
  FUN_180060f94((undefined1 *)(lVar4 + ((ulonglong)param_3 + 0x178) * 8),0,
                (ulonglong)(4 - param_3) << 3);
LAB_18004fa6a:
  if ((iVar5 != 0) || (param_5 != *(longlong *)(lVar4 + 0xbe0))) {
    (**(code **)(**(longlong **)(lVar4 + 0x6b8) + 0x108))
              (*(longlong **)(lVar4 + 0x6b8),(ulonglong)param_3,param_4,param_5);
    *(longlong *)(lVar4 + 0xbe0) = param_5;
  }
  return;
}

