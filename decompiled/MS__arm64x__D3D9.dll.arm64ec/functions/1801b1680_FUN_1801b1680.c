/*
 * FUN_1801b1680 at 1801b1680
 * undefined FUN_1801b1680(void)
 * Address ranges: 1801b1680-1801b1783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b1680(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1cf10) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 0x28) * 0x1ac0;
  FUN_180221850(lVar3 + 0x1bc0);
  if (*(char *)(lVar3 + 0x1dc4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar3 + 0x1bc0,8);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar3 + 0x1dc0);
      puVar1[1] = 8;
      puVar1[2] = param_1 + -0x20;
      puVar2 = (undefined8 *)((longlong)puVar1 + 0x1fU & 0xfffffffffffffff8);
      DataMemoryBarrier(2,3);
      *puVar2 = 0;
      *puVar1 = FUN_1801b1788;
      *(undefined8 **)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x1dbc) * 0x28 + 0x1c50) = puVar2;
      if (*(char *)(lVar3 + 0x1dc5) != '\0') {
        FUN_180221bb0(lVar3 + 0x1bc0);
        thunk_FUN_180223874(*(undefined8 *)(lVar3 + 0x1c40));
        return;
      }
      goto LAB_1801b176c;
    }
    FUN_180221bb0(lVar3 + 0x1bc0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar3 + 0x1bc0);
  }
  **(longlong **)(lVar3 + 0x1da0) = param_1 + -0x20;
  FUN_1801b1788();
LAB_1801b176c:
  FUN_180221bb0(lVar3 + 0x1bc0);
  return;
}

