/*
 * FUN_1801a3f20 at 1801a3f20
 * undefined FUN_1801a3f20(void)
 * Address ranges: 1801a3f20-1801a4083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801a3f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5,undefined4 param_6,undefined4 param_7,longlong param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_5 + 0x1cf18);
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x30);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x30;
      puVar1[2] = param_5;
      *(undefined4 *)(puVar1 + 3) = param_6;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = param_7;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x43U & 0xfffffffffffffff8);
      puVar1[4] = param_8;
      *(undefined4 *)(puVar1 + 5) = param_9;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = param_1;
      *(undefined4 *)(puVar1 + 6) = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x34) = param_3;
      *(undefined4 *)(puVar1 + 7) = param_4;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_1801a4088;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return 1;
      }
      goto LAB_1801a4058;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_5;
  *(undefined4 *)(plVar2 + 1) = param_6;
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_7;
  plVar2[2] = param_8;
  *(undefined4 *)(plVar2 + 3) = param_9;
  *(undefined4 *)((longlong)plVar2 + 0x1c) = param_1;
  *(undefined4 *)(plVar2 + 4) = param_2;
  *(undefined4 *)((longlong)plVar2 + 0x24) = param_3;
  *(undefined4 *)(plVar2 + 5) = param_4;
  FUN_1801a4088();
LAB_1801a4058:
  FUN_180221bb0(lVar4 + 0x12c0);
  return 1;
}

