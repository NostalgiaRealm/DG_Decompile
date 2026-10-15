/*
 * FUN_1800d94bc at 1800d94bc
 * undefined1 __fastcall FUN_1800d94bc(longlong param_1, int param_2, uint param_3)
 * Address ranges: 1800d94bc-1800d9527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800d94bc(longlong param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 800) + uVar2 * 4) == param_2) {
        if ((int)uVar2 == -1) {
          return 0;
        }
        uVar1 = *(uint *)(param_1 + 0x434 + uVar2 * 4);
        if (uVar1 == 0xffffffff) {
          return 0;
        }
        if (uVar1 <= param_3) {
          return 0;
        }
        return *(undefined1 *)((ulonglong)param_3 * 0x10 + uVar2 + 0x334 + param_1);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x328));
  }
  return 0;
}

