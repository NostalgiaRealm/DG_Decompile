/*
 * FUN_1801ac4d0 at 1801ac4d0
 * undefined FUN_1801ac4d0(void)
 * Address ranges: 1801ac4d0-1801ac6af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801ac4d0(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
                  undefined8 param_6)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  code *extraout_x11;
  longlong lVar8;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar8 = param_1 + -0x100;
  local_68 = param_4;
  local_60 = param_1;
  if (*(char *)(param_1 + -0xb3) == '\x01') {
    FUN_180221ec0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar4 = (*extraout_x11)(lVar8,1);
  if (lVar4 == 0) {
    return '\0';
  }
  local_70[0] = 0;
  cVar3 = FUN_1801aa3a0(lVar8,lVar4,param_2,param_3,local_68,param_5,param_6,&local_50,local_70);
  lVar4 = local_60;
  uVar2 = local_70[0];
  if (cVar3 == '\0') {
    return '\0';
  }
  piVar1 = (int *)(local_60 + -0xc4);
  uStack_58 = uStack_48;
  local_60 = local_50;
  param_2 = param_2 + *piVar1 * param_3;
  lVar4 = *(longlong *)(lVar4 + -0xa8);
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x20);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar4 + 0x14c0);
      puVar5[1] = 0x20;
      puVar5[2] = lVar8;
      *(int *)(puVar5 + 3) = param_2;
      puVar7 = (undefined8 *)((longlong)puVar5 + 0x37U & 0xfffffffffffffff8);
      *(undefined8 *)((longlong)puVar5 + 0x24) = uStack_58;
      *(longlong *)((longlong)puVar5 + 0x1c) = local_60;
      *(undefined1 *)((longlong)puVar5 + 0x2c) = uVar2;
      DataMemoryBarrier(2,3);
      *puVar7 = 0;
      *puVar5 = FUN_1801ac6b8;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar7;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar4 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
        return cVar3;
      }
      goto LAB_1801ac684;
    }
    FUN_180221bb0(lVar4 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar4 + 0x12c0);
  }
  plVar6 = *(longlong **)(lVar4 + 0x14a0);
  *plVar6 = lVar8;
  *(int *)(plVar6 + 1) = param_2;
  *(undefined8 *)((longlong)plVar6 + 0x14) = uStack_58;
  *(longlong *)((longlong)plVar6 + 0xc) = local_60;
  *(undefined1 *)((longlong)plVar6 + 0x1c) = uVar2;
  FUN_1801ac6b8();
LAB_1801ac684:
  FUN_180221bb0(lVar4 + 0x12c0);
  return cVar3;
}

