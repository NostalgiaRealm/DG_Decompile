/*
 * FUN_1801abb78 at 1801abb78
 * undefined FUN_1801abb78(void)
 * Address ranges: 1801abb78-1801abc93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801abb78(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + -0xd4) - 0x24U & 0xfffffffa) == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + -0xa8);
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x10);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x10;
      puVar1[2] = param_1 + -0x100;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x27U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar1 + 3) = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_1801abc98;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_1801abc78;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1 + -0x100;
  *(undefined4 *)(plVar2 + 1) = param_2;
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_3;
  FUN_1801abc98();
LAB_1801abc78:
  FUN_180221bb0(lVar4 + 0x12c0);
  return;
}

