/*
 * FUN_1801b0080 at 1801b0080
 * undefined FUN_1801b0080(void)
 * Address ranges: 1801b0080-1801b026f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801b0080(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar9 = param_1 + -0x100;
  local_60 = param_4;
  lVar4 = FUN_1801af658(lVar9,1);
  if (lVar4 == 0) {
    return '\0';
  }
  local_70[0] = 0;
  cVar3 = FUN_1801aa3a0(lVar9,lVar4,param_2,param_3,local_60,param_5,param_6,&local_50,local_70);
  uVar2 = local_70[0];
  if (cVar3 == '\0') {
    return '\0';
  }
  lVar4 = *(longlong *)(param_1 + -0xa8);
  uVar1 = param_2 + *(int *)(param_1 + -0xc4) * param_3;
  uStack_58 = uStack_48;
  local_60 = local_50;
  FUN_180221850(lVar4 + 0x12c0);
  if (*(char *)(lVar4 + 0x14c4) == '\0') {
LAB_1801b01e8:
    plVar6 = *(longlong **)(lVar4 + 0x14a0);
    *plVar6 = lVar9;
    *(uint *)(plVar6 + 1) = uVar1;
    *(undefined8 *)((longlong)plVar6 + 0x14) = uStack_58;
    *(undefined8 *)((longlong)plVar6 + 0xc) = local_60;
    *(undefined1 *)((longlong)plVar6 + 0x1c) = uVar2;
    FUN_1801b0278();
  }
  else {
    puVar5 = (undefined8 *)FUN_1802218b0(lVar4 + 0x12c0,0x20);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_180221bb0(lVar4 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar4 + 0x12c0);
      goto LAB_1801b01e8;
    }
    FUN_1801042e0(lVar4 + 0x14c0);
    puVar5[1] = 0x20;
    puVar5[2] = lVar9;
    *(uint *)(puVar5 + 3) = uVar1;
    puVar7 = (undefined8 *)((longlong)puVar5 + 0x37U & 0xfffffffffffffff8);
    *(undefined8 *)((longlong)puVar5 + 0x24) = uStack_58;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = local_60;
    *(undefined1 *)((longlong)puVar5 + 0x2c) = uVar2;
    DataMemoryBarrier(2,3);
    *puVar7 = 0;
    *puVar5 = FUN_1801b0278;
    *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar7;
    if (*(char *)(lVar4 + 0x14c5) != '\0') {
      FUN_180221bb0(lVar4 + 0x12c0);
      thunk_FUN_180223874(*(undefined8 *)(lVar4 + 0x1340));
      goto LAB_1801b0210;
    }
  }
  FUN_180221bb0(lVar4 + 0x12c0);
LAB_1801b0210:
  if (((*(char *)(param_1 + 0x14d) != '\0') && (*(char *)(param_1 + 0x14e) != '\0')) &&
     (*(longlong *)(param_1 + 200) != 0)) {
    param_1 = param_1 + ((ulonglong)(uVar1 >> 6) + 2) * 8;
    uVar8 = (ulonglong)(uVar1 >> 3) & 7;
    *(byte *)(param_1 + uVar8) = *(byte *)(param_1 + uVar8) | (byte)(1 << ((ulonglong)uVar1 & 7));
  }
  return cVar3;
}

