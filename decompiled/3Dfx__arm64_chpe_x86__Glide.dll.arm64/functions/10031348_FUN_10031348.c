/*
 * FUN_10031348 at 10031348
 * undefined FUN_10031348(void)
 * Address ranges: 10031348-10031407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031348(int param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_2 + 0xb0);
  piVar2 = (int *)(param_1 + 0x138);
  if ((*plVar1 == 0) ||
     (uVar3 = FUN_100600f0(*(int *)(*(int *)(*piVar2 + 0x3188) + 0x1304) + 4,0), (uVar3 & 1) == 0))
  {
    FUN_10059f58(*(undefined4 *)(*(int *)(*piVar2 + 0x3180) + 0x172c0),
                 *(undefined4 *)(param_2 + (param_3 & 0xff) * 0x20 + 0xe4));
  }
  else {
    FUN_10060840(*(undefined4 *)(*(int *)(*piVar2 + 0x3188) + 0x1304),*plVar1);
    *plVar1 = 0;
  }
  return;
}

