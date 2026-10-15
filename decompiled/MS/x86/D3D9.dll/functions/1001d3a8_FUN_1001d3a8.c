/*
 * FUN_1001d3a8 at 1001d3a8
 * undefined __stdcall FUN_1001d3a8(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 1001d3a8-1001d4c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d3a8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  
  puVar3 = (uint *)(param_1[1] * param_6 + *param_1);
  puVar2 = (undefined8 *)(param_3 + (uint)*(byte *)(param_2 + 3) * 4);
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '\x01') {
    for (; param_5 != 0; param_5 = param_5 + -1) {
      FUN_100281fd(puVar3,(uint)*(byte *)(param_1 + 2));
      *(undefined4 *)puVar2 = in_XMM0_Da;
      puVar2 = (undefined8 *)((int)puVar2 + param_4);
      puVar3 = (uint *)((int)puVar3 + param_1[1]);
    }
  }
  else if (cVar1 == '\x02') {
    for (; param_5 != 0; param_5 = param_5 + -1) {
      FUN_100281fd(puVar3,(uint)*(byte *)(param_1 + 2));
      *puVar2 = CONCAT44(in_XMM0_Db,in_XMM0_Da);
      puVar2 = (undefined8 *)((int)puVar2 + param_4);
      puVar3 = (uint *)((int)puVar3 + param_1[1]);
    }
  }
  else if (cVar1 == '\x03') {
    for (; param_5 != 0; param_5 = param_5 + -1) {
      FUN_100281fd(puVar3,(uint)*(byte *)(param_1 + 2));
      *puVar2 = CONCAT44(in_XMM0_Db,in_XMM0_Da);
      *(undefined4 *)(puVar2 + 1) = in_XMM0_Dc;
      puVar2 = (undefined8 *)((int)puVar2 + param_4);
      puVar3 = (uint *)((int)puVar3 + param_1[1]);
      in_XMM0_Db = in_XMM0_Dc;
      in_XMM0_Da = in_XMM0_Dc;
    }
  }
  else if (cVar1 == '\x04') {
    for (; param_5 != 0; param_5 = param_5 + -1) {
      FUN_100281fd(puVar3,(uint)*(byte *)(param_1 + 2));
      *(undefined4 *)puVar2 = in_XMM0_Da;
      *(undefined4 *)((int)puVar2 + 4) = in_XMM0_Db;
      *(undefined4 *)(puVar2 + 1) = in_XMM0_Dc;
      *(undefined4 *)((int)puVar2 + 0xc) = in_XMM0_Dd;
      puVar2 = (undefined8 *)((int)puVar2 + param_4);
      puVar3 = (uint *)((int)puVar3 + param_1[1]);
    }
  }
  return;
}

