/*
 * FUN_1801ac9e8 at 1801ac9e8
 * undefined FUN_1801ac9e8(void)
 * Address ranges: 1801ac9e8-1801acaeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ac9e8(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + -0xa8);
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x10);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x10;
      puVar1[2] = param_1 + -0x100;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x23U & 0xfffffffffffffff8);
      *(undefined1 *)(puVar1 + 3) = param_2;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_1801acaf0;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_1801acad0;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1 + -0x100;
  *(undefined1 *)(plVar2 + 1) = param_2;
  FUN_1801acaf0();
LAB_1801acad0:
  FUN_180221bb0(lVar4 + 0x12c0);
  return;
}

