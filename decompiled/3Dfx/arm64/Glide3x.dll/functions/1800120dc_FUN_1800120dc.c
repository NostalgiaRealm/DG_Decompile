/*
 * FUN_1800120dc at 1800120dc
 * undefined8 * __cdecl FUN_1800120dc(longlong * param_1, undefined8 * param_2)
 * Address ranges: 1800120dc-180012193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800120dc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_180011b28((longlong)param_1);
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_180010b18((longlong)param_1,1);
  *param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  lVar3 = param_1[0x586];
  iVar1 = *(int *)((longlong)param_1 + 0x2c34);
  lVar4 = param_1[0x583];
  *(int *)(param_2 + 5) = (int)param_1[0x587] - (int)param_1[0x58d];
  lVar5 = param_1[0x585];
  *(int *)(param_2 + 1) = (int)lVar4 - (int)param_1[0x589];
  lVar4 = param_1[0x58c];
  param_2[3] = lVar5 - param_1[0x58b];
  iVar2 = *(int *)((longlong)param_1 + 0x2c64);
  *(int *)(param_2 + 4) = (int)lVar3 - (int)lVar4;
  *(int *)((longlong)param_2 + 0x24) = iVar1 - iVar2;
  FUN_1800109c0((longlong)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x666] + 0x620));
  return param_2;
}

