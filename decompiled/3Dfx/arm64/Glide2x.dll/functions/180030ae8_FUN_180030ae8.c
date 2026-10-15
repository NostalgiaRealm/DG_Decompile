/*
 * FUN_180030ae8 at 180030ae8
 * ulonglong __cdecl FUN_180030ae8(longlong * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 180030ae8-180030c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180030ae8(longlong *param_1,int param_2,int param_3,int param_4,int param_5,
                       int param_6,uint param_7,undefined8 *param_8)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte local_60 [8];
  longlong local_58;
  
  if (*(int *)(param_1[0x638] + 0x14c0) == 0) {
    uVar1 = FUN_180023c70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  lVar4 = param_1[0x638];
  local_60[0] = 0;
  local_58 = lVar4 + 0x1000;
  FUN_180042980((uint *)(lVar4 + 0x12c0));
  if (*(char *)(local_58 + 0x4c4) == '\0') {
LAB_180030c08:
    puVar2 = *(undefined8 **)(lVar4 + 0x14a0);
    *puVar2 = param_1;
    *(int *)(puVar2 + 1) = param_2;
    *(int *)((longlong)puVar2 + 0xc) = param_3;
    *(int *)(puVar2 + 2) = param_4;
    *(int *)((longlong)puVar2 + 0x14) = param_5;
    *(int *)(puVar2 + 3) = param_6;
    *(uint *)((longlong)puVar2 + 0x1c) = param_7;
    puVar2[4] = param_8;
    puVar2[5] = local_60;
    FUN_180030c60(puVar2);
  }
  else {
    puVar2 = (undefined8 *)FUN_180042850(lVar4 + 0x12c0,0x30);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      Sleep(100);
      FUN_180042980((uint *)(lVar4 + 0x12c0));
      goto LAB_180030c08;
    }
    FUN_1800608b0((uint *)(lVar4 + 0x14c0));
    puVar2[1] = 0x30;
    puVar2[2] = param_1;
    *(int *)(puVar2 + 3) = param_2;
    *(int *)((longlong)puVar2 + 0x1c) = param_3;
    *(int *)(puVar2 + 4) = param_4;
    *(int *)((longlong)puVar2 + 0x24) = param_5;
    *(int *)(puVar2 + 5) = param_6;
    *(uint *)((longlong)puVar2 + 0x2c) = param_7;
    puVar2[6] = param_8;
    puVar2[7] = local_60;
    puVar3 = (undefined8 *)((longlong)puVar2 + 0x47U & 0xfffffffffffffff8);
    *puVar3 = 0;
    *puVar2 = FUN_180030c60;
    *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
    if (*(char *)(local_58 + 0x4c5) != '\0') {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar4 + 0x1340));
      goto LAB_180030c2c;
    }
  }
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
LAB_180030c2c:
  FUN_180043140(param_1[0x638] + 0x12c0);
  return (ulonglong)local_60[0];
}

