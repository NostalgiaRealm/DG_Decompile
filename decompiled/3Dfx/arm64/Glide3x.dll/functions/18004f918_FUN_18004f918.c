/*
 * FUN_18004f918 at 18004f918
 * undefined __cdecl FUN_18004f918(longlong param_1, uint param_2, longlong * param_3, int param_4, longlong * param_5)
 * Address ranges: 18004f918-18004fa43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f918(longlong param_1,uint param_2,longlong *param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x4d8;
  bVar3 = true;
  uVar4 = 0;
  if (param_4 == 0) {
    do {
      lVar5 = *(longlong *)(lVar1 + (ulonglong)uVar4 * 8);
      if (uVar4 < param_2) {
        if (lVar5 != param_3[uVar4]) {
          *(longlong *)(lVar1 + (ulonglong)uVar4 * 8) = param_3[uVar4];
LAB_18004f9c4:
          bVar3 = false;
        }
      }
      else if (lVar5 != 0) {
        *(undefined8 *)(lVar1 + (ulonglong)uVar4 * 8) = 0;
        goto LAB_18004f9c4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  else {
    do {
      if (uVar4 < param_2) {
        lVar5 = *param_3 + (ulonglong)(*(int *)(param_1 + 0xb98) * uVar4);
        if (*(longlong *)(lVar1 + (ulonglong)uVar4 * 8) != lVar5) {
          *(longlong *)(lVar1 + (ulonglong)uVar4 * 8) = lVar5;
LAB_18004f988:
          bVar3 = false;
        }
      }
      else if (*(longlong *)(lVar1 + (ulonglong)uVar4 * 8) != 0) {
        *(undefined8 *)(lVar1 + (ulonglong)uVar4 * 8) = 0;
        goto LAB_18004f988;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  plVar2 = param_5;
  if (param_5 == (longlong *)0x0) {
    plVar2 = &DAT_18006fa80;
  }
  if ((!bVar3) || (*plVar2 != *(longlong *)(param_1 + 0x518))) {
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x170))
              (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
    *(longlong *)(param_1 + 0x518) = *plVar2;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

