/*
 * FUN_18015c900 at 18015c900
 * undefined FUN_18015c900(void)
 * Address ranges: 18015c900-18015ca2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015c900(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x20);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x20;
      puVar1[2] = param_1;
      *(undefined4 *)(puVar1 + 3) = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x33U & 0xfffffffffffffff8);
      puVar1[4] = param_4;
      *(undefined1 *)(puVar1 + 5) = param_5;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_18015ca38;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18015ca10;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  *(undefined4 *)(plVar2 + 1) = param_2;
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_3;
  plVar2[2] = param_4;
  *(undefined1 *)(plVar2 + 3) = param_5;
  FUN_18015ca38();
LAB_18015ca10:
  FUN_180221bb0(lVar4 + 0x12c0);
  return;
}

