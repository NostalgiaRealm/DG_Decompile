/*
 * FUN_18001ec4c at 18001ec4c
 * undefined8 * __cdecl FUN_18001ec4c(longlong * param_1, undefined8 * param_2)
 * Address ranges: 18001ec4c-18001ed03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18001ec4c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_18001e6a0((longlong)param_1);
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_18001d3c8((longlong)param_1,1);
  *param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  lVar3 = param_1[0x573];
  iVar1 = *(int *)((longlong)param_1 + 0x2b9c);
  lVar4 = param_1[0x570];
  *(int *)(param_2 + 5) = (int)param_1[0x574] - (int)param_1[0x57a];
  lVar5 = param_1[0x572];
  *(int *)(param_2 + 1) = (int)lVar4 - (int)param_1[0x576];
  lVar4 = param_1[0x579];
  param_2[3] = lVar5 - param_1[0x578];
  iVar2 = *(int *)((longlong)param_1 + 0x2bcc);
  *(int *)(param_2 + 4) = (int)lVar3 - (int)lVar4;
  *(int *)((longlong)param_2 + 0x24) = iVar1 - iVar2;
  FUN_18001d270((longlong)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x636] + 0x620));
  return param_2;
}

