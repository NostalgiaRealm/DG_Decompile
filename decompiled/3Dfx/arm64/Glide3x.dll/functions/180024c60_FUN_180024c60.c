/*
 * FUN_180024c60 at 180024c60
 * undefined1 __cdecl FUN_180024c60(longlong * param_1, uint param_2, int param_3, uint param_4, int param_5, char param_6, longlong param_7, byte param_8)
 * Address ranges: 180024c60-180024de3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_180024c60(longlong *param_1,uint param_2,int param_3,uint param_4,int param_5,char param_6,
             longlong param_7,byte param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_60 [8];
  longlong local_58;
  
  if (*(int *)(param_1[0x668] + 0x14c0) == 0) {
    uVar1 = FUN_1800184b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  lVar4 = param_1[0x668];
  local_60[0] = 0;
  local_58 = lVar4 + 0x1000;
  FUN_180038440((uint *)(lVar4 + 0x12c0));
  if (*(char *)(local_58 + 0x4c4) == '\0') {
LAB_180024d88:
    puVar2 = *(undefined8 **)(lVar4 + 0x14a0);
    *puVar2 = param_1;
    *(uint *)(puVar2 + 1) = param_2;
    *(int *)((longlong)puVar2 + 0xc) = param_3;
    *(uint *)(puVar2 + 2) = param_4;
    *(int *)((longlong)puVar2 + 0x14) = param_5;
    *(char *)(puVar2 + 3) = param_6;
    *(longlong *)((longlong)puVar2 + 0x1c) = param_7;
    *(byte *)((longlong)puVar2 + 0x24) = param_8;
    puVar2[5] = local_60;
    FUN_180024de8(puVar2);
  }
  else {
    puVar2 = (undefined8 *)FUN_180038310(lVar4 + 0x12c0,0x30);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar4 + 0x12c0));
      goto LAB_180024d88;
    }
    FUN_1800643e0((uint *)(lVar4 + 0x14c0));
    puVar2[1] = 0x30;
    puVar2[2] = param_1;
    *(uint *)(puVar2 + 3) = param_2;
    *(int *)((longlong)puVar2 + 0x1c) = param_3;
    *(uint *)(puVar2 + 4) = param_4;
    *(int *)((longlong)puVar2 + 0x24) = param_5;
    *(char *)(puVar2 + 5) = param_6;
    *(longlong *)((longlong)puVar2 + 0x2c) = param_7;
    *(byte *)((longlong)puVar2 + 0x34) = param_8;
    puVar2[7] = local_60;
    puVar3 = (undefined8 *)((longlong)puVar2 + 0x47U & 0xfffffffffffffff8);
    *puVar3 = 0;
    *puVar2 = FUN_180024de8;
    *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3;
    if (*(char *)(local_58 + 0x4c5) != '\0') {
      *(undefined4 *)(lVar4 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar4 + 0x1340));
      goto LAB_180024db4;
    }
  }
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
LAB_180024db4:
  FUN_180038c00(param_1[0x668] + 0x12c0);
  return local_60[0];
}

