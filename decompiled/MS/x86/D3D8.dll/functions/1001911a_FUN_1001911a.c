/*
 * FUN_1001911a at 1001911a
 * int __stdcall FUN_1001911a(int * param_1, int param_2, undefined4 param_3, int param_4, int param_5, int param_6)
 * Address ranges: 1001911a-1001922b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001911a(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  
  iVar5 = param_1[1] * param_6 + *param_1;
  uVar1 = (uint)*(byte *)(param_2 + 1);
  if (uVar1 == 1) {
    iVar2 = 0;
    for (; param_5 != 0; param_5 = param_5 + -1) {
      puVar3 = (undefined4 *)FUN_100211d8(iVar5,(uint)*(byte *)(param_1 + 2));
      *puVar3 = in_XMM0_Da;
      iVar2 = (int)puVar3 + param_4;
      iVar5 = iVar5 + param_1[1];
    }
  }
  else if (uVar1 == 2) {
    iVar2 = 0;
    for (; param_5 != 0; param_5 = param_5 + -1) {
      puVar4 = (undefined8 *)FUN_100211d8(iVar5,(uint)*(byte *)(param_1 + 2));
      *puVar4 = CONCAT44(in_XMM0_Db,in_XMM0_Da);
      iVar2 = (int)puVar4 + param_4;
      iVar5 = iVar5 + param_1[1];
    }
  }
  else if (uVar1 == 3) {
    iVar2 = 0;
    for (; param_5 != 0; param_5 = param_5 + -1) {
      puVar4 = (undefined8 *)FUN_100211d8(iVar5,(uint)*(byte *)(param_1 + 2));
      *puVar4 = CONCAT44(in_XMM0_Db,in_XMM0_Da);
      *(undefined4 *)(puVar4 + 1) = in_XMM0_Dc;
      iVar5 = iVar5 + param_1[1];
      iVar2 = (int)puVar4 + param_4;
      in_XMM0_Db = in_XMM0_Dc;
      in_XMM0_Da = in_XMM0_Dc;
    }
  }
  else {
    iVar2 = uVar1 - 4;
    if (iVar2 == 0) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        puVar3 = (undefined4 *)FUN_100211d8(iVar5,(uint)*(byte *)(param_1 + 2));
        *puVar3 = in_XMM0_Da;
        puVar3[1] = in_XMM0_Db;
        puVar3[2] = in_XMM0_Dc;
        puVar3[3] = in_XMM0_Dd;
        iVar2 = (int)puVar3 + param_4;
        iVar5 = iVar5 + param_1[1];
      }
    }
  }
  return iVar2;
}

