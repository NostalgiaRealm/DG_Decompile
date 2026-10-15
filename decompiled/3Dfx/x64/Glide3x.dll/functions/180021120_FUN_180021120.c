/*
 * FUN_180021120 at 180021120
 * ulonglong __fastcall FUN_180021120(longlong * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 180021120-180021316
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180021120(longlong *param_1,int param_2,int param_3,int param_4,int param_5,
                       int param_6,uint param_7,undefined8 *param_8)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [32];
  
  uVar3 = FUN_180060260(param_1[0x668] + 0x12c0);
  if ((char)uVar3 != '\0') {
    uVar4 = FUN_180015f40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar4;
  }
  lVar2 = param_1[0x668];
  local_res8[0] = 0;
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_180021298:
    puVar5 = *(undefined8 **)(lVar2 + 0x14a0);
    *puVar5 = param_1;
    *(int *)(puVar5 + 1) = param_2;
    *(int *)((longlong)puVar5 + 0xc) = param_3;
    *(int *)(puVar5 + 2) = param_4;
    *(int *)((longlong)puVar5 + 0x14) = param_5;
    *(int *)(puVar5 + 3) = param_6;
    *(uint *)((longlong)puVar5 + 0x1c) = param_7;
    puVar5[4] = param_8;
    puVar5[5] = local_res8;
    FUN_180021318(puVar5);
  }
  else {
    puVar5 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x30);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_18005fd70(piVar1);
      Sleep(100);
      FUN_18005fc20(piVar1);
      goto LAB_180021298;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar5[1] = 0x30;
    puVar7 = (undefined8 *)((longlong)puVar5 + 0x47U & 0xfffffffffffffff8);
    puVar5[2] = param_1;
    *(int *)(puVar5 + 3) = param_2;
    *(int *)((longlong)puVar5 + 0x1c) = param_3;
    *(int *)(puVar5 + 4) = param_4;
    *(int *)((longlong)puVar5 + 0x24) = param_5;
    *(int *)(puVar5 + 5) = param_6;
    *(uint *)((longlong)puVar5 + 0x2c) = param_7;
    puVar5[6] = param_8;
    puVar5[7] = local_res8;
    *puVar7 = 0;
    *puVar5 = FUN_180021318;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar7;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005fd70(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_1800212f0;
    }
  }
  FUN_18005fd70(piVar1);
LAB_1800212f0:
  uVar6 = FUN_1800602b0(param_1[0x668] + 0x12c0);
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),local_res8[0]);
}

