/*
 * FUN_18015dcb0 at 18015dcb0
 * undefined FUN_18015dcb0(void)
 * Address ranges: 18015dcb0-18015dd9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015dcb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  FUN_180221850(lVar3 + 0x12c0);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar3 + 0x12c0,8);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar3 + 0x14c0);
      puVar1[1] = 8;
      puVar1[2] = param_1;
      puVar2 = (undefined8 *)((longlong)puVar1 + 0x1fU & 0xfffffffffffffff8);
      DataMemoryBarrier(2,3);
      *puVar2 = 0;
      *puVar1 = FUN_18015dda8;
      *(undefined8 **)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28 + 0x1350) = puVar2;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar3 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_18015dd88;
    }
    FUN_180221bb0(lVar3 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar3 + 0x12c0);
  }
  **(longlong **)(lVar3 + 0x14a0) = param_1;
  FUN_18015dda8();
LAB_18015dd88:
  FUN_180221bb0(lVar3 + 0x12c0);
  return;
}

