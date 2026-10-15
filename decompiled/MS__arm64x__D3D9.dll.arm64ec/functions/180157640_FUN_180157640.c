/*
 * FUN_180157640 at 180157640
 * undefined FUN_180157640(void)
 * Address ranges: 180157640-18015779f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180157640(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (0xf < param_2) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x28);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x28;
      puVar1[2] = param_1;
      *(uint *)(puVar1 + 3) = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x3fU & 0xfffffffffffffff8);
      puVar1[4] = param_4;
      *(undefined4 *)(puVar1 + 5) = param_5;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = param_6;
      *(undefined1 *)(puVar1 + 6) = param_7;
      *(undefined1 *)((longlong)puVar1 + 0x34) = param_8;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_1801577a8;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18015777c;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  *(uint *)(plVar2 + 1) = param_2;
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_3;
  plVar2[2] = param_4;
  *(undefined4 *)(plVar2 + 3) = param_5;
  *(undefined4 *)((longlong)plVar2 + 0x1c) = param_6;
  *(undefined1 *)(plVar2 + 4) = param_7;
  *(undefined1 *)((longlong)plVar2 + 0x24) = param_8;
  FUN_1801577a8();
LAB_18015777c:
  FUN_180221bb0(lVar4 + 0x12c0);
  return;
}

