/*
 * FUN_18015d398 at 18015d398
 * undefined FUN_18015d398(void)
 * Address ranges: 18015d398-18015d6ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18015d398(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  code *extraout_x11;
  longlong lVar10;
  undefined8 local_50 [2];
  
  if ((param_4 >> 1 & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    if (((uVar1 < 0xd) && ((0x1500U >> (ulonglong)(uVar1 & 0x1f) & 1) != 0)) ||
       ((uVar1 - 9 & 0xfffffffd) != 0)) {
      bVar3 = true;
      while (iVar4 = FUN_180104210(param_2 + 0x54,1,0), iVar4 != 0) {
        DataMemoryBarrier(2,2);
        Yield();
      }
      *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
      *(undefined4 *)(param_2 + 0x50) = 2;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
LAB_18015d4fc:
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
    else {
      bVar3 = *(int *)(param_2 + 0x50) == 1;
      if (*(int *)(param_2 + 0x50) == 1) {
        while (iVar4 = FUN_180104210(param_2 + 0x54,1,0), iVar4 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
        }
        *(undefined4 *)(param_2 + 0x50) = 2;
        goto LAB_18015d4fc;
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
    bVar3 = *(int *)(param_2 + 0x50) != 1;
    if ((*(int *)(param_2 + 0x10) - 9U & 0xfffffffd) == 0) {
      if (*(int *)(param_2 + 0x50) != 1) {
        while (iVar4 = FUN_180104210(param_2 + 0x54,1,0), iVar4 != 0) {
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
      bVar3 = false;
    }
  }
  if (!bVar3) {
    return 0x80004005;
  }
  if (param_3 == 0xc) {
    uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar5,local_50);
    FUN_18015ddc8(param_2,local_50[0],*(undefined8 *)(param_2 + 0x30),1);
    return 0;
  }
  if (bVar2) {
    FUN_180104210(param_2 + 0x50,3,2);
  }
  lVar10 = *(longlong *)(param_1 + 0xf6e0);
  lVar8 = *(longlong *)(param_2 + 0x30);
  FUN_180221850(lVar10 + 0x12c0);
  if (*(char *)(lVar10 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_1802218b0(lVar10 + 0x12c0,0x28);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar10 + 0x14c0);
      puVar6[1] = 0x28;
      puVar6[2] = param_1;
      puVar6[3] = param_2;
      *(int *)(puVar6 + 4) = param_3;
      *(uint *)((longlong)puVar6 + 0x24) = param_4;
      puVar6[5] = lVar8;
      puVar9 = (undefined8 *)((longlong)puVar6 + 0x3bU & 0xfffffffffffffff8);
      *(bool *)(puVar6 + 6) = bVar2;
      DataMemoryBarrier(2,3);
      *puVar9 = 0;
      *puVar6 = FUN_18015d6b8;
      *(undefined8 **)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0x14bc) * 0x28 + 0x1350) = puVar9;
      if (*(char *)(lVar10 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar10 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar10 + 0x1340));
        return 0;
      }
      goto LAB_18015d680;
    }
    FUN_180221bb0(lVar10 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar10 + 0x12c0);
  }
  plVar7 = *(longlong **)(lVar10 + 0x14a0);
  *plVar7 = param_1;
  plVar7[1] = param_2;
  *(int *)(plVar7 + 2) = param_3;
  *(uint *)((longlong)plVar7 + 0x14) = param_4;
  plVar7[3] = lVar8;
  *(bool *)(plVar7 + 4) = bVar2;
  FUN_18015d6b8();
LAB_18015d680:
  FUN_180221bb0(lVar10 + 0x12c0);
  return 0;
}

