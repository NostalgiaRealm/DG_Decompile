/*
 * FUN_18004d7d0 at 18004d7d0
 * undefined FUN_18004d7d0(void)
 * Address ranges: 18004d7d0-18004da8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18004d7d0(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_60 [2];
  
  if ((param_4 >> 1 & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    if (((uVar1 < 0xd) && ((0x1500U >> (ulonglong)(uVar1 & 0x1f) & 1) != 0)) ||
       ((uVar1 - 9 & 0xfffffffd) != 0)) {
      bVar4 = true;
      while (iVar5 = FUN_180001510(param_2 + 0x54,1,0), iVar5 != 0) {
        DataMemoryBarrier(2,2);
        Yield();
      }
      *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
      *(undefined4 *)(param_2 + 0x50) = 2;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
    else {
      bVar4 = *(int *)(param_2 + 0x50) == 1;
      if (*(int *)(param_2 + 0x50) == 1) {
        while (iVar5 = FUN_180001510(param_2 + 0x54,1,0), iVar5 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
        }
        *(undefined4 *)(param_2 + 0x50) = 2;
        *(undefined4 *)(param_2 + 0x54) = 0;
      }
    }
    if ((param_3 == 8) && (*(char *)(param_2 + 0x58) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
    bVar4 = *(int *)(param_2 + 0x50) != 1;
    if ((*(int *)(param_2 + 0x10) - 9U & 0xfffffffd) == 0) {
      if (*(int *)(param_2 + 0x50) != 1) {
        while (iVar5 = FUN_180001510(param_2 + 0x54,1,0), iVar5 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
        }
        *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
        *(undefined4 *)(param_2 + 0x50) = 1;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x54) = 0;
      }
    }
    else {
      bVar4 = false;
    }
  }
  if (!bVar4) {
    return 0x80004005;
  }
  if (param_3 == 0xc) {
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x10);
    (**(code **)(*plVar6 + 0x80))(plVar6,local_60);
    FUN_18004e178(param_2,local_60[0],*(undefined8 *)(param_2 + 0x30),1);
    return 0;
  }
  if (bVar2) {
    FUN_180001510(param_2 + 0x50,3,2);
  }
  lVar9 = *(longlong *)(param_1 + 0xf6e0);
  lVar10 = *(longlong *)(param_2 + 0x30);
  FUN_180101630(lVar9 + 0x12c0);
  if (*(char *)(lVar9 + 0x14c4) != '\0') {
    puVar7 = (undefined8 *)FUN_180101500(lVar9 + 0x12c0,0x28);
    pcVar3 = __imp_KERNEL32_dll_Sleep;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar9 + 0x14c0);
      puVar7[1] = 0x28;
      puVar7[2] = param_1;
      puVar8 = (undefined8 *)((longlong)puVar7 + 0x3bU & 0xfffffffffffffff8);
      puVar7[3] = param_2;
      *(int *)(puVar7 + 4) = param_3;
      *(uint *)((longlong)puVar7 + 0x24) = param_4;
      puVar7[5] = lVar10;
      *(bool *)(puVar7 + 6) = bVar2;
      *puVar8 = 0;
      *puVar7 = FUN_18004da98;
      *(undefined8 **)(lVar9 + (ulonglong)*(uint *)(lVar9 + 0x14bc) * 0x28 + 0x1350) = puVar8;
      pcVar3 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar9 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar9 + 0x12c0) = 0;
        (*pcVar3)(*(undefined8 *)(lVar9 + 0x1340));
        return 0;
      }
      goto LAB_18004da68;
    }
    *(undefined4 *)(lVar9 + 0x12c0) = 0;
    (*pcVar3)(100);
    FUN_180101630(lVar9 + 0x12c0);
  }
  plVar6 = *(longlong **)(lVar9 + 0x14a0);
  *plVar6 = param_1;
  plVar6[1] = param_2;
  *(int *)(plVar6 + 2) = param_3;
  *(uint *)((longlong)plVar6 + 0x14) = param_4;
  plVar6[3] = lVar10;
  *(bool *)(plVar6 + 4) = bVar2;
  FUN_18004da98();
LAB_18004da68:
  *(undefined4 *)(lVar9 + 0x12c0) = 0;
  return 0;
}

