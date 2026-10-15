/*
 * FUN_1801a3318 at 1801a3318
 * undefined FUN_1801a3318(void)
 * Address ranges: 1801a3318-1801a348f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801a3318(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             longlong param_5,longlong *param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_6[1];
  lVar6 = *param_6;
  lVar5 = param_6[2];
  lVar4 = *(longlong *)(param_1 + 0x1cf18);
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x48);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x48;
      puVar1[2] = param_1;
      *(undefined4 *)(puVar1 + 3) = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
      puVar1[4] = param_4;
      puVar1[5] = param_5;
      puVar1[7] = lVar7;
      puVar1[6] = lVar6;
      puVar1[8] = lVar5;
      *(undefined4 *)(puVar1 + 9) = param_7;
      *(undefined4 *)((longlong)puVar1 + 0x4c) = param_8;
      *(undefined4 *)(puVar1 + 10) = param_9;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x5bU & 0xfffffffffffffff8);
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_1801a3498;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return 1;
      }
      goto LAB_1801a3468;
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
  plVar2[3] = param_5;
  plVar2[5] = lVar7;
  plVar2[4] = lVar6;
  plVar2[6] = lVar5;
  *(undefined4 *)(plVar2 + 7) = param_7;
  *(undefined4 *)((longlong)plVar2 + 0x3c) = param_8;
  *(undefined4 *)(plVar2 + 8) = param_9;
  FUN_1801a3498();
LAB_1801a3468:
  FUN_180221bb0(lVar4 + 0x12c0);
  return 1;
}

