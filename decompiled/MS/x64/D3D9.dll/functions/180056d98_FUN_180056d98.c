/*
 * FUN_180056d98 at 180056d98
 * undefined __fastcall FUN_180056d98(longlong param_1)
 * Address ranges: 180056d98-180056e4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056d98(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *(undefined1 *)(param_1 + 0xb9) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
      plVar4 = (longlong *)0x0;
      puVar5 = (undefined8 *)&DAT_00000010;
      puVar7 = (undefined4 *)&DAT_00000020;
      goto LAB_180056de7;
    }
    do {
      lVar3 = (ulonglong)uVar6 * 0x38;
      lVar1 = *(longlong *)(param_1 + 0x30);
      plVar4 = (longlong *)(lVar1 + 8 + lVar3);
      puVar5 = (undefined8 *)(lVar1 + 0x18 + lVar3);
      puVar7 = (undefined4 *)(lVar1 + 0x28 + lVar3);
LAB_180056de7:
      if (*(int *)(*plVar4 + 0x10) == 9) {
        cVar2 = FUN_1800ec420(*(longlong **)(param_1 + 0x18),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78),puVar5);
        if (cVar2 != '\0') {
          FUN_1800e41fc(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508),*puVar5,0,*puVar7);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x38));
  }
  return;
}

