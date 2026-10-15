/*
 * FUN_1801a72b8 at 1801a72b8
 * undefined FUN_1801a72b8(void)
 * Address ranges: 1801a72b8-1801a7407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a72b8(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_3 == -1) {
    return;
  }
  cVar1 = FUN_180221e70(*(longlong *)(param_1 + 0xc) + 0x12c0);
  lVar5 = *(longlong *)(param_1 + 0xc);
  if (cVar1 != '\0') {
    FUN_18020cc70(param_2,param_3,param_4,*(undefined8 *)(*(longlong *)(lVar5 + 0x1500) + 0x18),
                  *(undefined8 *)(*(longlong *)(lVar5 + 0x1508) + 0xb78));
    return;
  }
  FUN_180221850(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_1802218b0(lVar5 + 0x12c0,0x18);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar5 + 0x14c0);
      puVar2[1] = 0x18;
      puVar2[2] = lVar5;
      puVar2[3] = param_2;
      puVar4 = (undefined8 *)((longlong)puVar2 + 0x2fU & 0xfffffffffffffff8);
      *(int *)(puVar2 + 4) = param_3;
      *(undefined4 *)((longlong)puVar2 + 0x24) = param_4;
      DataMemoryBarrier(2,3);
      *puVar4 = 0;
      *puVar2 = FUN_1801a7410;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar5 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_1801a73c8;
    }
    FUN_180221bb0(lVar5 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = lVar5;
  plVar3[1] = param_2;
  *(int *)(plVar3 + 2) = param_3;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_4;
  FUN_1801a7410();
LAB_1801a73c8:
  FUN_180221bb0(lVar5 + 0x12c0);
  return;
}

