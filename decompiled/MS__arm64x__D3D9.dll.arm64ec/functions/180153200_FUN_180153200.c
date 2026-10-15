/*
 * FUN_180153200 at 180153200
 * undefined FUN_180153200(void)
 * Address ranges: 180153200-1801533ff;180153458-1801534df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180153200(undefined4 param_1,longlong param_2,uint param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (param_3 != 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0x3f0;
    if (param_3 < 0x3f1) {
      uVar1 = param_3;
    }
    uVar8 = 0;
    do {
      lVar7 = *(longlong *)(param_2 + 0xf6e0);
      FUN_180221850(lVar7 + 0x12c0);
      if (*(char *)(lVar7 + 0x14c4) != '\0') {
        uVar6 = (ulonglong)(uVar1 * 0x10 + 0x30);
        lVar4 = FUN_1802218b0(lVar7 + 0x12c0,uVar6);
        if (lVar4 != 0) {
          FUN_1801042e0(lVar7 + 0x14c0);
          *(ulonglong *)(lVar4 + 8) = uVar6;
          *(longlong *)(lVar4 + 0x18) = param_2;
          *(uint *)(lVar4 + 0x20) = uVar1;
          *(undefined4 *)(lVar4 + 0x24) = param_5;
          *(undefined4 *)(lVar4 + 0x28) = param_6;
          *(undefined4 *)(lVar4 + 0x2c) = param_1;
          *(undefined4 *)(lVar4 + 0x30) = param_7;
          *(longlong *)(lVar4 + 0x34) = param_8;
          uVar6 = lVar4 + 0x43U & 0xfffffffffffffff8;
          *(ulonglong *)(lVar4 + 0x10) = uVar6;
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(uVar6,param_4,uVar1 * 0x10);
        }
        FUN_180221bb0(lVar7 + 0x12c0);
        thunk_FUN_1802237c0(100);
        FUN_180221850(lVar7 + 0x12c0);
      }
      plVar3 = *(longlong **)(lVar7 + 0x14a0);
      *plVar3 = param_4;
      plVar3[1] = param_2;
      *(uint *)(plVar3 + 2) = uVar1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = param_5;
      *(undefined4 *)(plVar3 + 3) = param_6;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = param_1;
      *(undefined4 *)(plVar3 + 4) = param_7;
      *(longlong *)((longlong)plVar3 + 0x24) = param_8;
      FUN_180153510();
      FUN_180221bb0(lVar7 + 0x12c0);
      uVar8 = uVar1 + uVar8;
      param_4 = param_4 + (ulonglong)uVar1 * 0x10;
    } while (uVar8 < param_3);
    return;
  }
  lVar7 = *(longlong *)(param_2 + 0xf6e0);
  FUN_180221850(lVar7 + 0x12c0);
  if (*(char *)(lVar7 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_1802218b0(lVar7 + 0x12c0,0x20);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar7 + 0x14c0);
      puVar2[1] = 0x20;
      puVar2[2] = param_2;
      *(undefined4 *)(puVar2 + 3) = param_5;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = param_6;
      puVar5 = (undefined8 *)((longlong)puVar2 + 0x37U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar2 + 4) = param_1;
      *(undefined4 *)((longlong)puVar2 + 0x24) = param_7;
      puVar2[5] = param_8;
      DataMemoryBarrier(2,3);
      *puVar5 = 0;
      *puVar2 = FUN_1801534e8;
      *(undefined8 **)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28 + 0x1350) = puVar5;
      if (*(char *)(lVar7 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar7 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar7 + 0x1340));
        return;
      }
      goto LAB_18015332c;
    }
    FUN_180221bb0(lVar7 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar7 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar7 + 0x14a0);
  *plVar3 = param_2;
  *(undefined4 *)(plVar3 + 1) = param_5;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_6;
  *(undefined4 *)(plVar3 + 2) = param_1;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_7;
  plVar3[3] = param_8;
  FUN_1801534e8();
LAB_18015332c:
  FUN_180221bb0(lVar7 + 0x12c0);
  return;
}

