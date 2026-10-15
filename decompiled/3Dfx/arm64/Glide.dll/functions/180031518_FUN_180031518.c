/*
 * FUN_180031518 at 180031518
 * ulonglong __cdecl FUN_180031518(longlong * param_1, uint param_2, int param_3, undefined4 param_4, LONG param_5, LONG param_6, LONG param_7, LONG param_8, byte param_9)
 * Address ranges: 180031518-1800316b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180031518(longlong *param_1,uint param_2,int param_3,undefined4 param_4,LONG param_5,
                       LONG param_6,LONG param_7,LONG param_8,byte param_9)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte local_60 [8];
  longlong local_58;
  
  if (*(int *)(param_1[0x638] + 0x14c0) == 0) {
    uVar1 = FUN_180024820(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return uVar1;
  }
  lVar4 = param_1[0x638];
  local_60[0] = 0;
  local_58 = lVar4 + 0x1000;
  FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  if (*(char *)(local_58 + 0x4c4) == '\0') {
LAB_180031650:
    puVar2 = *(undefined8 **)(lVar4 + 0x14a0);
    *puVar2 = param_1;
    *(uint *)(puVar2 + 1) = param_2;
    *(int *)((longlong)puVar2 + 0xc) = param_3;
    *(char *)(puVar2 + 2) = (char)param_4;
    *(LONG *)((longlong)puVar2 + 0x14) = param_5;
    *(LONG *)(puVar2 + 3) = param_6;
    *(LONG *)((longlong)puVar2 + 0x1c) = param_7;
    *(LONG *)(puVar2 + 4) = param_8;
    *(byte *)((longlong)puVar2 + 0x24) = param_9;
    puVar2[5] = local_60;
    FUN_1800316b8(puVar2);
  }
  else {
    puVar2 = (undefined8 *)FUN_1800436a0(lVar4 + 0x12c0,0x30);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      Sleep(100);
      FUN_1800437d0((uint *)(lVar4 + 0x12c0));
      goto LAB_180031650;
    }
    FUN_180061700((uint *)(lVar4 + 0x14c0));
    puVar2[1] = 0x30;
    puVar2[2] = param_1;
    *(uint *)(puVar2 + 3) = param_2;
    *(int *)((longlong)puVar2 + 0x1c) = param_3;
    *(char *)(puVar2 + 4) = (char)param_4;
    *(LONG *)((longlong)puVar2 + 0x24) = param_5;
    *(LONG *)(puVar2 + 5) = param_6;
    *(LONG *)((longlong)puVar2 + 0x2c) = param_7;
    *(LONG *)(puVar2 + 6) = param_8;
    *(byte *)((longlong)puVar2 + 0x34) = param_9;
    puVar2[7] = local_60;
    puVar3 = (undefined8 *)((longlong)puVar2 + 0x47U & 0xfffffffffffffff8);
    *puVar3 = 0;
    *puVar2 = FUN_1800316b8;
    *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
    if (*(char *)(local_58 + 0x4c5) != '\0') {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar4 + 0x1340));
      goto LAB_180031680;
    }
  }
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
LAB_180031680:
  FUN_180043f90(param_1[0x638] + 0x12c0);
  return (ulonglong)local_60[0];
}

