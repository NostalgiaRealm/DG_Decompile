/*
 * FUN_180025010 at 180025010
 * ulonglong __cdecl FUN_180025010(longlong * param_1, int param_2, int param_3, uint param_4, uint param_5, int param_6, int param_7, int param_8, undefined8 * param_9, char param_10, byte param_11)
 * Address ranges: 180025010-1800251e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180025010(longlong *param_1,int param_2,int param_3,uint param_4,uint param_5,
                       int param_6,int param_7,int param_8,undefined8 *param_9,char param_10,
                       byte param_11)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte local_60 [8];
  longlong local_58;
  
  local_60[0] = 1;
  if (*(int *)(param_1[0x668] + 0x14c0) == 0) {
    uVar1 = FUN_1800189d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11);
    return uVar1;
  }
  lVar4 = param_1[0x668];
  local_58 = lVar4 + 0x1000;
  FUN_180038440((uint *)(lVar4 + 0x12c0));
  if (*(char *)(local_58 + 0x4c4) == '\0') {
LAB_18002516c:
    puVar2 = *(undefined8 **)(lVar4 + 0x14a0);
    *puVar2 = param_1;
    *(int *)(puVar2 + 1) = param_2;
    *(int *)((longlong)puVar2 + 0xc) = param_3;
    *(uint *)(puVar2 + 2) = param_4;
    *(uint *)((longlong)puVar2 + 0x14) = param_5;
    *(int *)(puVar2 + 3) = param_6;
    *(int *)((longlong)puVar2 + 0x1c) = param_7;
    *(int *)(puVar2 + 4) = param_8;
    *(undefined8 **)((longlong)puVar2 + 0x24) = param_9;
    *(char *)((longlong)puVar2 + 0x2c) = param_10;
    *(byte *)(puVar2 + 6) = param_11;
    *(byte **)((longlong)puVar2 + 0x34) = local_60;
    FUN_1800251e8(puVar2);
  }
  else {
    puVar2 = (undefined8 *)FUN_180038310(lVar4 + 0x12c0,0x40);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar4 + 0x12c0));
      goto LAB_18002516c;
    }
    FUN_1800643e0((uint *)(lVar4 + 0x14c0));
    puVar2[1] = 0x40;
    puVar2[2] = param_1;
    *(int *)(puVar2 + 3) = param_2;
    *(int *)((longlong)puVar2 + 0x1c) = param_3;
    *(uint *)(puVar2 + 4) = param_4;
    *(uint *)((longlong)puVar2 + 0x24) = param_5;
    *(int *)(puVar2 + 5) = param_6;
    *(int *)((longlong)puVar2 + 0x2c) = param_7;
    *(int *)(puVar2 + 6) = param_8;
    *(undefined8 **)((longlong)puVar2 + 0x34) = param_9;
    *(char *)((longlong)puVar2 + 0x3c) = param_10;
    *(byte *)(puVar2 + 8) = param_11;
    *(byte **)((longlong)puVar2 + 0x44) = local_60;
    puVar3 = (undefined8 *)((longlong)puVar2 + 0x53U & 0xfffffffffffffff8);
    *puVar3 = 0;
    *puVar2 = FUN_1800251e8;
    *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
    if (*(char *)(local_58 + 0x4c5) != '\0') {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar4 + 0x1340));
      goto LAB_1800251ac;
    }
  }
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
LAB_1800251ac:
  if (param_11 == 0) {
    FUN_180038c00(param_1[0x668] + 0x12c0);
  }
  return (ulonglong)local_60[0];
}

