/*
 * FUN_18015ccb8 at 18015ccb8
 * undefined FUN_18015ccb8(void)
 * Address ranges: 18015ccb8-18015cdc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015ccb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar4 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x18);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x18;
      puVar1[2] = param_1;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x2fU & 0xfffffffffffffff8);
      puVar1[4] = lVar6;
      puVar1[3] = lVar5;
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_18015cdc8;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18015cdac;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  plVar2[2] = lVar6;
  plVar2[1] = lVar5;
  FUN_18015cdc8();
LAB_18015cdac:
  FUN_180221bb0(lVar4 + 0x12c0);
  return;
}

