/*
 * FUN_180156cf0 at 180156cf0
 * undefined FUN_180156cf0(void)
 * Address ranges: 180156cf0-180156e2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180156cf0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar7 = param_3[1];
  uVar5 = *param_3;
  uVar11 = param_3[3];
  uVar9 = param_3[2];
  lVar4 = *(longlong *)(param_1 + 0xf6e0);
  uVar8 = param_3[5];
  uVar6 = param_3[4];
  uVar12 = param_3[7];
  uVar10 = param_3[6];
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x50);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar1[1] = 0x50;
      puVar1[2] = param_1;
      *(undefined4 *)(puVar1 + 3) = param_2;
      *(undefined8 *)((longlong)puVar1 + 0x24) = uVar7;
      *(undefined8 *)((longlong)puVar1 + 0x1c) = uVar5;
      *(undefined8 *)((longlong)puVar1 + 0x34) = uVar11;
      *(undefined8 *)((longlong)puVar1 + 0x2c) = uVar9;
      *(undefined8 *)((longlong)puVar1 + 0x44) = uVar8;
      *(undefined8 *)((longlong)puVar1 + 0x3c) = uVar6;
      *(undefined8 *)((longlong)puVar1 + 0x54) = uVar12;
      *(undefined8 *)((longlong)puVar1 + 0x4c) = uVar10;
      puVar3 = (undefined8 *)((longlong)puVar1 + 99U & 0xfffffffffffffff8);
      DataMemoryBarrier(2,3);
      *puVar3 = 0;
      *puVar1 = FUN_180156e38;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_180156e14;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = param_1;
  *(undefined4 *)(plVar2 + 1) = param_2;
  *(undefined8 *)((longlong)plVar2 + 0x14) = uVar7;
  *(undefined8 *)((longlong)plVar2 + 0xc) = uVar5;
  *(undefined8 *)((longlong)plVar2 + 0x24) = uVar11;
  *(undefined8 *)((longlong)plVar2 + 0x1c) = uVar9;
  *(undefined8 *)((longlong)plVar2 + 0x34) = uVar8;
  *(undefined8 *)((longlong)plVar2 + 0x2c) = uVar6;
  *(undefined8 *)((longlong)plVar2 + 0x44) = uVar12;
  *(undefined8 *)((longlong)plVar2 + 0x3c) = uVar10;
  FUN_180156e38();
LAB_180156e14:
  FUN_180221bb0(lVar4 + 0x12c0);
  return;
}

