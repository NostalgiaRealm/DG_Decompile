/*
 * FUN_180050b48 at 180050b48
 * undefined FUN_180050b48(void)
 * Address ranges: 180050b48-180050c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050b48(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  
  *(undefined1 *)(param_1 + 0xb9) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
      plVar4 = (longlong *)0x0;
      puVar6 = (undefined8 *)&DAT_00000010;
      puVar7 = (undefined4 *)&DAT_00000020;
      goto LAB_180050ba0;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x30) + uVar5 * 0x38;
      plVar4 = (longlong *)(lVar2 + 8);
      puVar6 = (undefined8 *)(lVar2 + 0x18);
      puVar7 = (undefined4 *)(lVar2 + 0x28);
LAB_180050ba0:
      if ((*(int *)(*plVar4 + 0x10) == 9) &&
         (uVar3 = FUN_1800f3cb8(*(undefined8 *)(param_1 + 0x18),
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18),
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78),puVar6
                               ), (uVar3 & 1) != 0)) {
        FUN_1800ea888(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),*puVar6,0,*puVar7);
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x38));
  }
  return;
}

