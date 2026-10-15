/*
 * FUN_180017810 at 180017810
 * bool __cdecl FUN_180017810(longlong param_1)
 * Address ranges: 180017810-180017933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180017810(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) && (uVar3 = FUN_180017a10(param_1), (uVar3 & 1) != 0)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))();
    if (iVar2 == 2) {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      lVar4 = FUN_1800609d8(0xcd58);
      puVar5 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff0);
      puVar5[-1] = lVar4;
      puVar5 = FUN_180019e60(puVar5,uVar1);
      *(undefined8 **)(param_1 + 0x18) = puVar5;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      puVar5 = (undefined8 *)0x0;
      if (iVar2 != 2) {
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        lVar4 = FUN_1800609d8(0xcfc8);
        puVar5 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff0);
        puVar5[-1] = lVar4;
        puVar5 = FUN_18001d548(puVar5,uVar1);
        *(undefined8 **)(param_1 + 0x18) = puVar5;
      }
      if (puVar5 == (undefined8 *)0x0) goto LAB_18001791c;
    }
    iVar6 = 0;
    iVar2 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      do {
        *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x4e8 + 0x2b8) = iVar6;
        lVar4 = (longlong)iVar2;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar4 * 0x4e8 + 700) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x82f);
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x82f) + iVar6;
      } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
    }
  }
LAB_18001791c:
  return *(longlong *)(param_1 + 0x18) != 0;
}

